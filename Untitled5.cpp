//�s��,�Ʀr�[�r�굥��r��
void setup()
{
    size(1024,400);
    textFont(createFont("�з���",80));
}
void draw()
{
    background(#A89AFA);//��X
    int s = second();  // Values from 0 - 59
    int m = minute();  // Values from 0 - 59
    int h = hour();    // Values from 0 - 23
    textSize(80);
    text( h + ":" + m + ":" + s,100,200);//100,200�O�ù���m
    //   �Ʀr�r�� �Ʀr �r��  �Ʀr//�^��O�Ʀr,�_���O�r��,+�O���X
    int total = s + 60*m + 60*60*h;//�`���
    int closeH=17, closeM=40, closeS=0;//�U�Ҫ���T�ɶ�
    int total2=closeS +  60*closeM + 60*60*closeH;//�ؼ��`���
    int ans= total2-total;
    text("�ѤU�X��:" +ans,100,100);
    int ansH=ans/3600 ,ansM=ans%3600/60 ,ansS=ans%3600%60;//�δ��s������k�h�p��
    text (ansH + ":" + ansM + ":" + ansS ,100 ,300);





}
