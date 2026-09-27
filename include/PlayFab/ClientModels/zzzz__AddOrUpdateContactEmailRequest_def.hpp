#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddOrUpdateContactEmailRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddOrUpdateContactEmailRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class AddOrUpdateContactEmailRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddOrUpdateContactEmailRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddOrUpdateContactEmailRequest*, "PlayFab.ClientModels", "AddOrUpdateContactEmailRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddOrUpdateContactEmailRequest
class CORDL_TYPE AddOrUpdateContactEmailRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field EmailAddress, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EmailAddress, put=__cordl_internal_set_EmailAddress)) ::StringW  EmailAddress;

static inline ::PlayFab::ClientModels::AddOrUpdateContactEmailRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_EmailAddress() const;

constexpr ::StringW& __cordl_internal_get_EmailAddress() ;

constexpr void __cordl_internal_set_EmailAddress(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84da10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddOrUpdateContactEmailRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddOrUpdateContactEmailRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddOrUpdateContactEmailRequest(AddOrUpdateContactEmailRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddOrUpdateContactEmailRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddOrUpdateContactEmailRequest(AddOrUpdateContactEmailRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19945};

/// @brief Field EmailAddress, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EmailAddress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AddOrUpdateContactEmailRequest, ___EmailAddress) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AddOrUpdateContactEmailRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
