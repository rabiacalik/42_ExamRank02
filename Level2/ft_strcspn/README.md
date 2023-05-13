str c spn --> string complement span --> dizi tamamlama araligi
size_t	ft_strcspn(const char *s, const char *reject);

- 's' dizisinin karakterlerini 'reject' dizisinin içerisinde arıyor
- herhangi bir karakteri bulduğunda 
- bulduğu index sayısını return ediyor
- 'reject' in içinde 's' yoksa, reject in index sayısını döner
- disinin sonunda yer alan boş(\0) elemanı da unutma 
