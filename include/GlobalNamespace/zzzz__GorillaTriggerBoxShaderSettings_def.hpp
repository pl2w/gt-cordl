#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBoxShaderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
CORDL_MODULE_EXPORT(GorillaTriggerBoxShaderSettings)
namespace GorillaTag::Rendering {
class ZoneShaderSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTriggerBoxShaderSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTriggerBoxShaderSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTriggerBoxShaderSettings*, "", "GorillaTriggerBoxShaderSettings");
// Dependencies GorillaTriggerBox, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTriggerBoxShaderSettings
class CORDL_TYPE GorillaTriggerBoxShaderSettings : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field sameSceneSettingsRef, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sameSceneSettingsRef, put=__cordl_internal_set_sameSceneSettingsRef)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  sameSceneSettingsRef;

/// @brief Field settings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  settings;

/// @brief Field settingsRef, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_settingsRef, put=__cordl_internal_set_settingsRef)) ::GlobalNamespace::XSceneRef  settingsRef;

/// @brief Method Awake, addr 0x579df78, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaTriggerBoxShaderSettings* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x579e018, size 0x148, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& __cordl_internal_get_sameSceneSettingsRef() const;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& __cordl_internal_get_sameSceneSettingsRef() ;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& __cordl_internal_get_settings() const;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& __cordl_internal_get_settings() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_settingsRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_settingsRef() ;

constexpr void __cordl_internal_set_sameSceneSettingsRef(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

constexpr void __cordl_internal_set_settings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

constexpr void __cordl_internal_set_settingsRef(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x579e160, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTriggerBoxShaderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBoxShaderSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTriggerBoxShaderSettings(GorillaTriggerBoxShaderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBoxShaderSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTriggerBoxShaderSettings(GorillaTriggerBoxShaderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1513};

/// [SerializeField]
/// @brief Field settingsRef, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___settingsRef;

/// [SerializeField]
/// @brief Field sameSceneSettingsRef, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  ___sameSceneSettingsRef;

/// @brief Field settings, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTriggerBoxShaderSettings, ___settingsRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTriggerBoxShaderSettings, ___sameSceneSettingsRef) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTriggerBoxShaderSettings, ___settings) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTriggerBoxShaderSettings) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
