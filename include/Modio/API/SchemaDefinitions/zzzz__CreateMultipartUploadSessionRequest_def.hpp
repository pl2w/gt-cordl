#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/CreateMultipartUploadSessionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CreateMultipartUploadSessionRequest)
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
struct CreateMultipartUploadSessionRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::CreateMultipartUploadSessionRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::CreateMultipartUploadSessionRequest, "Modio.API.SchemaDefinitions", "CreateMultipartUploadSessionRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.CreateMultipartUploadSessionRequest
struct CORDL_TYPE CreateMultipartUploadSessionRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe6bc4, size 0x108, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe6b94, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::StringW  nonce) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateMultipartUploadSessionRequest() ;

// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Nonce", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CreateMultipartUploadSessionRequest(::StringW  Filename, ::StringW  Nonce) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18066};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Filename, offset: 0x0, size: 0x8, def value: None
 ::StringW  Filename;

/// @brief Field Nonce, offset: 0x8, size: 0x8, def value: None
 ::StringW  Nonce;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::CreateMultipartUploadSessionRequest, Filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CreateMultipartUploadSessionRequest, Nonce) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::CreateMultipartUploadSessionRequest) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
