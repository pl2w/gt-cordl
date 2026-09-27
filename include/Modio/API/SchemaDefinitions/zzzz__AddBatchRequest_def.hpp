#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddBatchRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AddBatchRequest)
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
struct AddBatchRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddBatchRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddBatchRequest, "Modio.API.SchemaDefinitions", "AddBatchRequest");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddBatchRequest
struct CORDL_TYPE AddBatchRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe3688, size 0x1d8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe35f8, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  batch0RelativeUrl, ::StringW  batch0Method, ::StringW  batch1RelativeUrl, ::StringW  batch1Method, ::StringW  batch2RelativeUrl, ::StringW  batch2Method) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddBatchRequest() ;

// Ctor Parameters [CppParam { name: "Batch0RelativeUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Batch0Method", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Batch1RelativeUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Batch1Method", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Batch2RelativeUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Batch2Method", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr AddBatchRequest(::StringW  Batch0RelativeUrl, ::StringW  Batch0Method, ::StringW  Batch1RelativeUrl, ::StringW  Batch1Method, ::StringW  Batch2RelativeUrl, ::StringW  Batch2Method) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Batch0RelativeUrl, offset: 0x0, size: 0x8, def value: None
 ::StringW  Batch0RelativeUrl;

/// @brief Field Batch0Method, offset: 0x8, size: 0x8, def value: None
 ::StringW  Batch0Method;

/// @brief Field Batch1RelativeUrl, offset: 0x10, size: 0x8, def value: None
 ::StringW  Batch1RelativeUrl;

/// @brief Field Batch1Method, offset: 0x18, size: 0x8, def value: None
 ::StringW  Batch1Method;

/// @brief Field Batch2RelativeUrl, offset: 0x20, size: 0x8, def value: None
 ::StringW  Batch2RelativeUrl;

/// @brief Field Batch2Method, offset: 0x28, size: 0x8, def value: None
 ::StringW  Batch2Method;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddBatchRequest, Batch0RelativeUrl) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddBatchRequest, Batch0Method) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddBatchRequest, Batch1RelativeUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddBatchRequest, Batch1Method) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddBatchRequest, Batch2RelativeUrl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddBatchRequest, Batch2Method) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddBatchRequest) == 0x30, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
