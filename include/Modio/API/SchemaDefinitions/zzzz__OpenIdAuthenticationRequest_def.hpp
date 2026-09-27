#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/OpenIdAuthenticationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenIdAuthenticationRequest)
namespace Modio::API {
class IApiRequest;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct OpenIdAuthenticationRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest, "Modio.API.SchemaDefinitions", "OpenIdAuthenticationRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.OpenIdAuthenticationRequest
struct CORDL_TYPE OpenIdAuthenticationRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe9ac8, size 0x204, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe9a74, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::StringW  id_token, bool  terms_agreed, ::StringW  email, int64_t  date_expires, bool  monetization_account) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenIdAuthenticationRequest() ;

// Ctor Parameters [CppParam { name: "IdToken", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "TermsAgreed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Email", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationAccount", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OpenIdAuthenticationRequest(::StringW  IdToken, bool  TermsAgreed, ::StringW  Email, int64_t  DateExpires, bool  MonetizationAccount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18085};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field IdToken, offset: 0x0, size: 0x8, def value: None
 ::StringW  IdToken;

/// @brief Field TermsAgreed, offset: 0x8, size: 0x1, def value: None
 bool  TermsAgreed;

/// @brief Field Email, offset: 0x10, size: 0x8, def value: None
 ::StringW  Email;

/// @brief Field DateExpires, offset: 0x18, size: 0x8, def value: None
 int64_t  DateExpires;

/// @brief Field MonetizationAccount, offset: 0x20, size: 0x1, def value: None
 bool  MonetizationAccount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest, IdToken) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest, TermsAgreed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest, Email) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest, DateExpires) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest, MonetizationAccount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest) == 0x28, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
