diff --git a/drivers/video/fbdev/mxc/mxcfb_sn65dsi83.c b/drivers/video/fbdev/mxc/mxcfb_sn65dsi83.c
index 9db02a6..ea369f1 100644
--- a/drivers/video/fbdev/mxc/mxcfb_sn65dsi83.c
+++ b/drivers/video/fbdev/mxc/mxcfb_sn65dsi83.c
@@ -312,18 +312,22 @@ static void sn65dsi_stop_stream(void)
 static int sn65dsi_configure(void)
 {
 	sn65dsi_write(0x09,0x00);
-	sn65dsi_write(0x0A,0x05);
+	sn65dsi_write(0x0A,0x03);
 	sn65dsi_write(0x0B,0x28);
 	sn65dsi_write(0x0D,0x00);
 	sn65dsi_write(0x10,0x36);
 	sn65dsi_write(0x11,0x00);
-	sn65dsi_write(0x12,0x5c);
+	sn65dsi_write(0x12,0x36);
 	sn65dsi_write(0x13,0x00);
-	sn65dsi_write(0x18,0x72);
+#ifdef SELB0_6BITS
+	sn65dsi_write(0x18,0x70);
+#else	/* SELB1_8BITS */
+	sn65dsi_write(0x18,0x78);
+#endif
 	sn65dsi_write(0x19,0x00);
 	sn65dsi_write(0x1A,0x03);
 	sn65dsi_write(0x1B,0x00);
-	sn65dsi_write(0x20,0x56);
+	sn65dsi_write(0x20,0x00);
 	sn65dsi_write(0x21,0x05);
 	sn65dsi_write(0x22,0x00);
 	sn65dsi_write(0x23,0x00);
@@ -335,15 +339,15 @@ static int sn65dsi_configure(void)
 	sn65dsi_write(0x29,0x00);
 	sn65dsi_write(0x2A,0x00);
 	sn65dsi_write(0x2B,0x00);
-	sn65dsi_write(0x2C,0x41);
+	sn65dsi_write(0x2C,0x00);
 	sn65dsi_write(0x2D,0x00);
 	sn65dsi_write(0x2E,0x00);
 	sn65dsi_write(0x2F,0x00);
-	sn65dsi_write(0x30,0x0c);
+	sn65dsi_write(0x30,0x00);
 	sn65dsi_write(0x31,0x00);
 	sn65dsi_write(0x32,0x00);
 	sn65dsi_write(0x33,0x00);
-	sn65dsi_write(0x34,0x62);
+	sn65dsi_write(0x34,0x85);
 	sn65dsi_write(0x35,0x00);
 	sn65dsi_write(0x36,0x00);
 	sn65dsi_write(0x37,0x00);