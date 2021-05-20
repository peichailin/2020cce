
//新的,數字加字串等於字串
void setup()
{
    size(1024,400);
}
void draw()
{
    background(#A89AFA);//色碼
    int s = second();  // Values from 0 - 59
    int m = minute();  // Values from 0 - 59
    int h = hour();    // Values from 0 - 23
    textSize(80);
    text( h + ":" + m + ":" + s,100,200);
    //   數字字串 數字 字串  數字//英文是數字,冒號是字串,+是結合
}
