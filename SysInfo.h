#ifndef SYSINFO_H
#define SYSINFO_H


class SysInfo {

public:

    static SysInfo& instance();             //Singleton: "unique access point", nur hierüber kommt man an das Objekt

    virtual ~SysInfo();

    virtual void init() = 0;
    virtual double cpuLoadAverage() = 0;
    virtual double memoryUsed() = 0;

protected:

    explicit SysInfo();                     //Singleton: Nur die Klasse selbst und die Kinder dürfen den Konstruktor aufrufen

private:

    SysInfo(const SysInfo& rhs);            //Singleton: Copy-Konstruktor private machen
    SysInfo& operator=(const SysInfo& rhs); //Singleton: Zuweisungs-Operator private machen

};

#endif // SYSINFO_H
