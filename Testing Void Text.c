
void Text (string a, string b, string c, string d, string e) {

		displayTextLine(1,a);
			sleep(1000);
			displayTextLine(2,b);
			sleep(1000);
			displayTextLine(3,c);
			sleep(1000);
			displayTextLine(4,d);
			sleep(1000);
			displayTextLine(5,e);
			sleep(1500);




}




task main()
{
	while(true) {

	string a = "Hi  ";
	string b = " Hello  ";
	string c = "Was Up?   ";
	string d = "   ";
	string e = "   ";



	Text(a,b,c,d,e);



}

}
