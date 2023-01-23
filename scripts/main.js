function seeMore(nextElementid, toogleElementId, previousToogleId) {

    let nextText = document.getElementById(nextElementid);
    nextText.style.display = "block";

    let toogleText = document.getElementById(toogleElementId);
    toogleText.style.display = "none";

    let previousToogleText = document.getElementById(previousToogleId);
    previousToogleText.style.display = "block";

}

function seeLess(nextElementid, toogleElementId, nextToogleId) {

    let nextText = document.getElementById(nextElementid);
    nextText.style.display = "none";

    let toogleText = document.getElementById(toogleElementId);
    toogleText.style.display = "none";

    let nextToogleText = document.getElementById(nextToogleId);
    nextToogleText.style.display = "block";

}