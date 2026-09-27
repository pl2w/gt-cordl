#pragma once
// IWYU pragma private; include "GlobalNamespace/SAnnouncementData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SAnnouncementData)
// Forward declare root types
namespace GlobalNamespace {
struct SAnnouncementData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SAnnouncementData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SAnnouncementData, "", "SAnnouncementData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SAnnouncementData
struct CORDL_TYPE SAnnouncementData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SAnnouncementData() ;

// Ctor Parameters [CppParam { name: "ShowAnnouncement", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "AnnouncementID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "AnnouncementTitle", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr SAnnouncementData(::StringW  ShowAnnouncement, ::StringW  AnnouncementID, ::StringW  AnnouncementTitle, ::StringW  Message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2856};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ShowAnnouncement, offset: 0x0, size: 0x8, def value: None
 ::StringW  ShowAnnouncement;

/// @brief Field AnnouncementID, offset: 0x8, size: 0x8, def value: None
 ::StringW  AnnouncementID;

/// @brief Field AnnouncementTitle, offset: 0x10, size: 0x8, def value: None
 ::StringW  AnnouncementTitle;

/// @brief Field Message, offset: 0x18, size: 0x8, def value: None
 ::StringW  Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SAnnouncementData, ShowAnnouncement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SAnnouncementData, AnnouncementID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SAnnouncementData, AnnouncementTitle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SAnnouncementData, Message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SAnnouncementData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
