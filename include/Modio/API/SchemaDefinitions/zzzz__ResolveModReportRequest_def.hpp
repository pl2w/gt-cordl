#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ResolveModReportRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResolveModReportRequest)
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
struct ResolveModReportRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ResolveModReportRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ResolveModReportRequest, "Modio.API.SchemaDefinitions", "ResolveModReportRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ResolveModReportRequest
struct CORDL_TYPE ResolveModReportRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fea648, size 0xfc, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fea640, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  type) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ResolveModReportRequest() ;

// Ctor Parameters [CppParam { name: "Type", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ResolveModReportRequest(int64_t  Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18090};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Type, offset: 0x0, size: 0x8, def value: None
 int64_t  Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ResolveModReportRequest, Type) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ResolveModReportRequest) == 0x8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
