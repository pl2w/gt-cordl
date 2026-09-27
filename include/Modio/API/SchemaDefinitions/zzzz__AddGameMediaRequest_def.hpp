#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddGameMediaRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AddGameMediaRequest)
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
struct AddGameMediaRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddGameMediaRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddGameMediaRequest, "Modio.API.SchemaDefinitions", "AddGameMediaRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddGameMediaRequest
struct CORDL_TYPE AddGameMediaRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe3ad8, size 0xd4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe3ad0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  redirect_uris) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddGameMediaRequest() ;

// Ctor Parameters [CppParam { name: "RedirectUris", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr AddGameMediaRequest(::ArrayW<::StringW>  RedirectUris) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field RedirectUris, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::StringW>  RedirectUris;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGameMediaRequest, RedirectUris) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddGameMediaRequest) == 0x8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
