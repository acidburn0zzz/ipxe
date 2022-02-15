/** @file
 *
 * "dk" keyboard mapping
 *
 * This file is automatically generated; do not edit
 *
 */

FILE_LICENCE ( PUBLIC_DOMAIN );

#include <ipxe/keymap.h>

/** "dk" basic remapping */
static struct keymap_key dk_basic[] = {
	{ 0x1c, 0x27 },	/* 0x1c => '\'' */
	{ 0x1e, 0x36 },	/* 0x1e => '6' */
	{ 0x26, 0x2f },	/* '&' => '/' */
	{ 0x28, 0x29 },	/* '(' => ')' */
	{ 0x29, 0x3d },	/* ')' => '=' */
	{ 0x2a, 0x28 },	/* '*' => '(' */
	{ 0x2b, 0x60 },	/* '+' => '`' */
	{ 0x2d, 0x2b },	/* '-' => '+' */
	{ 0x2f, 0x2d },	/* '/' => '-' */
	{ 0x3c, 0x3b },	/* '<' => ';' */
	{ 0x3e, 0x3a },	/* '>' => ':' */
	{ 0x3f, 0x5f },	/* '?' => '_' */
	{ 0x40, 0x22 },	/* '@' => '"' */
	{ 0x5c, 0x27 },	/* '\\' => '\'' */
	{ 0x5e, 0x26 },	/* '^' => '&' */
	{ 0x5f, 0x3f },	/* '_' => '?' */
	{ 0x7c, 0x2a },	/* '|' => '*' */
	{ 0x7d, 0x5e },	/* '}' => '^' */
	{ 0xdc, 0x3c },	/* Pseudo-'\\' => '<' */
	{ 0xfc, 0x3e },	/* Pseudo-'|' => '>' */
	{ 0, 0 }
};

/** "dk" AltGr remapping */
static struct keymap_key dk_altgr[] = {
	{ 0x30, 0x7d },	/* '0' => '}' */
	{ 0x32, 0x40 },	/* '2' => '@' */
	{ 0x34, 0x24 },	/* '4' => '$' */
	{ 0x37, 0x7b },	/* '7' => '{' */
	{ 0x38, 0x5b },	/* '8' => '[' */
	{ 0x39, 0x5d },	/* '9' => ']' */
	{ 0x3a, 0x7e },	/* ':' => '~' */
	{ 0x3d, 0x7c },	/* '=' => '|' */
	{ 0x5c, 0x7e },	/* '\\' => '~' */
	{ 0x5d, 0x7e },	/* ']' => '~' */
	{ 0x71, 0x40 },	/* 'q' => '@' */
	{ 0, 0 }
};

/** "dk" keyboard map */
struct keymap dk_keymap __keymap = {
	.name = "dk",
	.basic = dk_basic,
	.altgr = dk_altgr,
};
