#pragma once
// IWYU pragma private; include "System/Resources/ManifestBasedResourceGroveler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManifestBasedResourceGroveler)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::IO {
class Stream;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Resources {
class IResourceGroveler;
}
namespace System::Resources {
class ResourceManager_ResourceManagerMediator;
}
namespace System::Resources {
class ResourceSet;
}
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
namespace System::Threading {
struct StackCrawlMark;
}
// Forward declare root types
namespace System::Resources {
class ManifestBasedResourceGroveler;
}
// Write type traits
MARK_REF_T(::System::Resources::ManifestBasedResourceGroveler*);
DEFINE_IL2CPP_CLASS(::System::Resources::ManifestBasedResourceGroveler*, "System.Resources", "ManifestBasedResourceGroveler");
// Dependencies System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ManifestBasedResourceGroveler
class CORDL_TYPE ManifestBasedResourceGroveler : public ::System::Object {
public:
// Declarations
/// @brief Field _mediator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__mediator, put=__cordl_internal_set__mediator)) ::System::Resources::ResourceManager_ResourceManagerMediator*  _mediator;

/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr operator  ::System::Resources::IResourceGroveler*() noexcept;

/// @brief Method CanUseDefaultResourceClasses, addr 0xa1ece4c, size 0x148, virtual false, abstract: false, final false
inline bool CanUseDefaultResourceClasses(::StringW  readerTypeName, ::StringW  resSetTypeName) ;

/// @brief Method CaseInsensitiveManifestResourceStreamLookup, addr 0xa1ed12c, size 0x35c, virtual false, abstract: false, final false
inline ::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::RuntimeAssembly*  satellite, ::StringW  name) ;

/// @brief Method CreateResourceSet, addr 0xa1ebe70, size 0x934, virtual false, abstract: false, final false
inline ::System::Resources::ResourceSet* CreateResourceSet(::System::IO::Stream*  store, ::System::Reflection::Assembly*  assembly) ;

/// @brief Method GetManifestResourceStream, addr 0xa1ebdc0, size 0xb0, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetManifestResourceStream(::System::Reflection::RuntimeAssembly*  satellite, ::StringW  fileName, ::by_ref<::System::Threading::StackCrawlMark>  stackMark) ;

/// @brief Method GetNeutralResourcesLanguage, addr 0xa1eca58, size 0x344, virtual false, abstract: false, final false
static inline ::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly*  a, ::by_ref<::System::Resources::UltimateResourceFallbackLocation>  fallbackLocation) ;

/// @brief Method GetNeutralResourcesLanguageAttribute, addr 0xa1ecd9c, size 0x84, virtual false, abstract: false, final false
static inline bool GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly*  assembly, ::by_ref<::StringW>  cultureName, ::by_ref<int16_t>  fallbackLocation) ;

/// @brief Method GetSatelliteAssembly, addr 0xa1eb80c, size 0x180, virtual false, abstract: false, final false
inline ::System::Reflection::RuntimeAssembly* GetSatelliteAssembly(::System::Globalization::CultureInfo*  lookForCulture, ::by_ref<::System::Threading::StackCrawlMark>  stackMark) ;

/// @brief Method GetSatelliteAssemblyName, addr 0xa1ed538, size 0x78, virtual false, abstract: false, final false
inline ::StringW GetSatelliteAssemblyName() ;

/// @brief Method GrovelForResourceSet, addr 0xa1eb3c0, size 0x2ac, virtual true, abstract: false, final true
inline ::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo*  culture, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*  localResourceSets, bool  tryParents, bool  createIfNotExists, ::by_ref<::System::Threading::StackCrawlMark>  stackMark) ;

/// @brief Method HandleResourceStreamMissing, addr 0xa1ec7a4, size 0x29c, virtual false, abstract: false, final false
inline void HandleResourceStreamMissing(::StringW  fileName) ;

/// @brief Method HandleSatelliteMissing, addr 0xa1eb9d4, size 0x394, virtual false, abstract: false, final false
inline void HandleSatelliteMissing() ;

static inline ::System::Resources::ManifestBasedResourceGroveler* New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator*  mediator) ;

/// @brief Method UltimateFallbackFixup, addr 0xa1eb66c, size 0x104, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* UltimateFallbackFixup(::System::Globalization::CultureInfo*  lookForCulture) ;

constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& __cordl_internal_get__mediator() const;

constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& __cordl_internal_get__mediator() ;

constexpr void __cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator*  value) ;

/// @brief Method .ctor, addr 0xa1eb390, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Resources::ResourceManager_ResourceManagerMediator*  mediator) ;

/// @brief Convert to "::System::Resources::IResourceGroveler"
constexpr ::System::Resources::IResourceGroveler* i___System__Resources__IResourceGroveler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManifestBasedResourceGroveler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManifestBasedResourceGroveler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManifestBasedResourceGroveler(ManifestBasedResourceGroveler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManifestBasedResourceGroveler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManifestBasedResourceGroveler(ManifestBasedResourceGroveler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6578};

/// @brief Field _mediator, offset: 0x10, size: 0x8, def value: None
 ::System::Resources::ResourceManager_ResourceManagerMediator*  ____mediator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ManifestBasedResourceGroveler, ____mediator) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Resources::ManifestBasedResourceGroveler) == 0x18, "Size mismatch!");

} // namespace end def System::Resources
