/** @file
 *
 * "al" keyboard mapping
 *
 * This file is automatically generated; do not edit
 *
 */

FILE_LICENCE ( PUBLIC_DOMAIN );

#include <ipxe/keymap.h>

/** "al" basic remapping */
static struct keymap_key al_basic[] = {
	{ 0x19, 0x1a },	/* Ctrl-Y => Ctrl-Z */
	{ 0x1a, 0x19 },	/* Ctrl-Z => Ctrl-Y */
	{ 0x1c, 0x1d },	/* 0x1c => 0x1d */
	{ 0x22, 0x7b },	/* '"' => '{' */
	{ 0x27, 0x5b },	/* '\'' => '[' */
	{ 0x3c, 0x3b },	/* '<' => ';' */
	{ 0x3e, 0x3a },	/* '>' => ':' */
	{ 0x40, 0x22 },	/* '@' => '"' */
	{ 0x59, 0x5a },	/* 'Y' => 'Z' */
	{ 0x5a, 0x59 },	/* 'Z' => 'Y' */
	{ 0x5c, 0x5d },	/* '\\' => ']' */
	{ 0x5d, 0x40 },	/* ']' => '@' */
	{ 0x60, 0x5c },	/* '`' => '\\' */
	{ 0x79, 0x7a },	/* 'y' => 'z' */
	{ 0x7a, 0x79 },	/* 'z' => 'y' */
	{ 0x7c, 0x7d },	/* '|' => '}' */
	{ 0x7d, 0x27 },	/* '}' => '\'' */
	{ 0x7e, 0x7c },	/* '~' => '|' */
	{ 0xdc, 0x3c },	/* Pseudo-'\\' => '<' */
	{ 0xfc, 0x3e },	/* Pseudo-'|' => '>' */
	{ 0, 0 }
};

/** "al" AltGr remapping */
static struct keymap_key al_altgr[] = {
	{ 0x21, 0x7e },	/* '!' => '~' */
	{ 0x26, 0x60 },	/* '&' => '`' */
	{ 0x30, 0x7e },	/* '0' => '~' */
	{ 0x31, 0x7e },	/* '1' => '~' */
	{ 0x34, 0x7e },	/* '4' => '~' */
	{ 0x37, 0x60 },	/* '7' => '`' */
	{ 0x3a, 0x7e },	/* ':' => '~' */
	{ 0x56, 0x60 },	/* 'V' => '`' */
	{ 0x7c, 0x7e },	/* '|' => '~' */
	{ 0, 0 }
};

/** "al" keyboard map */
struct keymap al_keymap __keymap = {
	.name = "al",
	.basic = al_basic,
	.altgr = al_altgr,
};
