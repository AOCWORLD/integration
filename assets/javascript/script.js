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
        var ret = $(this).select2();
        // custom scrollbars
        var s;
        ret.on("select2-open", function () {
            if (!s) {
                s = $('.select2-drop-active > .select2-results');
                s.niceScroll({autohidemode: false});
            }
        });
    });

	//carousel video home page
	$('.home #myCarousel .galerie').carousel({
	    interval: 4000
	});

	$('.home #myCarousel .galerie').on('slid.bs.carousel', function() {
      var id = $('.home #myCarousel .item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('.home [id^=carousel-selector-]').removeClass('selected');
	  $('.home [id^=carousel-selector-'+id+']').addClass('selected');
	});
        
	$('.home [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.home #myCarouselthumb .galerie').carousel(id);
	  $('.home [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});
        
	$('.home #myCarouselthumb').carousel({
		interval: 16000
	});
    
    $('.home #myCarouselthumb').on('slid.bs.carousel', function() {
      var id = $('.home #myCarouselthumb .item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('.home [id^=carousel-selector-]').removeClass('selected');
	  $('.home [id^=carousel-selector-'+id+']').addClass('selected');
	});

	$('.home [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.home #myCarousel .galerie').carousel(id);
	  $('.home [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});
	
	$("iframe").each(function(){
      var ifr_source = $(this).attr('src');
      var wmode = "wmode=transparent";
      if(ifr_source.indexOf('?') != -1) $(this).attr('src',ifr_source+'&'+wmode);
      else $(this).attr('src',ifr_source+'?'+wmode);
   });
	
	//carousel video no-home page
	$('.no-home .carrousel-videos #myCarousel .galerie').carousel({
	    interval: 4000
	});

	$('.no-home .carrousel-videos #myCarousel .galerie').on('slid.bs.carousel', function() {
      var id = $('.no-home .carrousel-videos #myCarousel .item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('.no-home .carrousel-videos [id^=carousel-selector-]').removeClass('selected');
	  $('.no-home .carrousel-videos [id^=carousel-selector-'+id+']').addClass('selected');
	});
        
	$('.no-home .carrousel-videos [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.no-home .carrousel-videos #myCarouselthumb .galerie').carousel(id);
	  $('.no-home .carrousel-videos [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});
        
	$('.no-home .carrousel-videos #myCarouselthumb').carousel({
		interval: 16000
	});
    
    $('.no-home .carrousel-videos #myCarouselthumb').on('slid.bs.carousel', function() {
      var id = $('.no-home .carrousel-videos #myCarouselthumb .item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('.no-home .carrousel-videos [id^=carousel-selector-]').removeClass('selected');
	  $('.no-home .carrousel-videos [id^=carousel-selector-'+id+']').addClass('selected');
	});

	$('.no-home .carrousel-videos [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.no-home .carrousel-videos #myCarousel .galerie').carousel(id);
	  $('.no-home .carrousel-videos [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});
	
	//carousel-indicators
	var lindic = $('.no-home .carrousel-videos .carousel-indicators > li');
	if (lindic.length > 5) {
		$('.no-home .carrousel-videos .carousel-indicators').addClass('larg-width');
	}
    
    
	
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
	    interval: 4000
	});

	//slide photo-info-left
	$('#myCarouselphotoleft1').carousel({
	    interval: false
	});

	//slide photo-info-right
	$('#myCarouselphotoright1').carousel({
	    interval: false
	});

	//slide photo-info-middle
	$('#myCarouselphotomiddle').carousel({
	    interval: false
	});

	//slide photo-info-bottom
	$('#myCarouselphotobottom').carousel({
	    interval: 4000
	});

	//view comment
	/*$('.conversation .view-comment .discu .vu').click( function(){
	  $(this).parents('.conversation').children('.add-comment').show();
	  return false;
	});*/
	
	//tooltip
	$('.send').tooltip();

	//mod tab
	$('.mod-tab').tab();

	//toggle menu
	$('.bloc-infos .title-infos').click( function(e){
		if($(this).parent('.bloc-infos').hasClass('info-open')) {
			$(this).parent('.bloc-infos').removeClass('info-open');
			$(this).parent('.bloc-infos').find('.body-infos').hide();
		}else {
			$(this).parent('.bloc-infos').addClass('info-open');
			$(this).parent('.bloc-infos').find('.body-infos').show();
		}
		return false;
	});
	
	//carousel
	$('#myCarouseltab').carousel({
	    interval: false
	});
	$('#myCarouseltab .carousel-inner').carousel({
	    interval: false
	});

	//calendar
	if ($('#mydate').length){
		$('#mydate').glDatePicker({
			showAlways: true,
		    specialDates: [
		        {
		            date: new Date(2014, 8, 22),
		            data: { message: 'day 22 of the month' },
		            repeatMonth: true
		        },
		    ],
		    onClick: function(target, cell, date, data) {
		        target.val(date.getFullYear() + ' - ' +
		                    date.getMonth() + ' - ' +
		                    date.getDate());

		        if(data != null) {
		            alert(data.message + '\n' + date);
		        }
		    }
		});
	}

	//carousel tab pro
	$('.pro #myCarousel-tab').carousel({
		pause: true,
	    interval: false
	});
	
	$('.pro #myCarousel-tab .carousel').each(function(){
        $(this).carousel({
            pause: true,
			interval: false
        });
    });
	
	$(document).on('mouseleave', '.pro #myCarousel-tab .carousel', function() {

    $(this).carousel('pause');
	});
	$('#myCarouselthumbtab').carousel({pause: true,interval:false});
	var myInterval=false;
	$('myCarouselthumbtab .carousel-control').mouseover(function() {
		var ctrl = $(this);
		var interval=300;
	  
		myInterval = setInterval(function(){
			 ctrl.trigger("click");
		},interval);
	});
								
	$('.carousel-control').mouseout(function(){
		clearInterval(myInterval);
		myInterval = false;
	});
	
	$('.pro #myCarouselthumbtab').carousel({
	    pause: true,
		interval: false
	});
	
	$('.pro #myCarouselthumbtab .carousel-inner').carousel({
	    pause: true,
		interval: false
	});

	$('.pro #myCarousel-tab #myCarouselthumbtab .carousel-inner').on('slid.bs.carousel', function() {
      return false;
	});
	
	$('.pro #myCarousel-tab #myCarouselthumbtab .carousel-inner .item').on('slid.bs.carousel', function() {
      return false;
	});
	
	$('.pro #myCarouselthumbtab').on('slid.bs.carousel', function() {
      return false;
	});
        
	$('.pro #myCarousel-tab #myCarouselthumbtab .carousel-inner [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.pro #myCarousel-tab .galerie').carousel(id);
	  $('.pro #myCarousel-tab #myCarouselthumbtab .carousel-inner [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});
        
	$('.pro #myCarousel-tab .galerie').carousel({
	    interval: false
	});
    
    $('.pro #myCarousel-tab .galerie').on('slid.bs.carousel', function() {
      return false
	});

	$('.pro #myCarousel-tab .galerie [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.pro #myCarousel-tab #myCarouselthumbtab .carousel-inner').carousel(id);
	  $('.pro #myCarousel-tab .galerie [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});
	
	//datatable
	$('#myTable').DataTable({
		"responsive" : true,
		"bLengthChange": true,
		"lengthMenu": [5, 10, 25, 50, 100],
		"ordering": false,
		"info": false
	});

}); //ready

$.fn.tab = function(options) {
    // This is the easiest way to have default options.
    var settings = $.extend({
        // These are the defaults.
    }, options),
            idtab;
    return this.each(function() {
        $tabcontent = $(this).find('.tab-content');
        $tablist = $(this).find('.tab-list');
        $tabcontent.find(' > li:nth-child(n+2)').hide();
        $tablist.find('> li .tab-link').bind('focus', function() {
            $tablist.find('> li.active').removeClass('active');
            idtab = $(this).data('idtab');
            $tabcontent.find(' > li').hide();
            $tabcontent.find(' > li#' + idtab).show();
            $(this).parent().addClass('active');
            return false;
        });
        $tablist.find('> li .tab-link').bind('click', function() {
            $tablist.find('> li.active').removeClass('active');
            idtab = $(this).data('idtab');
            $tabcontent.find(' > li').hide();
            $tabcontent.find(' > li#' + idtab).show();
            $(this).parent().addClass('active');
            return false;
        });
    });
};
