%%
% 2. A5 = [1 2 3; 4 5 6; 7, 8, 9]
% a. Obtain B5 from A5 by two arithmetic operations: B5 = [16, 9 4; 1 0 1; 4 9 16].
% b. Obtain C5 from A5 and B5 by using relational logic (<, >) and arithmetic operations (+ 13): C5 =
% [13 13 13; 14 14 14; 14 13 13]

A5 = [1 2 3; 4 5 6; 7 8 9];

% Perform the arithmetic operations on A5 to obtain B5
B5 = (A5 - 5).^2;

% Display B5
disp('B5 = ');
disp(B5);

C5=zeros(3);
for i=1 :9
    if A5(i)<B5(i)
       C5(i)=13;
    else 
        C5(i)=14;
    end    
end 
disp('C5 = ');
disp(C5);

C5gpt = 13 + (A5 >= B5);
disp('C5gpt = ');
disp(C5gpt);
%Avoided the Loop: The loop has been replaced by a more efficient vectorized operation. 
% The expression A5 >= B5 produces a logical matrix,
% which contains 1 where the condition is true (i.e., A5 >= B5) and 0 where it's false.

%Direct Arithmetic Operation: By adding 13 + (A5 >= B5),
% the result is a matrix where each element is either 13 (if A5 < B5) or 14 (if A5 >= B5).
% This is done without needing an explicit loop