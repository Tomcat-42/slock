/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#1a3773",   /* during input */
	//[INPUT] =  "#551A8B",   /* during input */
	[FAILED] = "#772b24",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
