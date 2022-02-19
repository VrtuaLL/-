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
			// next 需删除，转移到副链表 
			if(fhead == -1){
				fhead = next;
				fnode = next;
				next = Next[next];
				continue;
			}
			Next[fnode] = next;
			fnode = next;
			// 从主链表中删除 next 节点 
			Next[node] = Next[next];
		}else{
			// 节点保留，记录到 Abs[] 
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
	
	// 输出主链表 
	node = head;
	while(Next[node] != -1){
		printf("%05d %d %05d\n", node, Number[node], Next[node]);
		node = Next[node];
	}
	printf("%05d %d %d\n", node, Number[node], Next[node]);
	
	// 输出副链表 
	if(fhead == -1){	// 第三个测试点
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

