# hw1.1.py
# Aleks McCormick
# 2025/02/10

import hashlib

# Hash to crack
crackMe = '19e639b064bdb018bbf393d0f751e6e5e9934f70394531ab3f617513529ab264'
pin = f'{0:04d}'

# Brute force the pin
for i in range(1111, 10000):
  # set the pin value to be 4 digits
  pin = f'{i:04d}'
  # run the pin through the sha256 hash algorighim
  sha = hashlib.sha256()
  sha.update(pin.encode())
  hashed = sha.hexdigest()

  # Check if the hashed value matches the value to crack
  if hashed == crackMe:
    # print the cracked pin
    print(pin)
    break
