// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// The 18 minhagim that the haftarah tables distinguish
/// (opentorah's Custom.xml minus the abstract 'Common' root).
///
/// Declaration order is load-bearing: [index] is the `hc_custom`
/// value the C library expects, so this enum and the generated
/// `hc_custom` in haftarot_data.h must stay in lockstep. Both are
/// emitted from names/customs.json, which fixes the order.
enum HaftarahCustom {
  ashkenaz('ASHKENAZ', 'Ashkenaz', 'אשכנז', 'Ашкеназский', 'Ashkénaze'),
  poznan('POZNAN', 'Poznan', 'פוזנא', 'Познанский', 'Poznanien'),
  italki('ITALKI', 'Italki', 'יטלקי', 'Итальянский', 'Italien'),
  frankfurt('FRANKFURT', 'Frankfurt', 'פרנקפורט', 'Франкфуртский', 'Francfort'),
  lita('LITA', 'Lita', 'ליטה', 'Литовский', 'Lituanien'),
  chayeyOdom('CHAYEY_ODOM', 'Chayey Odom', 'חיי אדם', 'Хаей адам', '\'Hayé Adam'),
  hagra('HAGRA', 'GR"A', 'הגר״א', 'Виленский гаон', 'GR"A'),
  sefard('SEFARD', 'Sefard', 'ספרד', 'Сефардский', 'Séfarade'),
  chabad('CHABAD', 'Chabad', 'חב״ד', 'Хабад', 'Habad'),
  pureSephardim('PURE_SEPHARDIM', 'Pure Sephardim', 'ספרדים טהורים', 'Чистые сефарды', 'Séfarades purs'),
  persia('PERSIA', 'Persia', 'פרס ובוכרה', 'Персия и Бухара', 'Perse et Boukhara'),
  libya('LIBYA', 'Libya', 'לוב', 'Ливийский', 'Libyen'),
  magreb('MAGREB', 'Magreb', 'מגרב', 'Магреб', 'Maghreb'),
  algeria('ALGERIA', 'Algeria', 'אלגיר', 'Алжирский', 'Algérien'),
  algiers('ALGIERS', 'Algiers', 'אלג׳יר', 'Алжир (город)', 'Alger (ville)'),
  morocco('MOROCCO', 'Morocco', 'מרוקו', 'Марокко', 'Marocain'),
  fes('FES', 'Fes', 'פאס', 'Фес', 'Fès'),
  marrakesh('MARRAKESH', 'Marrakesh', 'מראכש', 'Марракеш', 'Marrakech'),
  agadir('AGADIR', 'Agadir', 'אגדיר', 'Агадир', 'Agadir'),
  toshbim('TOSHBIM', 'Toshbim', 'תושבים', 'Тошбим', 'Tochbim'),
  djerba('DJERBA', 'Djerba', 'דגרבה', 'Джерба', 'Djerba'),
  bavlim('BAVLIM', 'Bavlim', 'בבלים', 'Вавилонский', 'Babylonien'),
  teiman('TEIMAN', 'Teiman', 'תימן', 'Йеменский', 'Yéménite'),
  baladi('BALADI', 'Baladi', 'בלדי', 'Балади', 'Baladi'),
  shami('SHAMI', 'Shami', 'שאמי', 'Шами', 'Chami'),
  romania('ROMANIA', 'Romania', 'רומניא', 'Румыния (нусах романия)', 'Romaniote'),
  ;
  final String key;   // stable identifier (matches JSON key)
  final String en;
  final String he;
  final String ru;
  final String fr;
  const HaftarahCustom(this.key, this.en, this.he, this.ru, this.fr);

  /// The `hc_custom` value for this minhag.
  int get hcIndex => index;

  /// Look up by `hc_custom` value. Null if out of range.
  static HaftarahCustom? fromHcIndex(int idx) =>
      (idx >= 0 && idx < values.length) ? values[idx] : null;

  /// Look up by stable key (the JSON/enum name, e.g. 'CHAYEY_ODOM').
  static HaftarahCustom? fromKey(String key) => _byKey[key];
  static final Map<String, HaftarahCustom> _byKey =
      { for (final c in values) c.key: c };
}
