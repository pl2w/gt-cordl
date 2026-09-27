#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSLoadingZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CMSLoadingZone)
namespace GT_CustomMapSupportRuntime {
class LoadZoneSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSLoadingZone;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*, "GorillaTagScripts.CustomMapSupport", "CMSLoadingZone");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSLoadingZone
class CORDL_TYPE CMSLoadingZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dynamicLightingAmbientColor, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_dynamicLightingAmbientColor, put=__cordl_internal_set_dynamicLightingAmbientColor)) ::UnityEngine::Color  dynamicLightingAmbientColor;

/// @brief Field scenesToLoad, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenesToLoad, put=__cordl_internal_set_scenesToLoad)) ::ArrayW<int32_t>  scenesToLoad;

/// @brief Field scenesToUnload, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenesToUnload, put=__cordl_internal_set_scenesToUnload)) ::ArrayW<int32_t>  scenesToUnload;

/// @brief Field useDynamicLighting, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useDynamicLighting, put=__cordl_internal_set_useDynamicLighting)) bool  useDynamicLighting;

/// @brief Method CleanSceneUnloadArray, addr 0x5bd8024, size 0x114, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> CleanSceneUnloadArray(::System::Collections::Generic::List_1<::StringW>*  unload, ::System::Collections::Generic::List_1<::StringW>*  load, /* [IsReadOnly] */ ::by_ref<::ArrayW<::StringW>>  assetBundleSceneFilePaths) ;

/// @brief Method GetSceneIndexes, addr 0x5bd7ee8, size 0x13c, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetSceneIndexes(::System::Collections::Generic::List_1<::StringW>*  sceneNames, /* [IsReadOnly] */ ::by_ref<::ArrayW<::StringW>>  assetBundleSceneFilePaths) ;

/// @brief Method GetSceneNameFromFilePath, addr 0x5bd8138, size 0xb4, virtual false, abstract: false, final false
inline ::StringW GetSceneNameFromFilePath(::StringW  filePath) ;

static inline ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5bd81ec, size 0x1f8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method SetupLoadingZone, addr 0x5bd7dac, size 0x13c, virtual false, abstract: false, final false
inline void SetupLoadingZone(::GT_CustomMapSupportRuntime::LoadZoneSettings*  settings, /* [IsReadOnly] */ ::by_ref<::ArrayW<::StringW>>  assetBundleSceneFilePaths) ;

/// @brief Method Start, addr 0x5bd7d74, size 0x38, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_dynamicLightingAmbientColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_dynamicLightingAmbientColor() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_scenesToLoad() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_scenesToLoad() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_scenesToUnload() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_scenesToUnload() ;

constexpr bool const& __cordl_internal_get_useDynamicLighting() const;

constexpr bool& __cordl_internal_get_useDynamicLighting() ;

constexpr void __cordl_internal_set_dynamicLightingAmbientColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_scenesToLoad(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_scenesToUnload(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_useDynamicLighting(bool  value) ;

/// @brief Method .ctor, addr 0x5bd83e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSLoadingZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSLoadingZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSLoadingZone(CMSLoadingZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSLoadingZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSLoadingZone(CMSLoadingZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4025};

/// @brief Field scenesToLoad, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___scenesToLoad;

/// @brief Field scenesToUnload, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___scenesToUnload;

/// @brief Field useDynamicLighting, offset: 0x30, size: 0x1, def value: None
 bool  ___useDynamicLighting;

/// @brief Field dynamicLightingAmbientColor, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ___dynamicLightingAmbientColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSLoadingZone, ___scenesToLoad) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSLoadingZone, ___scenesToUnload) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSLoadingZone, ___useDynamicLighting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSLoadingZone, ___dynamicLightingAmbientColor) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSLoadingZone) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
