#include <iostream>

using namespace std;

struct Computer
{
    string m_cpuName;
    string m_motherboardName;
    string m_memoryName;
    string m_storageName;
    string m_powersupplyName;
    string m_storageAmount;
    string m_memoryGB;
};

struct PC : public Computer
{
    string m_caseType;
    string m_videoCard;
};

struct Laptop : public Computer
{
    string m_screenType;
    string m_batteryLife;
    string companyName;
    string m_screenSize;
    string m_videoCard;
};

struct Mobile : public Computer
{
    string m_screenType;
    string m_screenSize;
    string companyName;
    string m_batteryLife;
};

int main()
{
    Computer Device;
    int something;
    cout << " Type Of Device. Mobile(m), PC (p), Laptop (l): ";
    cin >> something;

    if (something == 'm') {
        Mobile mobile;
        cout << " Company Name: ";
        cin >> mobile.companyName;
        cout << " Screen Type: ";
        cin >> mobile.m_screenType;
        cout << " Screen Size: ";
        cin >> mobile.m_screenSize;
        cout << " Battery Life: ";
        cin >> mobile.m_batteryLife;
        cout << " CPU Name: ";
        cout << " Memory GBs: ";
        cin >> mobile.m_memoryGB;
        cout << " Storage Capacity: ";
        cin >> mobile.m_storageAmount;
    }
    else  if (something == 'M') {
        Mobile mobile;
        cout << " Company Name: ";
        cin >> mobile.companyName;
        cout << " Screen Type: ";
        cin >> mobile.m_screenType;
        cout << " Screen Size: ";
        cin >> mobile.m_screenSize;
        cout << " Battery Life: ";
        cin >> mobile.m_batteryLife;
        cout << " Memory GBs: ";
        cin >> mobile.m_memoryGB;
        cout << " Storage Capacity: ";
        cin >> mobile.m_storageAmount;
    }
    else  if (something == 'l') {
        Laptop laptop;
        cout << " Company Name: ";
        cin >> laptop.companyName;
        cout << " Screen Type: ";
        cin >> laptop.m_screenType;
        cout << " Screen Size: ";
        cin >> laptop.m_screenSize;
        cout << " Battery Life: ";
        cin >> laptop.m_batteryLife;
        cout << " CPU Name: ";
        cin >> laptop.m_cpuName;
        cout << " Memory Name: ";
        cin >> laptop.m_memoryName;
        cout << " Storage Capacity: ";
        cin >> laptop.m_storageAmount;
    }
    else  if (something == 'L') {
        Laptop laptop;
        cout << " Company Name: ";
        cin >> laptop.companyName;
        cout << " Screen Type: ";
        cin >> laptop.m_screenType;
        cout << " Screen Size: ";
        cin >> laptop.m_screenSize;
        cout << " Battery Life: ";
        cin >> laptop.m_batteryLife;
        cout << " CPU Name: ";
        cin >> laptop.m_cpuName;
        cout << " Memory Name: ";
        cin >> laptop.m_memoryName;
        cout << " Storage Capacity: ";
        cin >> laptop.m_storageAmount;
    }
    else  if (something == 'p') {
        PC pc;
        cout << " Case Type: ";
        cin >> pc.m_caseType;
        cout << " CPU Name: ";
        cin >> pc.m_cpuName;
        cout << " MotherBoard Name: ";
        cin >> pc.m_motherboardName;
        cout << " Memory Name: ";
        cin >> pc.m_memoryName;
        cout << " Storage Name: ";
        cin >> pc.m_storageName;
        cout << " Power Supply Name: ";
        cin >> pc.m_powersupplyName;

        //
        char YN;
        cout << " Do you have a Video Card? (Y/N) ";
        cin >> YN;
        if (YN == 'y') {
            cout << " OK " << endl;
            cout << " Video Card Name: ";
            cin >> pc.m_videoCard;
        }
        else if (YN == 'Y') {
            cout << " OK " << endl;
            cout << " Video Card Name: ";
            cin >> pc.m_videoCard;
        }
        else if (YN == 'n') {
            cout << " OK " << endl;
        }
        else if (YN == 'N') {
            cout << " OK " << endl;
        }


        //
    }
    else  if (something == 'P') {
        PC pc;
        cout << " Case Type: ";
        cin >> pc.m_caseType;
        cout << " CPU Name: ";
        cin >> pc.m_cpuName;
        cout << " MotherBoard Name: ";
        cin >> pc.m_motherboardName;
        cout << " Memory Name: ";
        cin >> pc.m_memoryName;
        cout << " Storage Name: ";
        cin >> pc.m_storageName;
        cout << " Power Supply Name: ";
        cin >> pc.m_powersupplyName;

        //
        char YN;
        cout << " Do you have a Video Card? (Y/N) ";
        cin >> YN;
        if (YN == 'y') {
            cout << " OK " << endl;
            cout << " Video Card Name: ";
            cin >> pc.m_videoCard;
        }
        else if (YN == 'Y') {
            cout << " OK " << endl;
            cout << " Video Card Name: ";
            cin >> pc.m_videoCard;
        }
        else if (YN == 'n') {
            cout << " OK " << endl;
        }
        else if (YN == 'N') {
            cout << " OK " << endl;
        }


        //
    }
    return 0;
}
