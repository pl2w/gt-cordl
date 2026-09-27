#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ClawbackRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClawbackRequest)
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
struct ClawbackRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ClawbackRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ClawbackRequest, "Modio.API.SchemaDefinitions", "ClawbackRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ClawbackRequest
struct CORDL_TYPE ClawbackRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe66f8, size 0x1ec, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe66ac, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int64_t  transaction_id, int64_t  gateway_uuid, ::StringW  portal, ::StringW  refund_reason, ::StringW  clawback_uuid) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ClawbackRequest() ;

// Ctor Parameters [CppParam { name: "TransactionId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GatewayUuid", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Portal", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "RefundReason", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClawbackUuid", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ClawbackRequest(int64_t  TransactionId, int64_t  GatewayUuid, ::StringW  Portal, ::StringW  RefundReason, ::StringW  ClawbackUuid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18064};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field TransactionId, offset: 0x0, size: 0x8, def value: None
 int64_t  TransactionId;

/// @brief Field GatewayUuid, offset: 0x8, size: 0x8, def value: None
 int64_t  GatewayUuid;

/// @brief Field Portal, offset: 0x10, size: 0x8, def value: None
 ::StringW  Portal;

/// @brief Field RefundReason, offset: 0x18, size: 0x8, def value: None
 ::StringW  RefundReason;

/// @brief Field ClawbackUuid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ClawbackUuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ClawbackRequest, TransactionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ClawbackRequest, GatewayUuid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ClawbackRequest, Portal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ClawbackRequest, RefundReason) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ClawbackRequest, ClawbackUuid) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ClawbackRequest) == 0x28, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
