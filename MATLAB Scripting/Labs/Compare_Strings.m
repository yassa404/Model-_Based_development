clear
clc
% strcmp : Compare strings
% strcmpi : Compare strings (case insensitive)
% strncmp : Compare first n characters if strings (case sensitive)
% strncmpi : Compare first n characters if strings (case insensitive)


% Strings for comparison
str1='hello';
str2='HELLO';
str3='WORLD';
str4='hello';
singlestr='apple';
str5='hello world';
str6='HELLO world';
% Arrays for comparison
arr1={'apple','banana'};
arr2={'Apple','banana'};
arr3={'apple','banana'};


%% strcmp
isNotEqual = strcmp(str1,str4);  %logical (1) as they are equal  
isEqual= strcmp(str2, str1);     %will be zero as (case sensitive)
disp(['strl (' str1 ') and str4 (' str4 ') are equal ' ,num2str(isNotEqual)])
disp(['str2 (' str2 ') and str1 (' str1 ') are equal ' ,num2str(isEqual) '  strcmp is case sensitive '])

%compare array
isNotEqualarr=strcmp(arr1,arr2);
isEqualarr=strcmp(arr1,arr3);
disp(['arr1 (' strjoin(arr1,' ') ') and arr2 (' strjoin(arr2,' ') ') are equal ' ,num2str(isNotEqualarr)])
disp(['arr1 (' strjoin(arr1,' ') ') and arr3 (' strjoin(arr3,' ') ') are equal ' ,num2str(isEqualarr)])

%compare array to single string
cmpArrStr=strcmp(arr1,singlestr);
disp(['arr1 (' strjoin(arr1,' ') ') and single string (' singlestr ') are equal ' ,num2str(cmpArrStr)])

%pasword application for tha above
username = 'admin';
password = 'secure123' ;
if strcmp(username, 'admin' ) && strcmp(password, 'secure123' )
    disp( ['Access granted' newline ])
else
    disp([ 'Access denied' newline ]);
end


%% strcmpi
isNotEqualstrcmpi = strcmpi(str1,str4);  %logical (1) as they are equal  
isEqualstrcmpi= strcmpi(str2, str1);     % will be one as it is case insensitive
disp(['strl (' str1 ') and str4 (' str4 ') are equal ' ,num2str(isNotEqualstrcmpi)])
disp(['str2 (' str2 ') and str1 (' str1 ') are equal ' ,num2str(isEqualstrcmpi) newline 'strcmpi is case insensitive ' newline])

%% strncmp
isNotEqualstrncmp = strncmp(str5,str6,5);  %logical (0) as they are not equal  

disp(['str5 (' str5 ') and str6 (' str6 ') are equal ' ,num2str(isNotEqualstrncmp) newline 'strncmp is case sensitive ' newline])


%% strncmpi
isEqualstrncmp = strncmpi(str5,str6,5);  %logical (1) as they are equal  

disp(['str5 (' str5 ') and str6 (' str6 ') are equal ' ,num2str(isEqualstrncmp) newline 'strncmpi is case insensitive ' newline ])

