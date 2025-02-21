#include <iostream>
#include <string>
using namespace std;

int main() {
string answ,username,firstName,lastName,email,gender,pass,passConfirm,user;
int age;

cout<<"\n\t\t\t\t\t   Welcome!\n"<<"\n**Trending Books** 'The Maze Runner' & 'Great Expectations'";
cout<<"\n**New Book** 'Treasure Island'";

cout<<"\n\n\t\t\t\t    | LogIn | | SignUp |"<<"\n\n(Enter one of the options) ";
while(1){
cin>>answ;
if (answ=="LogIn"||answ=="SignUp"){break;}
else {cout<<"\nPlease enter a valid answer (LogIn / SignUp) ";}
}

if (answ=="SignUp"){
cout<<"\n\t\t\t      (Please fill the following data)\n\n";
cout<<"First Name: ";cin>>firstName;
cout<<"Last Name: ";cin>>lastName;
cout<<"Email: ";cin>>email;

cout<<"You are: | Student || Teacher || Staff | ";
while(1){
cin>>user;
if (user=="Student"||user=="Teacher"||user=="Staff"){break;}
else {cout<<"\nPlease enter a valid answer (Student / Teacher / Staff) ";}
}
cout<<"\nGender: | Female || Male | ";
while(1){
cin>>gender;
if (gender=="Female"||gender=="Male"){break;}
else {cout<<"\nPlease enter a valid answer (Female / Male) ";}
}
cout<<"\nAge: ";cin>>age;
cout<<"\nPassword: ";cin>>pass;

cout<<"Confirm Password: ";
while(1){
cin>>passConfirm;
if (passConfirm==pass){break;}
else {cout<<"\nPassword does not match please try again (must be the same)\n";}
}
cout<<"\n\t\t\t    ....Done! Thanks for Registering!"<<"\n\t\t\t Your account has been successfully created.\n";}

if (answ=="LogIn"){
cout<<"\nUsername: ";cin>>username;
cout<<"You are: | Student || Teacher || Staff | ";

while(1){
cin>>user;
if (user=="Student"||user=="Teacher"||user=="Staff"){break;}
else {cout<<"\nPlease enter a valid answer (Student / Teacher / Staff) ";}}

cout<<"Email: ";cin>>email;
cout<<"Password: ";cin>>pass;
cout<<"\t\t\t\t     Loging In....Done!\n";}

int N,borrowDay,borrowMonth,dueDay,dueMonth;
string userCommand,answBorrow;
string Book[]={"Software Engineering","Harry Potter","Great Expectations","Determinantes","Alice In Wonderland","English For Everyone","Treasure Island","The Maze Runner","To The LightHouse","Life of Pi"};

if (user=="Student"||user=="Teacher"){
cout<<"\n\n\t\t\t\t\t "<<"Welcome "<<username<<"!\n";

while (1){
cout<<"\n\t\t\t\t      "<<"--* Book List *--\n\n"<<"Book1 >> Title: "<<Book[0]<<" | Category: study | Quantity: 5\n"<<"Book2 >> Title: "<<Book[1]<<" | Category: fantasy | Quantity: 3\n";
cout<<"Book3 >> Title: "<<Book[2]<<" | Category: novel | Quantity: 2\n"<<"Book4 >> Title: "<<Book[3]<<" | Category: study | Quantity: 3\n"<<"Book5 >> Title: "<<Book[4]<<" | Category: fantasy | Quantity: 2\n";
cout<<"Book6 >> Title: "<<Book[5]<<" | Category: study | Quantity: 1\n"<<"Book7 >> Title: "<<Book[6]<<" | Category: action | Quantity: 1\n"<<"Book8 >> "<<Book[7]<<" | Category: action | Quantity: 3\n";
cout<<"Book9 >> Title: "<<Book[8]<<" | Category: novel | Quantity: 4\n"<<"Book10 >> Title: "<<Book[9]<<" | Category: action | Quantity: 5\n\n";

cout<<"\n\t\t\t\t    | Borrow | | LogOut |\n";
while(1){
cin>>userCommand;
if (userCommand=="Borrow"||userCommand=="LogOut"){break;}
else {cout<<"Please enter a valid command ( Borrow / LogOut )\n";}
}

if (userCommand=="Borrow"){
cout<<"Please enter number of the book you would like to borrow (Ex: 5 >> Book5) ";

while(1){
cin>>N;
if (N==1||N==2||N==3||N==4||N==5||N==6||N==7||N==8||N==9||N==10){break;}
else {cout<<"Please enter a valid book number\n";}
}

cout<<"\n\t\t\t       ** Book"<<N<<" '"<<Book[N-1]<<"' **\n-- Details --\n";
/*seperating them is not an important step but I just wanted 
the books to have unique details from each other.<<(Talking about the following step:)*/
if (N==1||N==4||N==6){ 
cout<<"Author: Aya.M"<<" | Rating: 4.52 || 73 reviews |\n"<<"Language: English\n";
cout<<"Category: Study\n";
cout<<"Publication Date: June 5, 2020\n"<<"Pages: 215\n";}

if (N==7||N==8||N==10){
cout<<"Author: Aya.M"<<" | Rating: 4.21 || 95 reviews |\n"<<"Language: English\n";
cout<<"Category: Action\n";
cout<<"Publication Date: October 6, 2009\n"<<"Pages: 372\n";}

if (N==3||N==9){
cout<<"Author: Aya.M"<<" | Rating: 4.4 || 62 reviews |\n"<<"Language: English\n";
cout<<"Category: Novel\n";
cout<<"Publication Date: January 1, 1861\n"<<"Pages: 544\n";}

if (N==2||N==5){
cout<<"Author: Aya.M"<<" | Rating: 4.18 || 102 reviews |\n"<<"Language: English\n";
cout<<"Category: fantasy\n";
cout<<"Publication Date: June 26, 1997\n"<<"Pages: 309\n\n";}

cout<<"\t\t\t\t Confirm Borrowing (y/n)? ";

while(1){
cin>>answBorrow;
if (answBorrow=="y"||answBorrow=="n"){break;}
else {cout<<"\nPlease enter a valid answer (y/n) \n";}
}

if (answBorrow=="y"){cout<<"\nPlease enter date of the day you are borrowing the book";
cout<<"\n(Notice!) Borrowing Time Limit is 30 days \n"<<"\nDay: ";

while(1){
cin>>borrowDay;
if (1<=borrowDay<=31){break;}
else {cout<<"Please enter a valid day (1-31) \n";}
}

cout<<"Month: ";
while(1){
cin>>borrowMonth;
if (1<=borrowMonth<=12){break;}
else {cout<<"Please enter a valid month (1-12) \n";}
}
if (borrowDay==1){dueDay=31;dueMonth=borrowMonth;}
if (borrowDay>1){dueDay=borrowDay;dueMonth=borrowMonth+1;}

cout<<"\t\t\t   ....Done! You successfully borrowed Book"<<N;
cout<<"\n\t\t   Your Due Date for returning the book is | "<<dueDay<<" || "<<dueMonth<<" || 2024 |\n";
cout<<"\nReturning to Home Page....\n";}

if (answBorrow=="n"){cout<<"\n\t\t\t\t Borrowing has been canceled!\n";
cout<<"\nReturning to Home Page....\n";}}

if (userCommand=="LogOut"){break;}}
}
string commandStaff,commandUpdate,oldTitle,oldCategory,newCategory,newAuthor;
long long totalBooks=10,action=3,fantasy=2,novel=2,study=3;

if (user=="Staff"){
cout<<"\n\t\t\t\t\t "<<"Welcome "<<username<<"!\n";

while (1){
cout<<"\nStaff Commands:\n"<<"(addBook) to add a book to the library\n"<<"(updateBook) to update a book in the library\n";
cout<<"(deleteBook) to delete a book from the library\n"<<"(trackTransaction) to track returned books and update their availability\n"<<"\n| LogOut |\n\n";
cout<<"(Please enter a command according to the action you want to make to the library)\n";

while (1){
cin>>commandStaff;
if (commandStaff=="addBook"||commandStaff=="updateBook"||commandStaff=="deleteBook"
||commandStaff=="trackTransaction"||commandStaff=="LogOut"){break;}
else {cout<<"Please enter a valid command\n";}
}
if (commandStaff=="addBook"){
cout<<"Please enter how many books you would like to add ";
cin>>N;
string booksAdded[N],booksAuthor[N],category[N];

for (int i=0;i<N;i++){
cout<<"enter title of book "<<i+1<<" : \n";
cin>>booksAdded[i];
cout<<"enter author of book "<<i+1<<" : \n";
cin>>booksAuthor[i];
cout<<"enter category of book "<<i+1<<" : \n";
cin>>category[i];

if (category[i]=="action"){action+=1;
cout<<"(Update!) Total No. of books in the action category is now "<<action<<endl;}
else if (category[i]=="novel"){novel+=1;
cout<<"(Update!) Total No. of books in the novel category is now "<<novel<<endl;}
else if (category[i]=="fantasy"){fantasy+=1;
cout<<"(Update!) Total No. of books in the fantasy category is now "<<fantasy<<endl;}
else if (category[i]=="study"){study+=1;
cout<<"(Update!) Total No. of books in the study category is now "<<study<<endl;}
totalBooks +=1;}
}
if (commandStaff=="addBook"){cout<<"(Update!) Total No. of books in the library is now "<<totalBooks<<endl;}
string Book[]={"Software Engineering","Harry Potter","Great Expectations","Determinantes","Alice In Wonderland","English For Everyone","Treasure Island","The Maze Runner","To The LightHouse","Life of Pi"};
if (commandStaff=="updateBook"){cout<<"\n\t\t\t\t\t   "<<"--* Book List *--\n\n"<<"Book1 >> Title: "<<Book[0]<<" | Category: study | Quantity: 5\n"<<"Book2 >> Title: "<<Book[1]<<" | Category: fantasy | Quantity: 3\n";
cout<<"Book3 >> Title: "<<Book[2]<<" | Category: novel | Quantity: 2\n"<<"Book4 >> Title: "<<Book[3]<<" | Category: study | Quantity: 3\n"<<"Book5 >> Title: "<<Book[4]<<" | Category: fantasy | Quantity: 2\n";
cout<<"Book6 >> Title: "<<Book[5]<<" | Category: study | Quantity: 1\n"<<"Book7 >> Title: "<<Book[6]<<" | Category: action | Quantity: 1\n"<<"Book8 >> "<<Book[7]<<" | Category: action | Quantity: 3\n";
cout<<"Book9 >> Title: "<<Book[8]<<" | Category: novel | Quantity: 4\n"<<"Book10 >> Title: "<<Book[9]<<" | Category: action | Quantity: 5\n\n";
cout<<"Update Commands:\n"<<"(editTitle) to edit book title\n"<<"(editAuthor) to edit book author\n"<<"(editCategory) to edit book category\n";
while (1){
cin>>commandUpdate;
if (commandUpdate=="editTitle"||commandUpdate=="editAuthor"||commandUpdate=="editCategory"){break;}
else {cout<<"Please enter a valid command\n";}}
cout<<"Please enter number of the book you would like to edit (Ex: 5 >> Book5) ";

while(1){
cin>>N;if (N==1||N==2||N==3||N==4||N==5||N==6||N==7||N==8||N==9||N==10){break;}
cout<<"Please enter a valid book number\n";
}
if (commandUpdate=="editTitle"){oldTitle=Book[N-1];
cout<<"Current Book title: "<<oldTitle<<"\t|  Enter New title: ";cin>>Book[N-1];
cout<<"(Update!) Title of Book"<<N<<" is now: "<<Book[N-1];}

if (commandUpdate=="editAuthor"){
cout<<"Current Book author: Aya.M  |  Enter New author name: ";cin>>newAuthor;
cout<<"(Update!) Author of Book"<<N<<" is now: "<<newAuthor;}

if (commandUpdate=="editCategory"){
if (N==1||N==4||N==6){oldCategory="study";}
if (N==3||N==9){oldCategory="novel";}
if (N==2||N==5){oldCategory="fantasy";}
if (N==7||N==8||N==10){oldCategory="action";}

cout<<"Current Book category: "<<oldCategory<<"  |  Enter New category: ";
while(1){
cin>>newCategory;
if(newCategory=="action"||newCategory=="fantasy"||newCategory=="novel"||newCategory=="study"){break;}
cout<<"Please enter a valid book category (action-fantasy-novel-study)\n";}
cout<<"(Update!) Category of Book"<<N<<" is now: "<<newCategory;

if(newCategory=="study"){study+=1;
cout<<"\n(Update!) Total No. of books in the study category is now "<<study;}
if(newCategory=="fantasy"){fantasy+=1;
cout<<"\n(Update!) Total No. of books in the fantasy category is now "<<fantasy;}
if(newCategory=="action"){action+=1;
cout<<"\n(Update!) Total No. of books in the action category is now "<<action;}
if(newCategory=="novel"){novel+=1;
cout<<"\n(Update!) Total No. of books in the novel category is now "<<novel;}}
}

if (commandStaff=="deleteBook"){cout<<"Please enter number of the book you would like to delete (Ex: 5 >> Book5) ";
while(1){cin>>N;if (N==1||N==2||N==3||N==4||N==5||N==6||N==7||N==8||N==9||N==10){break;}
cout<<"Please enter a valid book number\n";}
cout<<"\n\t\t\t\t\t   Confirm (y/n)? ";

while(1){
cin>>answ;cout<<"\n";
if (answ=="n"||answ=="y"){break;}
else {cout<<"Please enter a valid answer ";}
}
if (answ=="y"){
cout<<"(Update!) Book"<<N<<" '"<<Book[N-1]<<"' has been successfully deleted!";
if (N==1||N==4||N==6){study-=1;
cout<<"\n(Update!) Total No. of books in the study category is now "<<study;}
if (N==3||N==9){novel-=1;
cout<<"\n(Update!) Total No. of books in the novel category is now "<<novel;}
if (N==2||N==5){fantasy-=1;
cout<<"\n(Update!) Total No. of books in the fantasy category is now "<<fantasy;}
if (N==7||N==8||N==10){action-=1;
cout<<"\n(Update!) Total No. of books in the action category is now "<<action;}
totalBooks-=1;cout<<"\n(Update!) Total No. of books in the library is now "<<totalBooks<<endl;}
else {cout<<"\nBook"<<N<<" '"<<Book[N-1]<<"' deletion has been canceled!\n";}
}
if (commandStaff=="trackTransaction"){
cout<<"\n\t\t\t        "<<"--* Book Transaction History *--\n\n"<<"\n\t\t\t| No. | |   User   |";
cout<<"  | Book Borrowed |  |    Due Date    |\n";
cout<<"\t\t\t"<<"----------------------------------------------------------|\n";
cout<<"\t\t\t"<<"|  1  | |   Aya    |  |     Book5     |  |  march 10,2024 |\n";
cout<<"\t\t\t"<<"|  2  | |   Alaa   |  |     Book7     |  |  march 17,2024 |\n";
cout<<"\t\t\t"<<"|  3  | |   Shahd  |  |     Book3     |  |  march 25,2024 |\n";
cout<<"\t\t\t"<<"|  4  | |   Ali    |  |     Book8     |  |  april 3,2024  |\n";
cout<<"\t\t\t"<<"|  5  | |   Ahmed  |  |     Book10    |  |  april 9,2024  |\n";
}
if (commandStaff=="LogOut"){cout<<"\n\n\t\t\t\t   "<<"Loging Out....Complete!\n"<<"\n\n\t\t\t\tHope you enjoyed your experience!\n";
cout<<"made by: Aya Mohab"; return 0;}
cout<<"\n\n\t\t\t\t\t   "<<"Action Complete!\n\nWould you like to make another action? (y/n) ";

while(1){
cin>>answ;cout<<"\n";
if (answ=="n"||answ=="y"){break;}
else {cout<<"Please enter a valid answer (y/n) ";}
}
if (answ=="n"){break;}}}
cout<<"\n\n\t\t\t\t   "<<"Loging Out....Complete!\n"<<"\n\n\t\t\t\tHope you enjoyed your experience!\n";
cout<<"made by: Aya Mohab";

    return 0;
}