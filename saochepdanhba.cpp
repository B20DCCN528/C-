int main () {
	SinhVien s[1000] ;
	ifstream fp;
	int i =0;
//	cout<<tach("Ngay 15/11/2021");
	fp.open("SOTAY.txt",ios::in);
	string a,b;	//fp.ignore();
	char ss[5];
	while (getline (fp,a)) {
	 	fp.ignore();
		b= a.substr(0,4);
		if (b=="Ngay") {
			getline(fp,s[i].ten); //fp.ignore();
			fp>>s[i].sdt;
			fp.getline(ss,3);
			fp.ignore();
			s[i].ngay= tach(a);
			i++;
		} else {
			fp>>s[i].sdt;
			fp.ignore();
			fp.getline(ss,3);
			s[i].ten=a;
			s[i].ngay= s[i-1].ngay;
			i++;
		}
	}
	fp.close();
	sort(s,s+i ,cmp);
	ofstream fp1;
	fp1.open("DIENTHOAI.txt",ios::out);
	for (int j = 0 ; j < i ; j++) {
		fp1<<s[j].ten<<": "<<s[j].sdt<<" "<<s[j].ngay<<endl;
	}
	fp1.close();
}
