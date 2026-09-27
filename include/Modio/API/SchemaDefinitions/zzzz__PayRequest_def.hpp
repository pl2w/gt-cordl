#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PayRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PayRequest)
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
struct PayRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::PayRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::PayRequest, "Modio.API.SchemaDefinitions", "PayRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.PayRequest
struct CORDL_TYPE PayRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe9d78, size 0x184, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe9d64, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int64_t  display_amount, bool  subscribe, ::StringW  idempotent_key) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PayRequest() ;

// Ctor Parameters [CppParam { name: "DisplayAmount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Subscribe", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "IdempotentKey", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr PayRequest(int64_t  DisplayAmount, bool  Subscribe, ::StringW  IdempotentKey) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field DisplayAmount, offset: 0x0, size: 0x8, def value: None
 int64_t  DisplayAmount;

/// @brief Field Subscribe, offset: 0x8, size: 0x1, def value: None
 bool  Subscribe;

/// @brief Field IdempotentKey, offset: 0x10, size: 0x8, def value: None
 ::StringW  IdempotentKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::PayRequest, DisplayAmount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayRequest, Subscribe) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayRequest, IdempotentKey) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::PayRequest) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
