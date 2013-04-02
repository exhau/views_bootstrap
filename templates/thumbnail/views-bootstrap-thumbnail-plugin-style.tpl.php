<ul class="<?php print $classes ?> <?php print $outer_ul ?>">
  <?php foreach ($rows as $key => $row): ?>
    <li class="<?php print $column_type ?>">
      <div class="<?php print $inner_wrapper ?>">
        <?php print $row ?>
      </div>
    </li>
  <?php endforeach ?>
</ul>
