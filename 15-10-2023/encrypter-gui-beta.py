import tkinter as tk
from tkinter import ttk


def encrypt(s, a):
	res = ""
	for l in range(a, 0, -1):
		for x in range(l-1, len(s.get()), a):
			res += s.get()[x]
	return res


root = tk.Tk()
root.config(width=800, height=600)
root.title("Also try C++!")

T = tk.Text(root, height = 1, width = 10)

phrase = tk.StringVar()
phrase_entry = ttk.Entry(root, width=20, textvariable=phrase)
phrase_entry.place(x = 500, y = 300)

enc_key = tk.StringVar()
enc_key_entry = ttk.Entry(root, width=7, textvariable=enc_key)
enc_key_entry.place(x = 300, y = 500)

T = tk.Text(root, height = 5, width = 52)
button_open = ttk.Button(root, text="Encrypt", command=lambda: T.insert(tk.END, encrypt(phrase, int(enc_key.get()) ) ) )
button_open.place(x = 200, y = 200)

T.place(x = 100, y = 100)

root.mainloop()
