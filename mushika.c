#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
  char name[50];
  int auto_num;
  int num_of_seats;

} pd;


void booking (void);
void viewdetails (void);
void printticket (char name[], int, int, float);
void specificauto (int);
float charge (int, int);


int
main ()
{

  printf ("\t\t|              PROJECT MUSHIKA      |\n");
  printf ("\t\t|              BY B.SAI CHETAN      |\n");
  printf ("\t\t|              22261A0410 MGIT      |\n");
  printf ("\t\t|-----------------------------------|\n");
  printf ("\t\t|-----PRESS ANY KEY TO CONTINUE-----|\n");
  printf ("\t\t|-----------------------------------|\n");

  int menu_choice, choice_return;
start:
  printf("\n");
  printf ("\t\t|===================================|\n");
  printf ("\t\t|    SHARE AUTO BOOKING SYSTEM      |\n");
  printf ("\t\t|===================================|\n");
  printf ("\n1>> Book  An Auto");
  printf ("\n-------------------");
  printf ("\n2>> View All available Autos");
  printf ("\n-------------------");
  printf ("\n3>> Exit");
  printf ("\n-------------------");
  printf ("\n\n-->");
  scanf ("%d", &menu_choice);
  switch (menu_choice)
    {
    case 1:
      booking ();
      break;
    case 2:
      viewdetails ();
      printf ("\nPress any key to go to Main Menu..");
      break;
    case 3:
      return (0);
    default:
      printf ("\nInvalid choice");
    }
  goto start;
  //return (0);
}

void
viewdetails (void)
{

  printf ("\nAuto.No\tAuto Name\t\tDestination\t\tfare\n");
  printf ("\n12341\tAuto A\tNarsingi to  MGIT\t\t     Rs.20");
  printf ("\n12342\tAuto A\tMehdipatnam to  MGIT\t\t     Rs.50");
  printf ("\n12343\tAuto A\tkokapet to  MGIT\t\t     Rs.10");
  printf ("\n12344\tAuto A\tGachibowli to  MGIT\t\t     Rs.30");
  printf ("\n12345\tAuto A\tMGIT to  Narsingi\t\t     Rs.20");
  printf ("\n12346\tAuto A\tMGIT to  Mehdipatnam\t\t     Rs.50");
  printf ("\n12347\tAuto A\tMGIT to  Kokapet\t\t     Rs.10");
  printf ("\n12348\tAuto A\tMGIT to  Gachibowli\t\t     Rs.30");
}

void
booking (void)
{
  char confirm;
  int i = 0;
  float charges;
  pd passdetails;
  char str[100];
  FILE *fp;
  fp = fopen ("seats_reserved.txt", "a");

  printf ("\nEnter Your Name:> ");
  scanf ("%49s", str);
  strcpy (passdetails.name, str);

  fflush (stdin);

  printf ("\nEnter Number of seats:> ");
  scanf ("%d", &passdetails.num_of_seats);
  printf ("\n\n>>Press Enter to view Available Auto<<  ");

  viewdetails ();
  printf ("\n\nEnter auto number:> ");
  int auto_num_valid = 0;
  while (1) {
    scanf("%d", &passdetails.auto_num);
    if (passdetails.auto_num >= 12341 && passdetails.auto_num <= 12348) {
      auto_num_valid = 1;
      break;
    } else {
      printf("\nInvalid auto Number! Enter again--> ");
    }
  }

  if (!auto_num_valid) {
    printf("\nBooking Not Done!\nPress any key to go back to  Main menu!");
    fclose(fp);
    return;
  }

      charges = charge (passdetails.auto_num, passdetails.num_of_seats);
      printticket (passdetails.name, passdetails.num_of_seats,
		   passdetails.auto_num, charges);
  

  printf ("\n\nConfirm Ticket (y/n):>");
start:
  scanf (" %c", &confirm);
  if (confirm == 'y')
    {
      fprintf (fp, "%s\t\t%d\t\t%d\t\t%.2f\n", passdetails.name,
	       passdetails.num_of_seats, passdetails.auto_num, charges);
      printf ("==================");
      printf ("\n booking successful\n");
      printf ("==================");
      printf ("\nPress any key to go back to Main menu");
    }
  else
    {
      if (confirm == 'n')
	{
	  printf
	    ("\nBooking Not Done!\nPress any key to go back to  Main menu!");
	}
      else
	{
	  printf ("\nInvalid choice entered! Enter again-----> ");
	  goto start;
	}
    }
  fclose (fp);
}

float
charge (int auto_num, int num_of_seats)
{
  if (auto_num == 12341)
    {
      return (20.0 * num_of_seats);
    }
  if (auto_num == 12342)
    {
      return (50.0 * num_of_seats);
    }
  if (auto_num == 12343)
    {
      return (10.0 * num_of_seats);
    }
  if (auto_num == 12344)
    {
      return (30.0 * num_of_seats);
    }
  if (auto_num == 12345)
    {
      return (20.0 * num_of_seats);
    }
  if (auto_num == 12346)
    {
      return (50.0 * num_of_seats);
    }
  if (auto_num == 12347)
    {
      return (10.0 * num_of_seats);
    }
  if (auto_num == 12348)
    {
      return (30.0 * num_of_seats);
    }

}

void
printticket (char name[], int num_of_seats, int auto_num, float charges)
{

  printf ("-------------------\n");
  printf ("\tTICKET\n");
  printf ("-------------------\n\n");
  printf ("Name:\t\t\t%s", name);
  printf ("\nNumber Of Seats:\t%d", num_of_seats);
  printf ("\nauto Number:\t\t%d", auto_num);
  specificauto (auto_num);
  printf ("\nCharges:\t\t%.2f", charges);
}

void
specificauto (int auto_num)
{

  if (auto_num == 12341)
    {
      printf ("\nAuto:\t\t\tAUTO A");
      printf ("\nDestination:\t\tNarsingi to  MGIT");

    }
  if (auto_num == 12342)
    {
      printf ("\nAuto:\t\t\tAUTO B");
      printf ("\nDestination:\t\tMehdipatnam to  MGIT");
      //printf("\nDeparture:\t\t12pm");
    }
  if (auto_num == 12343)
    {
      printf ("\nAuto:\t\t\tAUTO C");
      printf ("\nDestination:\t\tkokapet to  MGIT");

    }
  if (auto_num == 12344)
    {
      printf ("\nAuto:\t\t\tAUTO D");
      printf ("\nDestination:\t\tGachibowli to  MGIT");

    }
  if (auto_num == 12345)
    {
      printf ("\nAuto:\t\t\tAUTO E");
      printf ("\nDestination:\t\tMGIT to  Narsingi");

    }
  if (auto_num == 12346)
    {
      printf ("\nAuto:\t\t\tAUTO F");
      printf ("\nDestination:\t\tMGIT to  Mehdipatnam");

    }
  if (auto_num == 12347)
    {
      printf ("\nAuto:\t\t\tAUTO G");
      printf ("\nDestination:\t\tMGIT to  Kokapet");

    }
  if (auto_num == 12348)
    {
      printf ("\nAuto:\t\t\tAUTO H");
      printf ("\nDestination:\t\tMGIT to  Gachibowli");

    }


}