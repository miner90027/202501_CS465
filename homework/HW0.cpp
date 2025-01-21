/*
 * Aleks McCormick
 * 2025/01/21
 * Spring 2025 CS 465 Computer & Network Security
 * My answers to Homework 0 problems
 */

/*----------------------------------------*/
/*--               HW0.0                --*/
/*----------------------------------------*/

// Homework Instructions: For this problem, just return the string "echo". (This is a reminder how NetRun works!)

// Simple function returning the string "echo"
std::string foo(void)
{
	return "echo";
}


/*----------------------------------------*/
/*--               HW0.1                --*/
/*----------------------------------------*/


// Homework Instructions: For this problem, you also need to return a string. But in this case, the string has been 'encrypted' using this code (which is laughably insecure!):

/*
// Provided encryption function
std::string foo(void) { 
	for (int i=0;i<(int)str.size();i++) {
		char c=str[i];
		c+=1;
		str[i]=c;
	}
	return str;
}
*/

// Decryption function
std::string str="Jg!zpv!dbo!sfbe!uijt-!zpv!dbo!hfu!b!hppe!kpc/";

std::string foo(void)
{
	std::string decrypted = "";
	
	for (int i = 0; i < (int)str.size(); i++) {
		char c = str[i];
		c -= 1;
		decrypted += c;
	}
	
	return decrypted;
}

/*----------------------------------------*/
/*--               HW0.2                --*/
/*----------------------------------------*/

// Homework Instructions: For this problem, the string you need to return has been 'encrypted' using this code:
/*
// Provided encryption function
std::string LAWLnor2(std::string str) { 
	for (int i=0;i<(int)str.size();i++) {
		char c=str[i];
		c+=(i^0xb^(i<<2)^(i>>2))&0x7;
		str[i]=c;
	}
	return str;
}
*/

// Decryption function
std::string str="Wnfwk#esf$vzeszlui%tq'gjy ocrigy1&!Sx#esf$wnizE";

std::string foo(void)
{
	std::string decrypted = "";
	
	for (int i = 0; i < (int)str.size(); i++) {
		char c = str[i];
		
		//c+= (i^0xb^(i<<2)^(i>>2))&0x7;
		c -= (i^0xb^(i<<2)^(i>>2))&0x7;
		
		decrypted += c;
	}
	
	return decrypted;
}

/*----------------------------------------*/
/*--               HW0.3                --*/
/*----------------------------------------*/

// Homework Instructions: The 'encryption' code now takes an integer key parameter, and we don't have the key value:
/*
// Provided encryption function
std::string LAWLxor3(std::string str,int key) { 
	for (int i=0;i<(int)str.size();i++) {
		char c=str[i];
		c+=(i^key^(i<<2)^(i>>2))&0x7;
		str[i]=c;
	}
	return str;
}
*/

// Decryption function. Used trial and error to find the key.
std::string str="Hovn!%[v|\"ouu{ ijh#g$lk|vvbgk#iozmltaykvu\"ftvhcp/";

std::string foo(void)
{
	std::string decrypted = "";
	
	int key = 5;
	
	for (int i = 0; i < (int)str.size(); i++) {
		char c = str[i];
		
		c -= (i^key^(i<<2)^(i>>2))&0x7;
		
		decrypted += c;
	}
	
	return decrypted;
}

/*----------------------------------------*/
/*--               HW0.4                --*/
/*----------------------------------------*/

// Homework Instructions: You're supposed to return a string here, but exactly which string I want is hidden in the HTML comments for this page.

std::string foo(void)
{
	// Not really that "hard" to find. lol
	return "Rosebud";
}

/*----------------------------------------*/
/*--               HW0.5                --*/
/*----------------------------------------*/

// Homework Instructions: You're supposed to return a string here, but exactly which string is accepted by the grading script (the file project/netrun/grade.sh under "Download this file as a .tar archive") is unknown.

std::string foo(void)
{
	// Not really impossible now is it.
	return "Reading the code: not that hard!";
}
