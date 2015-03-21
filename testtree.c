# include <stdio.h>
# include <malloc.h>

typedef struct Two
{
        int node;
        struct Two *Left;
        struct Two *Right;
}TwoNode;

int Inset(TwoNode *&p,int k);
void QianXu(TwoNode *p);
void ZhongXu(TwoNode *p);
void HouXu(TwoNode *p);
void QingChu(TwoNode *p);

int main()
{
        int n;
        int inputn,input1;
        int jishu;
        input1=100101010;
        TwoNode *Head;
        while(1)
        {
        Head=NULL;
        jishu=0;
        scanf("%d",&n);
        printf("\n");
    while(jishu<n)
        {
        scanf("%d",&inputn);
                printf(" ");
                if(0!=Inset(Head,inputn))
                        jishu++;
        }
        printf("\n");
        QianXu(Head);
        printf("\n");
        ZhongXu(Head);
        printf("\n");
        HouXu(Head);
        printf("\n");
        printf("是否继续？按1退出，按任意键继续!");
        scanf("%d",&input1);
        if(1==input1) return 0;
        printf("\n");
        QingChu(Head);
        }
}

int Inset(TwoNode *&p,int k)
{
        if(p==NULL)
        {
                p=(TwoNode *)malloc(sizeof(TwoNode));
                p->node=k;
                p->Left=p->Right=NULL;
                return 1;
        }
        else if (k==p->node)  return 0;
        else if (k<p->node) return Inset(p->Left,k);
        else return Inset(p->Right,k);
}

void QianXu(TwoNode *p)
{
        if(p!=NULL)
        {
                printf("%d",p->node);
                printf(" ");
            QianXu(p->Left);
                QianXu(p->Right);
        }
}

void ZhongXu(TwoNode *p)
{
        if(p!=NULL)
        {
                ZhongXu(p->Left);
                printf("%d",p->node);
                printf(" ");
                ZhongXu(p->Right);
        }
}

void HouXu(TwoNode *p)
{
        if(p!=NULL)
        {
                HouXu(p->Left);
                HouXu(p->Right);
                printf("%d",p->node);
                printf(" ");
        }
}

void QingChu(TwoNode *p)
{
        if(p!=NULL)
        {
                QingChu(p->Left);
                QingChu(p->Right);
                free(p);
        }
}
