#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void appointment();
void medical();
void about();
void home();
void user();
void login();
void signup();
void txn();      
void opt();
void thane();
void mumbai();
void navimumbai();
// c for choice
// n for user no.
//t for counter
//i for loop
//  name for user login() variable
//  pass for user login() variable
int c = 0;
int n = 0;
int t = 0;
int i = 0;
char name[25];
char pass[25];
int App=0;

// struct for saving user information
struct users
{
    char user_id[25];
    char user_pass[25];
    char user_name[25];
    char user_email[25];
    int user_phone[25];
};
struct Appointment
{
	char name_Ap[50];
	int Number;
	char email_ID[50];
	char Date;


	char Location[50];
	
};
struct users u[100];
struct Appointment Ap[100];

void main()
{

    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                      *****************************************************************************************************\n");
    printf("\n                      ********************          SINGHANIA GROUP OF HOSPITALS AND MEDICALS          ********************\n");
    printf("\n                      *****************************************************************************************************\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\nCHOOSE FROM THE FOLLOWING OPTIONS:\n 1.BOOK APPOINTMENT \n 2.MEDICAL STORES \n 3.ABOUT US AND CONTACT US \n 4.LOGIN/SIGN UP \n\n");
    scanf("%d", &c);

    switch (c)
    
    {
    case 1:
        appointment();
        break;
    case 2:
        medical();
        break;
    case 3:
        about();
        break;
    case 4:
        user();
        break;  
    default:
        home();
        break;
    }
}

void appointment()
{
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                      *****************************************************************************************************\n");
    printf("\n                      ********************          SINGHANIA GROUP OF HOSPITALS AND MEDICALS          ********************\n");
    printf("\n                      *****************************************************************************************************\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");

	printf("\nPATIENT NAME \t: ");
	scanf("%s", Ap[App].name_Ap);
	printf("\nMOBILE NO. \t: ");
	scanf("%d", Ap[App].Number);
	printf("\nEMAIL ID \t: ");
	scanf("%s", Ap[App].email_ID);
	printf("\nENTER DATE. \t: ");
	scanf("%d", Ap[App].Date);
	printf("\nCHOOSE YOUR LOCATION \t: ");
	printf("\n 1.THANE 2.MULUND 3.MUMBAI 4.AIROLI 5.VASHI 6.KOPERKHAIRNE");
	scanf("%d",&c);
	switch(c)
	{
	 case 1:
        printf("\t\t %s\n", strcpy(Ap[App].Location, "THANE"));
        break;
    case 2:
        printf("\t\t %s\n", strcpy(Ap[App].Location, "MULUND"));
        break;
    case 3:
        printf("\t\t %s\n", strcpy(Ap[App].Location, "MUMBAI"));
        break;
    case 4:
        printf("\t\t %s\n", strcpy(Ap[App].Location, "VASHI"));
        break;
    case 5:
        printf("\t\t %s\n", strcpy(Ap[App].Location, "KOPERKHAIRNE"));
        break;
    case 6:
        printf("\t\t %s\n", strcpy(Ap[App].Location, "AIROLI"));
        break;
    default:
        puts("\t\t !!! INCORRECT INPUT OR LOCATION NOT AVAILABLE !!!");
        break;
    }

}


