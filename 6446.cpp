void setup()
{
    size(400,200);
    textSize(40);//�j�r
}
void draw()
{
    int s=second();//s�|�W�[,0~59
    background(58,114,191);
    //text(59-s,100,100);//59~0 ���
    text(10-s%11,100,100);
    //10.9.8.7.6.5.4.3.2.1�@11�ӼƦr,�Q�ξl�ƩM��k���˼ƭp��
}