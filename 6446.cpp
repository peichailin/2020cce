void setup()
{
    size(400,200);
    textSize(40);//大字
}
void draw()
{
    int s=second();//s會增加,0~59
    background(58,114,191);
    //text(59-s,100,100);//59~0 減少
    text(10-s%11,100,100);
    //10.9.8.7.6.5.4.3.2.1共11個數字,利用餘數和減法做倒數計時
}