void medical()
{
    
    printf("CHOOSE FROM BELOW DISTRICTS:\n 1.THANE \n 2.MUMBAI \n 3.NAVI-MUMBAI \n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
    thane();
    break;
    case 2:
    mumbai();
    break;
    case 3:
    navimumbai();
    break;
    default:
    main();
    break;
    }
}
void thane()
{

    printf("YOU CAN VISIT OUR BELOW OUTLETS IN THANE FOR YOUR HEALTHCARE PRODUCTS AND YOUR SANITARY ITEMS: \n");
    printf("\n\n\n1.Shop No 1 Trimurti Apartments, Dada Patil Marg, Thane West, Thane, Maharashtra 400602\n\n2.SN 1/12A, Bldg No 1, Co op Vrindavan Soc Ganga Panchvati, Majiwada, Thane, Maharashtra 400601\n\n3.Shop No. 6, Ground Floor, Elegance Tower, Lal Bahadur Shastri Rd, near Teen Hath Naka, Vishnu Nagar, Thane West, Thane, Maharashtra 400602\n\n4.Shop No 6, Shiv Tower, Plot 443, Khopat Rd, Panch Pakhdi, Thane, Maharashtra 400601\n\n5.WING-B, Shop No 24 & 25, Ground Floor, Bldg No 8 L Wing, Kasarvadavali, Thane, Maharashtra 40060\n\n6.Shop No 12, Raj Arcade Azad Nagar, Phase 5, Bramhand Off, MH SH 42, Thane, Maharashtra 400607\n\n7.SHOP NO. 4 GR FLOOR BLDG NO A THANE CHS LTD VEER SAVARKAR PATH, Ram Maruti Rd, Panch Pakhdi, Thane, Maharashtra 400602\n\n");
    opt();
}
void mumbai()
{

    printf("YOU CAN VISIT OUR BELOW OUTLETS IN MUMBAI FOR YOUR HEALTHCARE PRODUCTS AND YOUR SANITARY ITEMS: \n");
    printf("\n\n\n1.Unit LG - 33C, Lal Bahadur Shastri Rd, Patelwadi.Kurla, Kamani, Kurla West, Kurla, Mumbai, Maharashtra 400070\n\n2.Shop No G 7 Market, near ONGC Colony, Gokuldham Colony, Goregaon, Mumbai, Maharashtra 400063\n\n3.VASANT SAGAR, Shop No 43, Krishna Building, Shyamnarayan Thakur Marg, Kandivali East, Mumbai, Maharashtra 400101\n\n4.Saroj Apartment, Mahakali Caves Rd, Sunder Nagar, Jogeshwari East, Mumbai, Maharashtra 400093\n\n5.Godrej One, Shop Ground Floor, Main Gate, Eastern Express Hwy, Pirojshanagar, Vikhroli, Mumbai, Maharashtra 400079\n\n6.Shop No 10, Hira Moti Shoping Center Shivaji Nagar Near Mulund Check Naka, Mumbai, Maharashtra 400101\n\n7.Vijay House 1, Devidhayal Compound, Lal Bahadur Shastri Rd, Bhandup West, Mumbai, Maharashtra 400078\n\n");
    opt();
}
void navimumbai()
{

    printf("YOU CAN VISIT OUR BELOW OUTLETS IN NAVI-MUMBAI FOR YOUR HEALTHCARE PRODUCTS AND YOUR SANITARY ITEMS: \n");
    printf("\n\n\n1.Shop No 1, Chandrai Arcade, Nerul East, Nerul West, Sector 20, Mumbai, Maharashtra 400706\n\n2.Shop No 2, Dafffodil CHS, Vashi Kopar Khairane Rd, Sector 14, Navi Mumbai, Maharashtra 400703\n\n3.Shop No 08, Swaraj Imperial, Sector 10, Kharghar, Navi Mumbai, Maharashtra 410210\n\n4.No 7, Ridhi Complex, Sector 13 plot no 19&20, Khanda Colony, Panvel, Navi Mumbai, Maharashtra 410206\n\n5.Plot No 12, Mahavir Shraddha, Shop No 7, Sector 14, Kopar Khairane, Maharashtra 400709\n\n6.Shop No 3, Ambica Apartments Plot No 10, Seawoods West, Sector 42A, Mumbai, Maharashtra 400706\n\n7.CAPGEMINI KNOWLADGE PARK,IT3/IT4,TTC INDUSTRIAL AREA THANE BELAPUR ROAD NAVI MUMBAI TAL, &, DIST, Airoli, Thane, Maharashtra 400708\n\n8.Heeline Height, Road Pali, Sector 20, Kalamboli, Panvel, Navi Mumbai, Maharashtra 410218\n\n");
    opt();
}
void about()
{
    printf("about the hospital snd contact details");
}

