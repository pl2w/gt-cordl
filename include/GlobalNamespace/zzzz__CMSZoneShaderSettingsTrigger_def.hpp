#pragma once
// IWYU pragma private; include "GlobalNamespace/CMSZoneShaderSettingsTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CMSZoneShaderSettingsTrigger)
namespace GT_CustomMapSupportRuntime {
class ZoneShaderTriggerSettings;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CMSZoneShaderSettingsTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CMSZoneShaderSettingsTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CMSZoneShaderSettingsTrigger*, "", "CMSZoneShaderSettingsTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CMSZoneShaderSettingsTrigger
class CORDL_TYPE CMSZoneShaderSettingsTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activateCustomMapDefaults, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_activateCustomMapDefaults, put=__cordl_internal_set_activateCustomMapDefaults)) bool  activateCustomMapDefaults;

/// @brief Field activateOnEnable, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_activateOnEnable, put=__cordl_internal_set_activateOnEnable)) bool  activateOnEnable;

/// @brief Field shaderSettingsObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaderSettingsObject, put=__cordl_internal_set_shaderSettingsObject)) ::UnityW<::UnityEngine::GameObject>  shaderSettingsObject;

/// @brief Method ActivateShaderSettings, addr 0x59a9800, size 0x10c, virtual false, abstract: false, final false
inline void ActivateShaderSettings() ;

/// @brief Method CopySettings, addr 0x59a990c, size 0xd4, virtual false, abstract: false, final false
inline void CopySettings(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*  triggerSettings) ;

static inline ::GlobalNamespace::CMSZoneShaderSettingsTrigger* New_ctor() ;

/// @brief Method OnEnable, addr 0x59a97f0, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x59a99e0, size 0xf0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr bool const& __cordl_internal_get_activateCustomMapDefaults() const;

constexpr bool& __cordl_internal_get_activateCustomMapDefaults() ;

constexpr bool const& __cordl_internal_get_activateOnEnable() const;

constexpr bool& __cordl_internal_get_activateOnEnable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_shaderSettingsObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_shaderSettingsObject() ;

constexpr void __cordl_internal_set_activateCustomMapDefaults(bool  value) ;

constexpr void __cordl_internal_set_activateOnEnable(bool  value) ;

constexpr void __cordl_internal_set_shaderSettingsObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x59a9ad0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSZoneShaderSettingsTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSZoneShaderSettingsTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSZoneShaderSettingsTrigger(CMSZoneShaderSettingsTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSZoneShaderSettingsTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSZoneShaderSettingsTrigger(CMSZoneShaderSettingsTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2646};

/// @brief Field shaderSettingsObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___shaderSettingsObject;

/// @brief Field activateCustomMapDefaults, offset: 0x28, size: 0x1, def value: None
 bool  ___activateCustomMapDefaults;

/// @brief Field activateOnEnable, offset: 0x29, size: 0x1, def value: None
 bool  ___activateOnEnable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettingsTrigger, ___shaderSettingsObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettingsTrigger, ___activateCustomMapDefaults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettingsTrigger, ___activateOnEnable) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CMSZoneShaderSettingsTrigger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
