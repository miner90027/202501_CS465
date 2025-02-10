# Shell script for the commands run to obtain the answers to the homework problems

# HW 1.3
#   This decrpyts the base 64 hash and outputs the plain text
echo -n "U2FsdGVkX18+/zIyu2a0OJ7UTAoWJmt5ib6pPL1FhXC62xA1oTIyvGQWopXBcCQP\nWPkuNh1B4d/2ieIPYFluZg==" \
  | openssl dec -base64 \ 
  | openssl enc -aes-256-cbc -pbkdf2 -iter 10000 -k foo -d

# HW 1.4
#   This signs the text using the binary key, then encodes the signature in base64
echo -n "firmwarekey=2" | openssl dgst -sha256 -sign flurbly.key -binary | openssl enc -base64
