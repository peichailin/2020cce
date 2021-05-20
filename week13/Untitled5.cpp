//新的,數字加字串等於字串
void setup()
{
    size(1024,400);
    textFont(createFont("標楷體",80));
}
void draw()
{
    background(#A89AFA);//色碼
    int s = second();  // Values from 0 - 59
    int m = minute();  // Values from 0 - 59
    int h = hour();    // Values from 0 - 23
    textSize(80);
    text( h + ":" + m + ":" + s,100,200);//100,200是螢幕位置
    //   數字字串 數字 字串  數字//英文是數字,冒號是字串,+是結合
    int total = s + 60*m + 60*60*h;//總秒數
    int closeH=17, closeM=40, closeS=0;//下課的精確時間
    int total2=closeS +  60*closeM + 60*60*closeH;//目標總秒數
    int ans= total2-total;
    text("剩下幾秒:" +ans,100,100);
    int ansH=ans/3600 ,ansM=ans%3600/60 ,ansS=ans%3600%60;//用換零錢的方法去計算
    text (ansH + ":" + ansM + ":" + ansS ,100 ,300);





}
