$(document).ready(function() {
	
	//toggle menu langue
	$('.dropdown-toggle').click(function(){
		if($(this).parent('.dropdown').hasClass('open')) {
			$(this).parent('.dropdown').removeClass('open');
			$(this).parent('.dropdown').find('.dropdown-body').hide();
		}else {
			$(this).parent('.dropdown').addClass('open');
			$(this).parent('.dropdown').find('.dropdown-body').show();
		}
	});

}); //ready
