void Nhap(SinhVien (&A)[MAXN], int &n){
    int i;
    cin >> n;
    for ( i = 0 ; i < n; i++){
        cin >> A[i].MASV;
        cin.ignore();
        cin.getline(A[i].HoTen,100);
        cin >> A[i].NgaySinh;
        cin >> A[i].GioiTinh >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
        A[i].DTB = (double) (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa)/3;
    }
}

void Xuat(SinhVien (&A)[MAXN], int n){
     for (int i = 0 ; i < n; i++){
        cout << A[i].MASV <<'\t'<< A[i].HoTen <<'\t'<< A[i].NgaySinh<< '\t'<< A[i].GioiTinh <<'\t' << setprecision(3)<< A[i].DiemToan <<'\t'<< A[i].DiemLy <<'\t'<<A[i].DiemHoa<<'\t'<< A[i].DTB <<'\n';
    }
}