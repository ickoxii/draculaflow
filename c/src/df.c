#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

 /**
  * Dracula Flow 1
  * */
const char *draculaflow1[] = {
  "We straight gassin, cuttin straight to the bricks.",
  "This shit ain't nothin to me, man.",
  "We smokin runtz.",
  "Shorty got a BBL, took that shit out because she couldn't run.",
  "I had to do it to em, snipe.",
  "I went Judge Judy on that pussy, snipe.",
  "I'm not loyal to anybody, I'm a demon.",
  "I have no loyalty for anyone, never did, never will.",
  "Shorty chose to be with a demon. Sounds like her problem to me.",
  "My money longer than James Cameron.",
  "On and off the court, straight fundamentals, no funny business",
  "Movin like Dracula, we get it back in blood.",
  "You see it, I really did this, I'm really him.",
  "Flipped a whole brick into an empire, stop playin with me.",
  "I have no sympathy, I live for this shit.",
  "I'm nice with it.",
  "My money long, my pockets deep.",
  "No pocket watchin' in these parts.",
  "We straight gassin, cuttin straight to the bricks.",
  "Chanel optics got me seein shit."
};

 /**
  * Dracula Flow 2
  * */
const char *draculaflow2[] = {
  "That pussy better stank, otherwise I don't want it.",
  "Popped a Perc 30, got straight to fuckin'.",
  "That pussy dulce, smokin fentanyl-laced cereal milk. I see God.",
  "This shit ain't nothin' to me, man.",
  "That pussy got me screamin, cryin, pissin, shittin, shootin ropes.",
  "Yeah, we gettin that Pirate Bay, alien shish kabob, cordyceps money.",
  "I hope them aliens are real, so that I have more things to fuck.",
  "Smokin the Qui-Gon Jinn, Vietnamese, Phillips-head runtz.",
  "She suck me like a cordless Dyson V8.",
  "I'm in a k-hole lickin balloon knot.",
  "When I got the meat cannon, I be shootin straight rope.",
  "Chanel optics got me seein shit.",
  "I need fentanyl, slime.",
  "I just popped a whole garbanzo bean, fuck you mean?",
  "I smoke real Emrānī, rapscallion ghost nuggets.",
  "Y'all can't fuck with me. I'm him, I been him, I will continue to be him.",
  "Yellow rubies glistening like piss.",
  "Gulpin sea monkeys by the gallon, my tummy feel crazy.",
  "That coochie yummy, slime. That coochie doin it for me, slime.",
  "They thought they could stop a demon. I'M BACK.",
  "The zaza got me speaking Esperanto.",
  "We out here cloud seedin, the scope gleamin.",
  "You can't trust me, I don't even trust myself.",
  "I don't even know who I am anymore, I'm gettin too much money.",
  "Ass so fat, I'm peakin off this Danny Phantom, slime.",
  "Can you remind me who I am?",
  "Get the president on the phone now. I fronted him a brick, I need my money.",
  "Hello? Blac Chyna?"
};

 /**
  * Dracula Flow 3
  * */
