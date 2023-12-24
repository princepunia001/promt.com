#include<stdio.h>
#include<string.h>
#include<conio.h>

void choice();
void gpt();
void wsonic();
void midjoy();
void reply();
void synt();
void sound();
void pliki();
void sterry();
void slide();
void remeny();
void pict();
void wordt();
void copy();
void lensa();
void looka();
void caption();
void adobepr();
void cleanup();
void resemble();
void futurep();
void system();
void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{

    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n\n                       ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n\n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"prompts")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n       WELCOME !! YOUR LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();//holds the screen

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}
int first( )
{
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb        PROMPT ENGINEERING PROJECT             \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb       Brought To You By TEAM PROMPTS          \xdb\n");
	printf("\t\t\xdb         >>PRINCE PUNIA            \xdb\n");
	
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb      CONTACT US:@miet.in                      \xdb\n");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	printf(" \n\t Press Any Key To Continue:");

	getch();
    system("cls");
    login();
}
void start()
{
int ch1;
label :
    printf("\nPlease Press 1 to start the Magic.\nEnter 0 to end\n");
printf("input:\t");
scanf("%d",&ch1);
switch (ch1)
{
case 1 : choice();
          break;
case 0 :
      printf("THANK YOU\n");
      break;
default :
      printf("ERROR\n");
      goto label;
}
}
int main()

{ first();
 start();

return 0;
}
void choice()
{ int a;
printf("Choose your Problem \n");
printf("\n\n\n\n");
printf("1.  If you want to solve anything. \n");
printf("2.  If you want to write Anything. \n");
printf("3.  If you want to generate Art.\n");
printf("4.  If you want to generate code. \n");
printf("5.  If you want to generate video.\n");
printf("6.  If you want to generate music.\n");
printf("7.  If you want to generate Ticktoks. \n");
printf("8.  If you want to generate Avtars.\n");
printf("9.  If you want to generate Presentation.\n");
printf("10. If you want to edit Pictures.\n");
printf("11. If you want to edit Video.\n");
printf("12. If you want to Summarise Notes.\n");
printf("13. If you want to generate Perfect solution for Sales and Marketing. \n");
printf("14. If you want to Transform Your selfies into Customised Portraits. \n");
printf("15. If you want to Design Brand Identity (starting From Logo).\n");
printf("16. If you want to Transcribe the Voice into Text.\n");
printf("17. If you want to Analyze your podcast audio and generate Keyword and Summaries.\n");
printf("18. If you want to Remove people from photos.\n");
printf("19. If you want to Clone Realistic sound voice.\n");
printf("20. If you want to make Predctions about AI.\n");


scanf("%d",&a);
switch(a)
{
case 1:  gpt();
break;
case 2: wsonic();
break;
case 3:  midjoy();
break;
case 4:  reply();
break;
case 5:  synt();
break;
case 6:  sound();
break;
case 7:  pliki();
break;
case 8:  sterry();
break;
case 9: slide();
break;
case 10:  remeny();
break;
case 11:  pict();
break;
case 12:  wordt();
break;
case 13:  copy();
break;
case 14: lensa();
break;
case 15:  looka();
break;
case 16: caption();
break;
case 17:  adobepr();
break;
case 18: cleanup();
break;
case 19:  resemble();
break;
case 20: futurep();
}

getch();
}
void gpt()
{
    printf("Chat GPT basic Prompts:\n\n");



    printf("1. Let ChatGPT Generate its prompts:\n");



printf(">>>You are GPT-4, OpenAI  advanced language model. Today, your job is to generate\n");
printf("prompts for GPT-4. Can you generate the best prompts on ways to [what you want]<<<\n");


printf("2. Test GPT-4’s Reasoning:\n\n");

printf(">>>In a room, there are 100 murderers. You kill one of them. How many are left?<<<\n");

printf("3. Draft Lawsuits for Spam Callers:\n\n");
printf(">>>I Have Received a Spam Call from Marriot Reeds. Draft a $1,500 Lawsuit Under the TCPA to Sue.Use Contexts Learned from Other Lawsuits.<<<\n");

printf("4. Fetch Exam Format and Tips for Complex Exams:\n\n");

printf(">>>I want to pass the LSATs. Give me the exam format and 5 tips I can inculcate for it.<<<\n");
printf("5. Summarize Text Intelligently:\n\n");
printf(">>>Summarize this entire text into 3 sentences where every word starts with the letter<<<\n");
printf("6. Get Help in Language Learning:\n\n");
printf(">>>How long does it take to become proficient in [language], and what are the best methods for retaining information?<<<\n");
printf("7. Seek Web Development Tips:\n\n");
printf(">>>What are some common mistakes to avoid when writing code?<<<\n\n\n\n");

int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("www.google.com/ https://chat.openai.com/auth/login");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);

  }
