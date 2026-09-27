#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserXboxInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserXboxInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserXboxInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserXboxInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserXboxInfo*, "PlayFab.ClientModels", "UserXboxInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserXboxInfo
class CORDL_TYPE UserXboxInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field XboxUserId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxUserId, put=__cordl_internal_set_XboxUserId)) ::StringW  XboxUserId;

static inline ::PlayFab::ClientModels::UserXboxInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_XboxUserId() const;

constexpr ::StringW& __cordl_internal_get_XboxUserId() ;

constexpr void __cordl_internal_set_XboxUserId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e500, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserXboxInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserXboxInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserXboxInfo(UserXboxInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserXboxInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserXboxInfo(UserXboxInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20314};

/// @brief Field XboxUserId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___XboxUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserXboxInfo, ___XboxUserId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserXboxInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
