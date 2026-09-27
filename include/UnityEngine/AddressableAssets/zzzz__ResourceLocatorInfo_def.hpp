#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocatorInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ResourceLocatorInfo)
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class ResourceLocatorInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::AddressableAssets::ResourceLocatorInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AddressableAssets::ResourceLocatorInfo*, "UnityEngine.AddressableAssets", "ResourceLocatorInfo");
// Dependencies System.Object
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.ResourceLocatorInfo
class CORDL_TYPE ResourceLocatorInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CanUpdateContent)) bool  CanUpdateContent;

 __declspec(property(get=get_CatalogLocation, put=set_CatalogLocation)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  CatalogLocation;

 __declspec(property(get=get_ContentUpdateAvailable, put=set_ContentUpdateAvailable)) bool  ContentUpdateAvailable;

 __declspec(property(get=get_HashLocation)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  HashLocation;

 __declspec(property(get=get_LocalHash, put=set_LocalHash)) ::StringW  LocalHash;

 __declspec(property(get=get_Locator, put=set_Locator)) ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  Locator;

/// @brief Field <CatalogLocation>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__CatalogLocation_k__BackingField, put=__cordl_internal_set__CatalogLocation_k__BackingField)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  _CatalogLocation_k__BackingField;

/// @brief Field <ContentUpdateAvailable>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__ContentUpdateAvailable_k__BackingField, put=__cordl_internal_set__ContentUpdateAvailable_k__BackingField)) bool  _ContentUpdateAvailable_k__BackingField;

/// @brief Field <LocalHash>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocalHash_k__BackingField, put=__cordl_internal_set__LocalHash_k__BackingField)) ::StringW  _LocalHash_k__BackingField;

/// @brief Field <Locator>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Locator_k__BackingField, put=__cordl_internal_set__Locator_k__BackingField)) ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  _Locator_k__BackingField;

static inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  loc, ::StringW  localHash, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  remoteCatalogLocation) ;

/// @brief Method UpdateContent, addr 0xae4d71c, size 0x48, virtual false, abstract: false, final false
inline void UpdateContent(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  locator, ::StringW  hash, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  loc) ;

constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& __cordl_internal_get__CatalogLocation_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get__CatalogLocation_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ContentUpdateAvailable_k__BackingField() const;

constexpr bool& __cordl_internal_get__ContentUpdateAvailable_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__LocalHash_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LocalHash_k__BackingField() ;

constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* const& __cordl_internal_get__Locator_k__BackingField() const;

constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& __cordl_internal_get__Locator_k__BackingField() ;

constexpr void __cordl_internal_set__CatalogLocation_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value) ;

constexpr void __cordl_internal_set__ContentUpdateAvailable_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LocalHash_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Locator_k__BackingField(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  value) ;

/// @brief Method .ctor, addr 0xae4d3fc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  loc, ::StringW  localHash, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  remoteCatalogLocation) ;

/// @brief Method get_CanUpdateContent, addr 0xae4d578, size 0x1a4, virtual false, abstract: false, final false
inline bool get_CanUpdateContent() ;

/// [CompilerGenerated]
/// @brief Method get_CatalogLocation, addr 0xae4d3dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_CatalogLocation() ;

/// [CompilerGenerated]
/// @brief Method get_ContentUpdateAvailable, addr 0xae4d3ec, size 0x8, virtual false, abstract: false, final false
inline bool get_ContentUpdateAvailable() ;

/// @brief Method get_HashLocation, addr 0xae4d45c, size 0x11c, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_HashLocation() ;

/// [CompilerGenerated]
/// @brief Method get_LocalHash, addr 0xae4d3cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LocalHash() ;

/// [CompilerGenerated]
/// @brief Method get_Locator, addr 0xae4d3bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* get_Locator() ;

/// [CompilerGenerated]
/// @brief Method set_CatalogLocation, addr 0xae4d3e4, size 0x8, virtual false, abstract: false, final false
inline void set_CatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ContentUpdateAvailable, addr 0xae4d3f4, size 0x8, virtual false, abstract: false, final false
inline void set_ContentUpdateAvailable(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LocalHash, addr 0xae4d3d4, size 0x8, virtual false, abstract: false, final false
inline void set_LocalHash(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Locator, addr 0xae4d3c4, size 0x8, virtual false, abstract: false, final false
inline void set_Locator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResourceLocatorInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResourceLocatorInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourceLocatorInfo(ResourceLocatorInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourceLocatorInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourceLocatorInfo(ResourceLocatorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29208};

/// [CompilerGenerated]
/// @brief Field <Locator>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  ____Locator_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LocalHash>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____LocalHash_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CatalogLocation>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  ____CatalogLocation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ContentUpdateAvailable>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____ContentUpdateAvailable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocatorInfo, ____Locator_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocatorInfo, ____LocalHash_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocatorInfo, ____CatalogLocation_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocatorInfo, ____ContentUpdateAvailable_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AddressableAssets::ResourceLocatorInfo) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
