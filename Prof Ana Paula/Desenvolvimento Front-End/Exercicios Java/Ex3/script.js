
const Toggle = document.getElementById("Toggle");
const texto = document.getElementById("texto");

// Botão que mostra ou esconde 
Toggle.addEventListener("click", () => {
    if (texto.style.display === "none") {
        texto.style.display = "block"; // mostra
        Toggle.textContent = "Esconder";
    } else {
        texto.style.display = "none"; // esconde
        Toggle.textContent = "Mostrar";
    }
});

