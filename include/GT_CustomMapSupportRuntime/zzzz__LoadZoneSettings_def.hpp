#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/LoadZoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoadZoneSettings)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class LoadZoneSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::LoadZoneSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::LoadZoneSettings*, "GT_CustomMapSupportRuntime", "LoadZoneSettings");
// [NullableContext(1)]
// [Nullable(0)]
// [RequireComponent(typeof(UnityEngine.BoxCollider))]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.LoadZoneSettings
class CORDL_TYPE LoadZoneSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field UberShaderAmbientDynamicLight, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_UberShaderAmbientDynamicLight, put=__cordl_internal_set_UberShaderAmbientDynamicLight)) ::UnityEngine::Color  UberShaderAmbientDynamicLight;

/// @brief Field scenesToLoad, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenesToLoad, put=__cordl_internal_set_scenesToLoad)) ::System::Collections::Generic::List_1<::StringW>*  scenesToLoad;

/// @brief Field scenesToUnload, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenesToUnload, put=__cordl_internal_set_scenesToUnload)) ::System::Collections::Generic::List_1<::StringW>*  scenesToUnload;

/// @brief Field useDynamicLighting, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_useDynamicLighting, put=__cordl_internal_set_useDynamicLighting)) bool  useDynamicLighting;

static inline ::GT_CustomMapSupportRuntime::LoadZoneSettings* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_UberShaderAmbientDynamicLight() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_UberShaderAmbientDynamicLight() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_scenesToLoad() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_scenesToLoad() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_scenesToUnload() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_scenesToUnload() ;

constexpr bool const& __cordl_internal_get_useDynamicLighting() const;

constexpr bool& __cordl_internal_get_useDynamicLighting() ;

constexpr void __cordl_internal_set_UberShaderAmbientDynamicLight(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_scenesToLoad(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_scenesToUnload(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_useDynamicLighting(bool  value) ;

/// @brief Method .ctor, addr 0x9cb70b8, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadZoneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadZoneSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadZoneSettings(LoadZoneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadZoneSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadZoneSettings(LoadZoneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30905};

/// @brief Field useDynamicLighting, offset: 0x20, size: 0x1, def value: None
 bool  ___useDynamicLighting;

/// @brief Field UberShaderAmbientDynamicLight, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___UberShaderAmbientDynamicLight;

/// @brief Field scenesToLoad, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___scenesToLoad;

/// @brief Field scenesToUnload, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___scenesToUnload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::LoadZoneSettings, ___useDynamicLighting) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::LoadZoneSettings, ___UberShaderAmbientDynamicLight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::LoadZoneSettings, ___scenesToLoad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::LoadZoneSettings, ___scenesToUnload) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::LoadZoneSettings) == 0x48, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
