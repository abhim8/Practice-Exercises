

	/* A)	Print a Rectangle
	Draw a rectangle which has a height of H cm and a width of W cm. Draw a 1-cm square by single '#'.

	Input
	The input consists of multiple datasets. Each dataset consists of two integers H and W separated by a single space.

	The input ends with two 0 (when both H and W are zero).

	Output
	For each dataset, print the rectangle made of H × W '#'.

	Print a blank line after each dataset.

	Constraints
	1 ≤ H ≤ 300
	1 ≤ W ≤ 300
	Sample Input
	3 4
	5 6
	2 2
	0 0
	Sample Output
	####
	####
	####

	######
	######
	######
	######
	######

	##
	##
	*/
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	unsigned int H,W;
	while(cin>>H>>W){
		if(H!=0 && W!=0){
			for(int i=0;i<H;i++){
				for(int j=0;j<W;j++){
					cout<<"#";
				}
				cout<<"\n";
			}
				cout<<"\n";
		}
	}
	return 0;
	}
	
	/*
	B)	Print a Chessboard
	Draw a chessboard which has a height of H cm and a width of W cm. For example, the following figure shows a chessboard which has a height of 6 cm and a width of 10 cm.

	#.#.#.#.#.
	.#.#.#.#.#
	#.#.#.#.#.
	.#.#.#.#.#
	#.#.#.#.#.
	.#.#.#.#.#
	Note that the top left corner should be drawn by '#'.

	Input
	The input consists of multiple datasets. Each dataset consists of two integers H and W separated by a single space.

	The input ends with two 0 (when both H and W are zero).

	Output
	For each dataset, print the chessboard made of '#' and '.'.

	Print a blank line after each dataset.

	Constraints
	1 ≤ H ≤ 300
	1 ≤ W ≤ 300

	Sample Input
	3 4
	5 6
	3 3
	2 2
	1 1
	0 0

	Sample Output
	#.#.
	.#.#
	#.#.

	#.#.#.
	.#.#.#
	#.#.#.
	.#.#.#
	#.#.#.

	#.#
	.#.
	#.#

	#.
	.#

	#
	*/
	
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	unsigned int H,W;
	while(cin>>H>>W){
		if(H!=0 && W!=0){
			for(int i=0;i<H;i++){
				for(int j=0;j<W;j++){
					if((i+j)%2 == 0)
					cout<<"#";
					else
					cout<<".";
				}
				cout<<"\n";
			}
				cout<<"\n";
		}
	}
	return 0;
	}
	
	
	/*
	C)	Toggling Cases
	Write a program which converts uppercase/lowercase letters to lowercase/uppercase for a given string.

	Input
	A string is given in a line.

	Output
	Print the converted string in a line. Note that you do not need to convert any characters other than alphabetical letters.

	Constraints
	The length of the input string < 1200

	Sample Input
	fAIR, LATER, OCCASIONALLY CLOUDY.

	Sample Output
	Fair, later, occasionally cloudy.
	*/
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	string s;
	while(getline(cin,s)){
		for (int i=0; i<s.length(); i++){
			if(s[i]>='A' && s[i]<='Z')
			s[i] = tolower(s[i]);
			else if(s[i]>='a' && s[i]<='z')
			s[i] = toupper(s[i]);
			else
			cout<<"";
		}
		cout<<s<<endl;
	}
	return 0;
	}
	
	
	/*
	D)	Print a Frame
	Draw a frame which has a height of H cm and a width of W cm. For example, the following figure shows a frame which has a height of 6 cm and a width of 10 cm.

	##########
	#........#
	#........#
	#........#
	#........#
	##########

	Input
	The input consists of multiple datasets. Each dataset consists of two integers H and W separated by a single space.

	The input ends with two 0 (when both H and W are zero).

	Output
	For each dataset, print the frame made of '#' and '.'.

	Print a blank line after each dataset.

	Constraints
	3 ≤ H ≤ 300
	3 ≤ W ≤ 300

	Sample Input
	3 4
	5 6
	3 3
	0 0

	Sample Output
	####
	#..#
	####

	######
	#....#
	#....#
	#....#
	######

	###
	#.#
	###
	*/
	
	
	#include <bits/stdc++.h> 
	using namespace std; 
	int main() {
	int n,m;
	while(cin>>n>>m){
		if(n!=0 && m!=0) {
			for (int i = 0; i < n; i++) { 
				for (int j = 0; j < m; j++) { 
					if (i == 0 || i == n || j == 0 || j == m || i == n-1 || j == m-1)		 
						cout << "#";			 
					else
						cout << "."; 
				} 
			cout << endl; 
			} 
			cout << endl; 
		}
	}
	return 0; 
	}



	/*
	E)	Second Order Statistics
	Once Bob needed to find the second order statistics of a sequence of integer numbers. Lets choose each number from the sequence exactly once and sort them. The value on the second position is the second order statistics of the given sequence. In other words it is the smallest element strictly greater than the minimum. Help Bob solve this problem.

	Input
	The first input line contains integer n (1 ≤ n ≤ 100) — amount of numbers in the sequence. The second line contains n space-separated integer numbers — elements of the sequence. These numbers don't exceed 100 in absolute value.

	Output
	If the given sequence has the second order statistics, output this order statistics, otherwise output NO.

	Example1
	Input
	4
	1 2 2 -4

	Output
	1
	
	Example2
	Input
	5
	1 2 3 1 1
	
	Output
	2
	*/
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
    	int n;
    	while(cin>>n) {
    	int a[101];    
	    for (int i=0; i<n; i++) 
	        cin>>a[i];
	    sort(a,a+n);
	    int temp1 = *min_element(a, a+n);
	    int temp2 = temp1;
	    for (int i=0; i<n; i++) {
	        if (a[i] > temp1) {
	            if (temp2 == temp1 || a[i] < temp2) {
	                temp2 = a[i];
	            }
	        }
	    }
	    if (temp2 != temp1)
	    cout<<temp2<<endl;
	    else
	    cout<<"NO\n";
	}
    	return 0;
	}
	
	
	/*
	F)	Min, Max and Sum
	Write a program which reads a sequence of n integers ai(i=1,2,...n), and prints the minimum value, maximum value and sum of the sequence.

	Input
	In the first line, an integer n is given. In the next line, n integers ai are given in a line.

	Output
	Print the minimum value, maximum value and sum in a line. Put a single space between the values.

	Constraints
	0<n≤10000
	−1000000≤ai≤1000000

	Sample Input
	5
	10 1 5 4 17

	Sample Output
	1 17 37
	*/
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	unsigned long int n;
	while(cin >> n){
		long long int arr[n], sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		sort(arr, arr+n);
		cout<<arr[0]<<" "<<arr[n-1]<<" "<<sum<<endl;	
	}
	return 0;
	}
	
	
	/*
	 G)	Hulk
	 Dr. Bruce Banner hates his enemies (like others don't). As we all know, he can barely talk when he turns into the incredible Hulk. That's why he asked you to help him to express his feelings.

	Hulk likes the Inception so much, and like that his feelings are complicated. They have n layers. The first layer is hate, second one is love, third one is hate and so on...

	For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.

	Please help Dr. Banner.

	Input
	The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.

	Output
	Print Dr.Banner's feeling in one line.

	Example1
	Input
	1
	
	Output
	I hate it
	
	Example2
	Input
	2
	
	Output
	I hate that I love it
	
	Example3
	Input
	3
	
	Output
	I hate that I love that I hate it
	*/
	
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	int N;
	while(cin>>N) {
		cout<<"I hate ";
		for (int i = 1; i < N; i++)
			printf("that I %s ", i & 1 ? "love" : "hate");
		cout<<"it\n";
		}
	return 0;
	}
	
	
	/*
	H)	cAPS lOCK
	wHAT DO WE NEED cAPS LOCK FOR?

	Caps lock is a computer keyboard key. Pressing it sets an input mode in which typed letters are capital by default. If it is pressed by accident, it leads to accidents like the one we had in the first passage.

	Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

	either it only contains uppercase letters;
	or all letters except for the first one are uppercase.
	In this case we should automatically change the case of all letters. For example, the case of the letters that form words "hELLO", "HTTP", "z" should be changed.

	Write a program that applies the rule mentioned above. If the rule cannot be applied, the program should leave the word unchanged.

	Input
	The first line of the input data contains a word consisting of uppercase and lowercase Latin letters. The word's length is from 1 to 100 characters, inclusive.

	Output
	Print the result of the given word's processing.

	Example1
	Input
	cAPS
	
	Output
	Caps
	
	Example2
	Input
	Lock
	
	Output
	Lock
	*/
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
    string s;
    bool check = true;
    while(cin>>s){
		for(int i=1; i<s.length(); i++) {
			if(s[i]>='a' && s[i]<='z') {
				check = false;
				break;
            }
    	}
    	if(check==true){
            if(s[0]>='A' && s[0]<='Z')
            s[0] = s[0]+32;
            else
            s[0] = s[0]-32;
            for(int j=1; j<s.length(); j++) {
				s[j] = s[j]+32;
			}
    	}
    cout<<s<<endl;
	}
    return 0;
	}
	
	
	/*
	I)	Where is the Marble?
	Raju and Meena love to play with Marbles. They have got a lot of marbles with numbers written on them. At the beginning, Raju would place the marbles one after another in ascending order of the numbers
	written on them. Then Meena would ask Raju to find the first marble with a certain number. She would count 1...2...3. Raju gets one point for correct answer, and Meena gets the point if Raju fails. After some
	fixed number of trials the game ends and the player with maximum points wins. Today it’s your chance to play as Raju. Being the smart kid, you’d be taking the favor of a computer. But don’t underestimate
	Meena, she had written a program to keep track how much time you’re taking to give all the answers. So now you have to write a program, which will help you in your role as Raju.
	
	Input
	There can be multiple test cases. Total no of test cases is less than 65. Each test case consists begins
	with 2 integers: N the number of marbles and Q the number of queries Mina would make. The next
	N lines would contain the numbers written on the N marbles. These marble numbers will not come
	in any particular order. Following Q lines will have Q queries. Be assured, none of the input numbers
	are greater than 10000 and none of them are negative.

	Input is terminated by a test case where N = 0 and Q = 0.

	Output
	For each test case output the serial number of the case.
	For each of the queries, print one line of output. The format of this line will depend upon whether or not the query number is written upon any of the marbles. The two different formats are described
	below:
	
	• ‘x found at y’, if the first marble with number x was found at position y. Positions are numbered
	1, 2, . . . , N.
	• ‘x not found’, if the marble with number x is not present.
	Look at the output for sample input for details.
	
	Sample Input
	4 1
	2
	3
	5
	1
	5
	5 2
	1
	3
	3
	3
	1
	2
	3
	0 0
	
	Sample Output
	CASE# 1:
	5 found at 4
	
	CASE# 2:
	2 not found
	3 found at 3
	*/
	
	/*
	K) 	Array Simulation 
	I am retired now, so, no work, a lot of time to spare and a lot of problems to share. Well, finally I am thinking of the old days when I was a solver. But now I am stuck with a tough problem that I want to share with you.

	Given an array and some operations on the array, you have to print the final state of the array. Say, the array is a[], the size is n and indexed from 0 to n-1.

	The operations are:

	1.      'S D'. D is an integer. D will be added with all the elements of the array.

	2.      'M D'. D is an integer. All the elements of the array will be multiplied by D.

	3.      'D K'. K is a non zero integer. All the elements of the array will be divided by K (integer division).

	4.      'R'. It means reverse. It will reverse the elements of the array.

	5.      'P Y Z'. Y and Z are integers. It will swap the elements a[Y] and a[Z].

	Input
	Input starts with an integer T (≤ 100), denoting the number of test cases.

	Each case contains two integers n (1 ≤ n ≤ 100) and m (0 ≤ m ≤ 101). The next line contains n space separated integers denoting the elements of the array. Each of the next m lines contains an operation defined above. You can assume that no operation will overflow/underflow the 32 bit signed integer range or access any invalid array reference.

	Output
	For each case, print the case number first. In the next line you have to print the elements of the array. Two elements should be separated by a single space. There should be no trailing space after the last integer of the array.

	Sample Input
	2
	5 3
	1 2 3 4 5
	P 0 1
	S 1
	R
	4 2
	2 7 8 1
	M 10
	D 5

	Sample Output
	Case 1:
	6 5 4 2 3
	Case 2:
	4 14 16 2
	*/
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	int a[1000],x,y, T, n, m, count;
	char operation;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> n;
		cin >> m;
		count = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++) {
			cin >> operation;
				switch(operation) {
					case 'D': 
						cin >> x;
						for (int i = 0; i < n; i++) 
							a[i] /= x;
							break;
					case 'M': 
						cin >> x;
						for (int i = 0; i < n; i++) 
						a[i] *= x;
						break;
					case 'S': 
						cin >> x;
						for (int i = 0; i < n; i++) 
							a[i] += x;
							break;
					case 'R': 
						for (int i = 0, j = n-1; i < j; i++, j--) 
							swap(a[i], a[j]);
							break;
					case 'P': 
						cin >> x;
						cin >> y;
						swap(a[x], a[y]);
						break;
			}
		}
		cout<<"Case "<<i<<":\n"<<a[0];
		for (int i = 1; i < n; i++) {
			cout<<" "<<a[i];
		}
		cout<<"\n";
	}
	return 0;
	}
	
	/*
	M)	Lineland Mail
	All cities of Lineland are located on the Ox coordinate axis. Thus, each city is associated with its position x i — a coordinate on the Ox axis. No two cities are located at a single point.

	Lineland residents love to send letters to each other. A person may send a letter only if the recipient lives in another city (because if they live in the same city, then it is easier to drop in).

	Strange but true, the cost of sending the letter is exactly equal to the distance between the sender's city and the recipient's city.

	For each city calculate two values ​​ min i and max i, where min i is the minimum cost of sending a letter from the i-th city to some other city, and max i is the the maximum cost of sending a letter from the i-th city to some other city

	Input
	The first line of the input contains integer n (2 ≤ n ≤ 105) — the number of cities in Lineland. The second line contains the sequence of n distinct integers x 1, x 2, ..., x n ( - 109 ≤ x i ≤ 109), where x i is the x-coordinate of the i-th city. All the x i's are distinct and follow in ascending order.

	Output
	Print n lines, the i-th line must contain two integers min i, max i, separated by a space, where min i is the minimum cost of sending a letter from the i-th city, and max i is the maximum cost of sending a letter from the i-th city.

	Example1
	Input
	4
	-5 -2 2 7
	
	Output
	3 12
	3 9
	4 7
	5 12
	
	Example2
	Input
	2
	-1 1
	
	Output
	2 2
	2 2
	*/
	
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
    	int n,i,minimum,maximum;
    	cin>>n;
    	int a[n];
    	for(i=0; i<n; i++)
    	cin>>a[i];
    	cout<<(a[1]-a[0])<<" "<<(a[n-1]-a[0])<<endl;
    	for(i=1; i<n-1; i++) {
        minimum=min((a[i+1]-a[i]),(a[i]-a[i-1]));
        maximum=max((a[i]-a[0]),(a[n-1]-a[i]));
        cout<<minimum<<" "<<maximum<<endl;
    	}
    	cout<<(a[n-1]-a[n-2])<<" "<<(a[n-1]-a[0]);
    	return 0;
	}
	
	
	/*
	N)	Next Round
	"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

	A total of n participants took part in the contest ( n≥k), and you already know their scores. Calculate how many participants will advance to the next round.

	Input
	The first line of the input contains two integers n and k (1≤k≤n≤50) separated by a single space.

	The second line contains n space-separated integers a 1,a 2,...,a n (0≤a i≤100), where a i is the score earned by the participant who got the i-th place. 
	The given sequence is non-increasing (that is, for all i from 1 to n-1 the following condition is fulfilled: a i≥a i+1).

	Output
	Output the number of participants who advance to the next round.

	Example1
	Input
	8 5
	10 9 8 7 7 7 5 5
	
	Output
	6
	
	Example2
	Input
	4 2
	0 0 0 0
	
	Output
	0
	
	Note
	1) In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.
	2) In the second example nobody got a positive score.
	*/
	
	#include<bits/stdc++.h>
	using namespace std;
	int main() {
    int n,k,a[50];
    while(cin>>n>>k){
    	int sum=0;
    	for(int i=0; i<n; i++) 
	    	cin>>a[i];
	    for(int i=0; i<n; i++) {
        	if(a[i]>=a[k-1]&&a[i]>0)
	            sum++;
	    }
    	cout<<sum<<endl;
    }
    return 0;
	}
	
	
	/*
	O)	In Search of an Easy Problem
	When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked n people about their opinions. Each person answered whether this problem is easy or hard.

	If at least one of these n people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

	Input
	The first line contains a single integer n (1≤n≤100) — the number of people who were asked to give their opinions.

	The second line contains n integers, each integer is either 0 or 1. If i-th integer is 0, then i-th person thinks that the problem is easy; if it is 1, then i-th person thinks that the problem is hard.

	Output
	Print one word: "EASY" if the problem is easy according to all responses, or "HARD" if there is at least one person who thinks the problem is hard.

	You may print every letter in any register: "EASY", "easy", "EaSY" and "eAsY" all will be processed correctly.

	Example1
	Input
	3
	0 0 1

	Output
	HARD
	
	Example2
	Input
	1
	0
	
	Output
	EASY
	
	Note
	1) In the first example the third person says it's a hard problem, so it should be replaced.
	2) In the second example the problem easy for the only person, so it doesn't have to be replaced.
	*/
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	int n;
	while(cin>>n){
		int arr[n],sum=0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			sum += arr[i];
		}
		if(sum ==0)
		cout<<"EASY\n";
		else
		cout<<"HARD\n";	
	}
	return 0;
	}
	
	
	/*
	Q)	Spreadsheet
	Your task is to perform a simple table calculation.

	Write a program which reads the number of rows r, columns c and a table of r × c elements, and prints a new table, which includes the total sum for each row and column.

	Input
	In the first line, two integers r and c are given. Next, the table is given by r lines, each of which consists of c integers separated by space characters.

	Output
	Print the new table of (r+1) × (c+1) elements. Put a single space character between adjacent elements. For each row, print the sum of it's elements in the last column. For each column, print the sum of it's elements in the last row. Print the total sum of the elements at the bottom right corner of the table.

	Constraints
	1 ≤ r, c ≤ 100
	0 ≤ an element of the table ≤ 100

	Sample Input
	4 5
	1 1 3 4 5
	2 2 2 4 5
	3 3 0 1 1
	2 3 4 4 6

	Sample Output
	1 1 3 4 5 14
	2 2 2 4 5 15
	3 3 0 1 1 8
	2 3 4 4 6 19
	8 9 9 13 17 56
	*/
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	int r,c;
	while(cin>>r>>c) {
		int arr[r][c],row_sum=0,col_sum=0,sum=0;
		for (int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin>>arr[i][j];
			}
		}
		for (int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cout<<arr[i][j]<<" ";
				row_sum += arr[i][j];
			}
			cout<<row_sum<<endl;
			row_sum =0;
		}	
		for(int j=0; j<c; j++){
			for (int i=0; i<r; i++){
				col_sum += arr[i][j];
			}
			sum += col_sum;
			cout<<col_sum<<" ";
			col_sum =0;
		}
		cout<<sum<<endl;
	}
	return 0;
	}


	/*
	R)	Matrix Vector Multiplication
	Write a program which reads a n×m matrix A and a m×1 vector b, and prints their product Ab.

	A column vector with m elements is represented by the following equation.
	b=b1,b2..bm
	
	A n×m matrix with m column vectors, each of which consists of n elements, is represented by the following equation.

	A=a11 a12 a1m
	  a21 a22 a2m
	  .	   .   .
	  .	   .   .
	  an1 an2 anm
	
	i-th element of a m×1 column vector b is represented by bi (i=1,2,...,m), and the element in i-th row and j-th column of a matrix A is represented by aij (i=1,2,...,n, j=1,2,...,m).

	The product of a n×m matrix A and a m×1 column vector b is a n×1 column vector c, and ci is obtained by the following formula:

	ci=∑j=1maijbj=ai1b1+ai2b2+...+aimbm
	
	Input
	In the first line, two integers n and m are given. In the following n lines, aij are given separated by a single space character. In the next m lines, bi is given in a line.

	Output
	The output consists of n lines. Print ci in a line.

	Constraints
	1≤n,m≤100
	0≤bi,aij≤1000
	
	Sample Input
	3 4
	1 2 0 1
	0 3 0 1
	4 1 1 0
	1
	2
	3
	0
	
	Sample Output
	5
	6
	9
	*/
	
	#include<bits/stdc++.h>
	using namespace std;
	int main() {
		int n,m,a[1000][1000],b[1000],c[1000],z=0;
		cin>>n>>m;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin>>a[i][j];
			}
		}
		for(int i=0; i<m; i++) 
			cin>>b[i];
		for(int i=0; i<n; i++) {
			for(int j=0;j<m;j++) {
					c[i] += b[z]*a[i][j];
					z++;
			}
			cout<<c[i]<<endl;
			z=0;
		}
	return 0;
	}
	
	
	
	/*
	S)	Counting Characters
	Write a program which counts and reports the number of each alphabetical letter. Ignore the case of characters.

	Input
	A sentence in English is given in several lines.

	Output
	Prints the number of alphabetical letters in the following format:

	a : The number of 'a'
	b : The number of 'b'
	c : The number of 'c'
	  .
	  .
	z : The number of 'z'

	Constraints
	The number of characters in the sentence < 1200

	Sample Input
	This is a pen.

	Sample Output
	a : 1
	b : 0
	c : 0
	d : 0
	e : 1
	f : 0
	g : 0
	h : 1
	i : 2
	j : 0
	k : 0
	l : 0
	m : 0
	n : 1
	o : 0
	p : 1
	q : 0
	r : 0
	s : 2
	t : 1
	u : 0
	v : 0
	w : 0
	x : 0
	y : 0
	z : 0
	*/
	
	
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	string s;
	int A[26]={0};
	while(getline(cin,s)) {
		for(int i=0; i<26; i++) {
			char a=i+97;
			int count=0;
			for(int j=0; j<s.length(); j++) {
				if(isalpha(s[j])) {
					char check=tolower(s[j]);
					if(check==a) {
						count++;
					}
				}
			}
			A[i] = A[i]+count;	
		}
	}
	for(int i=0; i<26; i++) 
		cout<<char(i+97)<<" "<<":"<<" "<<A[i]<<endl;
		
	return 0;
	}
	
	
