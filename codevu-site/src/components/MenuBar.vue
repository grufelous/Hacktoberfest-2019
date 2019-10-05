<template>
    <div id="menu">
        <ul>
            <li>Home</li>
            <li>Learn</li>
            <li>Explore</li>
            <li>Contribute</li>
        </ul>
    </div>
    
</template>

<script>
export default {
  name: 'menu',
  components: {
    
  },
}
</script>

<style scoped>

ul {
    text-decoration: none;
}
li {
    /* background: #efefef; */
    display: inline-block;
    padding: 1.5em 1.0em;
    min-width: 6em;
    margin: 0 0.5em;
    border-radius: 40%;
    transition: all 0.2s ease-in;
    cursor: pointer;
}
li:hover {
    background: #fafafa;
    display: inline-block;
    min-width: 5.5em;
    margin: 0 0.5em;
    border-radius: 40%;
}
</style>