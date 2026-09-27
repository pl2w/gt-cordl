#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EditGuideRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditGuideRequest)
namespace Modio::API {
class IApiRequest;
}
namespace Modio::API {
struct ModioAPIFileParameter;
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
struct EditGuideRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::EditGuideRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::EditGuideRequest, "Modio.API.SchemaDefinitions", "EditGuideRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.ModioAPIFileParameter
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.EditGuideRequest
struct CORDL_TYPE EditGuideRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe76f0, size 0x20c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe7674, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  summary, ::StringW  description, ::Modio::API::ModioAPIFileParameter  logo, int64_t  date_live) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EditGuideRequest() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Logo", ty: "::Modio::API::ModioAPIFileParameter", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr EditGuideRequest(::StringW  Name, ::StringW  Summary, ::StringW  Description, ::Modio::API::ModioAPIFileParameter  Logo, int64_t  DateLive) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18072};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Summary, offset: 0x8, size: 0x8, def value: None
 ::StringW  Summary;

/// @brief Field Description, offset: 0x10, size: 0x8, def value: None
 ::StringW  Description;

/// @brief Field Logo, offset: 0x18, size: 0x30, def value: None
 ::Modio::API::ModioAPIFileParameter  Logo;

/// @brief Field DateLive, offset: 0x48, size: 0x8, def value: None
 int64_t  DateLive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::EditGuideRequest, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditGuideRequest, Summary) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditGuideRequest, Description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditGuideRequest, Logo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditGuideRequest, DateLive) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::EditGuideRequest) == 0x50, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
