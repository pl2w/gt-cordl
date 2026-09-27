#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddModMediaRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AddModMediaRequest)
namespace Modio::API {
class IApiRequest;
}
namespace Modio::API {
struct ModioAPIFileParameter;
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
struct AddModMediaRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddModMediaRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddModMediaRequest, "Modio.API.SchemaDefinitions", "AddModMediaRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.ModioAPIFileParameter
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddModMediaRequest
struct CORDL_TYPE AddModMediaRequest {
public:
// Declarations
 __declspec(property(get=get_GallerySync)) bool  GallerySync;

/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe46fc, size 0x108, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe46c4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::ModioAPIFileParameter  media, bool  gallerySync) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// [CompilerGenerated]
/// @brief Method get_GallerySync, addr 0x9fe46bc, size 0x8, virtual false, abstract: false, final false
inline bool get_GallerySync() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddModMediaRequest() ;

// Ctor Parameters [CppParam { name: "_media", ty: "::Modio::API::ModioAPIFileParameter", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GallerySync_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AddModMediaRequest(::Modio::API::ModioAPIFileParameter  _media, bool  _GallerySync_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _media, offset: 0x0, size: 0x30, def value: None
 ::Modio::API::ModioAPIFileParameter  _media;

/// [CompilerGenerated]
/// @brief Field <GallerySync>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  _GallerySync_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModMediaRequest, _media) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModMediaRequest, _GallerySync_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddModMediaRequest) == 0x38, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
