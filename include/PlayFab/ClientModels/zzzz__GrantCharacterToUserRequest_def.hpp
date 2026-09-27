#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GrantCharacterToUserRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GrantCharacterToUserRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GrantCharacterToUserRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GrantCharacterToUserRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GrantCharacterToUserRequest*, "PlayFab.ClientModels", "GrantCharacterToUserRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GrantCharacterToUserRequest
class CORDL_TYPE GrantCharacterToUserRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CharacterName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterName, put=__cordl_internal_set_CharacterName)) ::StringW  CharacterName;

/// @brief Field ItemId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemId, put=__cordl_internal_set_ItemId)) ::StringW  ItemId;

static inline ::PlayFab::ClientModels::GrantCharacterToUserRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_CharacterName() const;

constexpr ::StringW& __cordl_internal_get_CharacterName() ;

constexpr ::StringW const& __cordl_internal_get_ItemId() const;

constexpr ::StringW& __cordl_internal_get_ItemId() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterName(::StringW  value) ;

constexpr void __cordl_internal_set_ItemId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dec0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrantCharacterToUserRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrantCharacterToUserRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrantCharacterToUserRequest(GrantCharacterToUserRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrantCharacterToUserRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrantCharacterToUserRequest(GrantCharacterToUserRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20103};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CharacterName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterName;

/// @brief Field ItemId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ItemId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GrantCharacterToUserRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GrantCharacterToUserRequest, ___CharacterName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GrantCharacterToUserRequest, ___ItemId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GrantCharacterToUserRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
