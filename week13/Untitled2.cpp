void setup()//只做一次設定
{
  size(1024, 400);
}
void draw()//互動版本,每秒畫60次
{
  if(mousePressed) background(255,0,255);//mousePressed當滑鼠按下去時,紫色
  else background(168,154,250);//否則就是這個顏色,淡紫色
  text(a,512,200);//畫出文字,後面數字表示位置
}//目標:能畫圖,mouse按下去/移動的時候,要畫點東西/做點東西
int a=0;
void mousePressed()//滑鼠按下去時a++
{
  a++;//每按一次加1
}
