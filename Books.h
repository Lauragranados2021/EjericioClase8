//
// Created by lauri on 22/11/2021.
//

#ifndef EJERICIOCLASE8_BOOKS_H
#define EJERICIOCLASE8_BOOKS_H
#include<string>
#include <ostream>

class Books {
public:
    virtual ~Books();

    friend std::ostream &operator<<(std::ostream &os, const Books &books);

    Books();

    Books(const std::string &id, const std::string &title, const std::string &author, short pages);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const std::string &getAuthor() const;

    void setAuthor(const std::string &author);

    short getPages() const;

    void setPages(short pages);

private:
    std::string id;
std::string title;
std::string author;
short pages;

};


#endif //EJERICIOCLASE8_BOOKS_H
