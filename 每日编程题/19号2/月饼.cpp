#include <stdio.h>

//MrHaddis
//https://github.com/MrHaddis/PAT1020

//�ýṹ��
//������˸����۵��ֶ�����Ϊ��Ҫ��������۶��ô�϶��ǵ������ȵģ��������ܵõ����
struct YueBing {
    //���
    float kucun;
    //���۶�
    float sale;
    //����
    float single;
};

int main() {
    //��������
    //Ԥ����������
    int typeNumber, number;
    //���
    float result = 0;
    scanf("%d %d", &typeNumber, &number);
    //�ṹ������
    struct YueBing yueBingArray[typeNumber];
    //��¼����Ŀ��
    for (int i = 0; i < typeNumber; ++i) {
        scanf("%f", &yueBingArray[i].kucun);
    }
    //��¼����Ӧ�����۶�����㵥��
    for (int i = 0; i < typeNumber; ++i) {
        scanf("%f", &yueBingArray[i].sale);
        yueBingArray[i].single = yueBingArray[i].sale / yueBingArray[i].kucun;
    }
    //ð�����򣬰��յ��۴Ӹߵ�������
    for (int i = 0; i < typeNumber; ++i) {
        for (int j = 0; j < typeNumber - 1 - i; ++j) {
            if (yueBingArray[j].single < yueBingArray[j + 1].single) {
                struct YueBing yueBing = yueBingArray[j];
                yueBingArray[j] = yueBingArray[j + 1];
                yueBingArray[j + 1] = yueBing;
            }
        }
    }
    //��¼һ����Ǯ�Ŀ������
    int allKucun = 0;
    for (int i = 0; i < typeNumber; ++i) {
        //Ĭ�ϵ�ǰ�Ŀ�治��Ԥ�����۵Ŀ������
        allKucun += yueBingArray[i].kucun;
        result += yueBingArray[i].sale;
        //�����Ժ��ж�һ�� ��������˾ͼ�ȥ��Ȼ���ò�����������
        if (allKucun > number) {
            allKucun -= yueBingArray[i].kucun;
            result -= yueBingArray[i].sale;
            //�����
            int kucunD = number - allKucun;
            //������۶�
            float d = (float) (kucunD * yueBingArray[i].single);
            //�ܽ��
            result = result + d;
            break;
        } else if (allKucun == number) {
            //������Ⱦ�ֱ�ӽ�����������
            break;
        }
    }
    printf("%.2f", result);
    return 0;
}

