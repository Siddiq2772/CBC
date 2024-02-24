/*Calculator: Allows you to perform basic arithmetic operations and some scientific calculations. It takes user inputs in the form of expressions and provides results.

BMI Calculator: Helps calculate Body Mass Index (BMI) based on user input of age, weight, and height. It also provides additional information on weight categories.

Pythagoras Theorem Calculator: Allows you to calculate the hypotenuse of a right-angled triangle or one of its sides based on user input.

Angstrom Number Checker: Checks if a three-digit integer is an Angstrom number. An Angstrom number is a special number where the sum of the cubes of its digits equals the original number.

Factorial Calculator: Computes the factorial of a user-specified number.

Temperature Converter: Converts temperature values between Celsius, Fahrenheit, and Kelvin scales. The user can select the desired conversion.

Number Converter: This section offers options to convert numbers between different bases (decimal, binary, octal, and hexadecimal).
*/
// This C++ program includes multiple functions for different calculations and conversions.
// It provides a calculator, a BMI calculator, a Pythagoras theorem calculator, checks for Angstrom numbers, and calculates factorials.

#include<iostream>
#include<conio.h>  // Including non-standard 'conio.h' library, which is not recommended in modern C++.
#include<cmath>
#include<stdio.h>
using namespace std;

int c1;  // A global variable used to determine the base in number conversions.

// Declaration of various functions used in the program.
void calci ();  // Calculator function
void bmi ();    // BMI calculator function
void hypo ();   // Pythagoras theorem calculator function
void ang ();    // Angstrom number check function
void fact ();   // Factorial calculation function
void temp(); //temperature convertor function

class formule
{
public:
  int q[50], temp, rev, rem, i, j;
  
  // Convert a decimal number to a given base (binary, octal, or hexadecimal).
  void dectoall (int b, int num)
  {
    i = 0;
    while (num != 0)
    {
      q[i] = num % b;
      num = num / b;
      i = i + 1;
    }
    
    // Display the converted number in the chosen base.
    for (int j = i - 1; j >= 0; j--)
    {
      if (q[j] >= 10 && c1 == 4)
      {
        cout << (char) ('A' + q[j] - 10);
      }
      else
      {
        cout << q[j];
      }
    }
    cout << endl;
  }

  // Convert a number in a given base to a decimal number.
  void alltodec (int dec, int base)
  {
    rev = 0;
    rem = 0;
    temp = 0;
    while (dec != 0)
    {
      for (i = 0; dec > 0; i++)
      {
        temp = temp + pow (base, i) * (dec % 10);
        dec = dec / 10;
      }
    }
  }

  // Convert a decimal number to binary, octal, and hexadecimal.
  void dec ()
  {
    int num;
    cout << "enter number" << endl;
    cin >> num;
    cout << "binary= ";
    dectoall (2, num);
    cout << "octal= ";
    dectoall (8, num);
    cout << "hexadecimal= ";
    c1 = 4;
    dectoall (16, num);
  }

  // Convert a binary number to decimal and display in binary, octal, and hexadecimal.
  void bin ()
  {
    int num;
    cout << "enter number" << endl;
    cin >> num;
    alltodec (num, 2);
    cout << "decimal= " << temp << endl;
    cout << "octal= ";
    dectoall (8, temp);
    cout << "hexadecimal= ";
    c1 = 4;
    dectoall (16, temp);
  }

  // Convert an octal number to decimal and display in decimal, binary, and hexadecimal.
  void octal ()
  {
    int num;
    cout << "enter number" << endl;
    cin >> num;
    alltodec (num, 8);
    cout << "decimal= " << temp << endl;
    cout << "binary= ";
    dectoall (2, temp);
    cout << "hexadecimal= ";
    c1 = 4;
    dectoall (16, temp);
  }

  // Convert a hexadecimal number to decimal and display in decimal, binary, and octal.
  void hexa ()
  {
    int num;
    cout << "enter number" << endl;
    scanf ("%x", &temp);
    cout << "decimal=" << temp << endl;
    cout << "binary= ";
    dectoall (2, temp);
    cout << "octal= ";
    dectoall (8, temp);
  }
};