const char *draculaflow3[] = {
  "I'm movin different. This shit ain't nothin to me man.",
  "I'm a dog. I'm bitin the fart bubbles in the bath.",
  "We smokin Symbiotes. Smokin that Whoopi Goldber, south Egyptian, Furburger deluxe, Mega Millions scratcher, skunk, Bubba kush.",
  "We smokin' dung beetle.",
  "I'm on twelve Vicodin smokin on Scooby-Doo dick",
  "We smokin sequioa banshee boogers",
  "We snortin that good buffalo soldier, tamarind, Jordanian jibbies.",
  "They must have amnesia, they forgot that I'm him.",
  "That Burberry Backwoods pack hittin.",
  "That pussy smell like a Hellcat V8.",
  "We smokin shit in a glass pipe, blowin the Lord's bubbles.",
  "I'm sick in the head.",
  "I'm on them Broward County Tic-Tacs. I'm on them Georgetown Geronimos. I'm on them Nashville nibblers.",
  "I left my Margielas in the Benz truck.",
  "I'll have to stunt on them next time.",
  "I don't give a fuck if I go blind. I don't need to see the price tag anyways.",
  "I'm high on twelve Jason Bournes, lookin to beat the cum out of a thick, fresh oak.",
  "We're smokin filtered crack, you stupid piece of shit.",
  "I'll fuckin kill you.",
  "Call that pussy The Matrix because I'm in this bitch and I can't get out.",
  "Last guy who ran off on the pack got choked out by some Givenchy gloves. The last thing he ever saw was the price tag on them. Slowly faded into darkness and I let the archangels take him.",
  "I need more sequoia banshee boogers.",
  "Don't be shy, girl, I love me some pastrami mud flaps.",
  "I'm movin like French Montana. Hahh?",
  "Welcome to the cream kingdom, bitch. Open up Blac Chyna, I'd drink her piss out of another man's balls.",
  "My shooter a crackhead. He look like Woody Harrelson.",
  "You ain't seen ten bands in your life, jit.",
  "Reach for my neck, you'll get turned into an example.",
  "Y'all gotta stop playin with me, man.",
  "I threw diamonds at the strip clubs under the Great Pyramids.",
  "I pushed the camel through the eye of a needle.",
  "Tied the ops to the back of a Trackhawk and dragged em around the block for 24-hours. Motherfucker looked like a Resident Evil 5 campaign extra after we was done with him.",
  "Ops wanted some initiative, blew up their entire quadrant.",
  "I'm movin like Oppenheimer.",
  "She dropped that ass on me from an egregarious angle, they thought I was Steven Wallace.",
  "Top shelf zaza disrupted my circadian rhythm.",
  "I have seen the Magna Carta. I've seen the Eye of Horus. I was flippin bricks for Mansa Musa before y'all even became a type-1 civilization.",
  "This shit ain't nothin to me, you stupid piece of shit.",
  "Step the wrong way and you will perish.",
  "That pussy feel like Biscoff butter.",
  "You think I care about this shit? Ask me if I care about this shit, cause I don't give a shit. If I had a dollar for everytime they said I gave a shit, I'd be broke cause I don't give a shit.",
  "My bitch look like David Hasselhoff.",
  "I balled so hard they thought I was a fuckin nutsack",
  "This shit aint nothin to me, man. I'll kill you, you stupid piece of shit."
};

 /**
  * Dracula Flow 4
  * */
