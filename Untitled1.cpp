
//�i�H�b�m��r,���ƹ��k��,��\��
//��random��bsetup�W,�üƥu���ܥX�@��,����bmouse���ʤW�ɥi�H�ܦn�X���C
int ans=0;
void setup()//�]�w,�u���@��
{
  size(300,300);//�ù��j�p
  textSize(30);//�r���j�p

}
void draw()//�e��,�C��60��
{
     background(#C47AF2);
     text (ans,20,30);//text(���X)ans,�᭱���ù��j�p�C
}
void mousePressed()//���U�h�N���ʤ@��
{
    ans=(int)random(60);//�B�I�Ƥ��ઽ���ܾ��,���U�h�ɯB�I���ন���
}
