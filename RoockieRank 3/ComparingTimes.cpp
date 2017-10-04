#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


string timeCompare(string t1, string t2){
	string answer;
	string am_pm1 = t1.substr(5,2);
	string am_pm2 = t2.substr(5, 2);
	
	if (((am_pm1 == "AM") && (am_pm2 == "AM")) || ((am_pm1 == "PM") && (am_pm2 == "PM"))){					//if t1 & t2 are AM or PM
		int hours1 = stoi(t1.substr(0, 2));
		int hours2 = stoi(t2.substr(0, 2));
		if (hours1 == 12 && hours2 != 12)
			answer = "First";
		else if (hours1 != 12 && hours2 == 12)
			answer = "Second";
		else if (hours1 > hours2){
			answer = "Second";
		}
		else if (hours1 < hours2){
			answer = "First";
		}
		else{
			int mints1 = stoi(t1.substr(3, 2));
			int mints2 = stoi(t2.substr(3, 2));
			if (mints1 > mints2)
				answer = "Second";
			else
				answer = "First";
		}
	}
	else if (am_pm1 == "AM"){		//if only t1 is AM
		answer = "First";
	}
	else if (am_pm2 == "AM"){		//if only t2 is AM
		answer = "Second";
	}
	return answer;
}

int main() {
	int q;
	cin >> q;
	for (int a0 = 0; a0 < q; a0++){
		string t1;
		string t2;
		cin >> t1 >> t2;
		string result = timeCompare(t1, t2);
		cout << result << endl;
	}
	return 0;
}
