// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// The 88 halachot of Mishneh Torah, in study-cycle order.
/// Enum insertion order matches the daily-Rambam cycle; iterate
/// [values] to walk the cycle.
enum RambamHalacha {
  transmissionOfTheOralLaw('TRANSMISSION_OF_THE_ORAL_LAW', 'Transmission of the Oral Law', 'מסירת תורה שבעל פה', 'Предисловие автора', 'Messirat Torah chèbe\'al pé', 3, 3),
  positiveMitzvot('POSITIVE_MITZVOT', 'Positive Mitzvot', 'מצוות עשה', 'Повелевающие заповеди', 'Mitsvot Assé', 3, 3),
  negativeMitzvot('NEGATIVE_MITZVOT', 'Negative Mitzvot', 'מצוות לא תעשה', 'Запрещающие заповеди', 'Mitsvot Lo Ta\'assé', 3, 3),
  overviewOfMishnehTorahContents('OVERVIEW_OF_MISHNEH_TORAH_CONTENTS', 'Overview of Mishneh Torah Contents', 'תוכן החיבור', 'Оглавление', 'Tokhèn Ha\'hibbour', 3, 3),
  foundationsOfTheTorah('FOUNDATIONS_OF_THE_TORAH', 'Foundations of the Torah', 'הלכות יסודי התורה', 'Законы основ Торы', 'Hilkhot Yessodéi HaTorah', 10, 10),
  humanDispositions('HUMAN_DISPOSITIONS', 'Human Dispositions', 'הלכות דעות', 'Законы об образе жизни', 'Hilkhot Dé\'ot', 7, 7),
  torahStudy('TORAH_STUDY', 'Torah Study', 'הלכות תלמוד תורה', 'Законы изучения Торы', 'Hilkhot Talmoud Torah', 7, 7),
  foreignWorshipAndCustomsOfTheNations('FOREIGN_WORSHIP_AND_CUSTOMS_OF_THE_NATIONS', 'Foreign Worship and Customs of the Nations', 'הלכות עבודה זרה וחוקות הגויים', 'Законы об идолопоклонстве и нееврейских обычаях', 'Hilkhot Avoda Zara vé\'houkot Hagoyim', 12, 12),
  repentance('REPENTANCE', 'Repentance', 'הלכות תשובה', 'Законы о раскаянии', 'Hilkhot Techouva', 10, 10),
  readingTheShema('READING_THE_SHEMA', 'Reading the Shema', 'הלכות קריאת שמע', 'Законы чтения «Шма, Исраэль...»', 'Hilkhot Kriat Chema', 4, 4),
  prayerAndThePriestlyBlessing('PRAYER_AND_THE_PRIESTLY_BLESSING', 'Prayer and the Priestly Blessing', 'הלכות תפילה וברכת כהנים', 'Законы молитвы и благословения коэнов', 'Hilkhot Tefila ouVirkat Kohanim', 15, 15),
  tefillinMezuzahAndTheTorahScroll('TEFILLIN_MEZUZAH_AND_THE_TORAH_SCROLL', 'Tefillin, Mezuzah and the Torah Scroll', 'הלכות תפילין ומזוזה וספר תורה', 'Законы о тфиллин, мезузе и свитке Торы', 'Hilkhot Tefilin ouMezouza véSéfer Torah', 10, 10),
  fringes('FRINGES', 'Fringes', 'הלכות ציצית', 'Законы о цицит', 'Hilkhot Tsitsit', 3, 3),
  blessings('BLESSINGS', 'Blessings', 'הלכות ברכות', 'Законы о благословениях', 'Hilkhot Berakhot', 11, 11),
  circumcision('CIRCUMCISION', 'Circumcision', 'הלכות מילה', 'Законы обрезания', 'Hilkhot Milah', 3, 3),
  theOrderOfPrayer('THE_ORDER_OF_PRAYER', 'The Order of Prayer', 'סדר התפילה', 'Порядок молитв всего года', 'Séder HaTefila', 4, 5),
  sabbath('SABBATH', 'Sabbath', 'הלכות שבת', 'Законы субботы', 'Hilkhot Chabbat', 30, 30),
  eruvin('ERUVIN', 'Eruvin', 'הלכות עירובין', 'Законы эрува', 'Hilkhot Érouvin', 8, 8),
  restOnTheTenthOfTishrei('REST_ON_THE_TENTH_OF_TISHREI', 'Rest on the Tenth of Tishrei', 'הלכות שביתת עשור', 'Законы Дня Искупления', 'Hilkhot Chevitat Assor', 3, 3),
  restOnAHoliday('REST_ON_A_HOLIDAY', 'Rest on a Holiday', 'הלכות שביתת יום טוב', 'Законы праздников', 'Hilkhot Chevitat Yom Tov', 8, 8),
  leavenedAndUnleavenedBread('LEAVENED_AND_UNLEAVENED_BREAD', 'Leavened and Unleavened Bread', 'הלכות חמץ ומצה', 'Законы квасного и мацы', 'Hilkhot \'Hametz ouMatsa', 9, 8),
  shofarSukkahAndLulav('SHOFAR_SUKKAH_AND_LULAV', 'Shofar, Sukkah and Lulav', 'הלכות שופר וסוכה ולולב', 'Законы шофара, сукки и лулава', 'Hilkhot Chofar véSoukka véLoulav', 8, 8),
  sheqelDues('SHEQEL_DUES', 'Sheqel Dues', 'הלכות שקלים', 'Законы полушекеля', 'Hilkhot Chekalim', 4, 4),
  sanctificationOfTheNewMonth('SANCTIFICATION_OF_THE_NEW_MONTH', 'Sanctification of the New Month', 'הלכות קידוש החודש', 'Законы освящения нового месяца', 'Hilkhot Kidoush Ha\'hodech', 19, 19),
  fasts('FASTS', 'Fasts', 'הלכות תעניות', 'Законы постов', 'Hilkhot Ta\'aniot', 5, 5),
  scrollOfEstherAndHanukkah('SCROLL_OF_ESTHER_AND_HANUKKAH', 'Scroll of Esther and Hanukkah', 'הלכות מגילה וחנוכה', 'Законы о Свитке Эстер и Хануке', 'Hilkhot Megila vé\'Hanoucca', 4, 4),
  marriage('MARRIAGE', 'Marriage', 'הלכות אישות', 'Законы брака', 'Hilkhot Ichout', 25, 25),
  divorce('DIVORCE', 'Divorce', 'הלכות גירושין', 'Законы развода', 'Hilkhot Guerouchin', 13, 13),
  levirateMarriageAndRelease('LEVIRATE_MARRIAGE_AND_RELEASE', 'Levirate Marriage and Release', 'הלכות יבום וחליצה', 'Законы левиратных брака и развода', 'Hilkhot Yiboum vé\'Halitsa', 8, 8),
  virginMaiden('VIRGIN_MAIDEN', 'Virgin Maiden', 'הלכות נערה בתולה', 'Законы об обрученной девственнице', 'Hilkhot Na\'ara Betoula', 3, 3),
  womanSuspectedOfInfidelity('WOMAN_SUSPECTED_OF_INFIDELITY', 'Woman Suspected of Infidelity', 'הלכות סוטה', 'Законы о подозреваемой в неверности', 'Hilkhot Sota', 4, 4),
  forbiddenIntercourse('FORBIDDEN_INTERCOURSE', 'Forbidden Intercourse', 'הלכות איסורי ביאה', 'Законы запрещенных половых связей', 'Hilkhot Issouréi Biah', 22, 22),
  forbiddenFoods('FORBIDDEN_FOODS', 'Forbidden Foods', 'הלכות מאכלות אסורות', 'Законы запрещенной пищи', 'Hilkhot Ma\'akhalot Assourot', 17, 17),
  ritualSlaughter('RITUAL_SLAUGHTER', 'Ritual Slaughter', 'הלכות שחיטה', 'Законы ритуального убоя скота и птицы', 'Hilkhot Che\'hita', 14, 14),
  oaths('OATHS', 'Oaths', 'הלכות שבועות', 'Законы клятв', 'Hilkhot Chevouot', 12, 12),
  vows('VOWS', 'Vows', 'הלכות נדרים', 'Законы обетов', 'Hilkhot Nedarim', 13, 13),
  nazariteship('NAZARITESHIP', 'Nazariteship', 'הלכות נזירות', 'Законы назореев', 'Hilkhot Nezirout', 10, 10),
  appraisalsAndDevotedProperty('APPRAISALS_AND_DEVOTED_PROPERTY', 'Appraisals and Devoted Property', 'הלכות ערכים וחרמין', 'Законы об оценивании и отрешенном имуществе', 'Hilkhot Arakhin vé\'Haramin', 8, 8),
  diverseSpecies('DIVERSE_SPECIES', 'Diverse Species', 'הלכות כלאים', 'Законы о запрете смешанния видов', 'Hilkhot Kilayim', 10, 10),
  giftsToThePoor('GIFTS_TO_THE_POOR', 'Gifts to the Poor', 'הלכות מתנות עניים', 'Законы пожертвований бедным', 'Hilkhot Matanot Aniyim', 10, 10),
  heaveOfferings('HEAVE_OFFERINGS', 'Heave Offerings', 'הלכות תרומות', 'Законы возношения', 'Hilkhot Teroumot', 15, 15),
  tithes('TITHES', 'Tithes', 'הלכות מעשרות', 'Законы десятины', 'Hilkhot Ma\'assrot', 14, 14),
  secondTithesAndFourthYearsFruit('SECOND_TITHES_AND_FOURTH_YEARS_FRUIT', 'Second Tithes and Fourth Year\'s Fruit', 'הלכות מעשר שני ונטע רבעי', 'Законы второй десятины и плодов четвертого года', 'Hilkhot Ma\'asser Chéni véNéta Réva\'i', 11, 11),
  firstFruitsAndOtherGiftsToPriestsOutsideTheSanctuary('FIRST_FRUITS_AND_OTHER_GIFTS_TO_PRIESTS_OUTSIDE_THE_SANCTUARY', 'First Fruits and other Gifts to Priests Outside the Sanctuary', 'הלכות ביכורים ושאר מתנות כהונה שבגבולין', 'Законы приношения первых плодов урожая', 'Hilkhot Bikourim ouChe\'ar Matanot Kehouna chèbig\'voulin', 12, 12),
  sabbaticalYearAndTheJubilee('SABBATICAL_YEAR_AND_THE_JUBILEE', 'Sabbatical Year and the Jubilee', 'הלכות שמיטה ויובל', 'Законы субботнего и юбилейного годов', 'Hilkhot Chemita véYovel', 13, 13),
  theChosenTemple('THE_CHOSEN_TEMPLE', 'The Chosen Temple', 'הלכות בית הבחירה', 'Законы о Храме', 'Hilkhot Béit HaBe\'hira', 8, 8),
  vesselsOfTheSanctuaryAndThoseWhoServeTherein('VESSELS_OF_THE_SANCTUARY_AND_THOSE_WHO_SERVE_THEREIN', 'Vessels of the Sanctuary and Those Who Serve Therein', 'הלכות כלי המקדש והעובדין בו', 'Законы храмовой утвари и служения в Храме', 'Hilkhot Kléi HaMikdach véHa\'ovdin Bo', 10, 10),
  admissionIntoTheSanctuary('ADMISSION_INTO_THE_SANCTUARY', 'Admission into the Sanctuary', 'הלכות ביאת מקדש', 'Законы о приходе в Храм', 'Hilkhot Biat Mikdach', 9, 9),
  thingsForbiddenOnTheAltar('THINGS_FORBIDDEN_ON_THE_ALTAR', 'Things Forbidden on the Altar', 'הלכות איסורי המזבח', 'Законы о животных, запрещенных для жертвоприношений', 'Hilkhot Issouréi HaMizbé\'a\'h', 7, 7),
  sacrificialProcedure('SACRIFICIAL_PROCEDURE', 'Sacrificial Procedure', 'הלכות מעשה הקרבנות', 'Законы принесения жертвоприношений', 'Hilkhot Ma\'assé HaKorbanot', 19, 19),
  dailyOfferingsAndAdditionalOfferings('DAILY_OFFERINGS_AND_ADDITIONAL_OFFERINGS', 'Daily Offerings and Additional Offerings', 'הלכות תמידים ומוספין', 'Законы ежедневных и дополнительных жертвоприношений', 'Hilkhot Temidin ouMoussafin', 10, 10),
  sacrificesRenderedUnfit('SACRIFICES_RENDERED_UNFIT', 'Sacrifices Rendered Unfit', 'הלכות פסולי המוקדשין', 'Законы о жертвоприношениях, непригодных для еды', 'Hilkhot Pessouléi HaMoukdachin', 19, 19),
  serviceOnTheDayOfAtonement('SERVICE_ON_THE_DAY_OF_ATONEMENT', 'Service on the Day of Atonement', 'הלכות עבודת יום הכפורים', 'Законы храмовой службы в День Искупления', 'Hilkhot Avodat Yom HaKippourim', 5, 5),
  trespass('TRESPASS', 'Trespass', 'הלכות מעילה', 'Законы использования имущества, посвященного Храму', 'Hilkhot Mé\'ila', 8, 8),
  paschalOffering('PASCHAL_OFFERING', 'Paschal Offering', 'הלכות קרבן פסח', 'Законы пасхальной жертвы', 'Hilkhot Korban Pessa\'h', 10, 10),
  festivalOffering('FESTIVAL_OFFERING', 'Festival Offering', 'הלכות חגיגה', 'Законы праздничной жертвы', 'Hilkhot \'Haguiga', 3, 3),
  firstlings('FIRSTLINGS', 'Firstlings', 'הלכות בכורות', 'Законы о первенцах животных', 'Hilkhot Bekhorot', 8, 8),
  offeringsForUnintentionalTransgressions('OFFERINGS_FOR_UNINTENTIONAL_TRANSGRESSIONS', 'Offerings for Unintentional Transgressions', 'הלכות שגגות', 'Законы о жертве за непреднамеренный грех', 'Hilkhot Chegagot', 15, 15),
  offeringsForThoseWithIncompleteAtonement('OFFERINGS_FOR_THOSE_WITH_INCOMPLETE_ATONEMENT', 'Offerings for Those with Incomplete Atonement', 'הלכות מחוסרי כפרה', 'Законы о человеке, который не получил искупления', 'Hilkhot Me\'houssréi Kappara', 5, 5),
  substitution('SUBSTITUTION', 'Substitution', 'הלכות תמורה', 'Законы о замене животного, приносимого в жертву', 'Hilkhot Temoura', 4, 4),
  defilementByACorpse('DEFILEMENT_BY_A_CORPSE', 'Defilement by a Corpse', 'הלכות טומאת מת', 'Законы ритуальной нечистоты, порождаемой мертвым', 'Hilkhot Toumat Mét', 25, 25),
  redHeifer('RED_HEIFER', 'Red Heifer', 'הלכות פרה אדומה', 'Законы красной коровы', 'Hilkhot Para Adouma', 15, 15),
  defilementByLeprosy('DEFILEMENT_BY_LEPROSY', 'Defilement by Leprosy', 'הלכות טומאת צרעת', 'Законы ритуальной нечистоты, порождаемой болезнью «проказа»', 'Hilkhot Toumat Tsara\'at', 16, 16),
  thoseWhoDefileBedOrSeat('THOSE_WHO_DEFILE_BED_OR_SEAT', 'Those Who Defile Bed or Seat', 'הלכות מטמאי משכב ומושב', 'Законы ритуальной нечистоты, передающейся предмету, на котором сидят или лежат', 'Hilkhot Metam\'éi Michkav ouMochav', 13, 13),
  otherSourcesOfDefilement('OTHER_SOURCES_OF_DEFILEMENT', 'Other Sources of Defilement', 'הלכות שאר אבות הטומאות', 'Законы других источников ритуальной нечистоты', 'Hilkhot Che\'ar Avot HaToum\'ot', 20, 20),
  defilementOfFoods('DEFILEMENT_OF_FOODS', 'Defilement of Foods', 'הלכות טומאת אוכלים', 'Законы о ритуальной нечистоте пищи', 'Hilkhot Toumat Okhalin', 16, 16),
  vessels('VESSELS', 'Vessels', 'הלכות כלים', 'Законы сосудов', 'Hilkhot Kélim', 28, 28),
  immersionPools('IMMERSION_POOLS', 'Immersion Pools', 'הלכות מקואות', 'Законы миквы', 'Hilkhot Mikvaot', 11, 11),
  damagesToProperty('DAMAGES_TO_PROPERTY', 'Damages to Property', 'הלכות נזקי ממון', 'Законы об ущербах, причиненных имуществом', 'Hilkhot Nizkéi Mamon', 14, 14),
  theft('THEFT', 'Theft', 'הלכות גניבה', 'Законы о воровстве', 'Hilkhot Guenéva', 9, 9),
  robberyAndLostProperty('ROBBERY_AND_LOST_PROPERTY', 'Robbery and Lost Property', 'הלכות גזילה ואבידה', 'Законы о грабеже и возвращении потери', 'Hilkhot Guezéla vaAvéda', 18, 18),
  oneWhoInjuresAPersonOrProperty('ONE_WHO_INJURES_A_PERSON_OR_PROPERTY', 'One Who Injures a Person or Property', 'הלכות חובל ומזיק', 'Законы о телесных повреждениях', 'Hilkhot \'Hovel ouMazik', 8, 8),
  murdererAndThePreservationOfLife('MURDERER_AND_THE_PRESERVATION_OF_LIFE', 'Murderer and the Preservation of Life', 'הלכות רוצח ושמירת נפש', 'Законы об убийстве и защите жизни', 'Hilkhot Rotsé\'a\'h ouChemirat Néfech', 13, 13),
  sales('SALES', 'Sales', 'הלכות מכירה', 'Законы продажи', 'Hilkhot Mekhira', 30, 30),
  ownerlessPropertyAndGifts('OWNERLESS_PROPERTY_AND_GIFTS', 'Ownerless Property and Gifts', 'הלכות זכייה ומתנה', 'Законы приобретения во владение и дарения', 'Hilkhot Zekhiyah ouMatana', 12, 12),
  neighbors('NEIGHBORS', 'Neighbors', 'הלכות שכנים', 'Законы о соседях', 'Hilkhot Chekhénim', 14, 14),
  agentsAndPartners('AGENTS_AND_PARTNERS', 'Agents and Partners', 'הלכות שלוחין ושותפין', 'Законы о посланцах и компаньонах', 'Hilkhot Chelou\'hin véChoutafin', 10, 10),
  slaves('SLAVES', 'Slaves', 'הלכות עבדים', 'Законы о рабах', 'Hilkhot Avadim', 9, 9),
  hiring('HIRING', 'Hiring', 'הלכות שכירות', 'Законы наемных работников', 'Hilkhot Sekhirout', 13, 13),
  borrowingAndDeposit('BORROWING_AND_DEPOSIT', 'Borrowing and Deposit', 'הלכות שאלה ופיקדון', 'Законы займа и хранения имущества', 'Hilkhot Ché\'éla ouPikadon', 8, 8),
  creditorAndDebtor('CREDITOR_AND_DEBTOR', 'Creditor and Debtor', 'הלכות מלווה ולווה', 'Законы денежных ссуд', 'Hilkhot Malvé véLové', 27, 27),
  plaintiffAndDefendant('PLAINTIFF_AND_DEFENDANT', 'Plaintiff and Defendant', 'הלכות טוען ונטען', 'Законы исков (об истце и ответчике)', 'Hilkhot To\'én véNit\'an', 16, 16),
  inheritances('INHERITANCES', 'Inheritances', 'הלכות נחלות', 'Законы наследования', 'Hilkhot Ne\'halot', 11, 11),
  theSanhedrinAndThePenaltiesWithinTheirJurisdiction('THE_SANHEDRIN_AND_THE_PENALTIES_WITHIN_THEIR_JURISDICTION', 'The Sanhedrin and the Penalties within Their Jurisdiction', 'הלכות סנהדרין והעונשין המסורין להם', 'Законы о Санедрине', 'Hilkhot Sanhedrin véHa\'onachin Hamessourin Lahem', 26, 26),
  testimony('TESTIMONY', 'Testimony', 'הלכות עדות', 'Законы о свидетелях', 'Hilkhot Édout', 22, 22),
  rebels('REBELS', 'Rebels', 'הלכות ממרים', 'Законы об ослушниках', 'Hilkhot Mamrim', 7, 7),
  mourning('MOURNING', 'Mourning', 'הלכות אבל', 'Законы траура', 'Hilkhot Avel', 14, 14),
  kingsAndWars('KINGS_AND_WARS', 'Kings and Wars', 'הלכות מלכים ומלחמות', 'Законы о королях, их войнах и Короле Мошиахе', 'Hilkhot Melakhim ouMil\'hamot', 12, 12),
  ;
  final String key;        // stable SCREAMING_SNAKE_CASE identifier
  final String en;
  final String he;
  final String ru;
  final String fr;
  final int chapters;      // 1-chapter cycle count
  final int chapters3;     // 3-chapter cycle count (may differ)
  const RambamHalacha(this.key, this.en, this.he, this.ru, this.fr,
                      this.chapters, this.chapters3);
}

/// Verse ranges for the four introductory 'halachot' whose
/// per-day units are pesukim rather than chapters.
const List<List<String>> rambamFirstFourVerses = [
  ['1-21', '22-33', '34-45'],
  ['1-83', '84-166', '167-248'],
  ['1-122', '123-245', '246-365'],
  ['1:1-4:8', '5:1-9:9', '10:1-14:10'],
];

final DateTime rambamEpoch = DateTime.utc(1984, 4, 29);
const int rambamOneChapterCycleDays   = 1017;
const int rambamThreeChapterCycleDays = 339;