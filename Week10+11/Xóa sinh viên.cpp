void Nhap(char (&hoTenCanXoa)[100]){
     cin.getline(hoTenCanXoa,100);
}

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

void XoaTheoHoTen(SinhVien (&A)[MAXN], int &n, char hoTenCanXoa[100]){
     int j = 0;

    for (int i = 0; i < n; i++) {
          if (strcmp(A[i].HoTen, hoTenCanXoa) != 0)
               A[j++] = A[i];
    }
    n = j;
}

void Xuat(SinhVien (&A)[MAXN], int n){
     for (int i = 0 ; i < n; i++){
        cout << A[i].MASV <<'\t'<< A[i].HoTen <<'\t'<< A[i].NgaySinh<< '\t'<< A[i].GioiTinh <<'\t' << setprecision(3)<< A[i].DiemToan <<'\t'<< A[i].DiemLy <<'\t'<<A[i].DiemHoa<<'\t'<< A[i].DTB <<'\n';
    }
}