// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// A weekly Torah portion. Enum insertion order matches the C library's
/// hc_parsha enum (Bereishit=1..Haazinu=53); [hcIndex] gives that value.
/// V'Zot HaBerachah is not included — it's a Simchat Torah reading only.
enum Parsha {
  bereishit('BEREISHIT', 'Bereishit', 'בראשית', 'Берешит', 'Béréchit'),
  noach('NOACH', 'Noach', 'נח', 'Ноах', 'Noach'),
  lechLecha('LECH_LECHA', 'Lech Lecha', 'לך לך', 'Лех Леха', 'Lech Lécha'),
  vayera('VAYERA', 'Vayera', 'וירא', 'Вайера', 'Vayéra'),
  chayeiSarah('CHAYEI_SARAH', 'Chayei Sarah', 'חיי שרה', 'Хаей Сара', '\'Hayé Sarah'),
  toldot('TOLDOT', 'Toldot', 'תולדות', 'Толдот', 'Toldot'),
  vayetze('VAYETZE', 'Vayetze', 'ויצא', 'Вайеце', 'Vayétsé'),
  vayishlach('VAYISHLACH', 'Vayishlach', 'וישלח', 'Вайишлах', 'Vayichlah'),
  vayeshev('VAYESHEV', 'Vayeshev', 'וישב', 'Вайешев', 'Vayéchev'),
  miketz('MIKETZ', 'Miketz', 'מקץ', 'Микец', 'Mikéts'),
  vayigash('VAYIGASH', 'Vayigash', 'ויגש', 'Вайигаш', 'Vayigach'),
  vayechi('VAYECHI', 'Vayechi', 'ויחי', 'Вайехи', 'Vayé\'hi'),
  shemot('SHEMOT', 'Shemot', 'שמות', 'Шмот', 'Chémot'),
  vaera('VAERA', 'Vaera', 'וארא', 'Ваэра', 'Vaéra'),
  bo('BO', 'Bo', 'בא', 'Бо', 'Bo'),
  beshalach('BESHALACH', 'Beshalach', 'בשלח', 'Бешалах', 'Béchala\'h'),
  yitro('YITRO', 'Yitro', 'יתרו', 'Итро', 'Yitro'),
  mishpatim('MISHPATIM', 'Mishpatim', 'משפטים', 'Мишпатим', 'Michpatim'),
  terumah('TERUMAH', 'Terumah', 'תרומה', 'Трума', 'Térouma'),
  tetzaveh('TETZAVEH', 'Tetzaveh', 'תצוה', 'Тецаве', 'Tétsavé'),
  kiTisa('KI_TISA', 'Ki Tisa', 'כי תשא', 'Ки Тиса', 'Ki Tissa'),
  vayakhel('VAYAKHEL', 'Vayakhel', 'ויקהל', 'Ваякѓел', 'Vayakél'),
  pekudei('PEKUDEI', 'Pekudei', 'פקודי', 'Пкудей', 'Pékoudéi'),
  vayikra('VAYIKRA', 'Vayikra', 'ויקרא', 'Ваикра', 'Vayikra'),
  tzav('TZAV', 'Tzav', 'צו', 'Цав', 'Tsav'),
  shemini('SHEMINI', 'Shemini', 'שמיני', 'Шмини', 'Chémini'),
  tazria('TAZRIA', 'Tazria', 'תזריע', 'Тазриа', 'Tazria'),
  metzora('METZORA', 'Metzora', 'מצורע', 'Мецора', 'Métsora'),
  achareiMot('ACHAREI_MOT', 'Acharei', 'אחרי', 'Ахарей', 'Acharei'),
  kedoshim('KEDOSHIM', 'Kedoshim', 'קדושים', 'Кдошим', 'Kédochim'),
  emor('EMOR', 'Emor', 'אמור', 'Эмор', 'Émor'),
  behar('BEHAR', 'Behar', 'בהר', 'Бехар', 'Béhar'),
  bechukotai('BECHUKOTAI', 'Bechukotai', 'בחקתי', 'Бехукотай', 'Béhouchotaï'),
  bamidbar('BAMIDBAR', 'Bamidbar', 'במדבר', 'Бамидбар', 'Bamidbar'),
  naso('NASO', 'Naso', 'נשא', 'Насо', 'Nasó'),
  behaalotecha('BEHAALOTECHA', 'Behaalotecha', 'בהעלתך', 'Беѓаалотха', 'Béhaaloté\'ha'),
  shelach('SHELACH', 'Shelach', 'שלח', 'Шлах', 'Chéla\'h'),
  korach('KORACH', 'Korach', 'קרח', 'Корах', 'Korah'),
  chukat('CHUKAT', 'Chukat', 'חקת', 'Хукат', '\'Houkat'),
  balak('BALAK', 'Balak', 'בלק', 'Балак', 'Balak'),
  pinchas('PINCHAS', 'Pinchas', 'פינחס', 'Пинхас', 'Pin\'has'),
  matot('MATOT', 'Matot', 'מטות', 'Матот', 'Matot'),
  masei('MASEI', 'Masei', 'מסעי', 'Масей', 'Masséi'),
  devarim('DEVARIM', 'Devarim', 'דברים', 'Дварим', 'Dévarim'),
  vaetchanan('VAETCHANAN', 'Vaetchanan', 'ואתחנן', 'Ваэтханан', 'Vaét\'hanan'),
  eikev('EIKEV', 'Eikev', 'עקב', 'Экев', 'Ékev'),
  reeh('REEH', 'Reeh', 'ראה', 'Рэе', 'Réé'),
  shoftim('SHOFTIM', 'Shoftim', 'שופטים', 'Шофтим', 'Choftim'),
  kiTeitzei('KI_TEITZEI', 'Ki Teitzei', 'כי תצא', 'Ки Тецэ', 'Ki Tétsé'),
  kiTavo('KI_TAVO', 'Ki Tavo', 'כי תבוא', 'Ки Таво', 'Ki Tavo'),
  nitzavim('NITZAVIM', 'Nitzavim', 'נצבים', 'Ницавим', 'Nitsavim'),
  vayeilech('VAYEILECH', 'Vayeilech', 'וילך', 'Вайелех', 'Vayéle\'h'),
  haazinu('HAAZINU', 'Haazinu', 'האזינו', 'Ѓаазину', 'Haazinou'),
  ;
  final String key;   // stable identifier (matches JSON key)
  final String en;
  final String he;
  final String ru;
  final String fr;
  const Parsha(this.key, this.en, this.he, this.ru, this.fr);

  /// hc_parsha enum value (1-based). HC_PARSHA_NONE (0) has no Parsha.
  int get hcIndex => index + 1;

  /// Look up by hc_parsha integer. Returns null for 0 or out-of-range.
  static Parsha? fromHcIndex(int idx) =>
      (idx >= 1 && idx <= values.length) ? values[idx - 1] : null;

  /// Look up by canonical English name (case-sensitive).
  static Parsha? fromEnglishName(String en) => _byEn[en];
  static final Map<String, Parsha> _byEn = 
      { for (final p in values) p.en: p };
}
