-- Copyright (C) 2026 MyFeature, released under GNU AGPL v3 license: https://github.com/Psychostout/mangos-cata-server/blob/master/LICENSE

CREATE TABLE IF NOT EXISTS `my_feature_settings` (
    `setting_id` INT UNSIGNED NOT NULL AUTO_INCREMENT,
    `setting_name` VARCHAR(64) NOT NULL,
    `setting_value` VARCHAR(255) NOT NULL,
    PRIMARY KEY (`setting_id`),
    UNIQUE KEY `unique_setting` (`setting_name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

INSERT INTO `my_feature_settings` (`setting_name`, `setting_value`) VALUES ('enabled', '1');
