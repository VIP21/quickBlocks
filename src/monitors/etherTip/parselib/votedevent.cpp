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
#include <algorithm>
#include "votedevent.h"
#include "etherlib.h"

//---------------------------------------------------------------------------
IMPLEMENT_NODE(CVotedEvent, CLogEntry);

//---------------------------------------------------------------------------
static string_q nextVotedeventChunk(const string_q& fieldIn, const void *dataPtr);
static string_q nextVotedeventChunk_custom(const string_q& fieldIn, const void *dataPtr);

//---------------------------------------------------------------------------
void CVotedEvent::Format(ostream& ctx, const string_q& fmtIn, void *dataPtr) const {
    if (!m_showing)
        return;

    if (fmtIn.empty()) {
        ctx << toJson();
        return;
    }

    string_q fmt = fmtIn;
    // EXISTING_CODE
    // EXISTING_CODE

    while (!fmt.empty())
        ctx << getNextChunk(fmt, nextVotedeventChunk, this);
}

//---------------------------------------------------------------------------
string_q nextVotedeventChunk(const string_q& fieldIn, const void *dataPtr) {
    if (dataPtr)
        return reinterpret_cast<const CVotedEvent *>(dataPtr)->getValueByName(fieldIn);

    // EXISTING_CODE
    // EXISTING_CODE

    return fldNotFound(fieldIn);
}

//---------------------------------------------------------------------------------------------------
bool CVotedEvent::setValueByName(const string_q& fieldName, const string_q& fieldValue) {
    // EXISTING_CODE
    // EXISTING_CODE

    if (CLogEntry::setValueByName(fieldName, fieldValue))
        return true;

    switch (tolower(fieldName[0])) {
        case 'j':
            if ( fieldName % "justification" ) { justification = fieldValue; return true; }
            break;
        case 'p':
            if ( fieldName % "proposalID" ) { proposalID = str_2_Wei(fieldValue); return true; }
            if ( fieldName % "position" ) { position = str_2_Bool(fieldValue); return true; }
            break;
        case 'v':
            if ( fieldName % "voter" ) { voter = str_2_Addr(fieldValue); return true; }
            break;
        default:
            break;
    }
    return false;
}

//---------------------------------------------------------------------------------------------------
void CVotedEvent::finishParse() {
    // EXISTING_CODE
    // EXISTING_CODE
}

//---------------------------------------------------------------------------------------------------
bool CVotedEvent::Serialize(CArchive& archive) {

    if (archive.isWriting())
        return SerializeC(archive);

    // Always read the base class (it will handle its own backLevels if any, then
    // read this object's back level (if any) or the current version.
    CLogEntry::Serialize(archive);
    if (readBackLevel(archive))
        return true;

    // EXISTING_CODE
    // EXISTING_CODE
    archive >> proposalID;
    archive >> position;
    archive >> voter;
    archive >> justification;
    finishParse();
    return true;
}

//---------------------------------------------------------------------------------------------------
bool CVotedEvent::SerializeC(CArchive& archive) const {

    // Writing always write the latest version of the data
    CLogEntry::SerializeC(archive);

    // EXISTING_CODE
    // EXISTING_CODE
    archive << proposalID;
    archive << position;
    archive << voter;
    archive << justification;

    return true;
}

//---------------------------------------------------------------------------
CArchive& operator>>(CArchive& archive, CVotedEventArray& array) {
    uint64_t count;
    archive >> count;
    array.resize(count);
    for (size_t i = 0 ; i < count ; i++) {
        ASSERT(i < array.capacity());
        array.at(i).Serialize(archive);
    }
    return archive;
}

//---------------------------------------------------------------------------
CArchive& operator<<(CArchive& archive, const CVotedEventArray& array) {
    uint64_t count = array.size();
    archive << count;
    for (size_t i = 0 ; i < array.size() ; i++)
        array[i].SerializeC(archive);
    return archive;
}

//---------------------------------------------------------------------------
void CVotedEvent::registerClass(void) {
    static bool been_here = false;
    if (been_here) return;
    been_here = true;

    CLogEntry::registerClass();

    size_t fieldNum = 1000;
    ADD_FIELD(CVotedEvent, "schema",  T_NUMBER, ++fieldNum);
    ADD_FIELD(CVotedEvent, "deleted", T_BOOL,  ++fieldNum);
    ADD_FIELD(CVotedEvent, "showing", T_BOOL,  ++fieldNum);
    ADD_FIELD(CVotedEvent, "cname", T_TEXT,  ++fieldNum);
    ADD_FIELD(CVotedEvent, "proposalID", T_NUMBER, ++fieldNum);
    ADD_FIELD(CVotedEvent, "position", T_BOOL, ++fieldNum);
    ADD_FIELD(CVotedEvent, "voter", T_ADDRESS, ++fieldNum);
    ADD_FIELD(CVotedEvent, "justification", T_TEXT, ++fieldNum);

    // Hide our internal fields, user can turn them on if they like
    HIDE_FIELD(CVotedEvent, "schema");
    HIDE_FIELD(CVotedEvent, "deleted");
    HIDE_FIELD(CVotedEvent, "showing");
    HIDE_FIELD(CVotedEvent, "cname");

    builtIns.push_back(_biCVotedEvent);

    // EXISTING_CODE
    // EXISTING_CODE
}

//---------------------------------------------------------------------------
string_q nextVotedeventChunk_custom(const string_q& fieldIn, const void *dataPtr) {
    const CVotedEvent *vot = reinterpret_cast<const CVotedEvent *>(dataPtr);
    if (vot) {
        switch (tolower(fieldIn[0])) {
            // EXISTING_CODE
            // EXISTING_CODE
            case 'p':
                // Display only the fields of this node, not it's parent type
                if ( fieldIn % "parsed" )
                    return nextBasenodeChunk(fieldIn, vot);
                // EXISTING_CODE
                // EXISTING_CODE
                break;

            default:
                break;
        }
    }

    return "";
}

//---------------------------------------------------------------------------
bool CVotedEvent::readBackLevel(CArchive& archive) {

    bool done = false;
    // EXISTING_CODE
    // EXISTING_CODE
    return done;
}

//---------------------------------------------------------------------------
string_q CVotedEvent::getValueByName(const string_q& fieldName) const {

    // Give customized code a chance to override first
    string_q ret = nextVotedeventChunk_custom(fieldName, this);
    if (!ret.empty())
        return ret;

    // Return field values
    switch (tolower(fieldName[0])) {
        case 'j':
            if ( fieldName % "justification" ) return justification;
            break;
        case 'p':
            if ( fieldName % "proposalID" ) return bnu_2_Str(proposalID);
            if ( fieldName % "position" ) return int_2_Str(position);
            break;
        case 'v':
            if ( fieldName % "voter" ) return addr_2_Str(voter);
            break;
    }

    // EXISTING_CODE
    // EXISTING_CODE

    // Finally, give the parent class a chance
    return CLogEntry::getValueByName(fieldName);
}

//-------------------------------------------------------------------------
ostream& operator<<(ostream& os, const CVotedEvent& item) {
    // EXISTING_CODE
    // EXISTING_CODE

    item.Format(os, "", nullptr);
    os << "\n";
    return os;
}

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

