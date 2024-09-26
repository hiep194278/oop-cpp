#include "certificate.h"
#include <iostream>

Certificate::Certificate(int certID, std::string certName, std::string certRank, std::string certDate)
    : CertificatedID(certID), CertificateName(certName), CertificateRank(certRank), CertificatedDate(certDate) {}

void Certificate::showCertInfo() const {
    std::cout << "CertificatedID: " << CertificatedID << "\nCertificateName: " << CertificateName
              << "\nCertificateRank: " << CertificateRank << "\nCertificatedDate: " << CertificatedDate << std::endl;
}
