<?php
//removed block subject//
?>
<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="block block-<?php print $block->module ?> <?php print $block_region_placement ?> block-<?php print $block_zebra ?> <?php if ($blocktheme != '') print $blocktheme; if (function_exists(block_class)) print block_class($block); ?>">
  <div class="content">
    <?php print $block->content ?>
  </div>
</div>
