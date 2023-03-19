                     //10
                    //Name: Maliha Nawar; ID: 17.01.05.131

void setup() {
Serial.begin(9600);//initializing serial monitor
}
void loop() {
 
char str[]="MALIHA NAWAR";
int l=strlen(str);
for (int i=0;i<l;i++) //for each character of the string
{for (int j=0;j<=i;j++)//to show previous & present character
{Serial.print(str[j]);}
Serial.println();   //to show previous & present character in new line  
delay(1000);}
delay(100000000000000);}
