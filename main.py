import pyttsx3

Engine = pyttsx3.init()
while True:
    ans = input("what do you want say")
    if ans=="q":

        Engine.say("good bye!, will meet again")
        Engine.runAndWait()
        break
    voice = Engine.getProperty("voices")
    Engine.setProperty('voice', voice[1].id)#for female voice 1 and 0 = male
    Engine.say(ans)
    Engine.runAndWait()