void user()
{
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                      *****************************************************************************************************\n");
    printf("\n                      ********************          SINGHANIA GROUP OF HOSPITALS AND MEDICALS          ********************\n");
    printf("\n                      *****************************************************************************************************\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");

    printf("                                                                           || LOGIN PAGE ||\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\nENTER YOUR CHOICE:\n 1.LOGIN \n 2.SIGN-UP \n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        login();
        break;
    case 2:
        signup();
        break;
    default:
        user();
        break;
    }
}

void signup()
{
    n = n + 1;

    printf("USER NO. %d", n);

    printf("\nENTER USER ID\t: ");
    scanf("%s", u[n].user_id);

    printf("ENTER USER NAME\t: ");
    scanf("%s", u[n].user_name);

    printf("ENTER USER EMAIL\t: ");
    scanf("%s", u[n].user_email);

    printf("ENTER USER PHONE NO.\t: ");
    scanf("%d", &u[n].user_phone);

    printf("ENTER PASSWORD\t: ");
    scanf("%s", u[n].user_pass);
    // we used file to store user info into file for future reference
    FILE *fp;
    if (n == 1)
    {
        fp = fopen("user.txt", "w");
    }
    else
    {
        fp = fopen("user.txt", "a");
    }
    fprintf(fp, "\n\nUser no.\t: %d \n User id\t: %s \nUser name\t: %s \nEmail\t: %s \nPhone no\t: %d  \nPassword\t: %s ", n, u[n].user_id, u[n].user_name, u[n].user_email, u[n].user_phone, u[n].user_pass);
    fclose(fp);

    // we used switch so that user can login after signup or go back and do whatever they want

    opt();
}

void login()
{

    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                      *****************************************************************************************************\n");
    printf("\n                      ********************          SINGHANIA GROUP OF HOSPITALS AND MEDICALS          ********************\n");
    printf("\n                      *****************************************************************************************************\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    printf("                                                        LOGIN PAGE\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\nENTER USER ID\t: ");
    scanf("%s", name);
    printf("\nENTER PASSWORD\t:");
    scanf("%s", pass);

    for ( i = 0; i < 100; i=i+1)
    {
        if (strcmp(u[i].user_id, name)==0 && strcmp(u[i].user_pass, pass)==0)
        {
            t=t+1;
            break;
        }
        else
        {   
            t=t;
        }
    }


    if(t==1)
    {
        printf("\nCORRECT ID AND PASSWORD\n");
        printf("USER NAME \t: %s\n", u[i].user_name);
        printf("USER EMAIL \t: %s\n", u[i].user_email);
        printf("USER PHONE \t: %d\n", u[i].user_phone);
        
        opt();
    }
    else
    {
        printf("INCORRECT USER ID AND PASSWORD\n");
        opt();
    }

}

void home()
{

    main();
}

void opt()
{
    printf("ENTER YOUR CHOICE: \n 1.BACK TO MAIN MENU \n 2.EXIT\n");
    scanf("%d", &c);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                      *****************************************************************************************************\n");
    printf("\n                      ********************          SINGHANIA GROUP OF HOSPITALS AND MEDICALS          ********************\n");
    printf("\n                      *****************************************************************************************************\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");

    switch (c)
    {
    case 1:

        main();
        break;
    case 2:
        txn();
        break;
    default:
        main();
    }
}

void txn()
{
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                      *****************************************************************************************************\n");
    printf("\n                      ********************          SINGHANIA GROUP OF HOSPITALS AND MEDICALS          ********************\n");
    printf("\n                      *****************************************************************************************************\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    printf("                                                        THANK YOU FOR VISITING US\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------");
    exit(0);
}