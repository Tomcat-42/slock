/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282936",     /* after initialization */
	// [INPUT] =  "#551A8B",   /* during input */
	[INPUT] =  "#1a3773",   /* during input */
	//[FAILED] = "#772b24",   /* wrong password */
 	// [FAILED] = "#5e302d",   /* wrong password */
	[FAILED] = "#282936",   /* wrong password */
	// [CAPS] = "#382247"      /* CapsLock on */     
	[CAPS] = "#66d9ef"      /* CapsLock on */     
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
