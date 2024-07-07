
public class Local {

	static void olustur() {

		class ogrenci {
			private String ad;
			private String soyad;
			static int count;

			public ogrenci(String ad, String soyad) {
				this.ad = ad;
				this.soyad = soyad;
				ogrenci.count++;
			}

			public String getAd() {
				return ad;
			}

			public void setAd(String ad) {
				this.ad = ad;
			}

			public String getSoyad() {
				return soyad;
			}

			public void setSoyad(String soyad) {
				this.soyad = soyad;
			}

		}
		ogrenci o1 = new ogrenci("ali", "veli");
		System.out.println(o1.getAd());

	}

}
