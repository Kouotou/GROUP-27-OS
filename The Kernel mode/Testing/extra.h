void setMonitorColor(char);
void cls();
void printString(char*);
void vid();


char* TM_START;

void blink(){
	setMonitorColor(0x59);
	int TIME_OUT = 0x10fffff;
	while(--TIME_OUT);
	setMonitorColor(0xa5);
}

char strcmp(char* sou , char* dest){
	int i = 0;
	while(*(sou + i) == *(dest + i)){
		if(*(sou + i) == 0 && *(dest + i) == 0)
			return 1;
		i++;
	}
	return 0;
}

void strEval(char* CMD){
	char cmd1[] = "CLS";
	char cmd2[] = "COLORA";
	char cmd3[] = "COLORB";
	char cmd4[] = "COLORC";
	char cmd5[] = "COLORDEF";
	char cmd6[] = "VID";
	char cmd7[] = "HI";
    char cmd8[] = "DATE";
	char cmd9[] = "ADD";
	char cmd10[] = "SUBTRACT";
	char cmd11[] = "MULTIPLICATION";
	char cmd12[] = "DIVISION";
	char cmd13[] = "HELP";

    char msg1[] = "\nHELLO , HAVE A GOOD JOURNEY LEARNING\n";
	char msg2[] = "\n05/01/2023\n";
    char msg3[] = "\nsum is 6 \n";
	char msg4[] = "\ndifference is 4 \n";
	char msg5[] = "\nmultiplicant is 20\n";
    char msg6[] = "\ndivident is 5\n";
	char msg7[] = "\nCLS is to clear the screen\n";
	char msg8[] = "\nCOLORA,COLORB,COLORC and COLORDEF are there to set colors\n";
	char msg9[] = "\nVID helps you to play the video\n";
	char msg10[] = "\nDATE helps you to print the date to the screen\n";
	char msg11[] = "\nADD helps you to add between two arbitrary numbers\n";
	char msg12[] = "\nSUBTRACT helps you to subtract between two arbitrary numbers\n";
 	char msg13[] = "\nMULTIPLICATION helps you to multiplication between two arbitrary numbers\n";
	char msg14[] = "\nDIVISION helps you to divide betwen two arbitrary numbers\n";
	char msg15[] = "\nPLAY helps you play a sound\n";
    if(strcmp(CMD , cmd1))
		cls();

	else if(strcmp(CMD , cmd2))
		setMonitorColor(0x3c);

	else if(strcmp(CMD , cmd3))
		setMonitorColor(0x5a);

	else if(strcmp(CMD , cmd4))
		setMonitorColor(0x2a);

	else if(strcmp(CMD , cmd5))
		setMonitorColor(0xa5);	

	else if(strcmp(CMD , cmd6))
		vid();
	
	else if(strcmp(CMD , cmd7))
		printString(msg1);
	
	else if(strcmp(CMD , cmd8))
	    printString(msg2);
	
	else if(strcmp(CMD , cmd9))
	    printString(msg3);
	
    else if (strcmp(CMD , cmd10))
	    printString(msg4);    
		
    else if (strcmp(CMD , cmd11))
	    printString(msg5);    
		
    else if (strcmp(CMD , cmd12))
	    printString(msg6); 

    else if (strcmp(CMD , cmd13))
	{
		printString(msg6); 
		printString(msg7); 
		printString(msg8); 
		printString(msg9); 
		printString(msg10); 
		printString(msg11); 
		printString(msg12); 
		printString(msg13);
        printString(msg14);
        printString(msg15);  		
	}
	
}

void vid(){
	char clr = 'A';
	while(1){
		int i = 0;
		while(i < 2 * 80 * 25){
			*(TM_START + i) = clr;
			clr++;
			i++;
		}
	}
}