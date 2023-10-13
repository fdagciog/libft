# Libft Projesi

Bu repository, 42 okulu tarafından sunulan Piscine eğitimi sırasında tamamladığım "libft" projesini içerir. "Libft", kendi kişisel C kütüphanenizi oluşturmanızı sağlayan önemli bir projedir. Bu README.md dosyası, "libft" projesinin ne yaptığını, nasıl kullanılacağını ve projenin kapsamını açıklamaktadır.

## Proje Açıklaması

"Libft", standart C kütüphanesinin işlevlerini yeniden oluşturmanızı ve özelleştirmenizi sağlar. Bu projeyi tamamlarken, C dilinde hafıza yönetimi, dize işleme, karakter işleme ve diğer temel işlevler hakkında derin bir anlayış geliştirirsiniz.

Proje, aşağıdaki temel bileşenleri içerir:

- Dize (string) işleme işlevleri (örneğin, `ft_strlen`, `ft_strcpy`).
- Bellek işleme işlevleri (örneğin, `ft_memset`, `ft_memcpy`).
- Karakter işleme işlevleri (örneğin, `ft_isalpha`, `ft_toupper`).
- Dizi işleme işlevleri (örneğin, `ft_lstnew`, `ft_lstadd_front`).

Bu işlevleri kullanarak, kendi C projelerinizde kullanabileceğiniz özel bir kütüphane oluşturabilirsiniz.

## Kullanım

"Libft" kütüphanesini kullanmak için aşağıdaki adımları takip edebilirsiniz:

1. "libft" kütüphanesini derleyin ve oluşturun. Bu, `libft.a` veya benzeri bir kütüphane dosyası oluşturur.

2. Kütüphaneyi projenizin derleme komutunda kullanın. Örneğin:

```sh
gcc -o my_program my_program.c libft.a


