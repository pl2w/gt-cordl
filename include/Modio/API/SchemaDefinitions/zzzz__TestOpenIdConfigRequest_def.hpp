#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TestOpenIdConfigRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TestOpenIdConfigRequest)
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
struct TestOpenIdConfigRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::TestOpenIdConfigRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::TestOpenIdConfigRequest, "Modio.API.SchemaDefinitions", "TestOpenIdConfigRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.TestOpenIdConfigRequest
struct CORDL_TYPE TestOpenIdConfigRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9feb808, size 0x108, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9feb7d8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  jwk_url, ::StringW  id_token) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TestOpenIdConfigRequest() ;

// Ctor Parameters [CppParam { name: "JwkUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "IdToken", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr TestOpenIdConfigRequest(::StringW  JwkUrl, ::StringW  IdToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field JwkUrl, offset: 0x0, size: 0x8, def value: None
 ::StringW  JwkUrl;

/// @brief Field IdToken, offset: 0x8, size: 0x8, def value: None
 ::StringW  IdToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::TestOpenIdConfigRequest, JwkUrl) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TestOpenIdConfigRequest, IdToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::TestOpenIdConfigRequest) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