int main ()
{
  formule a;
  int num = 0, m;
  
    cout<<"\n\n\t\t**\n";
    cout<<"\t\t*\t                      \t\t*\n";
    cout<<"\t\t*\t                      \t\t*\n";
    cout<<"\t\t*\tWelcome to CBC(v:1.8)\t\t*\n";
     cout<<"\t\t*\t                      \t\t*\n";
    cout<<"\t\t*\t                      \t\t*\n";
     cout<<"\t\t**\n";
     do
  {
     cout <<"\nmodes\n\t|1. CALCULATOR\t\t|2. NUMBER CONVERTOR\n\t|3. BMI CALCULATOR\t|4. TEMPERATURE CONVERTER \n\t|5. ANGSTROM NUMBER\t|6. FACTORIAL OF A NUMBER\n\t|7. PHYTHAGORAS THEOREM\t|0. close application\n\nEnter your choice: ";
  
    cin >> m;
    
    if (m == 2)
    {
      char h;
      do
      {
        cout<<"\n----------------------------------------------------------------------------------------------------------\n";
      cout<<"NUMBER CONVERTOR\n";
        cout <<
        "1.Decimal to all conversion\n2.Binary to all conversion\n3.Octal to all conversion\n4.Hexadecimal to all\n5.Exit"
        << endl;
        cout << "Enter your choice: ";
        cin >> c1;
        
        // Execute different number conversion functions based on the choice.
        switch (c1)
        {
          case 1:
            a.dec ();
            break;
          case 2:
            a.bin ();
            break;
          case 3:
            a.octal ();
            break;
          case 4:
            a.hexa ();
            break;
          case 5:
            cout << "Program Terminated" << endl;
            break;
          default:
            cout << "Invalid Choice!" << endl;
        }
      }
      while (c1 != 5);
    }
    else if (m == 1)
    {
       cout<<"\n----------------------------------------------------------------------------------------------------------\n";
      cout<<"CALCULATOR\n";
      calci ();
       cout<<"\n----------------------------------------------------------------------------------------------------------\n";
    }
    else if (m == 3)
    {
     cout<<"\n----------------------------------------------------------------------------------------------------------\n";
      cout<<"BMI CALCULATOR\n";
      bmi ();
       cout<<"\n----------------------------------------------------------------------------------------------------------\n";
    }
    else if (m == 0)
    {
    cout<<"\n\n\t\t**\n";
    cout<<"\t\t*\t                      \t\t*\n";
    cout<<"\t\t*\t                      \t\t*\n";
    cout<<"\t\t*\t !!PROGRAM TERMINATED!!\t\t*\n";
     cout<<"\t\t*\t                      \t\t*\n";
    cout<<"\t\t*\t                      \t\t*\n";
     cout<<"\t\t**\n";
    }
     else if (m == 4)
    {
     cout<<"\n----------------------------------------------------------------------------------------------------------\n";
  
    temp ();
     cout<<"\n----------------------------------------------------------------------------------------------------------\n";
     }
    else if (m == 5)
    {
     cout<<"\n----------------------------------------------------------------------------------------------------------\n";
      
      ang ();
       cout<<"\n----------------------------------------------------------------------------------------------------------\n";
    }
    else if (m == 6)
    {
     cout<<"\n----------------------------------------------------------------------------------------------------------\n";
      fact ();
       cout<<"\n----------------------------------------------------------------------------------------------------------\n";
    }
    else if (m == 7)
    {
     cout<<"\n----------------------------------------------------------------------------------------------------------\n";  
       hypo ();
        cout<<"\n----------------------------------------------------------------------------------------------------------\n";
    }
    else
    {
    cout<<"\n----------------------------------------------------------------------------------------------------------\n";
      cout << "invalid choice!!";
       cout<<"\n----------------------------------------------------------------------------------------------------------\n";
  }
  }
  while (m != 0);
  return 0;
}

// The following functions provide the implementation for various operations.

// Advanced calculator function
void calci ()
{
  int a, b, ans=0;
  char c;
  printf ("e.g. input \t3+4\n(for more GUIDELINES input g0)\n");

  do
  {
    scanf ("%d", &a);
    if (a == 0)
    {
      a = ans;
    }

    scanf ("%c", &c);
    if (c == 'e')
    {
      break;
    }
    scanf ("%d", &b);
    if (b == 0)
    {
      b = ans;
    }

    // Perform various calculations based on the operator.
    switch (c)
    {
      case '+':
        printf ("Answer = %d  (e for exit)(0 for previous ans value)\n", a + b);
        ans = a + b;
        break;
      case '-':
        printf ("Answer = %d  (e for exit)(0 for previous ans value)\n", a - b);
        ans = a - b;
        break;
      case '*':
        printf ("Answer = %d  (e for exit)(0 for previous ans value)\n", a * b);
        ans = a * b;
        break;
      case '/':
        printf ("Answer = %d  (e for exit)(0 for previous ans value)\n", a / b);
        ans = a / b;
        break;
      case '%':
        printf ("Answer = %d  (e for exit)(0 for previous ans value)\n", a % b);
        ans = a % b;
        break;
      case '^':
        printf ("Answer = %f  (e for exit)(0 for previous ans value)\n", (float) pow (a, b));
        ans = (float) pow (a, b);
        break;
      case 's':
        printf ("Answer = %f  (e for exit)(0 for previous ans value)\n", sqrt (b));
        ans = sqrt (b);
        break;
        case 'i':
        printf ("Answer = %f  (e for exit)(0 for previous ans value)\n", sin(b));
        ans = sin (b);
        break;
        case 'o':
        printf ("Answer = %f  (e for exit)(0 for previous ans value)\n", cos (b));
        ans = cos (b);
        break;
        case 'a':
        printf ("Answer = %f  (e for exit)(0 for previous ans value)\n", tan (b));
        ans = tan (b);
        break;
      case 'c':
        printf ("Answer = %f  (e for exit)(0 for previous ans value)\n", cbrt (b));
        ans = cbrt (b);
        break;
      case 'g':
        printf
          ("1.e.g. INPUT (a+b)\n\n\n2.supports\n\t+\t-\t*\t/\t^\ts (for square root)\tc (for cube root)\n\n\ti(for sin)\to(for cos)\ta(for tan)\n\n\n3.e for exit\t\t 0 for previous ans. value \n");
        break;
      default:
        printf ("You entered the wrong operator (e for exit)\n");
    }
  }
  while (c != 'e');
  printf ("\nThanks for using my calculator\n");
  printf ("\n\t\t\t(made by siddique)");
}

