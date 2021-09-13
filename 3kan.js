function func1 () {
    var kan = 2;
    console.log("将棋の藤井%d冠が%d冠を達成しました", kan++, kan);
}
function func2 () {
    var kan = 2;
    console.log("将棋の藤井%d冠が%d冠を達成しました", kan, ++kan);
}
func1 ();
func2 ();
