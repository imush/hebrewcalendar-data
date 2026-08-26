// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// A weekly Torah portion. Enum insertion order matches the C library's
/// hc_parsha enum (Bereishit=1..Haazinu=53); [hcIndex] gives that value.
/// V'Zot HaBerachah is not included — it's a Simchat Torah reading only.
enum Parsha {
  bereishit('Bereishit', 'בראשית', 'Берешит', 'Béréchit'),
  noach('Noach', 'נח', 'Ноах', 'Noach'),
  lechLecha('Lech Lecha', 'לך לך', 'Лех Леха', 'Lech Lécha'),
  vayera('Vayera', 'וירא', 'Вайера', 'Vayéra'),
  chayeiSarah('Chayei Sarah', 'חיי שרה', 'Хаей Сара', '\'Hayé Sarah'),
  toldot('Toldot', 'תולדות', 'Толдот', 'Toldot'),
  vayetze('Vayetze', 'ויצא', 'Вайеце', 'Vayétsé'),
  vayishlach('Vayishlach', 'וישלח', 'Вайишлах', 'Vayichlah'),
  vayeshev('Vayeshev', 'וישב', 'Вайешев', 'Vayéchev'),
  miketz('Miketz', 'מקץ', 'Микец', 'Mikéts'),
  vayigash('Vayigash', 'ויגש', 'Вайигаш', 'Vayigach'),
  vayechi('Vayechi', 'ויחי', 'Вайехи', 'Vayé\'hi'),
  shemot('Shemot', 'שמות', 'Шмот', 'Chémot'),
  vaera('Vaera', 'וארא', 'Ваэра', 'Vaéra'),
  bo('Bo', 'בא', 'Бо', 'Bo'),
  beshalach('Beshalach', 'בשלח', 'Бешалах', 'Béchala\'h'),
  yitro('Yitro', 'יתרו', 'Итро', 'Yitro'),
  mishpatim('Mishpatim', 'משפטים', 'Мишпатим', 'Michpatim'),
  terumah('Terumah', 'תרומה', 'Трума', 'Térouma'),
  tetzaveh('Tetzaveh', 'תצוה', 'Тецаве', 'Tétsavé'),
  kiTisa('Ki Tisa', 'כי תשא', 'Ки Тиса', 'Ki Tissa'),
  vayakhel('Vayakhel', 'ויקהל', 'Ваякѓел', 'Vayakél'),
  pekudei('Pekudei', 'פקודי', 'Пкудей', 'Pékoudéi'),
  vayikra('Vayikra', 'ויקרא', 'Ваикра', 'Vayikra'),
  tzav('Tzav', 'צו', 'Цав', 'Tsav'),
  shemini('Shemini', 'שמיני', 'Шмини', 'Chémini'),
  tazria('Tazria', 'תזריע', 'Тазриа', 'Tazria'),
  metzora('Metzora', 'מצורע', 'Мецора', 'Métsora'),
  achareiMot('Acharei', 'אחרי', 'Ахарей', 'Acharei'),
  kedoshim('Kedoshim', 'קדושים', 'Кдошим', 'Kédochim'),
  emor('Emor', 'אמור', 'Эмор', 'Émor'),
  behar('Behar', 'בהר', 'Бехар', 'Béhar'),
  bechukotai('Bechukotai', 'בחקתי', 'Бехукотай', 'Béhouchotaï'),
  bamidbar('Bamidbar', 'במדבר', 'Бамидбар', 'Bamidbar'),
  naso('Naso', 'נשא', 'Насо', 'Nasó'),
  behaalotecha('Behaalotecha', 'בהעלתך', 'Беѓаалотха', 'Béhaaloté\'ha'),
  shelach('Shelach', 'שלח', 'Шлах', 'Chéla\'h'),
  korach('Korach', 'קרח', 'Корах', 'Korah'),
  chukat('Chukat', 'חקת', 'Хукат', '\'Houkat'),
  balak('Balak', 'בלק', 'Балак', 'Balak'),
  pinchas('Pinchas', 'פינחס', 'Пинхас', 'Pin\'has'),
  matot('Matot', 'מטות', 'Матот', 'Matot'),
  masei('Masei', 'מסעי', 'Масей', 'Masséi'),
  devarim('Devarim', 'דברים', 'Дварим', 'Dévarim'),
  vaetchanan('Vaetchanan', 'ואתחנן', 'Ваэтханан', 'Vaét\'hanan'),
  eikev('Eikev', 'עקב', 'Экев', 'Ékev'),
  reeh('Reeh', 'ראה', 'Рэе', 'Réé'),
  shoftim('Shoftim', 'שופטים', 'Шофтим', 'Choftim'),
  kiTeitzei('Ki Teitzei', 'כי תצא', 'Ки Тецэ', 'Ki Tétsé'),
  kiTavo('Ki Tavo', 'כי תבוא', 'Ки Таво', 'Ki Tavo'),
  nitzavim('Nitzavim', 'נצבים', 'Ницавим', 'Nitsavim'),
  vayeilech('Vayeilech', 'וילך', 'Вайелех', 'Vayéle\'h'),
  haazinu('Haazinu', 'האזינו', 'Ѓаазину', 'Haazinou'),
  ;
  final String en;
  final String he;
  final String ru;
  final String fr;
  const Parsha(this.en, this.he, this.ru, this.fr);

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
