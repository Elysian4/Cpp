/*
Since very long time shaktiman and kilwish have been fighting with each other but the fight never came to end . So finally I came to rescue . I decided that the result of the fight will be decided by a mathematical game, in which I will write a number (N) . Kilwish and shaktiman will play the game alternatively and each of them would subtract a number(n) [n is less than N] such that N modulo n gives zero. The game is repeted turn by turn until the one, who now cannot make a further move looses the game

Shaktiman being weak at mathematics asks you for help, whether or not he can win in that particular case. If Shaktimaan wins that game then print "Thankyou Shaktiman" otherwise print "Sorry Shaktiman".The game begins with shaktimaan playing first move.It is well understood that both of them will make moves in optimal way.

INPUT
Input contains test cases t (< 10^5) and followed by t numbers (1 <= N <= 10^6 ).

OUTPUT
If Shaktimaan wins that game then print "Thankyou Shaktiman" otherwise print "Sorry Shaktiman".

Sample Input:
2
212
424

Sample Output:
Thankyou Shaktiman
Thankyou Shaktiman










  */
int main(){
 
 
	int t;
	cin >> t;
 
	while(t--){
 
		long double x1, y1, r1, x2, y2, r2, d;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
 
 
		d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
		d = sqrtl(d);
 
		if( d + r1 < r2 || d + r2 < r1  ){
			//inside check
			cout << "I"<<endl;
		}else if( r1 - r2 == d || r2 - r1 == d ){
			cout << "E"<<endl;
		}else{
			cout << "O"<<endl;
		}
 
	}
 
	return 0;
}
