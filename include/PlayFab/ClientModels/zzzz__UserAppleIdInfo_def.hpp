#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserAppleIdInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserAppleIdInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserAppleIdInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserAppleIdInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserAppleIdInfo*, "PlayFab.ClientModels", "UserAppleIdInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserAppleIdInfo
class CORDL_TYPE UserAppleIdInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AppleSubjectId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppleSubjectId, put=__cordl_internal_set_AppleSubjectId)) ::StringW  AppleSubjectId;

static inline ::PlayFab::ClientModels::UserAppleIdInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AppleSubjectId() const;

constexpr ::StringW& __cordl_internal_get_AppleSubjectId() ;

constexpr void __cordl_internal_set_AppleSubjectId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e468, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserAppleIdInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserAppleIdInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserAppleIdInfo(UserAppleIdInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserAppleIdInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserAppleIdInfo(UserAppleIdInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20293};

/// @brief Field AppleSubjectId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___AppleSubjectId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserAppleIdInfo, ___AppleSubjectId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserAppleIdInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
