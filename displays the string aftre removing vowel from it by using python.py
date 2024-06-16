def remove_vowels(s):
    new_str=" "
    for i in s:
        if i in "aeiouAEIOU":
            pass
        else:
            new_str+=i
            print("the string without vowel is:",new_str)
            str=input("\nenter a string:")
            remove_vowels(str)
