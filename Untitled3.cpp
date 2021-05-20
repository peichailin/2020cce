void setup()//只做一次設定
{
  size(1024, 400);
}
void draw()//互動版本,每秒畫60次
{
  if(mousePressed) background(255,0,255);//mousePressed當滑鼠按下去時,紫色
  else background(168,154,250);//否則就是這個顏色,淡紫色
  textSize(80);//文字的大小
  text("中文壞掉Now a is" +a,212,200);//畫出文字,後面數字表示位置,text:文字
  //"Now a is" +a:文字的加法,中文打不出來,電腦不能辨識中文
}//目標:文字全系列都教一下!
int a=0;
void mousePressed()//滑鼠按下去時a++//目標:能畫圖,mouse按下去/移動的時候,要畫點東西/做點東西
{
  a++;//每按一次加1
}
