#include<iostream> 
using namespace std;
int i;
typedef struct {
	
};
typedef struct arcbox{
	int tailvex;
	int headvex;
	arcbox *hlink;
	arcbox *tlink;
	infotype *info;
}arcbox;
typedef struct vnode{
	vertextype data;
	arcbox *firstin;
	arcbox *firstout;
}vnode;
typedef struct edgebox{
	int ivex;
	int jvex;
	edgebox *ilink;
	edgebox *jlink;
	infotype *info;
}edgebox;4
creatgraph(g){
	cin>>g.vexnum>>a.arcnum;
	for(i=0;i<g;i++){
		cin>> 
	}
}
