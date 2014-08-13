$(document).ready(function() {
	
	//toggle menu
	$('.nav-bar .dropdown .dropdown-toggle').click( function(e){
		e.stopPropagation();
		if($(this).parent('.dropdown').hasClass('open')) {
			$(this).parent('.dropdown').removeClass('open');
			$(this).parent('.dropdown').find('.dropdown-body').hide();
		}else {
			$(this).parents('.nav-bar').find('.open').children('.dropdown-body').hide();
			$(this).parents('.nav-bar').find('.open').removeClass('open');
			$(this).parent('.dropdown').addClass('open');
			$(this).parent('.dropdown').find('.dropdown-body').show();
		}
	});
	// If an event gets to the body
	$("body").click(function(){
	  $(".nav-bar .dropdown .dropdown-body").fadeOut();
	  $(".nav-bar .dropdown").removeClass('open');
	});

	// Prevent events from getting pass .popup
	$(".popup").click(function(e){
	  e.stopPropagation();
	});

	//carousel
	$('#myCarousel').carousel({
	    interval: 4000
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
	$('#myCarousel').on('slid', function (e) {
	  var id = $('.item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('[id^=carousel-selector-]').removeClass('selected');
	  $('[id^=carousel-selector-'+id+']').addClass('selected');
	});

}); //ready
