import processing.sound.*;
SoundFile player;
void setup()
{
    size(400,200);
    textSize(40);//大字
    player = new SoundFile(this ,"tada.mp3");//如果沒放音檔會當掉
}
void draw()//每秒60次
{
    int s=second();//s會增加,0~59
    background(58,114,191);
    //text(59-s,100,100);//59~0 減少
    text(10-s%11,100,100);
    if(10-s%11 ==0 && !player.isPlaying())//如果有一個再播,其他步要撥出來
    {
      
        player.play();//這樣同時會有60個聲音
    }
    //10.9.8.7.6.5.4.3.2.1共11個數字,利用餘數和減法做倒數計時
}
