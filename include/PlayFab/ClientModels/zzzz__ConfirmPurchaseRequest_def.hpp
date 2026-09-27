#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConfirmPurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConfirmPurchaseRequest)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class ConfirmPurchaseRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ConfirmPurchaseRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ConfirmPurchaseRequest*, "PlayFab.ClientModels", "ConfirmPurchaseRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ConfirmPurchaseRequest
class CORDL_TYPE ConfirmPurchaseRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CustomTags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomTags, put=__cordl_internal_set_CustomTags)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  CustomTags;

/// @brief Field OrderId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderId, put=__cordl_internal_set_OrderId)) ::StringW  OrderId;

static inline ::PlayFab::ClientModels::ConfirmPurchaseRequest* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_CustomTags() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_CustomTags() ;

constexpr ::StringW const& __cordl_internal_get_OrderId() const;

constexpr ::StringW& __cordl_internal_get_OrderId() ;

constexpr void __cordl_internal_set_CustomTags(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_OrderId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dad0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfirmPurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfirmPurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfirmPurchaseRequest(ConfirmPurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfirmPurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfirmPurchaseRequest(ConfirmPurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19971};

/// @brief Field OrderId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___OrderId;

/// @brief Field CustomTags, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___CustomTags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ConfirmPurchaseRequest, ___OrderId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ConfirmPurchaseRequest, ___CustomTags) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ConfirmPurchaseRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
