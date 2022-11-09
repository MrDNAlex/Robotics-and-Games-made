int PixX = 1;
int PixY = 1;





void Image () {
	for(int i = 0; i < 6144; i++)
	{
PixX = PixX +1;
		float Ran = random(2);
		int RanP = (int)Ran;
		if (RanP >= 1)
			setPixel(PixX,PixY);
		if (PixX > 128) {
			PixX = 1;
			PixY = PixY + 1;
		}
		if (PixY > 48)
		{
			PixY = 1;
			PixX = 1;
		}

	}
}




task main()
{
	 eraseDisplay();
	 wait1Msec(1000);
	  Image();
	 while(true) {

}

}
