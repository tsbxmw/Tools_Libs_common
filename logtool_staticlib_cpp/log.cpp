#include "log.h"

void LogShow::logwrite(string name, string logstr)
{
    string logname = name;
    FILE *fp;
    fp = fopen(logname.c_str(), "a");
    string endstr = "\n";
    logstr = logstr + endstr;
    fprintf(fp, logstr.c_str());
    fclose(fp);
}

void LogShow::logshow(string funcname, int loglevel, string logstr)
{
    cout << timeshow(funcname, loglevel) << logstr << endl;
}

std::string LogShow::timeshow()
{
    time_t tt;
    time( &tt );
    tt = tt + 8*3600;  // transform the time zone
    tm* t= gmtime( &tt );
    printf("%d-%02d-%02d %02d:%02d:%02d\n",
           t->tm_year + 1900,
           t->tm_mon + 1,
           t->tm_mday,
           t->tm_hour,
           t->tm_min,
           t->tm_sec);
    string timenow = "";
    return timenow;
}


std::string LogShow::timeshow(std::string showname)
{
    return timeshow() + " [ " + showname + " ]";
}

std::string LogShow::timeshow(std::string showname, std::string level)
{
    return timeshow(showname) + " (" + level + ") ";
}

std::string LogShow::timeshow(std::string showname, int level)
{
    /*
    Function::Log
    enum LogLevel {
    LogLevelError = 1,
    LogLevelWarning,
    LogLevelInfo,
    LogLevelDebug,
    LogLevelSystem,
    LogLevelNouse
    };
    */
    std::string loglevel = "Error";
    switch (level)
    {
    case 1:
        loglevel = "ERROR";
        break;
    case 2:
        loglevel = "WARNING";
        break;
    case 3:
        loglevel = "INFO";
        break;
    case 4:
        loglevel = "DEBUG";
        break;
    case 5:
        loglevel = "SYSTEM";
        break;
    case 6:
        loglevel = "????";
        break;
    default:
        loglevel = "INFO";
        break;
    }
    return timeshow(showname) + " (" + loglevel + ") ";
}
