//
// Created by lauri on 22/11/2021.
//

#include "Books.h"

Books::Books() {}

Books::Books(const std::string &id, const std::string &title, const std::string &author, short pages) : id(id),
                                                                                                        title(title),
                                                                                                        author(author),
                                                                                                        pages(pages) {}

const std::string &Books::getId() const {
    return id;
}

void Books::setId(const std::string &id) {
    Books::id = id;
}

const std::string &Books::getTitle() const {
    return title;
}

void Books::setTitle(const std::string &title) {
    Books::title = title;
}

const std::string &Books::getAuthor() const {
    return author;
}

void Books::setAuthor(const std::string &author) {
    Books::author = author;
}

short Books::getPages() const {
    return pages;
}

void Books::setPages(short pages) {
    Books::pages = pages;
}

std::ostream &operator<<(std::ostream &os, const Books &books) {
    os << "id: " << books.id << " title: " << books.title << " author: " << books.author << " pages: " << books.pages;
    return os;
}

Books::~Books() {

}
