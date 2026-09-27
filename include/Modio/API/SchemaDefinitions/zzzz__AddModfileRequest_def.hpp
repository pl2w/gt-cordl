#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddModfileRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AddModfileRequest)
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
struct AddModfileRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddModfileRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddModfileRequest, "Modio.API.SchemaDefinitions", "AddModfileRequest");
// [NullableContext(2)]
// [Nullable(0)]
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies Modio.API.ModioAPIFileParameter
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddModfileRequest
struct CORDL_TYPE AddModfileRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// [NullableContext(0)]
/// @brief Method GetBodyParameters, addr 0x9fe42e8, size 0x33c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe4248, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::ModioAPIFileParameter  filedata, ::StringW  version, ::StringW  changelog, ::StringW  metadataBlob, /* [Nullable(new[] { 2, 1 })] */ ::ArrayW<::StringW>  platforms, ::StringW  uploadId) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddModfileRequest() ;

// Ctor Parameters [CppParam { name: "Filedata", ty: "::Modio::API::ModioAPIFileParameter", modifiers: "", def_value: None, comment: None }, CppParam { name: "Version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Changelog", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "UploadId", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr AddModfileRequest(::Modio::API::ModioAPIFileParameter  Filedata, ::StringW  Version, ::StringW  Changelog, ::StringW  MetadataBlob, ::ArrayW<::StringW>  Platforms, ::StringW  UploadId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field Filedata, offset: 0x0, size: 0x30, def value: None
 ::Modio::API::ModioAPIFileParameter  Filedata;

/// @brief Field Version, offset: 0x30, size: 0x8, def value: None
 ::StringW  Version;

/// @brief Field Changelog, offset: 0x38, size: 0x8, def value: None
 ::StringW  Changelog;

/// @brief Field MetadataBlob, offset: 0x40, size: 0x8, def value: None
 ::StringW  MetadataBlob;

/// [Nullable(new[] { 2, 1 })]
/// @brief Field Platforms, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  Platforms;

/// @brief Field UploadId, offset: 0x50, size: 0x8, def value: None
 ::StringW  UploadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModfileRequest, Filedata) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModfileRequest, Version) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModfileRequest, Changelog) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModfileRequest, MetadataBlob) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModfileRequest, Platforms) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModfileRequest, UploadId) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddModfileRequest) == 0x58, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
