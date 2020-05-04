#include<bits/stdc++.h>
using namespace std;

string random_word_generator_function()
{
  srand(time(0));
  vector<string>random_word_generator{"about", "above", "across", "act", "active", "activity", "add", "afraid", "after", "again", "age", "ago", "agree", "air", "all", "alone", "along", "already", "always", "am", "amount", "an", "and", "angry", "another", "answer", "any", "anyone", "anything", "anytime", "appear", "apple", "are", "area", "arm", "army", "around", "arrive", "art", "as", "ask", "at", "attack", "aunt", "autumn", "away","baby", "back", "bad", "bag", "ball", "bank", "base", "basket", "bath", "be", "bean", "bear", "beautiful", "bed", "bedroom", "beer", "behave", "before", "begin", "behind", "bell", "below", "besides", "best", "better", "between", "big", "bird", "birth", "birthday", "bit", "bite", "black", "bleed", "block", "blood", "blow", "blue", "board", "boat", "body", "boil", "bone", "book", "border", "born", "borrow", "both", "bottle", "bottom", "bowl", "box", "boy", "branch", "brave", "bread", "break", "breakfast", "breathe", "bridge", "bright", "bring", "brother", "brown", "brush", "build", "burn", "business", "bus", "busy", "but", "buy", "by", "cake", "call", "can", "candle", "cap", "car", "card", "care", "careful", "careless", "carry", "case", "cat", "catch", "central", "century", "certain", "chair", "chance", "change", "chase", "cheap", "cheese", "chicken", "child", "children", "chocolate", "choice", "choose", "circle", "city", "class", "clever", "clean", "clear", "climb", "clock", "cloth", "clothes", "cloud", "cloudy", "close", "coffee", "coat", "coin", "cold", "collect", "colour", "comb", "comfortable", "common", "compare", "come", "complete", "computer", "condition", "continue", "control", "cook", "cool", "copper", "corn", "corner", "correct", "cost", "contain", "count", "country", "course", "cover", "crash", "cross", "cry", "cup", "cupboard", "cut","dance", "dangerous", "dark", "daughter", "day", "dead", "decide", "decrease", "deep", "deer", "depend", "desk", "destroy", "develop", "die", "different", "difficult", "dinner", "direction", "dirty", "discover", "dish", "do", "dog", "door", "double", "down", "draw", "dream", "dress", "drink", "drive", "drop", "dry", "duck", "dust", "duty" "each", "ear", "early", "earn", "earth", "east", "easy", "eat", "education", "effect", "egg", "eight", "either", "electric", "elephant", "else", "empty", "end", "enemy", "enjoy", "enough", "enter", "equal", "entrance", "escape", "even", "evening", "event", "ever", "every", "everyone", "exact", "everybody", "examination", "example", "except", "excited", "exercise", "expect", "expensive", "explain", "extremely", "eye", "face", "fact", "fail", "fall", "false", "family", "famous", "far", "farm", "father", "fast", "fat", "fault", "fear", "feed", "feel", "female", "fever", "few", "fight", "fill", "film", "find", "fine", "finger", "finish", "fire", "first", "fish", "fit", "five", "fix", "flag", "flat", "float", "floor", "flour", "flower", "fly", "fold", "food", "fool", "foot", "football", "for", "force", "foreign", "forest", "forget", "forgive", "fork", "form", "fox", "four", "free", "freedom", "freeze", "fresh", "friend", "friendly", "from", "front", "fruit", "full", "fun", "funny", "furniture", "further", "future", "game", "garden", "gate", "general", "gentleman", "get", "gift", "give", "glad", "glass", "go", "goat", "god", "gold", "good", "goodbye", "grandfather", "grandmother", "grass", "grave", "great", "green", "gray", "ground", "group", "grow", "gun", "hair", "half", "hall", "hammer", "hand", "happen", "happy", "hard", "hat", "hate", "have", "he", "head", "healthy", "hear", "heavy", "heart", "heaven", "height", "hello", "help", "hen", "her", "here", "hers", "hide", "high", "hill", "him", "his", "hit", "hobby", "hold", "hole", "holiday", "home", "hope", "horse", "hospital", "hot", "hotel", "house", "how", "hundred", "hungry", "hour", "hurry", "husband", "hurt", "ice", "idea", "if", "important", "in", "increase", "inside", "into", "introduce", "invent", "iron", "invite", "is", "island", "it", "its", "jelly", "job", "join", "juice", "jump", "just", "keep", "key", "kill", "kind", "king", "kitchen", "knee", "knife", "knock", "know", "ladder", "lady", "lamp", "land", "large", "last", "late", "lately", "laugh", "lazy", "lead", "leaf", "learn", "leave", "leg", "left", "lend", "length", "less", "lesson", "let", "letter", "library", "lie", "life", "light", "like", "lion", "lip", "list", "listen", "little", "live", "lock", "lonely", "long", "look", "lose", "lot", "love", "low", "lower", "luck", "machine", "main", "make", "male", "man", "many", "map", "mark", "market", "marry", "matter", "may", "me", "meal", "mean", "measure", "meat", "medicine", "meet", "member", "mention", "method", "middle", "milk", "million", "mind", "minute", "miss", "mistake", "mix", "model", "modern", "moment", "money", "monkey", "month", "moon", "more", "morning", "most", "mother", "mountain", "mouth", "move", "much", "music", "must", "my", "name", "narrow", "nation", "nature", "near", "nearly", "neck", "need", "needle", "neighbour", "neither", "net", "never", "new", "news", "newspaper", "next", "nice", "night", "nine", "no", "noble", "noise", "none", "nor", "north", "nose", "not", "nothing", "notice", "now", "number", "obey", "object", "ocean", "of", "off", "offer", "office", "often", "oil", "old", "on", "one", "only", "open", "opposite", "or", "orange", "order", "other", "our", "out", "outside", "over", "own", "page", "pain", "paint", "pair", "pan", "paper", "parent", "park", "part", "partner", "party", "pass", "past", "path", "pay", "peace", "pen", "pencil", "people", "pepper", "per", "perfect", "period", "person", "petrol", "photograph", "piano", "pick", "picture", "piece", "pig", "pin", "pink", "place", "plane", "plant", "plastic", "plate", "play", "please", "pleased", "plenty", "pocket", "point", "poison", "police", "polite", "pool", "poor", "popular", "position", "possible", "potato", "pour", "power", "present", "press", "pretty", "prevent", "price", "prince", "prison", "private", "prize", "probably", "problem", "produce", "promise", "proper", "protect", "provide", "public", "pull", "punish", "pupil", "push", "put", "queen", "question", "quick", "quiet", "quite", "radio", "rain", "rainy", "raise", "reach", "read", "ready", "real", "really", "receive", "record", "red", "remember", "remind", "remove", "rent", "repair", "repeat", "reply", "report", "rest", "restaurant", "result", "return", "rice", "rich", "ride", "right", "ring", "rise", "road", "rob", "rock", "room", "round", "rubber", "rude", "rule", "ruler", "run", "rush", "sad", "safe", "sail", "salt", "same", "sand", "save", "say", "school", "science", "scissors", "search", "seat", "second", "see", "seem", "sell", "send", "sentence", "serve", "seven", "several", "sex", "shade", "shadow", "shake", "shape", "share", "sharp", "she", "sheep", "sheet", "shelf", "shine", "ship", "shirt", "shoe", "shoot", "shop", "short", "should", "shoulder", "shout", "show", "sick", "side", "signal", "silence", "silly", "silver", "similar", "simple", "single", "since", "sing", "sink", "sister", "sit", "six", "size", "skill", "skin", "skirt", "sky", "sleep", "slip", "slow", "small", "smell", "smile", "smoke", "snow", "so", "soap", "sock", "soft", "some", "someone", "something", "sometimes", "son", "soon", "sorry", "sound", "soup", "south", "space", "speak", "special", "speed", "spell", "spend", "spoon", "sport", "spread", "spring", "square", "stamp", "stand", "star", "start", "station", "stay", "steal", "steam", "step", "still", "stomach", "stone", "stop", "store", "storm", "story", "strange", "street", "strong", "structure", "student", "study", "stupid", "subject", "substance", "successful", "such", "sudden", "sugar", "suitable", "summer", "sun", "sunny", "support", "sure", "surprise", "sweet", "swim", "sword", "table", "take", "talk", "tall", "taste", "taxi", "tea", "teach", "team", "tear", "telephone", "television", "tell", "ten", "tennis", "terrible", "test", "than", "that", "the", "their", "then", "there", "therefore", "these", "thick", "thin", "thing", "think", "third", "this", "though", "threat", "three", "tidy", "tie", "title", "to", "today", "toe", "together", "tomorrow", "tonight", "too", "tool", "tooth", "top", "total", "touch", "town", "train", "tram", "travel", "tree", "trouble", "true", "trust", "twice", "try", "turn", "type", "ugly", "uncle", "under", "understand", "unit", "until", "up", "use", "useful", "usual", "usually", "vegetable", "very", "village", "voice", "visit", "wait", "wake", "walk", "want", "warm", "was", "wash", "waste", "watch", "water", "way", "we", "weak", "wear", "weather", "wedding", "week", "weight", "welcome", "were", "well", "west", "wet", "what", "wheel", "when", "where", "which", "while", "white", "who", "why", "wide", "wife", "wild", "will", "win", "wind", "window", "wine", "winter", "wire", "wise", "wish", "with", "without", "woman", "wonder", "word", "work", "world", "worry", "yard", "yell", "yesterday", "yet", "you", "young", "your", "zero", "zoo"};

  int selected_index;
  selected_index = 1 + (rand()%900);
  return random_word_generator[selected_index];
}

