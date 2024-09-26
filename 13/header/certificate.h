#pragma once
#include <string>

class Certificate {
private:
    int CertificatedID;
    std::string CertificateName;
    std::string CertificateRank;
    std::string CertificatedDate;

public:
    Certificate(int certID, std::string certName, std::string certRank, std::string certDate);

    // Display certificate info
    void showCertInfo() const;
};
