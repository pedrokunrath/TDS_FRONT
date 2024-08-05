function Mensagem() {
    
    const nome = document.getElementById('Nome').value;
    const email = document.getElementById('Email').value;
    const mensagem = Muito obrigado(a), senhor(a) ${nome}. Acabamos de enviar um e-mail para: ${email};
 
    document.getElementById('mensagem_confirmacao').innerText = mensagem;
}
function onclick(Event){
    const clickedEnviar = Event.target;
}