vector<char> change_current_word_state(string selected_word, vector<char> current_word_state, char input_char)
{
  vector<char>modified_word_state;
  for(int i=0; i<selected_word.length(); i++)
  {
    if(selected_word[i]==input_char and current_word_state[i]=='_')
      modified_word_state.push_back(input_char);
    else
      modified_word_state.push_back(current_word_state[i]);
  }

  return modified_word_state;
}

pair<vector<char>,int> input_character_in_word(string selected_word,char input_char,vector<char> current_word_state, int attempts_remaining)
{
  pair<vector<char>,int> word_and_attempt_update;
  int flag = 0;
  for(int i=0; i<selected_word.length(); i++)
    if(selected_word[i]==input_char)
    {
      current_word_state = change_current_word_state(selected_word, current_word_state, input_char);
      flag = 1;
      if(selected_word[i] == 'a' or selected_word[i]=='e' or selected_word[i]=='i' or selected_word[i]=='o' or selected_word[i]=='u')
        flag=0;
    }

    word_and_attempt_update.first = current_word_state;
    if(flag==1)
      word_and_attempt_update.second = attempts_remaining;
    else
    {
      attempts_remaining--;
      word_and_attempt_update.second = attempts_remaining;
    }

    return word_and_attempt_update;
}
void print_current_state(vector<char>current_word_state, int attempts_remaining)
{
  //This function is used to print the current state of the word and it also shows how much attempts user is left with
  cout<<"Current State: "<<" ";
  for(int i=0; i<current_word_state.size(); i++)
    cout<<current_word_state[i]<<" ";

  cout<<"\t Attempts Remaining: "<<attempts_remaining<<endl;
}

