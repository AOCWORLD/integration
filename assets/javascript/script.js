$(document).ready(function() {

	//toggle menu
	$('.dropdown .dropdown-toggle').click( function(e){
		if($(this).parent('.dropdown').hasClass('open')) {
			$(this).parent('.dropdown').removeClass('open');
			$(this).parent('.dropdown').find('.dropdown-body').hide();
		}else {
			$(this).parents('#header').find('.open').children('.dropdown-body').hide();
			$(this).parents('#header').find('.open').removeClass('open');
			$(this).parent('.dropdown').addClass('open');
			$(this).parent('.dropdown').find('.dropdown-body').show();
		}
	});
	// stop propagation click dropdown body
	$('.dropdown .dropdown-body').click( function(e){
		e.stopPropagation();
	});
	// stop propagation click dropdown bouton
	$('.dropdown .dropdown-toggle').click( function(e){
		e.stopPropagation();
	});
	// click body to hide dropdown body
	$('body').click(function(){
	  $('.dropdown .dropdown-body').fadeOut();
	  $('.dropdown').removeClass('open');
	  $('.dropdown-body').hide();
	});

	//select 2
	$("select.selectscroll").each(function(){
        var ret     = $(this).select2();
        // custom scrollbars
        var s;
        ret.on("select2-open", function () {
            if (!s) {
                s = $('.select2-drop-active > .select2-results');
                s.niceScroll({autohidemode: false});
            }
        });
    });

	//carousel
	$('#myCarousel').carousel({
	    interval: 4000
	});
	
	//slide profil
	$('#myCarouselprofil').carousel({
	    interval: false
	});

	//slide photoleft
	$('#myCarouselphotoleft').carousel({
	    interval: false
	});

	//slide photoright
	$('#myCarouselphotoright').carousel({
	    interval: false
	});

	// handles the carousel thumbnails
	$('[id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('#myCarousel').carousel(id);
	  $('[id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});

	// when the carousel slides, auto update
	$('#myCarousel').on('slid.bs.carousel', function (e) {
	  var id = $('.item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('[id^=carousel-selector-]').removeClass('selected');
	  $('[id^=carousel-selector-'+id+']').addClass('selected');
	});

	//view comment
	$('.conversation .view-comment .discu .vu').click( function(){
	  $(this).parents('.conversation').children('.add-comment').show();
	  return false;
	});
	
	//tooltip
	$('.send').tooltip();

}); //ready
