#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserKongregateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserKongregateInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserKongregateInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserKongregateInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserKongregateInfo*, "PlayFab.ClientModels", "UserKongregateInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserKongregateInfo
class CORDL_TYPE UserKongregateInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field KongregateId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_KongregateId, put=__cordl_internal_set_KongregateId)) ::StringW  KongregateId;

/// @brief Field KongregateName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_KongregateName, put=__cordl_internal_set_KongregateName)) ::StringW  KongregateName;

static inline ::PlayFab::ClientModels::UserKongregateInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_KongregateId() const;

constexpr ::StringW& __cordl_internal_get_KongregateId() ;

constexpr ::StringW const& __cordl_internal_get_KongregateName() const;

constexpr ::StringW& __cordl_internal_get_KongregateName() ;

constexpr void __cordl_internal_set_KongregateId(::StringW  value) ;

constexpr void __cordl_internal_set_KongregateName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserKongregateInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserKongregateInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserKongregateInfo(UserKongregateInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserKongregateInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserKongregateInfo(UserKongregateInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20302};

/// @brief Field KongregateId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___KongregateId;

/// @brief Field KongregateName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___KongregateName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserKongregateInfo, ___KongregateId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserKongregateInfo, ___KongregateName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserKongregateInfo) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