bool check_game_status(string selected_word,vector<char>current_word_state,int attempts_remaining)
{
  //This function checks whether the game has ended or not.
  //There are two ways for a game to end win or loss
  int flag = 0;

  //This if statement checks whether the attemps are Remaining or not. If no then game ends and user loses.
  if(attempts_remaining<=0)
  {
    cout<<"You Loose :( Please! Try Again"<<endl;
    cout<<"The word was: "<<selected_word<<endl;
    return true;
  }
  //This part checks if the word is guessed by the user correctly or not. If the current_word_state and selected_word
  //matches then user has won the game.
  for(int i=0; i<selected_word.length(); i++)
    if(selected_word[i] != current_word_state[i])
    {
      flag=1;
      break;
    }

    if(flag==0)
    {
      cout<<"You Won :D, Good Going!"<<endl;
      return true;
    }

    return false;
}

void play_game(int attempts=5)
{
  //This function contains main logic of our program.

  //Here we are going to create a variable that will generate a random word using random_word_generator_function.
  string selected_word = random_word_generator_function();
  //Now we are gonna create a vector of type char named current word state which will keep on updating itself.
  vector<char>current_word_state;
  // This loop is made to fill in the current_word_state vector with blank spaces('_') and vowels.
  for(int i=0; i<selected_word.length();i++)
  {
    //Here we are comparing whether the alphabet in the selected_word is a vowel or not.
    //If it's a vowel then we'll put the vowel in the vector and if its not a vowel then a '_' is inserted.
    if(selected_word[i] == 'a' or selected_word[i]=='e' or selected_word[i]=='i' or selected_word[i]=='o' or selected_word[i]=='u')
      current_word_state.push_back(selected_word[i]);
    else
      current_word_state.push_back('_');
  }
  //This variable will keep track of number of attemps that a player have.
  int attempts_remaining = attempts;

  //This function (print_current_state) is created to print the current state of the word.
  //That is how many characters user has guessed.
  //Here it is used to print the intial state which is at the start of the game.
  print_current_state(current_word_state,attempts_remaining);

  //This is an infinite loop, the purpose of this loop is to run until and unless game ends.
  while(1)
  {
    //Here user enters/guesses a Character.
    cout<<"Guess a Character: ";
    char input_char;
    cin>>input_char;
    cout<<endl;
    //After the guess of user, we have to check whether character lies inside the the selected_word or not.
    //If it resides then we have to update our current_word_state, if not we have to reduce number of attempts.
    //Thus we create a variable of type pair containing vector<char> as first and int as second.
    //This calls a function in order to get update on current_word_state and attempts_remaining.
    pair<vector<char>,int> word_and_attempt_update = input_character_in_word(selected_word,input_char,current_word_state,attempts_remaining);
    //After the value is recieved in word_and_attempt_update(variable of type pair) we then update our
    //current_word_state and attempts_remaining variables.
    current_word_state = word_and_attempt_update.first;
    attempts_remaining = word_and_attempt_update.second;
    //The print_current_state function is now called to print the updated state after user's guess.
    print_current_state(current_word_state,attempts_remaining);
    //We have to check whether a game has ended or not.
    //Game can be ended in two ways only 1.User Won and 2.User Lost.
    //Thus we need to create a function in order to check the status of the game which will return a value in True or False
    bool game_ended = check_game_status(selected_word,current_word_state,attempts_remaining);
    if(game_ended)
    //If game ended then we will move out of the infinte loop
      break;
  }
}

int main()
{
  play_game();
  return 0;
}