start();

}
void wsonic()
{ printf("Writesonic basic prompts:\n\n");

printf(">>>1. Can you provide me with some ideas for blog posts about [topic of your choice]?<<<\n\n");

printf(">>>2. Write a product description for my [product or service or company]?<<<\n\n");

printf(">>>3. How can I obtain high-quality backlinks to raise the SEO of [Website name]?<<<\n\n");

printf(">>>4. Write follow-up emails to people who attended my [webinar topic] webinar? <<<\n\n");

printf(">>>5. Create a personalized email greeting for a VIP customer?<<<\n\n");

int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://writesonic.com/?via=ansar26&gclid=CjwKCAjwhdWkBhBZEiwA1ibLmBpazsNMcokKNDLQ5nqSOfSLoSITf14ERlELnmtRRMHrOjrDimOYaxoC9iAQAvD_BwE");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);


  }

start();

}
void midjoy()
{

printf("Mid journey basic  prompts:\n\n");

printf(">>>1. Shakespeare Reimagined.<<<\n\n");

printf(">>>2. Volumetric Moon Knight.<<<\n\n");

printf(">>>3. Ethereal Bohemian Waxwing Bird.<<<\n\n");

printf(">>>4. Steampunk Cat. <<<\n\n");

printf(">>>5. The World in 100 Years.<<<\n\n");


int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://www.midjourney.com/home/?callbackUrl=%2Fapp%2F");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }

start();

}
void reply()
{
printf("Replit basic  prompts:\n\n");

printf(">>>1. Generate python code.<<<\n\n");

printf(">>>2. Generate html code.<<<\n\n");

printf(">>>3. Generate c/c++ code.<<<\n\n");

printf(">>>4. Generate C sharp code. <<<\n\n");

printf(">>>5. Generate java code.<<<\n\n");

int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://replit.com/site/ghostwriter");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }

start();
}
void synt()
{


    printf("Synthesia basic  prompts:\n\n");

printf(">>>1. Generate videos.<<<\n\n");

printf(">>>2. Generate customized video.<<<\n\n");

printf(">>>3. Generate Avatar.<<<\n\n");



int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://www.synthesia.io/");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }

start();
}
void sound()
{

printf("Sound raw basic  prompts:\n\n");

printf(">>>1. Generate the music.<<<\n\n");

printf(">>>2. Customized the song .<<<\n\n");

printf(">>>3. Change the position of choras.<<<\n\n");



int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://soundraw.io/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }



start();

}
void pliki()
{
printf("Fliki basic  prompts:\n\n");

printf(">>>1. Transform blog articles into videos .<<<\n\n");

printf(">>>2. Lifelike test to speech voices .<<<\n\n");

printf(">>>3. To select subtitles with your brand color and font options.<<<\n\n");



int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://fliki.ai/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }





start();

}
void sterry()
{
printf("Starry AI basic  prompts:\n\n");

printf(">>>1. Generate Art with the help of AI .<<<\n\n");

printf(">>>2. Generate Avatar with the help of AI .<<<\n\n");

printf(">>>3. Generate real time image .<<<\n\n");



int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://starryai.com/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }
start();
}
void slide()
{printf("Slides AI basic  prompts:\n\n");

printf(">>>1. Generate  business PPT  with the help of AI .<<<\n\n");

printf(">>>2. Generate project PPT  .<<<\n\n");

printf(">>>3. Generate marketing PPT  .<<<\n\n");
printf(">>>4. Generate lecture PPT  .<<<\n\n");




int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://www.slidesai.io/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }

start();
}
void remeny()
{
printf("Remini AI basic  prompts:\n\n");

printf(">>>1. Edit photo .<<<\n\n");

printf(">>>2. Remove blur and give high definition image   .<<<\n\n");

printf(">>>3. Produce more clarity and color in your photo and video  .<<<\n\n");
printf(">>>4. Convert your photo into more vibrant and more dizzlingly.<<<\n\n");




int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://remini.ai/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }




start();

}
void pict()
{


printf("Pictory AI basic  prompts:\n\n");

printf(">>>1. Convert text into videos .<<<\n\n");

printf(">>>2. Generate short highly sharable branded video   .<<<\n\n");

printf(">>>3. To make animation video  .<<<\n\n");




int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://pictory.ai/?ref=dinh34&gclid=CjwKCAjwhdWkBhBZEiwA1ibLmFx3FYJJvzjXMAq6vxIoOx0ROcxBs21JrQJZmc4HYUM4iqn9Mdy88RoC4YYQAvD_BwE ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }


start();
}
void wordt()
{
    printf("Wordtune AI basic  prompts:\n\n");

printf(">>>1. Edit your writing  .<<<\n\n");

printf(">>>2. Improve the quality of your content  .<<<\n\n");

printf(">>>3. Provide you the idea about writing  .<<<\n\n");

printf(">>>4. Transform scribbled notes into complete, logical sentences.<<<\n\n");




int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://www.wordtune.com/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }


start();

}
void copy()
{
    printf("Copy AI basic  prompts:\n\n");

printf(">>>1. conducting customer research  .<<<\n\n");

printf(">>>2. Generating product Descriptions   .<<<\n\n");

printf(">>>3. Writing a blog post intro .<<<\n\n");

printf(">>>4. Analyzing costumer Feedback.<<<\n\n");




int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://www.copy.ai/?via=start ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }

start();

}
void lensa()
{printf(" LENSA basic  prompts:\n\n");

printf(">>>1. Generate magic Avatars .<<<\n\n");
printf(">>>2. Generate image to Avatars .<<<\n\n");
printf(">>>3. Generate portraits .<<<\n\n");





int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://prisma-ai.com/lensa ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }

start();
}
void looka()
{printf(" LOOKA basic  prompts:\n\n");

printf(">>>1. Generate custom LOGO .<<<\n\n");
printf(">>>2. Buildup your companies identity .<<<\n\n");
printf(">>>3. View layouts and Variations.<<<\n\n");
printf(">>>4. Generate your branding.<<<\n\n");





int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://looka.com/blog/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }

start();
}
void caption()
{printf(" CAPTION basic  prompts:\n\n");

printf(">>>1. To provide caption for your video .<<<\n\n");
printf(">>>2. Automatically trim filler word and pauses in speech.<<<\n\n");
printf(">>>3. Automatically remove background noise and enhance speech.<<<\n\n");
printf(">>>4. Correct eye contact of image.<<<\n\n");





int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://www.captions.ai/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }

start();
}
void adobepr()
{printf(" Adobe podcast basic  prompts:\n\n");

printf(">>>1. Edit the audio .<<<\n\n");
printf(">>>2. Remote recording.<<<\n\n");
printf(">>>3. remove background noise .<<<\n\n");
printf(">>>4. sharpening your voice's frequencies.<<<\n\n");





int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://podcast.adobe.com/ ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }
start();

}
void cleanup()
{printf(" Adobe podcast basic  prompts:\n\n");

printf(">>>1. Image resolution cleanup .<<<\n\n");
printf(">>>2. Import and edit pictures of any size .<<<\n\n");
printf(">>>3. Change the background and remove unwanted objects .<<<\n\n");
printf(">>>4. Remove text , logo and water marks from an image .<<<\n\n");





int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://cleanup.pictures// ");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }
start();

}

void resemble()
{
printf(" Resemble basic  prompts:\n\n");

printf(">>>1. Add Emotions.<<<\n\n");

printf(">>>2. Speech to Speech.<<<\n\n");

printf(">>>3. Localize <<\n");

int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://app.resemble.ai/");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);




   }
   start();
}
void futurep()
{
printf("Mid Future Pedia basic prompts:\n\n");

printf(">>>1. AI future Scope.<<<\n\n");

printf(">>>2. carrier in AI.<<<\n\n");


int n;
printf("If you want to go the website press 1:\n");
scanf("%d",&n);
if (n==1)
{
system("microsoftedge https://www.futurepedia.io/");
}
else
  {

    printf("Ok Thanks:");
      int happyASCII = 1;

   printf("%c", happyASCII);

   printf("%c", happyASCII);


  }
  start();
}