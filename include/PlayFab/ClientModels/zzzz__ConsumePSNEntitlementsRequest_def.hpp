#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConsumePSNEntitlementsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsumePSNEntitlementsRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class ConsumePSNEntitlementsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ConsumePSNEntitlementsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ConsumePSNEntitlementsRequest*, "PlayFab.ClientModels", "ConsumePSNEntitlementsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ConsumePSNEntitlementsRequest
class CORDL_TYPE ConsumePSNEntitlementsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field ServiceLabel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ServiceLabel, put=__cordl_internal_set_ServiceLabel)) int32_t  ServiceLabel;

static inline ::PlayFab::ClientModels::ConsumePSNEntitlementsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr int32_t const& __cordl_internal_get_ServiceLabel() const;

constexpr int32_t& __cordl_internal_get_ServiceLabel() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_ServiceLabel(int32_t  value) ;

/// @brief Method .ctor, addr 0xa84daf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsumePSNEntitlementsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsumePSNEntitlementsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsumePSNEntitlementsRequest(ConsumePSNEntitlementsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsumePSNEntitlementsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsumePSNEntitlementsRequest(ConsumePSNEntitlementsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19975};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field ServiceLabel, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ServiceLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ConsumePSNEntitlementsRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ConsumePSNEntitlementsRequest, ___ServiceLabel) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ConsumePSNEntitlementsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
