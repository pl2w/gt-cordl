#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TitleNewsItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TitleNewsItem)
// Forward declare root types
namespace PlayFab::ClientModels {
class TitleNewsItem;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::TitleNewsItem*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::TitleNewsItem*, "PlayFab.ClientModels", "TitleNewsItem");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.TitleNewsItem
class CORDL_TYPE TitleNewsItem : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Body, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Body, put=__cordl_internal_set_Body)) ::StringW  Body;

/// @brief Field NewsId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewsId, put=__cordl_internal_set_NewsId)) ::StringW  NewsId;

/// @brief Field Timestamp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Timestamp, put=__cordl_internal_set_Timestamp)) ::System::DateTime  Timestamp;

/// @brief Field Title, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Title, put=__cordl_internal_set_Title)) ::StringW  Title;

static inline ::PlayFab::ClientModels::TitleNewsItem* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Body() const;

constexpr ::StringW& __cordl_internal_get_Body() ;

constexpr ::StringW const& __cordl_internal_get_NewsId() const;

constexpr ::StringW& __cordl_internal_get_NewsId() ;

constexpr ::System::DateTime const& __cordl_internal_get_Timestamp() const;

constexpr ::System::DateTime& __cordl_internal_get_Timestamp() ;

constexpr ::StringW const& __cordl_internal_get_Title() const;

constexpr ::StringW& __cordl_internal_get_Title() ;

constexpr void __cordl_internal_set_Body(::StringW  value) ;

constexpr void __cordl_internal_set_NewsId(::StringW  value) ;

constexpr void __cordl_internal_set_Timestamp(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Title(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e2c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleNewsItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleNewsItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleNewsItem(TitleNewsItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleNewsItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleNewsItem(TitleNewsItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20238};

/// @brief Field Body, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Body;

/// @brief Field NewsId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___NewsId;

/// @brief Field Timestamp, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___Timestamp;

/// @brief Field Title, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Title;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::TitleNewsItem, ___Body) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TitleNewsItem, ___NewsId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TitleNewsItem, ___Timestamp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TitleNewsItem, ___Title) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::TitleNewsItem) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
