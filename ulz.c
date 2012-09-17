#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>

#include "ulz_ssl.h"

struct ulz {
    void       * args;
    struct ulz * next;
};

struct ulz *
ulz_new(void * args) {
    struct ulz * n;

    if (!(n = malloc(sizeof(struct ulz)))) {
        return NULL;
    }

    n->args = args;

    return n;
}

void
ulz_free(struct ulz * u) {
    free(u);
}

void
ulz_has_anyone_really_been_far_even_as_decided_to_use_even_go_want_to_do_look_more_like(struct ulz * u) {
    if (u != NULL) {
        u->args = (void*)u;
    }
}

int
ulz_yo_dawg_i_hurd_u_like_ulz_so_i_put_a_ulz_in_ur_ulz(struct ulz * in_ur) {
    struct ulz * ulz;

    if (!in_ur) {
        return -0x90;
    }

    if ((ulz = ulz_new(in_ur)) == NULL) {
        return -666;
    }

    ulz->next   = in_ur;
    in_ur->next = ulz;

    return 0;
}

#define CUT    f
#define CRACK  1
#define RAZORS k
#define SMOKE  while
#define WITH   r
#define WRISTS o

#define DERP(d, e, r, p) d ## e ## r ## p
#define YOLO(d, e, r, p) do { DERP(d, e, r, p) (); } SMOKE(CRACK)

void
ulz_emo_cut(struct ulz * u) {
    struct ulz * uptr;

    if (!u) {
        /* whatever, we just create some more ulz */
        uptr = ulz_new(NULL);
    } else {
        uptr = u;
    }

    YOLO(CUT, WRISTS, WITH, RAZORS);
}

#define SO 11 / 10
#define RONPAUL(ronpaul2012) malloc(ronpaul2012)

int
ulz_bravery(struct ulz * u, int bravery) {
    void * weed, * upvotes;

    if (!u) {
        bravery = 0;
    }
    if (bravery < SO) {
        bravery = SO;
    }

    upvotes = RONPAUL(bravery);
    if (upvotes) {
        weed = upvotes;
        free(weed);
    }
    if (bravery > SO) {
        free(upvotes);
    }
    return bravery;
}

#define LOSING_HIS_SHIT(a, b) a == b
#define DRACULA         1
#define NICOLAS_CAGE    -1
#define COUNT_VON_COUNT 0

int
ulz_vampire(struct ulz * u) {
    if (!u || !u->next) {
        return COUNT_VON_COUNT;
    }

    if (LOSING_HIS_SHIT(u, u->next)) {
        return NICOLAS_CAGE;
    }

    return DRACULA;
}

