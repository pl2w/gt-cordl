#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserNintendoSwitchDeviceIdInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserNintendoSwitchDeviceIdInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserNintendoSwitchDeviceIdInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo*, "PlayFab.ClientModels", "UserNintendoSwitchDeviceIdInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo
class CORDL_TYPE UserNintendoSwitchDeviceIdInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field NintendoSwitchDeviceId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NintendoSwitchDeviceId, put=__cordl_internal_set_NintendoSwitchDeviceId)) ::StringW  NintendoSwitchDeviceId;

static inline ::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_NintendoSwitchDeviceId() const;

constexpr ::StringW& __cordl_internal_get_NintendoSwitchDeviceId() ;

constexpr void __cordl_internal_set_NintendoSwitchDeviceId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserNintendoSwitchDeviceIdInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserNintendoSwitchDeviceIdInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserNintendoSwitchDeviceIdInfo(UserNintendoSwitchDeviceIdInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserNintendoSwitchDeviceIdInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserNintendoSwitchDeviceIdInfo(UserNintendoSwitchDeviceIdInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20304};

/// @brief Field NintendoSwitchDeviceId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___NintendoSwitchDeviceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo, ___NintendoSwitchDeviceId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
