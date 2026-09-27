#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlockContainerItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlockContainerItemRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlockContainerItemRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlockContainerItemRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlockContainerItemRequest*, "PlayFab.ClientModels", "UnlockContainerItemRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlockContainerItemRequest
class CORDL_TYPE UnlockContainerItemRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field ContainerItemId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContainerItemId, put=__cordl_internal_set_ContainerItemId)) ::StringW  ContainerItemId;

static inline ::PlayFab::ClientModels::UnlockContainerItemRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_ContainerItemId() const;

constexpr ::StringW& __cordl_internal_get_ContainerItemId() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_ContainerItemId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e3e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockContainerItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockContainerItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockContainerItemRequest(UnlockContainerItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockContainerItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockContainerItemRequest(UnlockContainerItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20276};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field ContainerItemId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ContainerItemId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerItemRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerItemRequest, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerItemRequest, ___ContainerItemId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlockContainerItemRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
