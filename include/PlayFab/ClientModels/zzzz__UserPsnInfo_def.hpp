#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserPsnInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserPsnInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserPsnInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserPsnInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserPsnInfo*, "PlayFab.ClientModels", "UserPsnInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserPsnInfo
class CORDL_TYPE UserPsnInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field PsnAccountId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PsnAccountId, put=__cordl_internal_set_PsnAccountId)) ::StringW  PsnAccountId;

/// @brief Field PsnOnlineId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PsnOnlineId, put=__cordl_internal_set_PsnOnlineId)) ::StringW  PsnOnlineId;

static inline ::PlayFab::ClientModels::UserPsnInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PsnAccountId() const;

constexpr ::StringW& __cordl_internal_get_PsnAccountId() ;

constexpr ::StringW const& __cordl_internal_get_PsnOnlineId() const;

constexpr ::StringW& __cordl_internal_get_PsnOnlineId() ;

constexpr void __cordl_internal_set_PsnAccountId(::StringW  value) ;

constexpr void __cordl_internal_set_PsnOnlineId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPsnInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPsnInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPsnInfo(UserPsnInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPsnInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPsnInfo(UserPsnInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20308};

/// @brief Field PsnAccountId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PsnAccountId;

/// @brief Field PsnOnlineId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PsnOnlineId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserPsnInfo, ___PsnAccountId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserPsnInfo, ___PsnOnlineId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserPsnInfo) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
