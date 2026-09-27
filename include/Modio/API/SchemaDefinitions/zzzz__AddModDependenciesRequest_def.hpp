#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddModDependenciesRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddModDependenciesRequest)
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
struct AddModDependenciesRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddModDependenciesRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddModDependenciesRequest, "Modio.API.SchemaDefinitions", "AddModDependenciesRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddModDependenciesRequest
struct CORDL_TYPE AddModDependenciesRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe4080, size 0x130, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe4058, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int64_t>  dependencies, bool  sync) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddModDependenciesRequest() ;

// Ctor Parameters [CppParam { name: "Dependencies", ty: "::ArrayW<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Sync", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AddModDependenciesRequest(::ArrayW<int64_t>  Dependencies, bool  Sync) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Dependencies, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int64_t>  Dependencies;

/// @brief Field Sync, offset: 0x8, size: 0x1, def value: None
 bool  Sync;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModDependenciesRequest, Dependencies) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModDependenciesRequest, Sync) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddModDependenciesRequest) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
