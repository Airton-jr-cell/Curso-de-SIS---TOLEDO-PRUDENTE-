function validar(){
    var txt = document.getElementById("txt").value;

    document.getElementById("invalido").innerHTML = "";
    document.getElementById("valido").innerHTML = "";

    if(txt == ""){
        document.getElementById("invalido").innerHTML= "Está vazio"
    }
    else{
    document.getElementById("valido").innerHTML = "Tudo correto!"
    }
}