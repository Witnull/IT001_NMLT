void Nhap(SinhVien &a){
       cin.getline( a.MASV, 10);
       cin.getline( a.HoTen, 100);
       cin.getline( a.NgaySinh, 12);
       cin >> a.GioiTinh>>  a.DiemToan >> a.DiemLy >> a.DiemHoa;
       a.DTB =(float) (a.DiemToan + a.DiemLy + a.DiemHoa) / 3;
}
void Xuat(SinhVien &a){
    cout << a.MASV <<"\t"<<a.HoTen <<"\t"<<a.NgaySinh <<"\t"<<a.GioiTinh <<"\t"<< setprecision(3)<<a.DiemToan <<"\t"<<a.DiemLy <<"\t"<<a.DiemHoa <<"\t"<<a.DTB << endl;
}