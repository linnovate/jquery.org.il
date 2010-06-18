var query = new Object();
	window.location.search.replace(
	new RegExp( "([^?=&]+)(=([^&]*))?", 'g' ),
		function( $0, $1, $2, $3 ){
			query[ $1 ] = $3;
		}
	);
	easing = query['e'] || 'Expo';
	
	function loadEasing(e) {
		location.href = location.pathname+'?e='+e;
	}
	
	function setEasing(e) {
		loadLamps(e);
	}

// for dynamic easing changes		
	function loadLamps(easing) {
			$('.lamp').lavaLamp({
			fx: 'easeOutBounce',
			speed: 1000
		});
	}	
// jquery initialize:

	$(function() {
		$('#main-nav').addClass('lamp');
		$('#menu').lavaLamp({fx: 'expo', speed: 333});
		loadLamps(easing);
		
		$('select#easing option[value='+easing+']').attr('selected','selected');
		$('.easingLabel').text(easing);
	});

//console.log();