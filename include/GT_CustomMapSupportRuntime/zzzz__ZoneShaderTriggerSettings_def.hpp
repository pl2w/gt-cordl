#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ZoneShaderTriggerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__ZoneShaderTriggerSettings_ActivationType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZoneShaderTriggerSettings)
namespace GlobalNamespace {
struct ZoneShaderTriggerSettings_ActivationType;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class ZoneShaderTriggerSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*, "GT_CustomMapSupportRuntime", "ZoneShaderTriggerSettings");
// [RequireComponent(typeof(UnityEngine.Collider))]
// [DisallowMultipleComponent]
// Dependencies GT_CustomMapSupportRuntime.ZoneShaderTriggerSettings::ActivationType, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.ZoneShaderTriggerSettings
class CORDL_TYPE ZoneShaderTriggerSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActivationType = ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType;

/// @brief Field activateOnEnable, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_activateOnEnable, put=__cordl_internal_set_activateOnEnable)) bool  activateOnEnable;

/// @brief Field activationType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationType, put=__cordl_internal_set_activationType)) ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType  activationType;

/// @brief Field zoneShaderSettingsObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneShaderSettingsObject, put=__cordl_internal_set_zoneShaderSettingsObject)) ::UnityW<::UnityEngine::GameObject>  zoneShaderSettingsObject;

static inline ::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_activateOnEnable() const;

constexpr bool& __cordl_internal_get_activateOnEnable() ;

constexpr ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType const& __cordl_internal_get_activationType() const;

constexpr ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType& __cordl_internal_get_activationType() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_zoneShaderSettingsObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_zoneShaderSettingsObject() ;

constexpr void __cordl_internal_set_activateOnEnable(bool  value) ;

constexpr void __cordl_internal_set_activationType(::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType  value) ;

constexpr void __cordl_internal_set_zoneShaderSettingsObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9cb8e48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneShaderTriggerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneShaderTriggerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneShaderTriggerSettings(ZoneShaderTriggerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneShaderTriggerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneShaderTriggerSettings(ZoneShaderTriggerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30940};

/// @brief Field activationType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType  ___activationType;

/// [Tooltip("If this is TRUE, these ZoneShaderSettings will be activated when this GameObject is activated")]
/// @brief Field activateOnEnable, offset: 0x24, size: 0x1, def value: None
 bool  ___activateOnEnable;

/// [Nullable(2)]
/// @brief Field zoneShaderSettingsObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___zoneShaderSettingsObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings, ___activationType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings, ___activateOnEnable) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings, ___zoneShaderSettingsObject) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings) == 0x30, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
