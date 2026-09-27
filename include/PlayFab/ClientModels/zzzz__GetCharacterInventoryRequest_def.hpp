#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterInventoryRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetCharacterInventoryRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetCharacterInventoryRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetCharacterInventoryRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetCharacterInventoryRequest*, "PlayFab.ClientModels", "GetCharacterInventoryRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetCharacterInventoryRequest
class CORDL_TYPE GetCharacterInventoryRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

static inline ::PlayFab::ClientModels::GetCharacterInventoryRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dbf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetCharacterInventoryRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterInventoryRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetCharacterInventoryRequest(GetCharacterInventoryRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterInventoryRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetCharacterInventoryRequest(GetCharacterInventoryRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20014};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetCharacterInventoryRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterInventoryRequest, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetCharacterInventoryRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
