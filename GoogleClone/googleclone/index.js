function toggletheme() {
    const body = document.body;
    body.classList.toggle('light-theme');
    
}

const themeToggleBtn = document.getElementById('theme-toggle');

themeToggleBtn.addEventListener('click',toggletheme);