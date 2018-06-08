
int reverse (int a) {
	int reverse = 0;
	if (a > 0) {
		while (a > 0) {
			reverse = reverse * 10 + a % 10;
			a = (a - a % 10) / 10;
		}
	} else {
		while (a < 0) {
			reverse = reverse * 10 + a % 10;
			a = (a + a % 10) / 10;
		}
	}
	std::cout<<reverse<<"\t is revesed number"<<std::endl;
	return reverse;
}

int main () {
	int number;
	std::cout<<"Pleace inset number for reverse"<<std::endl;
	std::cin>> number;
	reverse(number);

}
