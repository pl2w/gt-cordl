#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserFacebookInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserFacebookInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserFacebookInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserFacebookInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserFacebookInfo*, "PlayFab.ClientModels", "UserFacebookInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserFacebookInfo
class CORDL_TYPE UserFacebookInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FacebookId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookId, put=__cordl_internal_set_FacebookId)) ::StringW  FacebookId;

/// @brief Field FullName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FullName, put=__cordl_internal_set_FullName)) ::StringW  FullName;

static inline ::PlayFab::ClientModels::UserFacebookInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FacebookId() const;

constexpr ::StringW& __cordl_internal_get_FacebookId() ;

constexpr ::StringW const& __cordl_internal_get_FullName() const;

constexpr ::StringW& __cordl_internal_get_FullName() ;

constexpr void __cordl_internal_set_FacebookId(::StringW  value) ;

constexpr void __cordl_internal_set_FullName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e480, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFacebookInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFacebookInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFacebookInfo(UserFacebookInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFacebookInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFacebookInfo(UserFacebookInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20297};

/// @brief Field FacebookId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FacebookId;

/// @brief Field FullName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FullName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserFacebookInfo, ___FacebookId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserFacebookInfo, ___FullName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserFacebookInfo) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
