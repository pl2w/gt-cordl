#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelInputConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_Settings_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelInputConfiguration)
namespace GlobalNamespace {
struct PanelInputConfiguration_PanelInputRedirection;
}
namespace GlobalNamespace {
struct PanelInputConfiguration_Settings;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelInputConfiguration;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PanelInputConfiguration*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelInputConfiguration*, "UnityEngine.UIElements", "PanelInputConfiguration");
// [HelpURL("UIE-get-started-with-runtime-ui")]
// [ExecuteAlways]
// [AddComponentMenu("UI Toolkit/Panel Input Configuration", 1)]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.UIElements.PanelInputConfiguration::Settings
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelInputConfiguration
class CORDL_TYPE PanelInputConfiguration : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PanelInputRedirection = ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection;

using Settings = ::GlobalNamespace::PanelInputConfiguration_Settings;

/// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__current_k__BackingField, put=setStaticF__current_k__BackingField)) ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>  _current_k__BackingField;

 __declspec(property(get=get_autoCreatePanelComponents, put=set_autoCreatePanelComponents)) bool  autoCreatePanelComponents;

 __declspec(property(get=get_defaultEventCameraIsMainCamera, put=set_defaultEventCameraIsMainCamera)) bool  defaultEventCameraIsMainCamera;

 __declspec(property(get=get_eventCameras, put=set_eventCameras)) ::ArrayW<::UnityW<::UnityEngine::Camera>>  eventCameras;

 __declspec(property(get=get_interactionLayers, put=set_interactionLayers)) ::UnityEngine::LayerMask  interactionLayers;

/// @brief Field m_Settings, offset 0x20, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::GlobalNamespace::PanelInputConfiguration_Settings  m_Settings;

 __declspec(property(get=get_maxInteractionDistance, put=set_maxInteractionDistance)) float_t  maxInteractionDistance;

/// @brief Field onApply, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onApply, put=setStaticF_onApply)) ::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*  onApply;

 __declspec(property(get=get_panelInputRedirection, put=set_panelInputRedirection)) ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection  panelInputRedirection;

 __declspec(property(get=get_processWorldSpaceInput, put=set_processWorldSpaceInput)) bool  processWorldSpaceInput;

/// @brief Field s_ActiveInstances, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ActiveInstances, put=setStaticF_s_ActiveInstances)) int32_t  s_ActiveInstances;

 __declspec(property(get=get_settings)) ::GlobalNamespace::PanelInputConfiguration_Settings  settings;

/// @brief Method Apply, addr 0xb8ae0f0, size 0x448, virtual false, abstract: false, final false
static inline void Apply(::UnityEngine::UIElements::PanelInputConfiguration*  input) ;

static inline ::UnityEngine::UIElements::PanelInputConfiguration* New_ctor() ;

/// @brief Method OnDisable, addr 0xb8ae948, size 0x10c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb8ae654, size 0x2f4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::PanelInputConfiguration_Settings const& __cordl_internal_get_m_Settings() const;

constexpr ::GlobalNamespace::PanelInputConfiguration_Settings& __cordl_internal_get_m_Settings() ;

constexpr void __cordl_internal_set_m_Settings(::GlobalNamespace::PanelInputConfiguration_Settings  value) ;

/// @brief Method .ctor, addr 0xb8aeb38, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> getStaticF__current_k__BackingField() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>* getStaticF_onApply() ;

static inline int32_t getStaticF_s_ActiveInstances() ;

/// @brief Method get_autoCreatePanelComponents, addr 0xb8ae630, size 0x8, virtual false, abstract: false, final false
inline bool get_autoCreatePanelComponents() ;

/// [CompilerGenerated]
/// @brief Method get_current, addr 0xb8ae020, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> get_current() ;

/// @brief Method get_defaultEventCameraIsMainCamera, addr 0xb8ae5b4, size 0x8, virtual false, abstract: false, final false
inline bool get_defaultEventCameraIsMainCamera() ;

/// @brief Method get_eventCameras, addr 0xb8ae5d8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_eventCameras() ;

/// @brief Method get_interactionLayers, addr 0xb8ae538, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_interactionLayers() ;

/// @brief Method get_maxInteractionDistance, addr 0xb8ae594, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxInteractionDistance() ;

/// @brief Method get_panelInputRedirection, addr 0xb8ae610, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection get_panelInputRedirection() ;

/// @brief Method get_processWorldSpaceInput, addr 0xb8ae0cc, size 0x8, virtual false, abstract: false, final false
inline bool get_processWorldSpaceInput() ;

/// @brief Method get_settings, addr 0xb8ae0c0, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::PanelInputConfiguration_Settings get_settings() ;

static inline void setStaticF__current_k__BackingField(::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>  value) ;

static inline void setStaticF_onApply(::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*  value) ;

static inline void setStaticF_s_ActiveInstances(int32_t  value) ;

/// @brief Method set_autoCreatePanelComponents, addr 0xb8ae638, size 0x1c, virtual false, abstract: false, final false
inline void set_autoCreatePanelComponents(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_current, addr 0xb8ae068, size 0x58, virtual false, abstract: false, final false
static inline void set_current(::UnityEngine::UIElements::PanelInputConfiguration*  value) ;

/// @brief Method set_defaultEventCameraIsMainCamera, addr 0xb8ae5bc, size 0x1c, virtual false, abstract: false, final false
inline void set_defaultEventCameraIsMainCamera(bool  value) ;

/// @brief Method set_eventCameras, addr 0xb8ae5e0, size 0x30, virtual false, abstract: false, final false
inline void set_eventCameras(::ArrayW<::UnityEngine::Camera*>  value) ;

/// @brief Method set_interactionLayers, addr 0xb8ae540, size 0x54, virtual false, abstract: false, final false
inline void set_interactionLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method set_maxInteractionDistance, addr 0xb8ae59c, size 0x18, virtual false, abstract: false, final false
inline void set_maxInteractionDistance(float_t  value) ;

/// @brief Method set_panelInputRedirection, addr 0xb8ae618, size 0x18, virtual false, abstract: false, final false
inline void set_panelInputRedirection(::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection  value) ;

/// @brief Method set_processWorldSpaceInput, addr 0xb8ae0d4, size 0x1c, virtual false, abstract: false, final false
inline void set_processWorldSpaceInput(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelInputConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelInputConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelInputConfiguration(PanelInputConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelInputConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelInputConfiguration(PanelInputConfiguration const& ) = delete;

/// @brief Field SettingsProperty offset 0xffffffff size 0x8
static constexpr ::ConstString  SettingsProperty{u"m_Settings"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7767};

/// [SerializeField]
/// @brief Field m_Settings, offset: 0x20, size: 0x20, def value: None
 ::GlobalNamespace::PanelInputConfiguration_Settings  ___m_Settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration, ___m_Settings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelInputConfiguration) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
