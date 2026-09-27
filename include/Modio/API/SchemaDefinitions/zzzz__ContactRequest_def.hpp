#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ContactRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ContactRequest)
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
struct ContactRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ContactRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ContactRequest, "Modio.API.SchemaDefinitions", "ContactRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ContactRequest
struct CORDL_TYPE ContactRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe69c0, size 0x13c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe697c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  email, ::StringW  subject, ::StringW  message) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ContactRequest() ;

// Ctor Parameters [CppParam { name: "Email", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Subject", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ContactRequest(::StringW  Email, ::StringW  Subject, ::StringW  Message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Email, offset: 0x0, size: 0x8, def value: None
 ::StringW  Email;

/// @brief Field Subject, offset: 0x8, size: 0x8, def value: None
 ::StringW  Subject;

/// @brief Field Message, offset: 0x10, size: 0x8, def value: None
 ::StringW  Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ContactRequest, Email) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ContactRequest, Subject) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ContactRequest, Message) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ContactRequest) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
