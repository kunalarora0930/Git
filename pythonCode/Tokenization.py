#Split a sentence into tokens
!pip install spacy
import spacy
nlp = spacy.load(name = 'en_core_web_sm')

doc1 = nlp(str(input("Enter sentence: ")))
for token in doc1:
  print(token)
print()
