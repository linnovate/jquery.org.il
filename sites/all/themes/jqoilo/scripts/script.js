
//-------------- LAVALAMP MENU ----------------//



//the lavalamp load:		
function loadLamps() {
	$('.lamp').lavaLamp({
		fx: 'easeOutBounce',
		speed: 1000
	});
}	
//jquery initialize:
$(function() {
	$('#main-nav').addClass('lamp');
	loadLamps();
});


//-------------- /LAVALAMP MENU ----------------//
//-------------- SEARCH FORM ----------------//
var Drupalorg = {};

Drupalorg.setDefaultFormValue = function(element, value) {
  $(element)
  .focus(function(e) {
    if ($(element).val() == value) {
	  $(element).val('').removeClass('default');
	}
  })
  .blur(function(e) {
	if ($(element).val() == "") {
	  $(element).val(value).addClass('default');
	}
	else {
	  $(element).removeClass('default');
	}
  });
	  
  $(element).trigger('blur');
}

if(Drupal.jsEnabled) { 
	  $(document).ready(function(e) {
	    Drupalorg.setDefaultFormValue('#edit-search-theme-form-1', 'Search Site');
	  });
	}
//-------------- /SEARCH FORM ----------------//