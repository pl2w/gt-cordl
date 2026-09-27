#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SendAccountRecoveryEmailRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SendAccountRecoveryEmailRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class SendAccountRecoveryEmailRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::SendAccountRecoveryEmailRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::SendAccountRecoveryEmailRequest*, "PlayFab.ClientModels", "SendAccountRecoveryEmailRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.SendAccountRecoveryEmailRequest
class CORDL_TYPE SendAccountRecoveryEmailRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

/// @brief Field EmailTemplateId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EmailTemplateId, put=__cordl_internal_set_EmailTemplateId)) ::StringW  EmailTemplateId;

/// @brief Field TitleId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::PlayFab::ClientModels::SendAccountRecoveryEmailRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::StringW const& __cordl_internal_get_EmailTemplateId() const;

constexpr ::StringW& __cordl_internal_get_EmailTemplateId() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_EmailTemplateId(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e218, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendAccountRecoveryEmailRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendAccountRecoveryEmailRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SendAccountRecoveryEmailRequest(SendAccountRecoveryEmailRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendAccountRecoveryEmailRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendAccountRecoveryEmailRequest(SendAccountRecoveryEmailRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20214};

/// @brief Field Email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field EmailTemplateId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___EmailTemplateId;

/// @brief Field TitleId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TitleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::SendAccountRecoveryEmailRequest, ___Email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::SendAccountRecoveryEmailRequest, ___EmailTemplateId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::SendAccountRecoveryEmailRequest, ___TitleId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::SendAccountRecoveryEmailRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
