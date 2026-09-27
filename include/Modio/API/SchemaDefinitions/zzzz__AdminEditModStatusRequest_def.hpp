#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AdminEditModStatusRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdminEditModStatusRequest)
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
struct AdminEditModStatusRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AdminEditModStatusRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AdminEditModStatusRequest, "Modio.API.SchemaDefinitions", "AdminEditModStatusRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AdminEditModStatusRequest
struct CORDL_TYPE AdminEditModStatusRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe5ffc, size 0x130, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe5fec, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int64_t  status, ::StringW  reason) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AdminEditModStatusRequest() ;

// Ctor Parameters [CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reason", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr AdminEditModStatusRequest(int64_t  Status, ::StringW  Reason) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Status, offset: 0x0, size: 0x8, def value: None
 int64_t  Status;

/// @brief Field Reason, offset: 0x8, size: 0x8, def value: None
 ::StringW  Reason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AdminEditModStatusRequest, Status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AdminEditModStatusRequest, Reason) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AdminEditModStatusRequest) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