// BMI Calculator function
void bmi ()
{
  int age, weight;
  double height, bmi;

  cout << "Enter your age (in years): ";
  cin >> age;
  if (age < 0)
  {
    cout << "Invalid age. Please enter a valid age." << endl;
    return;
  }

  cout << "Enter your weight (in kilograms): ";
  cin >> weight;
  if (weight < 0)
  {
    cout << "Invalid weight. Please enter a valid weight." << endl;
    return;
  }

  cout << "Enter your height (in meters): ";
  cin >> height;
  if (height < 0)
  {
    cout << "Invalid height. Please enter a valid height." << endl;
    return;
  }

  bmi = weight / (height * height);

  cout << "\nYour BMI is: " << bmi << endl;

  if (bmi < 18.5)
  {
    cout << "You are underweight." << endl;
  }
  else if (bmi < 24.9)
  {
    cout << "You have a normal weight." << endl;
  }
  else if (bmi < 29.9)
  {
    cout << "You are overweight." << endl;
  }
  else
  {
    cout << "You are obese." << endl;
  }

  // Age in different units
  int days = age * 365;
  int weeks = age * 52;
  int months = age * 12;

  cout << "\nYour age in different units:" << endl;
  cout << "Age in days: " << days << " days" << endl;
  cout << "Age in weeks: " << weeks << " weeks" << endl;
  cout << "Age in months: " << months << " months" << endl;
}

// Pythagoras theorem calculator function
void hypo ()
{
  float a, b, c;
  int d;
  printf
    ("Menu\n 1. Calculate hypotenuse \n 2. Calculate Side \n Enter your Choice (in num):");
  scanf ("%d", &d);
  switch (d)
  {
    case 1:
      {
        printf ("enter the value of side one\n");
        scanf ("%f", &a);
        printf ("enter the value of side two\n");
        scanf ("%f", &b);
        c = sqrt (a * a + b * b);

        printf ("%f is the hypotenuse of the triangle\n", c);
        break;
      }
    case 2:
      {
        printf ("enter the value of the hypotenuse\n");
        scanf ("%f", &a);
        printf ("enter the value of a side\n");
        scanf ("%f", &b);
        c = sqrt (a * a - b * b);

        printf ("%f is the other side of the triangle\n", c);
        break;
      }
  }
}

// Angstrom number check function
void ang ()
{
  int x, i, temp, rem, ang = 0;
  printf
    ("What is an Angstrom of a number?\n\tAngstrom (Å), a unit of length, equal to 10^-10 metre, or 0.1 nanometre.\n It is used chiefly in measuring wavelengths of light.");
  printf ("\n\nenter a three-digit integer:\t");
  scanf ("%d", &x);
  temp = x;
  for (i = 0; i <= 2; i++)
  {
    rem = x % 10;
    ang = ang + (rem * rem * rem);
    x = x / 10;
  }
  if (ang == temp) 
    printf ("it is an Angstrom number\n");
  else
    printf ("it is not an Angstrom number\n");
}

// Factorial calculation function
void fact ()
{
  int fact = 1, i, num;
  cout << "\nenter a number:\t";
  cin >> num;
  for (i = num; i > 0; i--)
    fact = fact * i;
  cout << "\nfactorial of " << num << " is " << fact << endl;
}

// temperature calculator function
void temp()
{
    int c;
    float a;
    printf("TEMPERATURE CONVERTER");
 do
{ 
printf("\n\n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n3.Kelvin to Celsius\n4.Celsius to kelvin\n5.Fahrenheit to kelvin\n6.kelvin to Fahrenheit\n7.Exit");

printf("\n\nEnter your Choice:");

scanf("%d",&c);

switch (c)
{
    case 1:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Fahrenheit=%f",((a*9/5)+32));
        break;
    
    case 2:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Celsius=%f",((a-32)*5/9));
        break;
    
    case 3:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Celsius=%f",(a-273.15));
        break;
    
    case 4:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Kelvin=%f",(a+273.15));
        break;
    
    case 5:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Kelvin=%f",((a+459.67)*5/9));
        break;
    
    case 6:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Fahrenheit=%f",((a*1.8)-459.67));
        break;
        case 7:
        printf("Exit");
        break;
    
    default:
    
       printf("Wrong Choice");
        break;
    
}
}
while(c!=7);   
}