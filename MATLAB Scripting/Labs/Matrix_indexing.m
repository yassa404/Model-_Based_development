% Matrix indexing 
%% row colum scbscripting
a=[1 2 3; 4 5 6];
b=a(2,1);
%% Linear Indexingdd
Matrixx=[1 4 7;2 5 8;3 6 9];
LinearIndexing=Matrixx(8);
%% Converting
%Converting row-column subscripts to linear indexing
linearindexing=sub2ind(size(Matrixx),2,2)
%Converting linear indexing to row-column subscripts
[r c]=ind2sub(size(Matrixx),8)
%% Multiple elements can be accessed using colon operator:
colon=Matrixx(1:3,3)
row=Matrixx(1,1:3)
ColonRow=Matrixx(1:2,1:3)
%% One Array as the index into another array
B=[1 2 3 6];
OneArrayAsTheIndex=Matrixx(B)
%% All elements of a Row or Column
Matrixx(:,2)
Matrixx(2,:)
Matrixx(:)
%% The end keyword
Matrixx(1:2,end)
Matrixx(end,end)
%% using Logicals in array Indexing Array
% act as Linear Indexingdd
logicarray1= logical([1 0 1])
Matrixx(logicarray1)

logicarray2=logical([1 0 1;1 1 1;0 0 1])
Matrixx(logicarray2)
