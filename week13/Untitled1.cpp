void setup()//只做一次設定
{
  size(1024, 400);
}
void draw()//互動版本,每秒畫60次
{
  if(mousePressed) background(255,0,255);//mousePressed當滑鼠按下去時,紫色
  else background(168,154,250);//否則就是這個顏色,淡紫色
}
