#pragma once
// IWYU pragma private; include "GlobalNamespace/SendChallengeEmailRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDRequestData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SendChallengeEmailRequest)
// Forward declare root types
namespace GlobalNamespace {
class SendChallengeEmailRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SendChallengeEmailRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SendChallengeEmailRequest*, "", "SendChallengeEmailRequest");
// Dependencies KIDRequestData
namespace GlobalNamespace {
// Is value type: false
// CS Name: SendChallengeEmailRequest
class CORDL_TYPE SendChallengeEmailRequest : public ::GlobalNamespace::KIDRequestData {
public:
// Declarations
/// @brief Field Email, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

/// @brief Field Locale, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Locale, put=__cordl_internal_set_Locale)) ::StringW  Locale;

static inline ::GlobalNamespace::SendChallengeEmailRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::StringW const& __cordl_internal_get_Locale() const;

constexpr ::StringW& __cordl_internal_get_Locale() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_Locale(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a262cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendChallengeEmailRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendChallengeEmailRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SendChallengeEmailRequest(SendChallengeEmailRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendChallengeEmailRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendChallengeEmailRequest(SendChallengeEmailRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2885};

/// @brief Field Email, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field Locale, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Locale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SendChallengeEmailRequest, ___Email) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SendChallengeEmailRequest, ___Locale) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SendChallengeEmailRequest) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
