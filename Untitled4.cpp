
//�s��,�Ʀr�[�r�굥��r��
void setup()
{
    size(1024,400);
}
void draw()
{
    background(#A89AFA);//��X
    int s = second();  // Values from 0 - 59
    int m = minute();  // Values from 0 - 59
    int h = hour();    // Values from 0 - 23
    textSize(80);
    text( h + ":" + m + ":" + s,100,200);
    //   �Ʀr�r�� �Ʀr �r��  �Ʀr//�^��O�Ʀr,�_���O�r��,+�O���X
}