const char* draculaflow4[] = {
  "This shit ain't nothin to me, man",
  "Haters in shambles, they stay pickin the corn outta my shit.",
  "This Smith & Wesson got me movin like an invasive species.",
  "I got Midas touch, fuck boy.",
  "Bitch so bad I made her shit in my chopped cheese.",
  "I'm at the bank boutta withdraw all of it.",
  "These Valentinos are from Milan, you fuckin idiot.",
  "That Fentanyl gave me Vitruvian Man flexibility. Got me in a state of rigor mortis.",
  "Caught a broke boy trying to come up on my Amazon package, so I skinned his ass alive.",
  "We smokin Serge Ibaka, spinal fluid infused, quick-release Percs.",
  "She spread it and let me take a deep sniff of that Mahi-mahi.",
  "I gave that pussy a raspberry.",
  "They needed a stealth soldier, so I put my hands on the hibachi hot plate at Benihana and burned my fuckin finger prints off. They will not find me.",
  "Konichiwa, you little jit.",
  "Snortin some premium Matisyahu, got me fightin for my life.",
  "I make a nice stew out of that pussy.",
  "Blacked out on the Percocent, ordered a Desert Eagle off Amazon.",
  "I used to nut in my socks until the crust smelled sweet.",
  "I ain't never going back.",
  "Hidden Valley Ranch ice cream cake in my Fronto Leaf.",
  "Got Subanese crystalline shards pokin out my lungs, fuck boy.",
  "I'm in Göbekli Tepe shirtless in a loin cloth.",
  "Blowing bareback asshole, out-smokin aqueduct filtered sherm.",
  "Told shorty to keep that box breathin.",
  "She squeezin the garlic, we smokin java, man.",
  "Face pressed up against that monkey, sniffin for dear life.",
  "The Cuban link will turn the diamond tester into a pipe bomb.",
  "Glock-34 shivered his timbers.",
  "Blew her back out usin a mammoth-skin condom.",
  "Dick/pussy freeballin, like Shaq and Kobe.",
  "I'm smokin Mesopotamian, Stanley Cup triple-award-winning, soul-bleeder, taint-blaster, J.D. Power Associates, dingleberry zaza.",
  "We smokin that IBM Quantum Computer.",
  "I can't wait to curb stomp you in these dumb ugly ass Rick Owens shoes.",
  "I'm Dracula. I'm twelve million years old.",
  "When I hit it from beind, the room smells like absolute michi.",
  "They said I wouldn't shit on em. I spread my cheeks and hit em with an absolute screamer.",
  "Lil bro was emaciated, the Percs dont ate lil cuzzo ass up.",
  "These cops are interrogating me about an ounce of weed as if I didn't kill an Applebee's hostess two miles away.",
  "I come from a long bloodline of Italian leather.",
  "My Bottegas have veins pumpin through them.",
  "Smoking indigenous Fronto Leaf in a bacon, egg, and cheese.",
  "Hashtag \"Le Chemin du Roi.\"",
  "Eyes bloodshot, leanin up against the wall, beatin off to my Chrome Hearts boots.",
  "Opps was talkin crazy, shot em in the mouth.",
  "My Audemars Piguet worth the GDP of Yemen.",
  "If this watch breaks, the foreign exchange market will take a 28% hit. People will die.",
  "My diamonds come from the most horrific situations possible.",
  "Slurpin a quick-release Perc off the plate like a pinto bean.",
  "I keep my Glock at the Vatican.",
  "She squirt on me, I love bein covered in the chichi manga.",
  "They're sick in the head, they forgot I'm him.",
  "I'm the Him-ulation. I am Him Kardashian, Him-buktu, Him-on and Pumba. I got my DNA test back, turns out I'm 100% Him-alayan.",
  "Fuck it, I ate the opp.",
  "She let me hit it.",
  "That gash sound like salmon roe.",
  "You ran off with the Diddy King, triple espresso, personal hot spot, stim-gripper runs.",
  "There are consequences to your crimes against Dracula.",
  "Get shorty out of here, she's built like a Jay Electronica verse.",
  "Icewear Vezzo said it best, \"I'm a mud baby, I can't stop.\"",
  "I have more Percs than there are stars in the Leo Cluster.",
  "I'm claiming every corner, every block. Fuck it. I'm coming for every enzyme.",
  "Snorting dexie, eating skate right out of the lake.",
  "Opp was sneak-dissing on the gram, turned his city into Pompeii.",
  "These ain't no Mall-mains, you ugly bastard.",
  "They want to drive a wooden stake into my heart for pulling my cock out at the Toronto Blue Jays game. All I'm saying is I paid for the tickets.",
  "My Ducati leather trench coat bright red. I look like ten million crawdads fucking.",
  "That elite pussy turn me into a radical.",
  "I'm moving lucrative. I'm in the pod smoking Sebulba. Smoking that good schooby-doo waa.",
  "I'm fucked up in the crib listening to Trill Sammy.",
  "I'm on the Ivory Coast eating Vermillion snapper.",
  "War is all I think about. I never been scared in my life, jit.",
  "I need my percs! I NEED MY PERCS!",
  "One perc is never enough.",
  "Popped a Brazillian butt berserker and had that pussy screeching like a harpy eagle.",
  "I'm smoking that shit that makes the toes curl.",
  "I'm doing a lot of drugs, a lot.",
  "Walked along the sand dunes of the Sahara desert for forty days and forty nights with nothing but a pack of Newports and a fifth of henny.",
  "I really do this shit.",
  "I'm starting to get real pissed off. What the fuck is Obamacare? Hey Obama, I don't care about shit!",
  "I sold crack to myself.",
  "Spun around the block so many times they thought it was fucking Minecraft.",
  "We smoking that Boomhauer.",
  "Choked his goofy ass out with a B.B. Simon belt.",
  "She wanted dick, but I gave her crack.",
  "I'm smoking lizard taint, sniffing monkey. It's monkey monday, show me that monkey. I'M GETTING TOO MUCH MONEY!",
  "I'm fucked up drinking a Chinese Modelo.",
  "I'm smoking on that hush puppy limon.",
  "Broke boy wasn't balling enough. Welcome to the Guangdong Tigers.",
  "These Ferragamos are real, cunt.",
  "I got more sticks than a fucking forest.",
  "I have the blueprint to the catacombs.",
  "Popped four flim-flams at K.O.D., came out with Hepatitis.",
  "Smoked a new opp, his meat came right off the bone.",
  "The first time I smoked runts, I coughed so hard I started passing kidney stones, then shat myself in front of the gang. There was scat all over the pounds we shipped out for the next thirty business days.",
  "I don't have any compassion for broke boys.",
  "Everybody has an asshole. Most people have dick and balls. Go outside and get a bag.",
  "I knew the perc was fake but I still ate it because I'm a fucking gremlin.",
  "I'll air this bitch out like I shit in it.",
  "I took two limitless pills to limit myself.",
  "I got so much cheese in my pocket they thought I was a fucking calzone.",
  "That pussy balder than Howie Mandel.",
  "Crash the Benz truck. Sip some mud. Everything felt alright.",
  "Popped a bean, now I wanna kill someone.",
  "Yeah, I drill with my mask off.",
  "I'm moving like Gilbert Arenas sniffing white phosphorus.",
  "The Vatican wants to wet me up with silver bullets but I'm on a goddamn samurai pill.",
  "I'm a real creature. I'll spin the block huffing spores to see tomorrow's stock market. Lungs looking crazy.",
  "Rolling the old flesh cigar around your fingertips.",
  "Boy ran off with a Banjo-Kazooie, I had to cast a spell on that motherucker.",
  "I got strands of RNA in my hookah. Every puff is an insult to God.",
  "The dust pack got me doing the third world stare.",
  "This zaza will give you a 2019 Alex Caruso hairline.",
  "Chopper small and study, built like Wilmer Valderrama.",
  "I let her hit the zaza just to buy her a bit more time, but all she wanted to do was fuck my brains out then euthanize herself.",
  "I hydrated the soot between her ass cheeks and snorted that shit through my eyelids.",
  "Trackhawk sound like Game Seven Yahoo.",
  "I'll give you that flouride stare.",
  "Pussy so tight I had to scissor her ass.",
  "This Henny got me feelin crazy. This Henny got me wantin the shit. This Henny got me feelin like DDG.",
  "My bitch pussy fatter than Druski.",
  "Drank man, please, I'm thirsty. I'm ready, I'm tryin to po up. Drank man, please.",
  "This Henny makin me want to go to the mall and do something crazy.",
  "If Santa come down my chimney, I'm gon fuck him.",
  "That's what my Hellcat sounds like."
};

