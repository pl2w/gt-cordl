#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserTwitchInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserTwitchInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserTwitchInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserTwitchInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserTwitchInfo*, "PlayFab.ClientModels", "UserTwitchInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserTwitchInfo
class CORDL_TYPE UserTwitchInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field TwitchId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TwitchId, put=__cordl_internal_set_TwitchId)) ::StringW  TwitchId;

/// @brief Field TwitchUserName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TwitchUserName, put=__cordl_internal_set_TwitchUserName)) ::StringW  TwitchUserName;

static inline ::PlayFab::ClientModels::UserTwitchInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TwitchId() const;

constexpr ::StringW& __cordl_internal_get_TwitchId() ;

constexpr ::StringW const& __cordl_internal_get_TwitchUserName() const;

constexpr ::StringW& __cordl_internal_get_TwitchUserName() ;

constexpr void __cordl_internal_set_TwitchId(::StringW  value) ;

constexpr void __cordl_internal_set_TwitchUserName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserTwitchInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserTwitchInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserTwitchInfo(UserTwitchInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserTwitchInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserTwitchInfo(UserTwitchInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20312};

/// @brief Field TwitchId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___TwitchId;

/// @brief Field TwitchUserName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TwitchUserName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserTwitchInfo, ___TwitchId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserTwitchInfo, ___TwitchUserName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserTwitchInfo) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
