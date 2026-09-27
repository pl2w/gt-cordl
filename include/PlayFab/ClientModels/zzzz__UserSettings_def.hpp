#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(UserSettings)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserSettings;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserSettings*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserSettings*, "PlayFab.ClientModels", "UserSettings");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserSettings
class CORDL_TYPE UserSettings : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field GatherDeviceInfo, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_GatherDeviceInfo, put=__cordl_internal_set_GatherDeviceInfo)) bool  GatherDeviceInfo;

/// @brief Field GatherFocusInfo, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_GatherFocusInfo, put=__cordl_internal_set_GatherFocusInfo)) bool  GatherFocusInfo;

/// @brief Field NeedsAttribution, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_NeedsAttribution, put=__cordl_internal_set_NeedsAttribution)) bool  NeedsAttribution;

static inline ::PlayFab::ClientModels::UserSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_GatherDeviceInfo() const;

constexpr bool& __cordl_internal_get_GatherDeviceInfo() ;

constexpr bool const& __cordl_internal_get_GatherFocusInfo() const;

constexpr bool& __cordl_internal_get_GatherFocusInfo() ;

constexpr bool const& __cordl_internal_get_NeedsAttribution() const;

constexpr bool& __cordl_internal_get_NeedsAttribution() ;

constexpr void __cordl_internal_set_GatherDeviceInfo(bool  value) ;

constexpr void __cordl_internal_set_GatherFocusInfo(bool  value) ;

constexpr void __cordl_internal_set_NeedsAttribution(bool  value) ;

/// @brief Method .ctor, addr 0xa84e4d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserSettings(UserSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserSettings(UserSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20309};

/// @brief Field GatherDeviceInfo, offset: 0x10, size: 0x1, def value: None
 bool  ___GatherDeviceInfo;

/// @brief Field GatherFocusInfo, offset: 0x11, size: 0x1, def value: None
 bool  ___GatherFocusInfo;

/// @brief Field NeedsAttribution, offset: 0x12, size: 0x1, def value: None
 bool  ___NeedsAttribution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserSettings, ___GatherDeviceInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserSettings, ___GatherFocusInfo) == 0x11, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserSettings, ___NeedsAttribution) == 0x12, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserSettings) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
