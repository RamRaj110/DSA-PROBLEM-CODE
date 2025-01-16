// armstrong - A number is called Armstrong number if it is equal to the sum of the cubes of its own digits.


bool checkArmstrong(int n){
	
	int ans = 0;
	int size = log10(n) + 1;// find size of number
	int orignal = n;

	if(n == 1) return  true;

	while(n > 0){
		int mod = n % 10;
		int result = pow(mod,size);
		ans = ans + result;
		n = n / 10;
	}
	return ans == orignal ? true: false;
}