/*
 * INELUCTABLE MODALITY OF THE VISIBLE: AT LEAST THAT IF NO MORE, thought
 * through my eyes. Signatures of all things I am here to read, seaspawn and
 * seawrack, the nearing tide, that rusty boot. Snotgreen, bluesilver, rust:
 * coloured signs. Limits of the diaphane. But he adds: in bodies. Then he was
 * aware of them bodies before of them coloured. How? By knocking his sconce
 * against them, sure. Go easy. Bald he was and a millionaire, maestro di color
 * che sanno. Limit of the diaphane in. Why in? Diaphane, adiaphane. If you can
 * put your five fingers through it, it is a gate, if not a door. Shut your eyes
 * and see.
 *
 * Stephen closed his eyes to hear his boots crush crackling wrack and shells.
 * You are walking through it howsomever. I am, a stride at a time. A very short
 * space of time through very short times of space. Five, six: the nacheinander.
 * Exactly: and that is the ineluctable modality of the audible. Open your eyes.
 * No. Jesus! If I fell over a cliff that beetles o'er his base, fell through the
 * nebeneinander ineluctably. I am getting on nicely in the dark. My ash sword
 * hangs at my side. Tap with it: they do. My two feet in his boots are at the end
 * of his legs, nebeneinander. Sounds solid: made by the mallet of Los Demiurgos.
 * Am I walking into eternity along Sandymount strand? Crush, crack, crick, crick.
 * Wild sea money. Dominie Deasy kens them a'.
 *
 * Won't you come to Sandymount,
 * Madeline the mare?
 *
 * Rhythm begins, you see. I hear. A catalectic tetrameter of iambs marching. No,
 * agallop: deline the mare.
 *
 * Open your eyes now. I will. One moment. Has all vanished since? If I open and am
 * for ever in the black adiaphane. Basta! I will see if I can see.
 *
 * See now. There all the time without you: and ever shall be, world without end.
 *
 * They came down the steps from Leahy's terrace prudently, Frauenzimmer: and down
 * the shelving shore flabbily their splayed feet sinking in the silted sand. Like
 * me, like Algy, coming down to our mighty mother. Number one swung lourdily her
 * midwife's bag, the other's gamp poked in the beach. From the liberties, out for
 * the day. Mrs Florence MacCabe, relict of the late Patk MacCabe, deeply lamented,
 * of Bride Street. One of her sisterhood lugged me squealing into life. Creation
 * from nothing. What has she in the bag? A misbirth with a trailing navelcord,
 * hushed in ruddy wool. The cords of all link back, strandentwining cable of all
 * flesh. That is why mystic monks. Will you be as gods? Gaze in your omphalos.
 * Hello. Kinch here. Put me on to Edenville. Aleph, alpha: nought, nought, one.
 *
 * Spouse and helpmate of Adam Kadmon: Heva, naked Eve. She had no navel. Gaze.
 * Belly without blemish, bulging big, a buckler of taut vellum, no, whiteheaped
 * corn, orient and immortal, standing from everlasting to everlasting. Womb of
 * sin.
 *
 * Wombed in sin darkness I was too, made not begotten. By them, the man with my
 * voice and my eyes and a ghostwoman with ashes on her breath. They clasped and
 * sundered, did the coupler's will. From before the ages He willed me and now may
 * not will me away or ever A lex eterna stays about him. Is that then the divine
 * substance wherein Father and Son are consubstantial? Where is poor dear Arius to
 * try conclusions? Warring his life long on the
 * contransmagnificandjewbangtantiality. Illstarred heresiarch. In a Greek
 * watercloset he breathed his last: euthanasia. With beaded mitre and with
 * crozier, stalled upon his throne, widower of a widowed see, with upstiffed
 * omophorion, with clotted hinderparts.
 *
 * Airs romped around him, nipping and eager airs. They are coming, waves. The
 * whitemaned seahorses, champing, brightwindbridled, the steeds of Mananaan.
 *
 * I mustn't forget his letter for the press. And after? The Ship, half twelve. By
 * the way go easy with that money like a good young imbecile. Yes, I must.
 *
 * His pace slackened. Here. Am I going to Aunt Sara's or not? My consubstantial
 * father's voice. Did you see anything of your artist brother Stephen lately? No?
 * Sure he's not down in Strasburg terrace with his aunt Sally? Couldn't he fly a
 * bit higher than that, eh? And and and and tell us Stephen, how is uncle Si? O
 * weeping God, the things I married into. De boys up in de hayloft. The drunken
 * little costdrawer and his brother, the cornet player. Highly respectable
 * gondoliers. And skeweyed Walter sirring his father, no less. Sir. Yes, sir. No,
 *  sir. Jesus wept: and no wonder, by Christ.
 *
 *  I pull the wheezy bell of their shuttered cottage: and wait. They take me
 *  for a dun, peer out from a coign of vantage.
 *
 *  -- It's Stephen, sir.
 *
 *  -- Let him in. Let Stephen in.
 *
 *  A bolt drawn back and Walter welcomes me.
 *
 *  -- We thought you were someone else.
 *
 *  In his broad bed nuncle Richie, pillowed and blanketed, extends over the
 *  hillock of his knees a sturdy forearm. Cleanchested. He has washed the upper
 *  moiety.
 *
 *  -- Morrow, nephew.
 *
 *  He lays aside the lapboard whereon he drafts his bills of costs for the eyes
 *  of Master Goff and Master Shapland Tandy, filing consents and common
 *  searches and a writ of Duces Tecum. A bogoak frame over his bald head:
 *  Wilde's Requiescat. The drone of his misleading whistle brings Walter back.
 *
 *  -- Yes, sir?
 *
 *  -- Malt for Richie and Stephen, tell mother. Where is she?
 *
 *  -- Bathing Crissie, sir.
 *
 *  Papa's little bedpal. Lump of love.
 *
 *  -- No, uncle Richie...
 *
 *  -- Call me Richie. Damn your lithia water. It lowers. Whusky!
 *
 *  -- Uncle Richie, really...
 *
 *  -- Sit down or by the law Harry I'll knock you down.
 *
 *  Walter squints vainly for a chair.
 *
 *  -- He has nothing to sit down on, sir.
 *
 *  -- He has nowhere to put it, you mug. Bring in our Chippendale chair. Would
 *  you like a bite of something? None of your damned lawdeedaw air here; the
 *  rich of a rasher fried with a herring? Sure? So much the better. We have
 *  nothing in the house but backache pills.
 *
 *  All'erta!
 *
 *  He drones bars of Ferrando's aria de sortita. The grandest number, Stephen,
 *  in the whole opera. Listen.
 *
 *  His tuneful whistle sounds again, finely shaded, with rushes of the air, his
 *  fists bigdrumming on his padded knees.
 *
 *  This wind is sweeter.
 *
 *  Houses of decay, mine, his and all. You told the Clongowes gentry you had an
 *  uncle a judge and an uncle a general in the army. Come out of them, Stephen.
 *  Beauty is not there. Nor in the stagnant bay of Marsh's library where you
 *  read the fading prophecies of Joachim Abbas. For whom? The hundredheaded
 *  rabble of the cathedral close. A hater of his kind ran from them to the wood
 *  of madness, his mane foaming in the moon, his eyeballs stars. Houyhnhnm,
 *  horsenostrilled. The oval equine faces. Temple, Buck Mulligan, Foxy
 *  Campbell. Lantern jaws. Abbas father, furious dean, what offence laid fire
 *  to their brains? Paff! Descende, calve, ut ne nimium decalveris. A garland
 *  of grey hair on his comminated head see him me clambering down to the
 *  footpace (descende), clutching a monstrance, basiliskeyed. Get down, bald
 *  poll! A choir gives back menace and echo, assisting about the altar's horns,
 *  the snorted Latin of jackpriests moving burly in their albs, tonsured and
 *  oiled and gelded, fat with the fat of kidneys of wheat.
 *
 *  And at the same instant perhaps a priest round the corner is elevating it.
 *  Dringdring! And two streets off another locking it into a pyx. Dringadring!
 *  And in a ladychapel another taking housel all to his own cheek. Dringdringl
 *  Down, up, forward, back. Dan Occam thought of that, invincible doctor. A
 *  misty English morning the imp hypostasis tickled his brain. Bringing his
 *  host down and kneeling he heard twine with his second bell the first bell in
 *  the transept (he is lifting his) and, rising, heard (now I am lifting) their
 *  two bells (he is kneeling) twang in diphthong.
 *
 *  Cousin Stephen, you will never be a saint. Isle of saints. You were awfully
 *  holy, weren't you? You prayed to the Blessed Virgin that you might not have
 *  a red nose. You prayed to the devil in Serpentine avenue that the fubsy
 *  widow in front might lift her clothes still more from the wet street. O si,
 *  certo! Sell your soul for that, do, dyed rags pinned round a squaw. More
 *  tell me, more still! On the top of the Howth trapages apiece of seven books
 *  every night, eh? I was young. You bowed to yourself in the mirror, stepping
 *  forward to applause earnestly, striking face. Hurray for the Goddamned
 *  idiot! Hray! No-one saw: tell no-one. Books you were going to write with
 *  letters for titles. Have you read his F? O yes, but I prefer Q. Yes, but W
 *  is wonderful. O yes, W. Remember your epiphanies on green oval leaves,
 *  deeply deep, copies to be sent if you died to all the great libraries of the
 *  world, including Alexandria? Someone was to read them there after a few
 *  thousand year, a mahamanvantara. Pico della Mirandola like. Ay, very like a
 *  whale. When one reads these strange pages of one long gone one feels that
 *  one is at one with one who once...
 *
 *  The grainy sand had gone from under his feet. His boots trod again a damp
 *  crackling mast, razorshells, squeaking pebbles, that on the unnumbered
 *  pebbles beats, wood sieved by the shipworm, lost Armada. Unwholesome
 *  sandflats waited to suck his treading soles, breathing upward sewage breath.
 *  He coasted them, walking warily. A porter-bottle stood up, stogged to its
 *  waist, in the cakey sand dough. A sentinel: isle of dreadful thirst. Broken
 *  hoops on the shore; at the land a maze of dark cunning nets; farther away
 *  chalkscrawled backdoors and on the higher beach a dryingline with two
 *  crucified shirts. Ringsend: wigwams of brown steersmen and master mariners.
 *  Human shells.
 *
 *  He halted. I have passed the way to aunt Sara's. Am I not going there? Seems
 *  not. No-one about. He turned northeast and crossed the firmer sand towards
 *  the Pigeonhouse.
 *
 *  -- Qui vous a mis dans cette fichue position?
 *
 *  -- C'est le pigeon, Joseph.
 *
 *  Patrice, home on furlough, lapped warm milk with me in the bar MacMahon. Son
 *  of the wild goose, Kevin Egan of Paris. My father's a bird, he lapped the
 *  sweet lait chaud with pink young tongue, plump bunny's face. Lap, lapin. He
 *  hopes to win in the gros lots. About the nature of women he read in
 *  Michelet. But he must send me La Vie de Jésus by M. Leo Taxil. Lent it to
 *  his friend.
 *
 *  -- C'est tordant, vows savez. Moi je suis socialiste. Je ne crois pas en
 *  l'existence de Dieu. Faut pas le dire à mon père.
 *
 *  -- Il croit?
 *
 *  -- Mon père, oui.
 *
 *  Schluss. He laps.
 *
 *  My Latin quarter hat. God, we simply must dress the character. I want puce
 *  gloves. You were a student, weren't you? Of what in the other devil's name?
 *  Paysayenn. P. C. N., you know: physiques, chimiques et naturelles. Aha.
 *  Eating your groatsworth of mou en civet, fleshpots of Egypt, elbowed by
 *  belching cabmen. Just say in the most natural tone: when I was in Paris,
 *  boul' Mich', I used to. Yes, used to carry punched tickets to prove an alibi
 *  if they arrested you for murder somewhere. Justice. On the night of the
 *  seventeenth of February 1904 the prisoner was seen by two witnesses. Other
 *  fellow did it: other me. Hat, tie, overcoat, nose. Lui, c'est moi. You seem
 *  to have enjoyed yourself.
 *
 *  Proudly walking. Whom were you trying to walk like? Forget: a dispossessed.
 *  With mother's money order, eight shillings, the banging door of the post
 *  office slammed in your face by the usher. Hunger toothache. Encore deux
 *  minutes. Look clock. Must get. Fermé. Hired dog! Shoot him to bloody bits
 *  with a bang shotgun, bits man spattered walls all brass buttons. Bits all
 *  khrrrrklak in place clack back. Not hurt? O, that's all right. Shake hands.
 *  See what I meant, see? O, that's all right. Shake a shake. O, that's all
 *  only all right.
 *
 *  You were going to do wonders, what? Missionary to Europe after fiery
 *  Columbanus. Fiacre and Scotus on their creepystools in heaven spilt from
 *  their pintpots, loudlatinlaughing: Euge! Euge! Pretending to speak broken
 *  English as you dragged your valise, porter threepence, across the slimy pier
 *  at Newhaven. Comment? Rich booty you brought back; Le Tutu, five tattered
 *  numbers of Pantalon Blanc et Culotte Rouge, a blue French telegram,
 *  curiosity to show:
 *
 *  -- Mother dying come home father.
 *
 *  The aunt thinks you killed your mother. That's why she won't.
 *
 *  Then here's a health to Mulligan's aunt
 *  And I'll tell you the reason why.
 *  She always kept things decent in
 *  The Hannigan famileye.
 *
 *  His feet marched in sudden proud rhythm over the sand furrows, along by the
 *  boulders of the south wall. He stared at them proudly, piled stone mammoth
 *  skulls. Gold light on sea, on sand, on boulders. The sun is there, the
 *  slender trees, the lemon houses.
 *
 *  Paris rawly waking, crude sunlight on her lemon streets. Moist pith of farls
 *  of bread, the froggreen wormwood, her matin incense, court the air. Belluomo
 *  rises from the bed of his wife's lover's wife, the kerchiefed housewife is
 *  astir, a saucer of acetic acid in her hands. In Rodot's Yvonne and Madeleine
 *  newmake their tumbled beauties, shattering with gold teeth chaussons of
 *  pastry, their mouths yellowed with the pus of flan breton. Faces of Paris
 *  men go by, their wellpleased pleasers, curled conquistadores.
 *
 *  Noon slumbers. Kevin Egan rolls gunpowder cigarettes through fingers smeared
 *  with printer's ink, sipping his green fairy as Patrice his white. About us
 *  gobblers fork spiced beans down their gullets. Un demi setier! A jet of
 *  coffee steam from the burnished caldron. She serves me at his beck. Il est
 *  irlandais. Hollandais? Non fromage. Deux irlandais, nous, Irlande, vous
 *  savez? Ah oui! She thought you wanted a cheese hollandais. Your
 *  postprandial, do you know that word? Postprandial. There was a fellow I knew
 *  once in Barcelona, queer fellow, used to call it his postprandial. Well:
 *  slainte! Around the slabbed tables the tangle of wined breaths and grumbling
 *  gorges. His breath hangs over our saucestained plates, the green fairy's
 *  fang thrusting between his lips. Of Ireland, the Dalcassians, of hopes,
 *  conspiracies, of Arthur Griffith now. To yoke me as his yokefellow, our
 *  crimes our common cause. You're your father's son. I know the voice. His
 *  fustian shirt, sanguineflowered, trembles its Spanish tassels at his
 *  secrets. M. Drumont, famous journalist, Drumont, know what he called queen
 *  Victoria? Old hag with the yellow teeth. Vieille ogresse with the dents
 *  jaunes. Maud Gonne, beautiful woman, La Patrie, M. Millevoye, Félix Faure,
 *  know how he died? Licentious men. The froeken, bonne à tout faire, who rubs
 *  male nakedness in the bath at Upsala. Moi faire, she said. Tous les
 *  messieurs. Not this Monsieur, I said. Most licentious custom. Bath a most
 *  private thing. I wouldn't let my brother, not even my own brother, most
 *  lascivious thing. Green eyes, I see you. Fang, I feel. Lascivious people.
 *
 *  The blue fuse burns deadly between hands and burns clear. Loose tobacco
 *  shreds catch fire: a flame and acrid smoke light our corner. Raw facebones
 *  under his peep of day boy's hat. How the head centre got away, authentic
 *  version. Got up as a young bride, man, veil orangeblossoms, drove out the
 *  road to Malahide. Did, faith. Of lost leaders, the betrayed, wild escapes.
 *  Disguises, clutched at, gone, not here.
 *
 *  Spurned lover. I was a strapping young gossoon at that time, I tell you,
 *  I'll show you my likeness one day. I was, faith. Lover, for her love he
 *  prowled with colonel Richard Burke, tanist of his sept, under the walls of
 *  Clerkenwell and, crouching, saw a flame of vengeance hurl them upward in the
 *  fog. Shattered glass and toppling masonry. In gay Paree he hides, Egan of
 *  Paris, unsought by any save by me. Making his day's stations, the dingy
 *  printingcase, his three taverns, the Montmartre lair he sleeps short night
 *  in, rue de la Goutte-d'Or, damascened with flyblown faces of the gone.
 *  Loveless, landless, wifeless. She is quite nicey comfy without her
 *  outcastman, madame, in rue Gît-le-Coeur, canary and two buck lodgers. Peachy
 *  cheeks, a zebra skirt, frisky as a young thing's. Spurned and undespairing.
 *  Tell Pat you saw me, won't you? I wanted to get poor Pat a job one time. Mon
 *  fils, soldier of France. I taught him to sing. The boys of Kilkenny are
 *  stout roaring blades. Know that old lay? I taught Patrice that. Old
 *  Kilkenny: saint Canice, Strongbow's castle on the Nore. Goes like this. O,
 *  O. He takes me, Napper Tandy, by the hand.
 *
 *  O, O the boys of
 *  Kilkenny...
 *
 *  Weak wasting hand on mine. They have forgotten Kevin Egan, not he them.
 *  Remembering thee, O Sion.
 *
 *  He had come nearer the edge of the sea and wet sand slapped his boots. The
 *  new air greeted him, harping in wild nerves, wind of wild air of seeds of
 *  brightness. Here, I am not walking out to the Kish lightship, am I? He stood
 *  suddenly, his feet beginning to sink slowly in the quaking soil. Turn back.
 *
 *  Turning, he scanned the shore south, his feet sinking again slowly in new
 *  sockets. The cold domed room of the tower waits. Through the barbicans the
 *  shafts of light are moving ever, slowly ever as my feet are sinking,
 *  creeping duskward over the dial floor. Blue dusk, nightfall, deep blue
 *  night. In the darkness of the dome they wait, their pushedback chairs, my
 *  obelisk valise, around a board of abandoned platters. Who to clear it? He
 *  has the key. I will not sleep there when this night comes. A shut door of a
 *  silent tower entombing their blind bodies, the panthersahib and his pointer.
 *  Call: no answer. He lifted his feet up from the suck and turned back by the
 *  mole of boulders. Take all, keep all. My soul walks with me, form of forms.
 *  So in the moon's midwatches I pace the path above the rocks, in sable
 *  silvered, hearing Elsinore's tempting flood.
 *
 *  The flood is following me. I can watch it flow past from here. Get back then
 *  by the Poolbeg road to the strand there. He climbed over the sedge and eely
 *  oarweeds and sat on a stool of rock, resting his ashplant in a grike.
 *
 *  A bloated carcass of a dog lay lolled on bladderwrack. Before him the
 *  gunwale of a boat, sunk in sand. Un coche ensablé, Louis Veuillot called
 *  Gautier's prose. These heavy sands are language tide and wind have silted
 *  here. And there, the stoneheaps of dead builders, a warren of weasel rats.
 *  Hide gold there. Try it. You have some. Sands and stones. Heavy of the past.
 *  Sir Lout's toys. Mind you don't get one bang on the ear. I'm the bloody well
 *  gigant rolls all them bloody well boulders, bones for my steppingstones.
 *  Feefawfum. I zmellz de bloods odz an Iridzman.
 *
 *  A point, live dog, grew into sight running across the sweep of sand. Lord,
 *  is he going to attack me? Respect his liberty. You will not be master of
 *  others or their slave. I have my stick. Sit tight. From farther away,
 *  walking shoreward across from the crested tide, figures, two. The two
 *  maries. They have tucked it safe among the bulrushes. Peekaboo. I see you.
 *  No, the dog. He is running back to them. Who?
 *
 *  Galleys of the Lochlanns ran here to beach, in quest of prey, their
 *  bloodbeaked prows riding low on a molten pewter sun. Danevikings, torcs of
 *  tomahawks aglitter on their breasts when Malachi wore the collar of gold. A
 *  school of turlehide whales stranded in hot noon, spouting, hobbling in the
 *  shallows. Then from the starving cagework city a horde of jerkined dwarfs,
 *  my people, with flayers' knives, running, scaling, hacking in green blubbery
 *  whalemeat. Famine, plague and slaughters. Their blood is in me, their lusts
 *  my waves. I moved among them on the frozen Liffey, that I, a changeling,
 *  among the spluttering resin fires. I spoke to no-one: none to me.
 *
 *  The dog's bark ran towards him, stopped, ran back. Dog of my enemy. I just
 *  simply stood pale, silent, bayed about. Terribilia meditans. A primrose
 *  doublet, fortune's knave, smiled on my fear. For that are you pining, the
 *  bark of their applause? Pretenders: live their lives. The Bruce's brother,
 *  Thomas Fitzgerald, silken knight, Perkin Warbeck, York's false scion, in
 *  breeches of silk of whiterose ivory, wonder of a day, and Lambert Simnel,
 *  with a tail of nans and sutlers, a scullion crowned. All kings' sons.
 *  Paradise of pretenders then and now. He saved men from drowning and you
 *  shake at a cur's yelping. But the courtiers who mocked Guido in Or san
 *  Michele were in their own house. House of... We don't want any of your
 *  medieval abstrusiosities. Would you do what he did? A boat would be near, a
 *  lifebuoy. Natürlich, put there for you. Would you or would you not? The man
 *  that was drowned nine days ago off Maiden's rock. They are waiting for him
 *  now. The truth, spit it out. I would want to. I would try. I am not a strong
 *  swimmer. Water cold soft. When I put my face into it in the basin at
 *  Clongowes. Can't see! Who's behind me? Out quickly, quickly! Do you see the
 *  tide flowing quickly in on all sides, sheeting the lows of sands quickly,
 *  shell cocoacoloured? If I had land under my feet I want his life still to be
 *  his, mine to be mine. A drowning man. His human eyes scream to me out of
 *  horror of his death. I... With him together down... I could not save her.
 *  Waters: bitter death: lost.
 *
 *  A woman and a man. I see her skirties. Pinned up, I bet.
 *
 *  Their dog ambled about a bank of dwindling sand, trotting, sniffing on all
 *  sides. Looking for something lost in a past life. Suddenly he made off like
 *  a bounding hare, ears flung back, chasing the shadow of a lowskimming gull.
 *  The man's shrieked whistle struck his limp ears. He turned, bounded back,
 *  came nearer, trotted on twinkling shanks. On a field tenney a buck,
 *  trippant, proper, unattired. At the lacefringe of the tide he halted with
 *  stiff forehoofs, seawardpointed ears. His snout lifted barked at the
 *  wavenoise, herds of seamorse. They serpented towards his feet, curling,
 *  unfurling many crests, every ninth, breaking, plashing, from far, from
 *  farther out, waves and waves.
 *
 *  Cocklepickers. They waded a little way in the water and, stooping, soused
 *  their bags, and, lifting them again, waded out. The dog yelped running to
 *  them, reared up and pawed them, dropping on all fours, again reared up at
 *  them with mute bearish fawning. Unheeded he kept by them as they came
 *  towards the drier sand, a rag of wolf's tongue redpanting from his jaws. His
 *  speckled body ambled ahead of them and then loped off at a calf's gallop.
 *  The carcass lay on his path. He stopped, sniffed, stalked round it, brother,
 *  nosing closer, went round it, sniffing rapidly like a dog all over the dead
 *  dog's bedraggled fell. Dogskull, dogsniff, eyes on the ground, moves to one
 *  great goal. Ah, poor dogsbody. Here lies poor dogsbody's body.
 *
 *  -- Tatters! Out of that, you mongrel.
 *
 *  The cry brought him skulking back to his master and a blunt bootless kick
 *  sent him unscathed across a spit of sand, crouched in flight. He slunk back
 *  in a curve. Doesn't see me. Along by the edge of the mole he lolloped,
 *  dawdled, smelt a rock and from under a cocked hindleg pissed against it. He
 *  trotted forward and, lifting his hindleg, pissed quick short at an unsmelt
 *  rock. The simple pleasures of the poor. His hindpaws then scattered sand:
 *  then his forepaws dabbled and delved. Something he buried there, his
 *  grandmother. He rooted in the sand, dabbling delving and stopped to listen
 *  to the air, scraped up the sand again with a fury of his claws, soon
 *  ceasing, a pard, a panther, got in spouse-breach, vulturing the dead.
 *
 *  After he woke me up last night same dream or was it? Wait. Open hallway.
 *  Street of harlots. Remember. Haroun al Raschid. I am almosting it. That man
 *  led me, spoke. I was not afraid. The melon he had he held against my face.
 *  Smiled: creamfruit smell. That was the rule, said. In. Come. Red carpet
 *  spread. You will see who.
 *
 *  Shouldering their bags they trudged, the red Egyptians. His blued feet out
 *  of turnedup trousers slapped the clammy sand, a dull brick muffler
 *  strangling his unshaven neck. With woman steps she followed: the ruffian and
 *  his strolling mort. Spoils slung at her back. Loose sand and shellgrit
 *  crusted her bare feet. About her windraw face her hair trailed. Behind her
 *  lord his helpmate, bing awast, to Romeville. When night hides her body's
 *  flaws calling under her brown shawl from an archway where dogs have mired.
 *  Her fancyman is treating two Royal Dublins in O'Loughlin's of Blackpitts.
 *  Buss her, wap in rogue's rum lingo, for, O, my dimber wapping dell. A
 *  shefiend's whiteness under her rancid rags. Fumbally's lane that night: the
 *  tanyard smells.
 *
 *  White thy fambles, red thy gan
 *  And thy quarrons dainty is.
 *  Couch a hogshead with me then.
 *  In the darkmans clip and kiss.
 *
 *  Morose delectation Aquinas tunbelly calls this, frate porcospino. Unfallen
 *  Adam rode and not rutted. Call away let him: thy quarrons dainty is.
 *  Language no whit worse than his. Monkwords, marybeads jabber on their
 *  girdles: roguewords, tough nuggets patter in their pockets.
 *
 *  Passing now.
 *
 *  A side-eye at my Hamlet hat. If I were suddenly naked here as I sit I am
 *  not. Across the sands of all the world, followed by the sun's flaming sword,
 *  to the west, trekking to evening lands. She trudges, schlepps, trains,
 *  drags, trascines her load. A tide westering, moondrawn, in her wake. Tides,
 *  myriadislanded, within her, blood not mine, oinopa ponton, a winedark sea.
 *  Behold the handmaid of the moon. In sleep the wet sign calls her hour, bids
 *  her rise. Bridebed, childbed, bed of death, ghostcandled. Omnis caro ad te
 *  veniet. He comes, pale vampire, through storm his eyes, his bat sails
 *  bloodying the sea, mouth to her mouth's kiss.
 *
 *  Here. Put a pin in that chap, will you? My tablets. Mouth to her kiss. No.
 *  Must be two of em. Glue 'em well. Mouth to her mouth's kiss.
 *
 *  His lips lipped and mouthed fleshless lips of air: mouth to her womb. Oomb,
 *  allwombing tomb. His mouth moulded issuing breath, unspeeched: ooeeehah:
 *  roar of cataractic planets, globed, blazing, roaring
 *  wayawayawayawayawayaway. Paper. The banknotes, blast them. Old Deasy's
 *  letter. Here. Thanking you for hospitality tear the blank end off. Turning
 *  his back to the sun he bent over far to a table of rock and scribbled words.
 *  That's twice I forgot to take slips from the library counter.
 *
 *  His shadow lay over the rocks as he bent, ending. Why not endless till the
 *  farthest star? Darkly they are there behind this light, darkness shining in
 *  the brightness, delta of Cassiopeia, worlds. Me sits there with his augur's
 *  rod of ash, in borrowed sandals, by day beside a livid sea, unbeheld, in
 *  violet night walking beneath a reign of uncouth stars. I throw this ended
 *  shadow from me, manshape ineluctable, call it back. Endless, would it be
 *  mine, form of my form? Who watches me here? Who ever anywhere will read
 *  these written words? Signs on a white field. Somewhere to someone in your
 *  flutiest voice. The good bishop of Cloyne took the veil of the temple out of
 *  his shovel hat: veil of space with coloured emblems hatched on its field.
 *  Hold hard. Coloured on a flat: yes, that's right. Flat I see, then think
 *  distance, near, far, flat I see, east, back. Ah, see now. Falls back
 *  suddenly, frozen in stereoscope. Click does the trick. You find my words
 *  dark. Darkness is in our souls, do you not think? Flutier. Our souls,
 *  shame-wounded by our sins, cling to us yet more, a woman to her lover
 *  clinging, the more the more.
 *
 *  She trusts me, her hand gentle, the longlashed eyes. Now where the blue hell
 *  am I bringing her beyond the veil? Into the ineluctable modality of the
 *  ineluctable visuality. She, she, she. What she? The virgin at Hodges Figgis'
 *  window on Monday looking in for one of the alphabet books you were going to
 *  write. Keen glance you gave her. Wrist through the braided jess of her
 *  sunshade. She lives in Leeson park, with a grief and kickshaws, a lady of
 *  letters. Talk that to someone else, Stevie: a pickmeup. Bet she wears those
 *  curse of God stays suspenders and yellow stockings, darned with lumpy wool.
 *  Talk about apple dumplings, piuttosto. Where are your wits?
 *
 *  Touch me. Soft eyes. Soft soft soft hand. I am lonely here. O, touch me
 *  soon, now. What is that word known to all men? I am quiet here alone. Sad
 *  too. Touch, touch me.
 *
 *  He lay back at full stretch over the sharp rocks, cramming the scribbled
 *  note and pencil into a pocket, his hat tilted down on his eyes. That is
 *  Kevin Egan's movement I made nodding for his nap, sabbath sleep. Et vidit
 *  Deus. Et erant valde bona. Alo! Bonjour, welcome as the flowers in May.
 *  Under its leaf he watched through peacocktwittering lashes the southing sun.
 *  I am caught in this burning scene. Pan's hour, the faunal noon. Among
 *  gumheavy serpentplants, milkoozing fruits, where on the tawny waters leaves
 *  lie wide. Pain is far.
 *
 *  And no more turn aside and brood.
 *
 *  His gaze brooded on his broadtoed boots, a buck's castoffs nebeneinander: He
 *  counted the creases of rucked leather wherein another's foot had nested
 *  warm. The foot that beat the ground in tripudium, foot I dislove. But you
 *  were delighted when Esther Osvalt's shoe went on you: girl I knew in Paris.
 *  Tiens, quel petit pied! Staunch friend, a brother soul: Wilde's love that
 *  dare not speak its name. He now will leave me. And the blame? As I am. As I
 *  am. All or not at all.
 *
 *  In long lassoes from the Cock lake the water flowed full, covering
 *  greengoldenly lagoons of sand, rising, flowing. My ashplant will float away.
 *  I shall wait. No, they will pass on, passing chafing against the low rocks,
 *  swirling, passing. Better get this job over quick. Listen: a fourworded
 *  wavespeech: seesoo, hrss, rsseeiss, ooos. Vehement breath of waters amid
 *  seasnakes, rearing horses, rocks. In cups of rocks it slops: flop, slop,
 *  slap: bounded in barrels. And, spent, its speech ceases. It flows purling,
 *  widely flowing, floating foampool, flower unfurling.
 *
 *  Under the upswelling tide he saw the writhing weeds lift languidly and sway
 *  reluctant arms, hising up their petticoats, in whispering water swaying and
 *  upturning coy silver fronds. Day by day: night by night: lifted, flooded and
 *  let fall. Lord, they are weary: and, whispered to, they sigh. Saint Ambrose
 *  heard it, sigh of leaves and waves, waiting, awaiting the fullness of their
 *  times, diebus ac noctibus iniurias patiens ingemiscit. To no end gathered:
 *  vainly then released, forth flowing, wending back: loom of the moon. Weary
 *  too in sight of lovers, lascivious men, a naked woman shining in her courts,
 *  she draws a toil of waters.
 *
 *  Five fathoms out there. Full fathom five thy father lies. At one he said.
 *  Found drowned. High water at Dublin bar. Driving before it a loose drift of
 *  rubble, fanshoals of fishes, silly shells. A corpse rising saltwhite from
 *  the undertow, bobbing landward, a pace a pace a porpoise. There he is. Hook
 *  it quick. Sunk though he be beneath the watery floor. We have him. Easy now.
 *
 *  Bag of corpsegas sopping in foul brine. A quiver of minnows, fat of a spongy
 *  titbit, flash through the slits of his buttoned trouserfly. God becomes man
 *  becomes fish becomes barnacle goose becomes featherbed mountain. Dead
 *  breaths I living breathe, tread dead dust, devour a urinous offal from all
 *  dead. Hauled stark over the gunwale he breathes upward the stench of his
 *  green grave, his leprous nosehole snoring to the sun.
 *
 *  A seachange this, brown eyes saltblue. Seadeath, mildest of all deaths known
 *  to man. Old Father Ocean. Prix de Paris: beware of imitations. Just you give
 *  it a fair trial. We enjoyed ourselves immensely.
 *
 *  Come. I thirst. Clouding over. No black clouds anywhere, are there?
 *  Thunderstorm. Allbright he falls, proud lightning of the intellect, Lucifer,
 *  dico, qui nescit occasum. No. My cockle hat and staff and his my sandal
 *  shoon. Where? To evening lands. Evening will find itself.
 *
 *  He took the hilt of his ashplant, lunging with it softly, dallying still.
 *  Yes, evening will find itself in me, without me. All days make their end. By
 *  the way next when is it? Tuesday will be the longest day. Of all the glad
 *  new year, mother, the rum tum tiddledy tum. Lawn Tennyson, gentleman poet.
 *  Già . For the old hag with the yellow teeth. And Monsieur Drumont, gentleman
 *  journalist. Già . My teeth are very bad. Why, I wonder? Feel. That one is
 *  going too. Shells. Ought I go to a dentist, I wonder, with that money? That
 *  one. Toothless Kinch, the superman. Why is that, I wonder, or does it mean
 *  something perhaps?
 *
 *  My handkerchief. He threw it. I remember. Did I not take it up?
 *
 *  His hand groped vainly in his pockets. No, I didn't. Better buy one.
 *
 *  He laid the dry snot picked from his nostril on a ledge of rock, carefully.
 *  For the rest let look who will.
 *
 *  Behind. Perhaps there is someone.
 *
 *  He turned his face over a shoulder, rere regardant. Moving through the air
 *  high spars of a threemaster, her sails brailed up on the crosstrees, homing,
 *  upstream, silently moving, a silent ship.
 */

void
ulz_ulysses(struct ulz * u) {
    /* this is way too hard */
    return;
}

void
ulz_flush(struct ulz * u) {
    fflush(stdout);
}

