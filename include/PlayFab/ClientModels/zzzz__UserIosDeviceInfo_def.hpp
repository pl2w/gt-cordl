#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserIosDeviceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserIosDeviceInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserIosDeviceInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserIosDeviceInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserIosDeviceInfo*, "PlayFab.ClientModels", "UserIosDeviceInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserIosDeviceInfo
class CORDL_TYPE UserIosDeviceInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field IosDeviceId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_IosDeviceId, put=__cordl_internal_set_IosDeviceId)) ::StringW  IosDeviceId;

static inline ::PlayFab::ClientModels::UserIosDeviceInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_IosDeviceId() const;

constexpr ::StringW& __cordl_internal_get_IosDeviceId() ;

constexpr void __cordl_internal_set_IosDeviceId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserIosDeviceInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserIosDeviceInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserIosDeviceInfo(UserIosDeviceInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserIosDeviceInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserIosDeviceInfo(UserIosDeviceInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20301};

/// @brief Field IosDeviceId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___IosDeviceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserIosDeviceInfo, ___IosDeviceId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserIosDeviceInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
