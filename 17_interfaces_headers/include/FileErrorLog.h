class FileErrorLog
{
public:
    bool openLog(const char *filename);
    bool closeLog();

    bool writeError(const char *errorMessage);

    ~FileErrorLog() {}; // make a virtual destructor in case we delete an IErrorLog pointer, so the proper derived destructor is called
};