const char* draculaflow5[] = {
  "How can I be homophobic? I blew his fucking brains out.",
  "This Luger will send a Christian to Hell.",
  "Shorty looks so good I used her piss as crab boil.",
  "Nutted so crazy I got 108° fever.",
  "Smoking on Congolese Dick Wick looking for a signal.",
  "I went dark a long time ago.",
  "Packed her asshole so tight she pushed out a pearl.",
  "This fentanyl got me moving like a claymation figure. Real premium French scatatouille.",
  "Money longer than KD's feet.",
  "Started off shooting dice in the cum slum.",
  "Learned how to load the 9mm Canik and changed the trajectory of everything.",
  "This shit ain't nothin to me, man.",
  "I fuck like it's for survival. As if it's the last sip of water I'll ever get. Ribs visible, eyes bloodshot, thrusting away got my cob looking like Mexican street corn.",
  "I'm so violent and sick in the head, I can't tell if I want to kill my opps or fuck em.",
  "Zaza got me feeling like everything gonna be alright.",
  "Got the registered God Particle on my hip.",
  "Ready to have some hickory smoked opp.",
  "Wiped the nut on my AMIRI jeans and got right back to fuckin work.",
  "Sipping on McDonald's house red.",
  "AK sing like a castrati, ooh-wee!",
  "I have no morals or belief system. I have no spirituality or anything that gives my life meaning or structure. They asked me to shoot, I do it. I have no character.",
  "Home girl got a nice little turd cutter on her.",
  "Put a bag over his head and sent him to paradise.",
  "The Xan Francisco got me looking and moving like Mr. Bean, I ain't saying shit.",
  "Got a ruptured eardrum from having my ear to the streets for so fucking long.",
  "On a full moon I'll fuck anything.",
  "I'm smoking that Sumerian, Quasimodo, carpet bomber, obsequious demon whisperer runts.",
  "Pussy boy wanted beef with me over galactic acquisition. Called his mistress over and put ten inches on her forehead like Payton Manning.",
  "I'm a street creature.",
  "The weed will have you in purgatory, screaming for eternity. You will relive every key mistake you've ever made in your life, over and over and over again.",
  "I was in the Maybach gripping the stem.",
  "Snipped the banjo string, roamed around Northern Cambodia with an open incision.",
  "They tole me I wouldn't shake the city, so I shook that shit like a crying toddler.",
  "Hit the gelato papaya, took a sip of the Jose. Everything turned red for 8 minutes.",
  "Woke up in Geneva. Oh man, I did it again, didn't I?",
  "Destroyed his bando with a solar flare.",
  "I'm in the club listening to the brown note.",
  "My dogs will do anything for a Newport. And I mean anything.",
  "They think I'm homosexual the way I'm chasing the sack.",
  "Whippets left me with a drool and a shit-eating grin.",
  "My bitch look like Timothee Chalamet.",
  "I'm a product of the gutter.",
  "I fried up on corn snake for the cuzzos.",
  "The zaza got me talking like Pingu.",
  "I'm the real goliath grouper.",
  "Imma need you to suck the pigmentation out of this one, young blood.",
  "Shorty ass so fat I thought I was balls deep in Kyle Lowry.",
  "I only handed back the free world cause I was bored.",
  "This blunt is overwhelmingly large. This blunt has a pulse. This blunt looks like Ray J's dick. This blunt got veins pumping through it. This blunt curve right at the tip. This blunt looks like it's been pushed out. This blunt has a family somewhere worried as hell. I ain't even gonna hide it no more, this blunt feels like a solid, fibrous piece of shit, straight up. A big meaty piece of shit. Balance diets, lots of fruit and vegetables. Would honestly float in the water, which is a sign of good health. Husky little fella.",
  "The zaza got me connecting the dots.",
  "There are bugs under my skin, I need to dick them out with a screwdriver.",
  "She broke my heart, had me shadowboxing behind the 7-Eleven in my 2005 Cleveland LeBron jersey, Zara jeans, and some LRG shows.",
  "Windows tinted, listening to Tee Grizzley, smoking on goon rock.",
  "The bugs are back.",
  "I'm smoking on pussy slaw.",
  "The worms in my head won't shut the hell up. They're telling me to go absolutely fucking stupid on em.",
  "I don't even need to brandish the nine. I'm pissing and drooling all over myself, howling and itching to take lives. Shit, I'm so excited to take lives, I'm literally covered in caca le shitty boy michi. I can't even take care of myself when I think about this shit.",
  "Smoking on a real nuclear shit submarine, I got this shit figured out.",
  "Smoked a seven gram backwood of shadow whisperer. Shit had me fucked up in the crib looking up pictures of dogs with human eyes.",
  "I got inter-dimensional demons dropping the pin as we speak. They'll take anyone back over there.",
  "Unholy doses of Percocet and Hennessy got me shitting in the bed more than the Oakland A's.",
  "I'm back to back with God, shaking the fucking universe. This is an army of two.",
  "Beat his ass and sent him into an improvement cycle. He look like Bandman Kevo now.",
  "This za feel like heroin, this heroin feel like za.",
  "Flashed it at the parking lot in the Lenox mall with the serial number scratched out and everything.",
  "Threw the opp into the particle collider, watched his ass get pulled apart into a million pieces. Turned his sorry ass into some data.",
  "Stuffed her booty hole with some Sour Diesel and sent her on her way.",
  "That little flesh canoe got a mesquite vibe to it. Perhaps an apple or cherry wood smoke.",
  "She took the chance and spread it for a Nebraska dollar. She had a whole speakeasy behind those meat curtains. The pussy has its own time signature.",
  "Ring so heavy I can't answer the phone.",
  "Put the gun down, young man. There's too much pussy out there to kill yourself.",
  "That pussy tighter than the bulletproof counter window at a White Castle.",
  "How can I be gay? My bitch is homophobic.",
  "Shout out to my man Cench.",
  "Wagwan big one up yaself, seletah Dutty Wine roadside gyal, me-ah gon fuck.",
  "58% THC pre-rolled joints rolled in keef had me reading the book of Revelations.",
  "We are indeed close. I bought her Chanel bags until there was nothing left in her eyes.",
  "Motherfuckers live in their car and call it \"van life.\" Stop lying to yourself and just say you're homeless, you stupid bum.",
  "I'm at Magic City moving like the government.",
  "I fucked her with my AND1 shoes on and some Dada shorts.",
  "Eating Khloe Kardashian's ass like I'm dying and there's a second chance in there.",
  "I'm a high functioning shooter.",
  "Yeah, I'm big on astrology. I'm always looking at a fat dirt star every chance I get.",
  "I'm off a rhino pill ready to get my rocks off.",
  "My watch cost 50 bands and I still don't have time for you fuckboys.",
  "Pussy clot.",
  "The casualties you will suffer trying to fuck with me will have you thinking like Magnus Carlson.",
  "Rome wasn't built in a day but this 9mm certainly was.",
  "Give me the fucking fentanyl.",
  "Just finished on my own stomach, time for some oxtail.",
  "I ain't gon lie, I'm kinda feeling myself right now, gang.",
  "We smoking eucalyptus pigeon shit.",
  "She was awestruck admiring the girth, the length, the texture, the vein thickness, blood flow, color, circumcision.",
  "Gave her a venti of cum with two pumps of Dracu-nut.",
  "All I'm saying is if I paid for the hour, Imma get the full hour.",
  "Been fucking so long my cock is sanded down smooth.",
  "This chopped cheese is from Red Hook and this Glock was 3D printed in Bangladesh. This shit is international.",
  "I'm posted up at the crib-o with three bitches, feasting on some Nicaraguan nose nachos, while listening to Rich Amiri. I'm a real glutton.",
  "Went to O-Block and nobody ever heard of you, slime.",
  "Motherfucker, these are not Rururemonds, these are Chrome Hearts.",
  "I'm smoking that Rasputin \"Hear ye! Hear ye!\" Durban Poison.",
  "DJ Mustard, let me in Dijon, let me in. Mustard on the beat, ho.",
  "Markieff Morris always been my favorite twin.",
  "Motherfucker of course I have a pink tip.",
  "I come from a low frequency environment, and I've only used cash my entire life. The only time I ever held a card was when I borrowed my cousin's Bank of America debit card to slice open a funnel cake at the county fair when I took my daughter there on a trip amidst a lenghty child custody battle with my ex wife attempting to prove to the judge that I'm a responsible father. But we all know I'm fucking not. I got the kids ears pierced at two years old and she already knows what Red Bull tastes like. I'm fucked. Judge, if you're seeing this, please let me have McKenzie back. I even wore my nice 8 Ball jean jacket to the last court hearing. I'm ready to change.",
  "Had shorty spit in my chicken and rice.",
  "I've been fully consumed by hatred, jealousy, and lust.",
  "I can't help but get thrown into a violent trance at the slightest hint of criticism or pushback.",
  "Poured up with Famous Dex, started doing the nod walk. Whoa, Dexter!",
  "My impulsive nature causes conflict at any given time like Kay Flock.",
  "I made sure all the Birkin bags were unharmed so that the hoes don't bug out on me about it later.",
  "The zaza got me acting inconsiderate.",
  "Give me a mattress and a fleshlight, I'll thrive anywhere.",
  "I wept for there were no worlds left to conquer.",
  "I was at the Battle of Jericho taunting both sides with my cock out.",
  "Taped the fleshlight to the bottom of my desk and got right into it. Didn't talk to anyone for 52 hours.",
  "The 12 thousand year old jenkem so old it doesn't even smell no more.",
  "Smoking zaza like I don't believe in myself.",
  "I got to where I am today through violence. I'm thankful for it.",
  "They call me Ben Simmons cuz I don't play at all.",
  "Helped myself and went fuckin nuts on the fifi, don't mind if I do.",
  "These white people are crazy, fuck em. Never let these white people change you.",
  "Pistol build like Dave Portnoy.",
  "I have no backbone, I'm loyal to whoever pays the most.",
  "My character is so flawed, the only time I ever stood 10 toes on anything was on the opps throat.",
  "I was one of nine babies abandoned in the bando.",
  "My earliest memory is getting breastfed by the pitbull.",
  "I'm so busy shooting, I'm celibate.",
  "I'm moving like Meek Mill.",
  "Where you get them vibrating panties, is them on Amazon?",
  "Shorty's head built like the Warner Brothers logo. Shorty's head built like Damian Lillard. Shorty's head built like an asteroid. Shorty's head built like a Bionicle. Shorty's head build like a garlic knot. Shorty head built like a Chevrolet. Shorty head built like Papua New Giunea. Shorty built like a South Park character.",
  "Y'all are crabs in a bucket, and I got Old Bay seasoning, maybe even some Zatarain's, fuck it.",
  "Chewing on the labia for six hours like a steak from Cracker Barrel.",
  "Found the homie's beheading video on Dailymotion. That little jit owed me money, what the fuck, dude?",
  "Didn't drink any water all day. Tried to nut on her chest but the cum was so thick like a loogie, shit didn't even get any air time. It slowly dribbled over my fingers and didn't even hit the ground.",
  "The chlorine smell was insufferable, so I offset the smell with some crack.",
  "Cops wanna detain me for aggressively hitting the claw machine. I'm trying to explain to him that we are all just atoms so he might as well let me go.",
  "Taking the wildest huff of Bengay mid-climax, had my eyes rolling back with my tongue hanging out, howling in ecstasy.",
  "Squirming around on a twin-sized mattress in an empty Section 8 apartment.",
  "They say if you do what you love you'll never work a day in your life.",
  "Percs put me on the wrong side of history almost every time.",
  "I beat my own head in with a rock because I couldn't stand that fact that I'll never get to fuck her.",
  "Grabba Leaf made everything go black and white.",
  "You think I'm standing here eating sauteed bok choy because I want to?",
  "I'm waiting for the red-light district to open, you fuckhead. Use your fucking head.",
  "Pulled out the Luger, put his ass in a to-go box. Little rib cage ass motherfucker, I put a hole in that boy.",
  "She listens to rock and roll, I smoke rock and roll.",
  "Psychologically terrorized the op until he killed himself at the Michael Jordon Stakehouse.",
  "One thing about me, I only fuck in fluorescent lighting. I need to see absolutely everything.",
  "Some of you have never heated up a banana peel in the microwave for 8 seconds to replicate the warmth of a vagina, and it shows.",
  "I come from nothing. I started this shit.",
  "I was in the bando blasting loads onto the wall, letting it dry.",
  "I was in the sticks using rubber gloves to trick myself I was being serviced by a nurse.",
  "You can't even imagine what the fuck I've been through. I'm psycho. I'll rub my own nut all over the Glock to let them know I really been here.",
  "I'm a real shit-flinging beast.",
  "If my skull wasn't made out of titanium, I'd kill myself. I really want to, and I really should, but God doesn't give with two hands. FUCK!",
  "We smoking bile. Cooked her shit into a nice roux.",
  "Boy wanted some clout, I put him on the news and turned him into a real superstar.",
  "Humans will never understand their true abilities.",
  "Why the fuck did we kill off the Neanderthals? Those idiots could have easily worked construction and doubled our profits.",
  "You better bring me that brick lickety-split.",
  "Lil bro greened out off the cart the other day and I thought I was Sammy Sosa.",
  "We're getting warmer. The day I go broke will be the day hell freezes over.",
  "How you feel, gang?",
  "She eating my ass and whatnot.",
  "I'm freebasing Excedrin, pouring my soul into the game.",
  "When everyone gave up on the block, I didn't hesistate to start selling my balls, booty, and dick.",
  "Pussy boys tried to rob me so I tranquilized them and boiled them in duck broth till their bones floated to the surface. Then I added some andouille sausage, garlic powder, onion powder, red pepper flakes, black pepper, Tony seasoning, and enjoyed me some nice steamy opp gumbo.",
  "I'm in Myrtle Beach scraping rust off the fuckin frogs, losing my goddamn mind.",
  "She giving me top and so on and so forth.",
  "Get your bitch ass up before I slap the dog shit out of you.",
  "I believe in you, you can accomplish anything you want in this life.",
  "I'm a fucking mud slut.",
  "That pussy had plethoric gorilla grip strength.",
  "I can feel the fungi munching on my brain.",
  "I'm sick. AHH, the worms! The worms! The worms! The worms! The worms!",
  "I'm in the Mariana Trench smoking submersibles.",
  "I folded her fat ass up like a futon and climbed into her pussy like a marsupial.",
  "I had to put the poppers down cuz it was really moving the needle.",
  "I keep on pumping until the viscosity is just right.",
  "My shotgun got a switch on it, bitch.",
  "I'll turn Twitter fingers into Twinkies.",
  "The worms in my head keep talking. Tyga?",
  "Drop the low on they ass, pussy boy.",
  "Thought he had the drop, then I Swiss-cheesed that motherfucker. Turned his SRT into a convertible.",
  "Put a switch on the Glock, this motherfucker sound like a Beyblade.",
  "That perc eating my ass up.",
  "They don't call it a Scat Pack for no reason. I had a bad bitch in the passenger seat and I pressed the gas and showed her what 485 horsepower feels like then she shitted on my seat. I don't give a shit.",
  "This za got me shittin like the Henny got me shittin. Shitception.",
  "Uh-oh, that Henny about to make me shit.",
  "You think I care about this shit? The only time I feel something is when I look.",
  "I want to watch you burn.",
  "Ah, I remember when I took my first perc.",
  "I got the drum on me, I'm bout to make a fucking beat.",
  "I'm moving crazy.",
  "I'm a fucking junkie cannibal, all I wanna do is sip mud and eat my opps"
};

