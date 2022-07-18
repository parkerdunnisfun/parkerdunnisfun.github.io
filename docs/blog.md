---
layout: default
permalink: /blog/
---
<div>
  <h1>blog</h1>
  <ul style="text-align:center">
  {% for post in site.posts %}
    <li style="float:none; border:1px dotted black">
      <p>
      <a href="{{ post.url }}">{{ post.title }}</a>
      </p>
    </li>
  {% endfor %}
  </ul>
</div>