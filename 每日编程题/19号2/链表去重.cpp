#include<stdio.h>
#include<math.h>
int main(){

	int Number[100000] = {}, Next[100000] = {}, Abs[100000] = {};
	int index, n, i, head, node = -1, next, fhead = -1, fnode;
	
	scanf("%d%d", &head, &n);
	for(i=0; i<n; i++){
		scanf("%d", &index);
		scanf("%d", &Number[index]);
		scanf("%d", &Next[index]);
	}
	
	next = head;
	while(next != -1){
		if(Abs[abs(Number[next])] == 1){
			// next ��ɾ����ת�Ƶ������� 
			if(fhead == -1){
				fhead = next;
				fnode = next;
				next = Next[next];
				continue;
			}
			Next[fnode] = next;
			fnode = next;
			// ����������ɾ�� next �ڵ� 
			Next[node] = Next[next];
		}else{
			// �ڵ㱣������¼�� Abs[] 
			if(node == -1){
				Abs[abs(Number[next])] = 1;
				node = next;
				next = Next[next];
				continue;
			}
			Next[node] = next;
			Abs[abs(Number[next])] = 1;
			node = next;
		}
		next = Next[next];
		
	}
	Next[fnode] = -1;
	Next[node] = -1;
	
	// ��������� 
	node = head;
	while(Next[node] != -1){
		printf("%05d %d %05d\n", node, Number[node], Next[node]);
		node = Next[node];
	}
	printf("%05d %d %d\n", node, Number[node], Next[node]);
	
	// ��������� 
	if(fhead == -1){	// ���������Ե�
		return  0; 
	}
	fnode = fhead;
	while(Next[fnode] != -1){
		printf("%05d %d %05d\n", fnode, Number[fnode], Next[fnode]);
		fnode = Next[fnode];
	}
	printf("%05d %d %d\n", fnode, Number[fnode], Next[fnode]);
	
	return 0;
} 

