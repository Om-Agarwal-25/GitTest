const blogForm = document.getElementById('blogForm');
    const blogPosts = document.getElementById('blogPosts');

    blogForm.addEventListener('submit', (event) => {
      event.preventDefault();

      const title = document.getElementById('title').value;
      const content = document.getElementById('content').value;
      const author = document.getElementById('author').value;

      if (title && content && author) {
        const postCard = document.createElement('div');
        postCard.className = 'post-card';

        postCard.innerHTML = `
          <h3>${title}</h3>
          <p>${content}</p>
          <small>Written by: <strong>${author}</strong></small>
          <button class="delete-btn">Delete</button>
        `;

        postCard.querySelector('.delete-btn').addEventListener('click', () => {
          blogPosts.removeChild(postCard);
        });

        blogPosts.appendChild(postCard);

        blogForm.reset();
      }
    });