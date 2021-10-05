import qrcode
url = " " #Enter your link here within " " to generate the QRCODE
qr = qrcode.QRCode(
        version=2,
        box_size=10,
        border=3)
qr.add_data(url)
qr.make(fit=True)
img = qr.make_image(fill='black', back_color='white')
img.save('qrcode.png')