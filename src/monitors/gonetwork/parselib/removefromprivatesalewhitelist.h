#pragma once
/*-------------------------------------------------------------------------------------------
 * qblocks - fast, easily-accessible, fully-decentralized data from blockchains
 * copyright (c) 2018 Great Hill Corporation (http://greathill.com)
 *
 * This program is free software: you may redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version. This program is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details. You should have received a copy of the GNU General
 * Public License along with this program. If not, see http://www.gnu.org/licenses/.
 *-------------------------------------------------------------------------------------------*/
/*
 * This file was generated with makeClass. Edit only those parts of the code inside
 * of 'EXISTING_CODE' tags.
 */
#include <vector>
#include <map>
#include "transaction.h"

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
class CRemoveFromPrivateSaleWhitelist : public CTransaction {
public:
    CAddressArray _bidder_addresses;

public:
    CRemoveFromPrivateSaleWhitelist(void);
    CRemoveFromPrivateSaleWhitelist(const CRemoveFromPrivateSaleWhitelist& re);
    virtual ~CRemoveFromPrivateSaleWhitelist(void);
    CRemoveFromPrivateSaleWhitelist& operator=(const CRemoveFromPrivateSaleWhitelist& re);

    DECLARE_NODE(CRemoveFromPrivateSaleWhitelist);

    const string_q getStringAt(const string_q& name, size_t i) const override;

    // EXISTING_CODE
    // EXISTING_CODE
    bool operator==(const CRemoveFromPrivateSaleWhitelist& item) const;
    bool operator!=(const CRemoveFromPrivateSaleWhitelist& item) const { return !operator==(item); }
    friend bool operator<(const CRemoveFromPrivateSaleWhitelist& v1, const CRemoveFromPrivateSaleWhitelist& v2);
    friend ostream& operator<<(ostream& os, const CRemoveFromPrivateSaleWhitelist& item);

protected:
    void clear(void);
    void initialize(void);
    void duplicate(const CRemoveFromPrivateSaleWhitelist& re);
    bool readBackLevel(CArchive& archive) override;

    // EXISTING_CODE
    // EXISTING_CODE
};

//--------------------------------------------------------------------------
inline CRemoveFromPrivateSaleWhitelist::CRemoveFromPrivateSaleWhitelist(void) {
    initialize();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline CRemoveFromPrivateSaleWhitelist::CRemoveFromPrivateSaleWhitelist(const CRemoveFromPrivateSaleWhitelist& re) {
    // EXISTING_CODE
    // EXISTING_CODE
    duplicate(re);
}

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
inline CRemoveFromPrivateSaleWhitelist::~CRemoveFromPrivateSaleWhitelist(void) {
    clear();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CRemoveFromPrivateSaleWhitelist::clear(void) {
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CRemoveFromPrivateSaleWhitelist::initialize(void) {
    CTransaction::initialize();

    _bidder_addresses.clear();

    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CRemoveFromPrivateSaleWhitelist::duplicate(const CRemoveFromPrivateSaleWhitelist& re) {
    clear();
    CTransaction::duplicate(re);

    _bidder_addresses = re._bidder_addresses;

    // EXISTING_CODE
    // EXISTING_CODE
    finishParse();
}

//--------------------------------------------------------------------------
inline CRemoveFromPrivateSaleWhitelist& CRemoveFromPrivateSaleWhitelist::operator=(const CRemoveFromPrivateSaleWhitelist& re) {
    duplicate(re);
    // EXISTING_CODE
    // EXISTING_CODE
    return *this;
}

//-------------------------------------------------------------------------
inline bool CRemoveFromPrivateSaleWhitelist::operator==(const CRemoveFromPrivateSaleWhitelist& item) const {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default equal operator in class definition, assume none are equal (so find fails)
    return false;
}

//-------------------------------------------------------------------------
inline bool operator<(const CRemoveFromPrivateSaleWhitelist& v1, const CRemoveFromPrivateSaleWhitelist& v2) {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default sort defined in class definition, assume already sorted, preserve ordering
    return true;
}

//---------------------------------------------------------------------------
typedef vector<CRemoveFromPrivateSaleWhitelist> CRemoveFromPrivateSaleWhitelistArray;
extern CArchive& operator>>(CArchive& archive, CRemoveFromPrivateSaleWhitelistArray& array);
extern CArchive& operator<<(CArchive& archive, const CRemoveFromPrivateSaleWhitelistArray& array);

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

