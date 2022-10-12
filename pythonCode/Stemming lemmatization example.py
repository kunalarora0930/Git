#Stemming and lemmatization example
import nltk
import spacy
from nltk.stem.porter import PorterStemmer
from nltk.stem.snowball import  SnowballStemmer
p_stemmer = PorterStemmer()
s_stemmer = SnowballStemmer(language='english')
nlp = spacy.load('en_core_web_sm')

#Example array of words for stemming
words = ['run','running','ran','runs','easily','fairly','hello']
#Example sentence for lemmatization
doc1 = nlp("spaCy excels at large-scale information extraction tasks.")
#Output with Porter stemmer
print("Output with porter stemmer")
for word in words:
  print(word + ' --- ' +p_stemmer.stem(word))
print("")
#Output with Snowball stemmer
print("Output with snowball stemmer:")
for word in words:
  print(word + ' --- ' +s_stemmer.stem(word))
print("")
#Tokens and output of lemmatization in doc1
print("Lemmatization of tokens in given sentence:")
for token in doc1:
  print(token.text,'\t',token.lemma_)
