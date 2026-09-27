#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPurchaseRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPurchaseRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPurchaseRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPurchaseRequest*, "PlayFab.ClientModels", "GetPurchaseRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPurchaseRequest
class CORDL_TYPE GetPurchaseRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field OrderId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderId, put=__cordl_internal_set_OrderId)) ::StringW  OrderId;

static inline ::PlayFab::ClientModels::GetPurchaseRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_OrderId() const;

constexpr ::StringW& __cordl_internal_get_OrderId() ;

constexpr void __cordl_internal_set_OrderId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84de00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPurchaseRequest(GetPurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPurchaseRequest(GetPurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20079};

/// @brief Field OrderId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___OrderId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPurchaseRequest, ___OrderId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPurchaseRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
