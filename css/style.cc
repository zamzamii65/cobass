/* Reset dasar */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: Arial, sans-serif;
    line-height: 1.6;
}

/* Header dan menu */
header {
    background: #ff7f50;
    color: white;
    padding: 10px 20px;
    text-align: center;
}

header nav a {
    color: white;
    text-decoration: none;
    margin: 0 10px;
    font-weight: bold;
}

header nav a:hover {
    text-decoration: underline;
}

/* Bagian hero dengan background penuh */
.hero {
    background: url('Selamat Datang!.jpg') no-repeat center center/cover;
    height: 100vh;
    display: flex;
    justify-content: center;
    align-items: center;
    color: white;
    text-shadow: 1px 1px 3px black;
}

/* Konten */
.content {
    padding: 20px;
    text-align: center;
}

/* Footer */
footer {
    background: #333;
    color: white;
    text-align: center;
    padding: 10px;
}
