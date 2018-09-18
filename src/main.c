#include <stdio.h>
#include "dbPoint.h"
#include "dbVertex.h"
#include "dbEdge.h"
// #include "dbTriangle.h"
#include "dbSurface.h"

// #include "dbSegment.h"
// #include "dbFace.h"

int main(int argc, char *argv[]){

	dbSurface* surface = getSurface("points.txt","vertices.txt");
    
    printf("\nPoints\n");
	for(dbPoint* p = surface->Points; p != NULL; p=(dbPoint*)(p->hh.next)) {
        printf("%lf %lf %lf\n",p->x,p->y,p->z);
    }


    printf("\nVertices\n");
	for(dbVertex* v = surface->Vertices; v != NULL; v=(dbVertex*)(v->hh.next)) {
        printf("%.lf %.lf %.lf\n",v->v1,v->v2,v->v3);
    }

	return 0;
}
