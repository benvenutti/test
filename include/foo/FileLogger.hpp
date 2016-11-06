#ifndef FOO_FILELOGGER_H
#define FOO_FILELOGGER_H

#include <ostream>
#include <memory>
#include <string>

#include "FooExport.h"

namespace foo {

class FOO_EXPORT FileLogger {
  public:
    FileLogger(std::ostream& output);
    ~FileLogger();

    void write(const std::string& log);

  private:
    class impl;
    std::unique_ptr<impl> pimpl;
};

}

#endif