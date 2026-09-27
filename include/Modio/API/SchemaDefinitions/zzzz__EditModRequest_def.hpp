#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EditModRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditModRequest)
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
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct EditModRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::EditModRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::EditModRequest, "Modio.API.SchemaDefinitions", "EditModRequest");
// [NullableContext(2)]
// [Nullable(0)]
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies Modio.API.ModioAPIFileParameter, System.Nullable`1<T>
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.EditModRequest
struct CORDL_TYPE EditModRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// [NullableContext(0)]
/// @brief Method GetBodyParameters, addr 0x9fe7ab8, size 0x5dc, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe7994, size 0x124, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  nameId, ::StringW  summary, ::StringW  description, ::System::Nullable_1<::Modio::API::ModioAPIFileParameter>  logo, ::System::Nullable_1<int64_t>  visible, ::System::Nullable_1<int64_t>  maturity_option, ::System::Nullable_1<int64_t>  community_options, ::StringW  metadataBlob, /* [Nullable(new[] { 2, 1 })] */ ::ArrayW<::StringW>  tags, ::System::Nullable_1<int64_t>  monetizationOptions, ::System::Nullable_1<int64_t>  price, ::System::Nullable_1<int64_t>  stock) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EditModRequest() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Logo", ty: "::System::Nullable_1<::Modio::API::ModioAPIFileParameter>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visible", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaturityOption", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "CommunityOptions", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationOptions", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Price", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Stock", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }]
constexpr EditModRequest(::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Description, ::System::Nullable_1<::Modio::API::ModioAPIFileParameter>  Logo, ::System::Nullable_1<int64_t>  Visible, ::System::Nullable_1<int64_t>  MaturityOption, ::System::Nullable_1<int64_t>  CommunityOptions, ::StringW  MetadataBlob, ::ArrayW<::StringW>  Tags, ::System::Nullable_1<int64_t>  MonetizationOptions, ::System::Nullable_1<int64_t>  Price, ::System::Nullable_1<int64_t>  Stock) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18073};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc8};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameId, offset: 0x8, size: 0x8, def value: None
 ::StringW  NameId;

/// @brief Field Summary, offset: 0x10, size: 0x8, def value: None
 ::StringW  Summary;

/// @brief Field Description, offset: 0x18, size: 0x8, def value: None
 ::StringW  Description;

/// @brief Field Logo, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::Modio::API::ModioAPIFileParameter>  Logo;

/// @brief Field Visible, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  Visible;

/// @brief Field MaturityOption, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  MaturityOption;

/// @brief Field CommunityOptions, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  CommunityOptions;

/// @brief Field MetadataBlob, offset: 0x60, size: 0x8, def value: None
 ::StringW  MetadataBlob;

/// [Nullable(new[] { 2, 1 })]
/// @brief Field Tags, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::StringW>  Tags;

/// @brief Field MonetizationOptions, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  MonetizationOptions;

/// @brief Field Price, offset: 0x80, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  Price;

/// @brief Field Stock, offset: 0x90, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  Stock;

/// @brief Size padding 0xc8 - 0xa0 = 0x28, packed as 0x28
 uint8_t  _cordl_size_padding[0x28];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, NameId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, Summary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, Description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, Logo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, Visible) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, MaturityOption) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, CommunityOptions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, MetadataBlob) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, Tags) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, MonetizationOptions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, Price) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EditModRequest, Stock) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::EditModRequest) == 0xc8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
