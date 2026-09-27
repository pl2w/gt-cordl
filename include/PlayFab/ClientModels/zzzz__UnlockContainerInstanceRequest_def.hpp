#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlockContainerInstanceRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlockContainerInstanceRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlockContainerInstanceRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlockContainerInstanceRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlockContainerInstanceRequest*, "PlayFab.ClientModels", "UnlockContainerInstanceRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlockContainerInstanceRequest
class CORDL_TYPE UnlockContainerInstanceRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field ContainerItemInstanceId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContainerItemInstanceId, put=__cordl_internal_set_ContainerItemInstanceId)) ::StringW  ContainerItemInstanceId;

/// @brief Field KeyItemInstanceId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyItemInstanceId, put=__cordl_internal_set_KeyItemInstanceId)) ::StringW  KeyItemInstanceId;

static inline ::PlayFab::ClientModels::UnlockContainerInstanceRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_ContainerItemInstanceId() const;

constexpr ::StringW& __cordl_internal_get_ContainerItemInstanceId() ;

constexpr ::StringW const& __cordl_internal_get_KeyItemInstanceId() const;

constexpr ::StringW& __cordl_internal_get_KeyItemInstanceId() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_ContainerItemInstanceId(::StringW  value) ;

constexpr void __cordl_internal_set_KeyItemInstanceId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e3d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockContainerInstanceRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockContainerInstanceRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockContainerInstanceRequest(UnlockContainerInstanceRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockContainerInstanceRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockContainerInstanceRequest(UnlockContainerInstanceRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20275};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field ContainerItemInstanceId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ContainerItemInstanceId;

/// @brief Field KeyItemInstanceId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___KeyItemInstanceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerInstanceRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerInstanceRequest, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerInstanceRequest, ___ContainerItemInstanceId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerInstanceRequest, ___KeyItemInstanceId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlockContainerInstanceRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
