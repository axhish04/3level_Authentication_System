// Simulated backend
const users = [];

document.getElementById('registerForm')?.addEventListener('submit', function(event) {
    event.preventDefault();
    const userId = document.getElementById('userId').value;
    const userName = document.getElementById('userName').value;
    const userEmail = document.getElementById('userEmail').value;
    const userPassword = document.getElementById('userPassword').value;
    const colorPattern = document.getElementById('colorPattern').value.split(',');
    const securityQuestion = document.getElementById('securityQuestion').value;
    const securityAnswer = document.getElementById('securityAnswer').value;

    users.push({ userId, userName, userEmail, userPassword, colorPattern, securityQuestion, securityAnswer });
    alert('Account registered successfully!');
    window.location.href = 'index.html';
});

document.getElementById('loginForm')?.addEventListener('submit', function(event) {
    event.preventDefault();
    const loginEmail = document.getElementById('loginEmail').value;
    const loginPassword = document.getElementById('loginPassword').value;
    const loginColorPattern = document.getElementById('loginColorPattern').value.split(',');
    const loginSecurityQuestion = document.getElementById('loginSecurityQuestion').value;
    const loginSecurityAnswer = document.getElementById('loginSecurityAnswer').value;

    const user = users.find(user => 
        user.userEmail === loginEmail && 
        user.userPassword === loginPassword && 
        JSON.stringify(user.colorPattern) === JSON.stringify(loginColorPattern) &&
        user.securityQuestion === loginSecurityQuestion && 
        user.securityAnswer === loginSecurityAnswer
    );

    if (user) {
        alert(`Login successful! Welcome, ${user.userName}`);
    } else {
        alert('Login failed. Please check your credentials and try again.');
    }
});

document.getElementById('recoveryForm')?.addEventListener('submit', function(event) {
    event.preventDefault();
