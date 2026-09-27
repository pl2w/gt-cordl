#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserCustomIdInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserCustomIdInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserCustomIdInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserCustomIdInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserCustomIdInfo*, "PlayFab.ClientModels", "UserCustomIdInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserCustomIdInfo
class CORDL_TYPE UserCustomIdInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CustomId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomId, put=__cordl_internal_set_CustomId)) ::StringW  CustomId;

static inline ::PlayFab::ClientModels::UserCustomIdInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CustomId() const;

constexpr ::StringW& __cordl_internal_get_CustomId() ;

constexpr void __cordl_internal_set_CustomId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e470, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserCustomIdInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserCustomIdInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserCustomIdInfo(UserCustomIdInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserCustomIdInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserCustomIdInfo(UserCustomIdInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20294};

/// @brief Field CustomId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___CustomId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserCustomIdInfo, ___CustomId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserCustomIdInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
