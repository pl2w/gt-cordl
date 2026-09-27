#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ToggleModRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ToggleModRequest)
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
struct ToggleModRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ToggleModRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ToggleModRequest, "Modio.API.SchemaDefinitions", "ToggleModRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ToggleModRequest
struct CORDL_TYPE ToggleModRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9feb9ec, size 0x13c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9feb9a8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  marketplace_effect, ::StringW  limited_effect, ::StringW  code) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ToggleModRequest() ;

// Ctor Parameters [CppParam { name: "MarketplaceEffect", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "LimitedEffect", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Code", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ToggleModRequest(::StringW  MarketplaceEffect, ::StringW  LimitedEffect, ::StringW  Code) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field MarketplaceEffect, offset: 0x0, size: 0x8, def value: None
 ::StringW  MarketplaceEffect;

/// @brief Field LimitedEffect, offset: 0x8, size: 0x8, def value: None
 ::StringW  LimitedEffect;

/// @brief Field Code, offset: 0x10, size: 0x8, def value: None
 ::StringW  Code;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ToggleModRequest, MarketplaceEffect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ToggleModRequest, LimitedEffect) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ToggleModRequest, Code) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ToggleModRequest) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
