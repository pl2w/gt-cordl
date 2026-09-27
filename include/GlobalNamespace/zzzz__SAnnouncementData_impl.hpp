#pragma once
// IWYU pragma private; include "GlobalNamespace/SAnnouncementData.hpp"
#include "GlobalNamespace/zzzz__SAnnouncementData_def.hpp"
// Ctor Parameters [CppParam { name: "ShowAnnouncement", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AnnouncementID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AnnouncementTitle", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SAnnouncementData::SAnnouncementData(::StringW  ShowAnnouncement, ::StringW  AnnouncementID, ::StringW  AnnouncementTitle, ::StringW  Message) noexcept  {
this->ShowAnnouncement = ShowAnnouncement;
this->AnnouncementID = AnnouncementID;
this->AnnouncementTitle = AnnouncementTitle;
this->Message = Message;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SAnnouncementData::SAnnouncementData()   {
}
