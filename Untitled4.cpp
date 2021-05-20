
//穝,计﹃单﹃
void setup()
{
    size(1024,400);
}
void draw()
{
    background(#A89AFA);//︹絏
    int s = second();  // Values from 0 - 59
    int m = minute();  // Values from 0 - 59
    int h = hour();    // Values from 0 - 23
    textSize(80);
    text( h + ":" + m + ":" + s,100,200);
    //   计﹃ 计 ﹃  计//璣ゅ琌计,玙腹琌﹃,+琌挡
}
