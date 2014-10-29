
// formulaire de connexion
$('#my-login-form').on('submit', function(e) {


    e.preventDefault();

    var $form = $(this);
    var data = {
        'action': 'login_check',
        'username': $form.find('#username').val(),
        'password': $form.find('#password').val(),
        'rememberme': $form.find('#rememberme').is(':checked') ? true : false,
        'security': $form.find('#security').val()
    };

    $.ajax({
        url: $('#baseUrl').val()+"/wp-login.php", // your ajax url
        type: 'POST',
        dataType: 'json',
        data: data,
        beforeSend: function(jqXHR, settings) {
            $('#login-message').html('');
        },
        success: function(data, textStatus, xhr) {
            onAjaxSuccess(data);
        },
        error: function(jqXHR, textStatus, errorThrown) {
            alert('erreur');
        }
    });
});
function onAjaxSuccess(data) {

    if (typeof data.message == 'undefined') {

        $('#conne_message').html('There was an unexpected error');
    }
    // reload on success
    if (typeof data.success !== 'undefined' && data.success === true) {
        location.reload();
    }
}



$(document).ready(function(){

    $('.fancybox').fancybox();
    
if($('#pw').length){
    $('#pw').strength({
        strengthClass: 'strength',
        strengthMeterClass: 'strength_meter',
        strengthButtonClass: 'button_strength',
        strengthButtonText: 'Show Password',
        strengthButtonTextToggle: 'Hide Password'
    });

}
    setTimeout(function() {

        $("#cometchat_userslist .cometchat_userlist").each(function() {
            var idTchat = $(this).attr('id');
            var tchatClass = $("#" + idTchat + " span:last-child").attr('class');
            $("." + idTchat).html("<span class='" + tchatClass + "'></span>");
        });
    }, 5000);
});


