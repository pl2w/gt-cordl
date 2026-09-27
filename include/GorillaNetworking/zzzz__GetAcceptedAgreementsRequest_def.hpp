#pragma once
// IWYU pragma private; include "GorillaNetworking/GetAcceptedAgreementsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetAcceptedAgreementsRequest)
// Forward declare root types
namespace GorillaNetworking {
class GetAcceptedAgreementsRequest;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GetAcceptedAgreementsRequest*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GetAcceptedAgreementsRequest*, "GorillaNetworking", "GetAcceptedAgreementsRequest");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GetAcceptedAgreementsRequest
class CORDL_TYPE GetAcceptedAgreementsRequest : public ::System::Object {
public:
// Declarations
/// @brief Field AgreementKeys, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AgreementKeys, put=__cordl_internal_set_AgreementKeys)) ::ArrayW<::StringW>  AgreementKeys;

static inline ::GorillaNetworking::GetAcceptedAgreementsRequest* New_ctor() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_AgreementKeys() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_AgreementKeys() ;

constexpr void __cordl_internal_set_AgreementKeys(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x5c8c254, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAcceptedAgreementsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAcceptedAgreementsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAcceptedAgreementsRequest(GetAcceptedAgreementsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAcceptedAgreementsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAcceptedAgreementsRequest(GetAcceptedAgreementsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4351};

/// @brief Field AgreementKeys, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___AgreementKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GetAcceptedAgreementsRequest, ___AgreementKeys) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GetAcceptedAgreementsRequest) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
