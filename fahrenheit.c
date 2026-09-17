int main(){
	
	//declare variables 
	float fahrenheit;
	float celsius;

	//output: ask for the temperature in Fahrenheit 
	printf("Enter temperature in Fahrenheit: ");

	//input: temperature in Fahrenheit 
	scanf("%.2f", &fahrenheit);

	//process: convert Fahrenheit into Celsius 
	celsius = (fahrenheit - 32) * 5 / 9;

	//output: temperature in Celsius 
	printf("Temperature in Celsius: %.2f", celsius);
	
	return 0;
	
}