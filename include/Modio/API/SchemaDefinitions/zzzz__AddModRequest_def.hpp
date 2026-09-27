#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddModRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddModRequest)
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
struct AddModRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddModRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddModRequest, "Modio.API.SchemaDefinitions", "AddModRequest");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies Modio.API.ModioAPIFileParameter, System.Nullable`1<T>
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddModRequest
struct CORDL_TYPE AddModRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe4af8, size 0x498, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [NullableContext(2)]
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe4a10, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(/* [Nullable(1)] */ ::StringW  name, ::StringW  name_id, /* [Nullable(1)] */ ::StringW  summary, ::StringW  description, ::Modio::API::ModioAPIFileParameter  logo, ::System::Nullable_1<int64_t>  visible, ::System::Nullable_1<int64_t>  maturity_option, ::System::Nullable_1<int64_t>  community_options, ::StringW  metadata_blob, /* [Nullable(new[] { 2, 1 })] */ ::ArrayW<::StringW>  tags) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddModRequest() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Logo", ty: "::Modio::API::ModioAPIFileParameter", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visible", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaturityOption", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "CommunityOptions", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr AddModRequest(::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Description, ::Modio::API::ModioAPIFileParameter  Logo, ::System::Nullable_1<int64_t>  Visible, ::System::Nullable_1<int64_t>  MaturityOption, ::System::Nullable_1<int64_t>  CommunityOptions, ::StringW  MetadataBlob, ::ArrayW<::StringW>  Tags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// [Nullable(1)]
/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// [Nullable(2)]
/// @brief Field NameId, offset: 0x8, size: 0x8, def value: None
 ::StringW  NameId;

/// [Nullable(1)]
/// @brief Field Summary, offset: 0x10, size: 0x8, def value: None
 ::StringW  Summary;

/// [Nullable(2)]
/// @brief Field Description, offset: 0x18, size: 0x8, def value: None
 ::StringW  Description;

/// @brief Field Logo, offset: 0x20, size: 0x30, def value: None
 ::Modio::API::ModioAPIFileParameter  Logo;

/// @brief Field Visible, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  Visible;

/// @brief Field MaturityOption, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  MaturityOption;

/// @brief Field CommunityOptions, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  CommunityOptions;

/// [Nullable(2)]
/// @brief Field MetadataBlob, offset: 0x80, size: 0x8, def value: None
 ::StringW  MetadataBlob;

/// [Nullable(new[] { 2, 1 })]
/// @brief Field Tags, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::StringW>  Tags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, NameId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, Summary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, Description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, Logo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, Visible) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, MaturityOption) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, CommunityOptions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, MetadataBlob) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModRequest, Tags) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddModRequest) == 0x90, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
