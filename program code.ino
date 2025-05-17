<!DOCTYPE html>
<html>
<head>

<meta name="viewport" content="width=device-width, initial-scale=1" />

<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Solway:wght@300;400;500;700;800&display=swap" rel="stylesheet">

<div id="game-box">
 <h1><b>Number Guessing Game :)</b></h1>
 <style>
   #game-box {
       width: 100%;
       border-radius: 10px;
       border: 2px solid #000;
       background-color: #f2cbcb;
       padding: 1px;
       overflow: hidden;}

   #gamebox h1 {
       font-family : solway;}
      
   body {
       font-family: solway;
       text-align: center;  }

   button {
   font-family : solway;
   background-color: #f39898;
   display: block;
   margin: 10px auto;}

   button:hover {
       background-color: #f39898;
       transition: 0.3s;
       color:#000;
       font-weight:bold;
   }
   input, button {
       font-family : solway;
       font-size: 16px;
       padding: 5px 10px;
       margin-top: 10px;
       border-radius: 10px; }
   </style>
</head>
<body>

 <p>Welcome, Visitors!</p>
 <p><b>Game Note:</b> Enter 0 to give up.</p>
  <input type="number" id="guess" placeholder=" Enter number (1-100)" />
 <button onclick="checkGuess()">Submit</button>
     <style>
 ::placeholder {font-family: solway}
     </style>
 <p id="message"></p>
</div>

<script>
 const random = Math.floor(Math.random() * 100) + 1;
 let playing = true;

 function checkGuess() {
   if (!playing) return;
   const guess = parseInt(document.getElementById("guess").value);
   const message = document.getElementById("message");

   if (guess === 0) {
     message.innerText = "Bye! You left the game so you'll never know the answer.";
     playing = false;
   } else if (guess < 1 || guess > 100) {
     message.innerText = "Ayo! That's beyond the range!";
   } else if (guess === random) {
     message.innerText = "Congratulations! 🎉 You guessed it correctly.";
     playing = false;
   } else if (guess < random) {
     message.innerText = "Uhm, your guess is too low. Try again!";
   } else {
     message.innerText = "Oof! Your guess is too high. Try again!";
   }
 }
</script>
</body>
</html>

