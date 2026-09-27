#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddReportRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddReportRequest)
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
struct AddReportRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddReportRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddReportRequest, "Modio.API.SchemaDefinitions", "AddReportRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddReportRequest
struct CORDL_TYPE AddReportRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe5708, size 0x2a0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe5670, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::StringW  resource, int64_t  id, int64_t  type, int64_t  reason, ::StringW  platforms, ::StringW  name, ::StringW  contact, ::StringW  summary) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddReportRequest() ;

// Ctor Parameters [CppParam { name: "Resource", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Type", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reason", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Platforms", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Contact", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr AddReportRequest(::StringW  Resource, int64_t  Id, int64_t  Type, int64_t  Reason, ::StringW  Platforms, ::StringW  Name, ::StringW  Contact, ::StringW  Summary) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Resource, offset: 0x0, size: 0x8, def value: None
 ::StringW  Resource;

/// @brief Field Id, offset: 0x8, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 int64_t  Type;

/// @brief Field Reason, offset: 0x18, size: 0x8, def value: None
 int64_t  Reason;

/// @brief Field Platforms, offset: 0x20, size: 0x8, def value: None
 ::StringW  Platforms;

/// @brief Field Name, offset: 0x28, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Contact, offset: 0x30, size: 0x8, def value: None
 ::StringW  Contact;

/// @brief Field Summary, offset: 0x38, size: 0x8, def value: None
 ::StringW  Summary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddReportRequest, Resource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddReportRequest, Id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddReportRequest, Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddReportRequest, Reason) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddReportRequest, Platforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddReportRequest, Name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddReportRequest, Contact) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddReportRequest, Summary) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddReportRequest) == 0x40, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
