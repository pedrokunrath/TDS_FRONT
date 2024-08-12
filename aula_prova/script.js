
function Mensagem() {
  
    const nome = document.getElementById('nome').value;
    const email = document.getElementById('email').value;

    const mensagem = `Muito obrigado(a), senhor(a) ${nome}. Acabamos de enviar um e-mail para: ${email}`;
    document.getElementById('mensagem_confirmacao').innerText = mensagem;
}

function onclick(event) {
    const clickedEnviar = event.target;

    
    if (clickedEnviar.tagName === 'BUTTON') {
        Mensagem();
    }
}
