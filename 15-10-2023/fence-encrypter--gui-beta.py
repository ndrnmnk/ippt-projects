import tkinter as tk
from tkinter import ttk


def encrypt(s, a):
	res = ""
	for i in range(a, 0, -1):
		for x in range(i-1, len(s), a):
			res += s[x]
	return res


def decrypt(s, a):
	res = [''] * len(s)
	index = 0
	for i in range(a, 0, -1):
		for x in range(i-1, len(s), a):
			res[x] = s[index]
			index += 1
	return ''.join(res)


# encrypted = encrypt("123456", 5)
# print(f"{encrypted = }")
#
# decrypted = decrypt(encrypted, 5)
# print(f"{decrypted = }")

def text_output(phrase, key, to_do):
	T.delete(1.0, tk.END)
	if to_do == 0:		# 0 for encrypt, 1 for decrypt
		T.insert(tk.END, encrypt(phrase.get(), int(key.get())))
	else:
		T.insert(tk.END, decrypt(phrase.get(), int(key.get())))


root = tk.Tk()
root.config(width=800, height=600)
root.title("Also try C++!")

T = tk.Text(root, height=2, width=30)

phrase = tk.StringVar()
phrase_entry = ttk.Entry(root, width=20, textvariable=phrase)

enc_key = tk.StringVar()
enc_key_entry = ttk.Entry(root, width=7, textvariable=enc_key)


button_encrypt = ttk.Button(root, text="Encrypt", command=lambda: text_output(phrase, enc_key, 0))
button_decrypt = ttk.Button(root, text="Decrypt", command=lambda: text_output(phrase, enc_key, 1))

button_encrypt.place(x=200, y=200)
button_decrypt.place(x=400, y=100)
enc_key_entry.place(x=300, y=500)
phrase_entry.place(x=500, y=300)

T.place(x=100, y=100)

root.mainloop()
