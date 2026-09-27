#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MetricsSessionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetricsSessionRequest)
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
struct MetricsSessionRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::MetricsSessionRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::MetricsSessionRequest, "Modio.API.SchemaDefinitions", "MetricsSessionRequest");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.MetricsSessionRequest
struct CORDL_TYPE MetricsSessionRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe9794, size 0x248, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// @brief Method .ctor, addr 0x9fe971c, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  sessionId, int64_t  sessionTs, ::StringW  sessionHash, ::StringW  sessionNonce, int64_t  sessionOrderId, ::ArrayW<int64_t>  ids) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MetricsSessionRequest() ;

// Ctor Parameters [CppParam { name: "SessionId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "SessionTs", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SessionHash", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "SessionNonce", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "SessionOrderId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Ids", ty: "::ArrayW<int64_t>", modifiers: "", def_value: None, comment: None }]
constexpr MetricsSessionRequest(::StringW  SessionId, int64_t  SessionTs, ::StringW  SessionHash, ::StringW  SessionNonce, int64_t  SessionOrderId, ::ArrayW<int64_t>  Ids) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18084};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field SessionId, offset: 0x0, size: 0x8, def value: None
 ::StringW  SessionId;

/// @brief Field SessionTs, offset: 0x8, size: 0x8, def value: None
 int64_t  SessionTs;

/// @brief Field SessionHash, offset: 0x10, size: 0x8, def value: None
 ::StringW  SessionHash;

/// @brief Field SessionNonce, offset: 0x18, size: 0x8, def value: None
 ::StringW  SessionNonce;

/// @brief Field SessionOrderId, offset: 0x20, size: 0x8, def value: None
 int64_t  SessionOrderId;

/// @brief Field Ids, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int64_t>  Ids;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::MetricsSessionRequest, SessionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MetricsSessionRequest, SessionTs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MetricsSessionRequest, SessionHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MetricsSessionRequest, SessionNonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MetricsSessionRequest, SessionOrderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MetricsSessionRequest, Ids) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::MetricsSessionRequest) == 0x30, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
