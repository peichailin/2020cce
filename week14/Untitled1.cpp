
//可以在彩色字,按滑鼠右鍵,找功能
//把random放在setup上,亂數只能變出一次,但放在mouse互動上時可以變好幾次。
int ans=0;
void setup()//設定,只做一次
{
  size(300,300);//螢幕大小
  textSize(30);//字的大小

}
void draw()//畫圖,每秒60次
{
     background(#C47AF2);
     text (ans,20,30);//text(劃出)ans,後面為螢幕大小。
}
void mousePressed()//按下去就互動一次
{
    ans=(int)random(60);//浮點數不能直接變整數,按下去時浮點數轉成整數
}
