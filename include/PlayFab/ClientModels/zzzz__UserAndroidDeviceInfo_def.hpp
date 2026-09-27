#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserAndroidDeviceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserAndroidDeviceInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserAndroidDeviceInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserAndroidDeviceInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserAndroidDeviceInfo*, "PlayFab.ClientModels", "UserAndroidDeviceInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserAndroidDeviceInfo
class CORDL_TYPE UserAndroidDeviceInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AndroidDeviceId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AndroidDeviceId, put=__cordl_internal_set_AndroidDeviceId)) ::StringW  AndroidDeviceId;

static inline ::PlayFab::ClientModels::UserAndroidDeviceInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AndroidDeviceId() const;

constexpr ::StringW& __cordl_internal_get_AndroidDeviceId() ;

constexpr void __cordl_internal_set_AndroidDeviceId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e460, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserAndroidDeviceInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserAndroidDeviceInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserAndroidDeviceInfo(UserAndroidDeviceInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserAndroidDeviceInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserAndroidDeviceInfo(UserAndroidDeviceInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20292};

/// @brief Field AndroidDeviceId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___AndroidDeviceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserAndroidDeviceInfo, ___AndroidDeviceId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserAndroidDeviceInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
