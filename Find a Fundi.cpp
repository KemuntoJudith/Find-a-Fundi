// Find a Fundi Home page
//Client Landing Page

#include <iostream>
#include <string> 

using namespace std; 

int main()
{
    //variable declaration and initialization
    string YourCity;
    string service;  

    //Array declaration
    const char* handyMan[5] = { "PLUMBER", "ELECTRICIAN", "PAINTER", "CARPENTER", "GARDENER" };

    cout << "Welcome to Find a Fundi.\n\n"; //Welcome message for clients
    cout << "...................................................................." << endl;
    cout << "Here, we help match you with the best handyman from your area." << endl;
    cout << "\n\n";
    cout << "The services we offer include: " << endl;
    for (char i = 0; i < 5; i++)
    {
        cout << handyMan[i] << "\n";
    }
    cout << "\n\n";
    cout << "We operate in Nairobi, Nakuru, Mombasa, Kisumu and Eldoret." << endl;
    cout << "Please enter your city." << endl;
    cin >> YourCity;
    cout << "\n\n";
    if (YourCity == "Nairobi")
    {
        cout << "Please let us know what service you need from the list above.\n";
        cout << "HINT: Type exactly as in the list above.\n";
        cin >> service;
        cout << "\n"; 

        if (service == "PLUMBER")
        {
            cout << "The following is a list of the best plumbers in your area.\n";
            cout << "Click on the link to get their contact information" << endl; 
            cout << "Nairobi Plumber 001. Rating 4.5 stars" << endl;
            cout << "Nairobi Plumber 002. Rating 4 stars" << endl;
            cout << "Nairobi Plumber 003. Rating 4 stars" << endl;
            cout << "Nairobi Plumber 004. Rating 3.5 stars" << endl;
            cout << "Nairobi Plumber 005. Rating 3.5 stars" << endl;
        }
        else if (service == "ELECTRICIAN")
        {
            cout << "The following is a list of the best electricians in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nairobi Electrician 001. Rating 4.5 stars" << endl;
            cout << "Nairobi Electrician 002. Rating 4 stars" << endl;
            cout << "Nairobi Electrician 003. Rating 4 stars" << endl;
            cout << "Nairobi Electrician 004. Rating 3.5 stars" << endl;
            cout << "Nairobi Electrician 005. Rating 3.5 stars" << endl;
        }
        else if (service == "PAINTER")
        {
            cout << "The following is a list of the best painters in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nairobi Painter 001. Rating 4.5 stars" << endl;
            cout << "Nairobi Painter 002. Rating 4 stars" << endl;
            cout << "Nairobi Painter 003. Rating 4 stars" << endl;
            cout << "Nairobi Painter 004. Rating 3.5 stars" << endl;
            cout << "Nairobi Painter 005. Rating 3.5 stars" << endl;
        }
        else if (service == "CARPENTER")
        {
            cout << "The following is a list of the best carpenters in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nairobi Carpenter 001. Rating 4.5 stars" << endl;
            cout << "Nairobi Carpenter 002. Rating 4 stars" << endl;
            cout << "Nairobi Carpenter 003. Rating 4 stars" << endl;
            cout << "Nairobi Carpenter 004. Rating 3.5 stars" << endl;
            cout << "Nairobi Carpenter 005. Rating 3.5 stars" << endl;
        }
        else if (service == "GARDENER")
        {
            cout << "The following is a list of the best gardeners in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nairobi Gardener 001. Rating 4.5 stars" << endl;
            cout << "Nairobi Gardener 002. Rating 4 stars" << endl;
            cout << "Nairobi Gardener 003. Rating 4 stars" << endl;
            cout << "Nairobi Gardener 004. Rating 3.5 stars" << endl;
            cout << "Nairobi Gardener 005. Rating 3.5 stars" << endl;
        }
        else
        {
            cout << "\n\n";
            cout << "Kindly enter a valid handyman service from the list above" << endl;
            cout << "HINT: The system is case sensitive. Type exactly as listed above.\n";
            cout << "\n\n";
        }
    }
    else if (YourCity=="Nakuru")
    {
        cout << "Please let us know what service you need from the list above.\n";
        cout << "HINT: Type exactly as in the list above.\n";
        cin >> service;
        cout << "\n";

        if (service == "PLUMBER")
        {
            cout << "The following is a list of the best plumbers in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nakuru Plumber 001. Rating 4.5 stars" << endl;
            cout << "Nakuru Plumber 002. Rating 4 stars" << endl;
            cout << "Nakuru Plumber 003. Rating 4 stars" << endl;
            cout << "Nakuru Plumber 004. Rating 3.5 stars" << endl;
            cout << "Nakuru Plumber 005. Rating 3.5 stars" << endl;
        }
        else if (service == "ELECTRICIAN")
        {
            cout << "The following is a list of the best electricians in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nakuru Electrician 001. Rating 4.5 stars" << endl;
            cout << "Nakuru Electrician 002. Rating 4 stars" << endl;
            cout << "Nakuru Electrician 003. Rating 4 stars" << endl;
            cout << "Nakuru Electrician 004. Rating 3.5 stars" << endl;
            cout << "Nakuru Electrician 005. Rating 3.5 stars" << endl;
        }
        else if (service == "PAINTER")
        {
            cout << "The following is a list of the best painters in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nakuru Painter 001. Rating 4.5 stars" << endl;
            cout << "Nakuru Painter 002. Rating 4 stars" << endl;
            cout << "Nakuru Painter 003. Rating 4 stars" << endl;
            cout << "Nakuru Painter 004. Rating 3.5 stars" << endl;
            cout << "Nakuru Painter 005. Rating 3.5 stars" << endl;
        }
        else if (service == "CARPENTER")
        {
            cout << "The following is a list of the best carpenters in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nakuru Carpenter 001. Rating 4.5 stars" << endl;
            cout << "Nakuru Carpenter 002. Rating 4 stars" << endl;
            cout << "Nakuru Carpenter 003. Rating 4 stars" << endl;
            cout << "Nakuru Carpenter 004. Rating 3.5 stars" << endl;
            cout << "Nakuru Carpenter 005. Rating 3.5 stars" << endl;
        }
        else if (service == "GARDENER")
        {
            cout << "The following is a list of the best gardeners in your area.\n";
            cout << "Click on the link to get their contact information" << endl;
            cout << "Nakuru Gardener 001. Rating 4.5 stars" << endl;
            cout << "Nakuru Gardener 002. Rating 4 stars" << endl;
            cout << "Nakuru Gardener 003. Rating 4 stars" << endl;
            cout << "Nakuru Gardener 004. Rating 3.5 stars" << endl;
            cout << "Nakuru Gardener 005. Rating 3.5 stars" << endl;
        }
        else
        {
            cout << "\n\n";
            cout << "Kindly enter a valid handyman service from the list above" << endl;
            cout << "HINT: The system is case sensitive. Type exactly as listed above.\n";
            cout << "\n\n";
        }
    }
    else if (YourCity=="Mombasa") 
    {
    cout << "Please let us know what service you need from the list above.\n";
    cout << "HINT: Type exactly as in the list above.\n";
    cin >> service;
    cout << "\n";

         if (service == "PLUMBER")
         {
        cout << "The following is a list of the best plumbers in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Mombasa Plumber 001. Rating 4.5 stars" << endl;
        cout << "Mombasa Plumber 002. Rating 4 stars" << endl;
        cout << "Mombasa Plumber 003. Rating 4 stars" << endl;
        cout << "Mombasa Plumber 004. Rating 3.5 stars" << endl;
        cout << "Mombasa Plumber 005. Rating 3.5 stars" << endl;
         }
         else if (service == "ELECTRICIAN")
         {
        cout << "The following is a list of the best electricians in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Mombasa Electrician 001. Rating 4.5 stars" << endl;
        cout << "Mombasa Electrician 002. Rating 4 stars" << endl;
        cout << "Mombasa Electrician 003. Rating 4 stars" << endl;
        cout << "Mombasa Electrician 004. Rating 3.5 stars" << endl;
        cout << "Mombasa Electrician 005. Rating 3.5 stars" << endl;
         }
         else if (service == "PAINTER")
         {
        cout << "The following is a list of the best painters in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Mombasa Painter 001. Rating 4.5 stars" << endl;
        cout << "Mombasa Painter 002. Rating 4 stars" << endl;
        cout << "Mombasa Painter 003. Rating 4 stars" << endl;
        cout << "Mombasa Painter 004. Rating 3.5 stars" << endl;
        cout << "Mombasa Painter 005. Rating 3.5 stars" << endl;
         }
         else if (service == "CARPENTER")
         {
        cout << "The following is a list of the best carpenters in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Mombasa Carpenter 001. Rating 4.5 stars" << endl;
        cout << "Mombasa Carpenter 002. Rating 4 stars" << endl;
        cout << "Mombasa Carpenter 003. Rating 4 stars" << endl;
        cout << "Mombasa Carpenter 004. Rating 3.5 stars" << endl;
        cout << "Mombasa Carpenter 005. Rating 3.5 stars" << endl;
         }
         else if (service == "GARDENER")
         {
        cout << "The following is a list of the best gardeners in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Mombasa Gardener 001. Rating 4.5 stars" << endl;
        cout << "Mombasa Gardener 002. Rating 4 stars" << endl;
        cout << "Mombasa Gardener 003. Rating 4 stars" << endl;
        cout << "Mombasa Gardener 004. Rating 3.5 stars" << endl;
        cout << "Mombasa Gardener 005. Rating 3.5 stars" << endl;
         }
         else
         {
             cout << "\n\n";
             cout << "Kindly enter a valid handyman service from the list above" << endl;
             cout << "HINT: The system is case sensitive. Type exactly as listed above.\n";
             cout << "\n\n";
         }
    }
    else if (YourCity=="Kisumu")
    {
    cout << "Please let us know what service you need from the list above.\n";
    cout << "HINT: Type exactly as in the list above.\n";
    cin >> service;
    cout << "\n";
    if (service == "PLUMBER")
    {
        cout << "The following is a list of the best plumbers in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Kisumu Plumber 001. Rating 4.5 stars" << endl;
        cout << "Kisumu Plumber 002. Rating 4 stars" << endl;
        cout << "Kisumu Plumber 003. Rating 4 stars" << endl;
        cout << "Kisumu Plumber 004. Rating 3.5 stars" << endl;
        cout << "Kisumu Plumber 005. Rating 3.5 stars" << endl;
    }
    else if (service == "ELECTRICIAN")
    {
        cout << "The following is a list of the best electricians in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Kisumu Electrician 001. Rating 4.5 stars" << endl;
        cout << "Kisumu Electrician 002. Rating 4 stars" << endl;
        cout << "Kisumu Electrician 003. Rating 4 stars" << endl;
        cout << "Kisumu Electrician 004. Rating 3.5 stars" << endl;
        cout << "Kisumu Electrician 005. Rating 3.5 stars" << endl;
    }
    else if (service == "PAINTER")
    {
        cout << "The following is a list of the best painters in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Kisumu Painter 001. Rating 4.5 stars" << endl;
        cout << "Kisumu Painter 002. Rating 4 stars" << endl;
        cout << "Kisumu Painter 003. Rating 4 stars" << endl;
        cout << "Kisumu Painter 004. Rating 3.5 stars" << endl;
        cout << "Kisumu Painter 005. Rating 3.5 stars" << endl;
    }
    else if (service == "CARPENTER")
    {
        cout << "The following is a list of the best carpenters in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Kisumu Carpenter 001. Rating 4.5 stars" << endl;
        cout << "Kisumu Carpenter 002. Rating 4 stars" << endl;
        cout << "Kisumu Carpenter 003. Rating 4 stars" << endl;
        cout << "Kisumu Carpenter 004. Rating 3.5 stars" << endl;
        cout << "Kisumu Carpenter 005. Rating 3.5 stars" << endl;
    }
    else if (service == "GARDENER")
    {
        cout << "The following is a list of the best gardeners in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Kisumu Gardener 001. Rating 4.5 stars" << endl;
        cout << "Kisumu Gardener 002. Rating 4 stars" << endl;
        cout << "Kisumu Gardener 003. Rating 4 stars" << endl;
        cout << "Kisumu Gardener 004. Rating 3.5 stars" << endl;
        cout << "Kisumu Gardener 005. Rating 3.5 stars" << endl;
    }
    else
    {
        cout << "\n\n";
        cout << "Kindly enter a valid handyman service from the list above" << endl;
        cout << "HINT: The system is case sensitive. Type exactly as listed above.\n";
        cout << "\n\n";
    }
     
    }
    else if (YourCity == "Eldoret")
    {
    cout << "Please let us know what service you need from the list above.\n";
    cout << "HINT: Type exactly as in the list above.\n";
    cin >> service;
    cout << "\n";
    if (service == "PLUMBER")
    {
        cout << "The following is a list of the best plumbers in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Eldoret Plumber 001. Rating 4.5 stars" << endl;
        cout << "Eldoret Plumber 002. Rating 4 stars" << endl;
        cout << "Eldoret Plumber 003. Rating 4 stars" << endl;
        cout << "Eldoret Plumber 004. Rating 3.5 stars" << endl;
        cout << "Eldoret Plumber 005. Rating 3.5 stars" << endl;
    }
    else if (service == "ELECTRICIAN")
    {
        cout << "The following is a list of the best electricians in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Eldoret Electrician 001. Rating 4.5 stars" << endl;
        cout << "Eldoret Electrician 002. Rating 4 stars" << endl;
        cout << "Eldoret Electrician 003. Rating 4 stars" << endl;
        cout << "Eldoret Electrician 004. Rating 3.5 stars" << endl;
        cout << "Eldoret Electrician 005. Rating 3.5 stars" << endl;
    }
    else if (service == "PAINTER")
    {
        cout << "The following is a list of the best painters in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Eldoret Painter 001. Rating 4.5 stars" << endl;
        cout << "Eldoret Painter 002. Rating 4 stars" << endl;
        cout << "Eldoret Painter 003. Rating 4 stars" << endl;
        cout << "Eldoret Painter 004. Rating 3.5 stars" << endl;
        cout << "Eldoret Painter 005. Rating 3.5 stars" << endl;
    }
    else if (service == "CARPENTER")
    {
        cout << "The following is a list of the best carpenters in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Eldoret Carpenter 001. Rating 4.5 stars" << endl;
        cout << "Eldoret Carpenter 002. Rating 4 stars" << endl;
        cout << "Eldoret Carpenter 003. Rating 4 stars" << endl;
        cout << "Eldoret Carpenter 004. Rating 3.5 stars" << endl;
        cout << "Eldoret Carpenter 005. Rating 3.5 stars" << endl;
    }
    else if (service == "GARDENER")
    {
        cout << "The following is a list of the best gardeners in your area.\n";
        cout << "Click on the link to get their contact information" << endl;
        cout << "Eldoret Gardener 001. Rating 4.5 stars" << endl;
        cout << "Eldoret Gardener 002. Rating 4 stars" << endl;
        cout << "Eldoret Gardener 003. Rating 4 stars" << endl;
        cout << "Eldoret Gardener 004. Rating 3.5 stars" << endl;
        cout << "Eldoret Gardener 005. Rating 3.5 stars" << endl;
    }
    else
    {
        cout << "\n\n";
        cout << "Kindly enter a valid handyman service from the list above" << endl;
        cout << "HINT: The system is case sensitive. Type exactly as listed above.\n";
        cout << "\n\n";
    }

    }
   
return 0; 
system("pause"); 

}

