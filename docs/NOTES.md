DAY 3 (12/10/2026)

\## Tạo file sensor\_driver.h:

\-Vì sao phải thiết kế file này? để them cảm biến mới không cần phải sửa main.c

\-Lỗi đã gặp: "sensor\_data\_t \*out" có dấu ',' ở giữa -> thành hai tham số

\## Truyền \&data

\-Truyền địa chỉ để hàm ghi vào biến của main. Truyền thẳng ko có dấu \& chỉ sửa được bản sao



\## static trước hàm

\-Gioi han trong file, Bỏ static + trùng tên giữa 2 file -> lỗi "multiple definition"



\## . \& ->

\-Biến struct dung dấu '.' ,con trỏ tới struct dung '->'



\## git

\-.gitignore chỉ chặn file chưa được theo dõi. File đã commit thì: git rm --cached 

