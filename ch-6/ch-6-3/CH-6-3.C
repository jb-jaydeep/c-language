#include<stdio.h>
#include<conio.h>
main()
{
	int a,bill=0;
	clrscr();
	tmp:
	 printf("\nMENU CARD \n");
	 printf("Select your food... \n");
	 printf("PRESS 1 FOR COFFEE \n");
	 printf("PRESS 2 FOR TEA \n");
	 printf("PRESS 3 FOR COLD COFFEE \n");
	 printf("PRESS 4 FOR MAGGI\n");
	 printf("PRESS 5 FOR SAMOSA\n");
	 printf("ENTER YOUR CHOICE :");
	 scanf("%d",&a);
	 switch(a)
	       {
		 case 1:
			  printf("\nFOR SPECIAL COFFEE PRESS 1\t\t:30\n");
			  printf("FOR REGULAR COFFEE PRESS 2\t\t:25\n");
			  printf("FOR HALF REGULAR COFFEE PRESS 3\t\t:15\n");
			  printf("FOR HALF SPECIAL COFFEE PRESS 4\t\t:20\n");
			  printf("ENTER YOUR CHOICE :");
			  scanf("%d",&a);
			  clrscr();
			  switch(a)
			  {
			   case 1:
				printf("\nYOU HAVE ORDERED SPECIAL COFFEE\n");
				bill +=30;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

			   case 2 :
				printf("YOU HAVE ORDERED REGULAR COFFEE\n");
				bill +=25;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

			   case 3:
				printf("YOU HAVE ORDERED HALF REGULAR COFFEE\n");
				bill +=15;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

			    case 4:
				printf("YOU HAVE ORDERED SPECIAL COFFEE\n");
				 bill +=20;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;
				default:
				   printf("\invalid choice...%d",a);
		     }
		    break;

		 case 2:
			 printf("\nFOR SPECIAL TEA PRESS 1\t\t25\n");
			 printf("FOR REGULAR TEA PRESS 2\t\t20\n");
			 printf("FOR HALF REGULAR TEA PRESS 3\t10\n");
			 printf("FOR HALF SPECIAL TEA PRESS 4\t15\n");
			 printf("ENTER YOUR CHOICE :");
			 scanf("%d",&a);
			 clrscr();
			 switch(a)

			 {
				case 1:
				printf("\nYOU HAVE ORDERED SPECIAL TEA \n");
				bill += 25;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

			      case 2:

				printf("YOU HAVE ORDERED REGULAR TEA \n");
				bill +=20;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				case 3:
				printf("YOU HAVE ORDERED HALF REGULAR TEA \n");
				bill +=10;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				 case 4:
				printf("YOU HAVE ORDERED SPECIAL TEA \n");
				bill +=15;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;
				default:
				   printf("\invalid choice...%d",a);
		     }
		    break;


		case 3 :
			  printf("\nFOR SPECIAL COLD COFFEE PRESS 1\t\t30\n");
			  printf("FOR REGULAR COLD COFFEE PRESS 2\t\t25\n");
			  printf("FOR HALF REGULAR COLD COFFEE PRESS 3\t15\n");
			  printf("FOR HALF SPECIAL COLD COFFEE PRESS 4\t20\n");
			  printf("ENTER YOUR CHOICE :");
			  scanf("%d",&a);
				 clrscr();
			 switch(a)
			 {
				case 1:
				printf("\nYOU HAVE ORDERED SPECIAL COLD COFFEE\n");
				bill += 30;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				 case 2:

				printf("YOU HAVE ORDERED REGULAR COLD COFFEE\n");
				bill +=25;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				case 3:
				printf("YOU HAVE ORDERED HALF REGULAR COLD COFFEE\n");
				bill +=15;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				 case 4:
				printf("YOU HAVE ORDERED SPECIAL COLE=D COFFEE\n");
				bill +=20;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;
				default:
				   printf("\invalid choice...%d",a);
		     }
		    break;



		case 4:

			 printf("\nFOR REGULAR MAGGI PRESS 1\t:40\n");
			 printf("FOR VEG. MAGGI  PRESS 2\t\t:60\n");
			 printf("FORCHEESE REGULAR MAGGI PRESS 3\t:70\n");
			 printf("FOR VEG, CHEESE MAGGI PRESS 4\t:100\n");
			 printf("ENTER YOUR CHOICE :");
			 scanf("%d",&a);
			 clrscr();
			 switch(a)
			 {
				case 1:
				printf("\nYOU HAVE ORDERED REGULAR MAGGI\n");
				bill += 40;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				 case 2:

				printf("YOU HAVE ORDERED VEG. MAGGI\n");
				bill +=60;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;
				case 3:
				printf("YOU HAVE ORDERED CHEESE REGULAR MAGGI \n");
				bill +=70;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}

				break;


				case 4:

				printf("YOU HAVE ORDERED VEG. CHEESE MAGGI\n");
				bill +=100;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;
				default:
				   printf("\invalid choice...%d",a);
		     }
		    break;

		case 5 :
			  printf("\nFOR REGULAR SAMOSA PRESS 1\t:30\n");
			  printf("FOR CHINESE SAMOSA PRESS 2\t:40\n");
			  printf("ENTER YOUR CHOICE :");
			  scanf("%d",&a);
			  clrscr();
			  switch(a)
			      {
				case 1:
				printf("\nYOU HAVE ORDERED REGULAR SAMOSA\n");
				bill += 30;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				 case 2:

				printf("YOU HAVE ORDERED CHINESE SAMOSA\n");
				bill +=40;
				printf("\n\n press 1 for order more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;
			       }

		default:
			  printf("\invalid choice...%d",a);
			  break;
	       }



			printf("\n\n your bill : %d",bill);

	getch();
}