#define NUM_DRACFLOWS 5
#define MAX_SENTENCE_SIZE 1024

void usage(const char*);

int main(int argc, char** argv) {
  const char *prog_name = "drac";
  const char *opts = ":12345l:sh";
  char ch;
  int num_sentences = 1; // Number of sentences to return
  int selected_flows[NUM_DRACFLOWS] = {0};
  int options_seen[256] = {0}; // Track options seen to on handle unique opts.
  int total_size = 0;

  const char **dracula_flows[] = {
    draculaflow1,
    draculaflow2,
    draculaflow3,
    draculaflow4,
    draculaflow5,
  };

  const int draculaflow_sizes[] = {
    (int)(sizeof(draculaflow1) / sizeof(const char*)),
    (int)(sizeof(draculaflow2) / sizeof(const char*)),
    (int)(sizeof(draculaflow3) / sizeof(const char*)),
    (int)(sizeof(draculaflow4) / sizeof(const char*)),
    (int)(sizeof(draculaflow5) / sizeof(const char*)),
  };

  #ifdef DEBUG
  srand(69);
  #else
  struct timeval tv;
  gettimeofday(&tv, NULL);
  srand(tv.tv_sec * 1000000 + tv.tv_usec); // Seed using milliseconds for higher fidelity
  #endif

  while((ch = getopt(argc, argv, opts)) != -1) {
    if (options_seen[(int)ch]) {
      continue;
    }
    options_seen[(int)ch] = 1;

    switch(ch) {
      case ':':
        fprintf(stderr, "Error: Option -%c requires an argument.\n", optopt);
        return 1;
        break;
      case '1':
      case '2':
      case '3':
      case '4':
      case '5': {
        int flow_ndx = ch - '1';
        if(!selected_flows[flow_ndx]) {
          selected_flows[flow_ndx] = 1;
          total_size += draculaflow_sizes[flow_ndx];
          printf("Selected drac%d\n", flow_ndx + 1);
        }
        break;
      }
      case 'l':
        num_sentences = atoi(optarg);
        break;
      case 's':
        printf("Number of flows: %d\n", NUM_DRACFLOWS);
        for(int i = 0; i < NUM_DRACFLOWS; ++i) {
          printf("dracflow%d size: %d\n", i+1, draculaflow_sizes[i]);
        }
        return 0;
      case 'h':
        usage(prog_name);
        return 0;
      default:
        fprintf(stderr, "Error: unknown option -%c\n", optopt);
        return 1;
        break;
    }
  }

  if(total_size == 0) {
    // If no specific flows are selected, include all flows
    for(int i = 0; i < NUM_DRACFLOWS; ++i) {
      selected_flows[i] = 1;
      total_size += draculaflow_sizes[i];
    }
  }

  // Generate sentences
  for(int i = 0; i < num_sentences; ++i) {
    int val = rand() % total_size;
    int cumulative_size = 0;

    for(int j = 0; j < NUM_DRACFLOWS; ++j) {
      if(selected_flows[j]) {
        cumulative_size += draculaflow_sizes[j];
        if(val < cumulative_size) {
          int ndx = rand() % draculaflow_sizes[j];
          printf("%s\n", dracula_flows[j][ndx]);
          break;
        }
      }
    }
  }

  return 0;
}

void usage(const char *program_name) {
  printf("Usage: %s [options]\n", program_name);
  printf("Options:\n");
  printf("  -1            Include sentences from draculaflow1.\n");
  printf("  -2            Include sentences from draculaflow2.\n");
  printf("  -3            Include sentences from draculaflow3.\n");
  printf("  -4            Include sentences from draculaflow4.\n");
  printf("  -5            Include sentences from draculaflow5.\n");
  printf("  -l <number>   Specify the number of sentences to generate (default: 1).\n");
  printf("  -s            Get the sizes for each draculaflow*.\n");
  printf("  -h            Print the help menu.\n");
  printf("\nExamples:\n");
  printf("  %s -1 -3 -l 5   Generate 5 sentences using draculaflow1 and draculaflow3.\n", program_name);
  printf("  %s -2           Generate 1 sentence using draculaflow2.\n", program_name);
  printf("  %s              Generate 1 sentence from all flows.\n", program_name);
  printf("\n");
}