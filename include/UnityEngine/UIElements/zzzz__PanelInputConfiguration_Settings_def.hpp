#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelInputConfiguration_Settings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_PanelInputRedirection_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PanelInputConfiguration_Settings)
namespace GlobalNamespace {
struct PanelInputConfiguration_PanelInputRedirection;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
struct PanelInputConfiguration_Settings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PanelInputConfiguration_Settings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PanelInputConfiguration_Settings, "UnityEngine.UIElements", "PanelInputConfiguration/Settings");
// Dependencies UnityEngine.Camera, UnityEngine.LayerMask, UnityEngine.UIElements.PanelInputConfiguration::PanelInputRedirection
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.PanelInputConfiguration/Settings
struct CORDL_TYPE PanelInputConfiguration_Settings {
public:
// Declarations
 __declspec(property(get=get_autoCreatePanelComponents)) bool  autoCreatePanelComponents;

 __declspec(property(get=get_defaultEventCameraIsMainCamera)) bool  defaultEventCameraIsMainCamera;

 __declspec(property(get=get_eventCameras)) ::ArrayW<::UnityW<::UnityEngine::Camera>>  eventCameras;

 __declspec(property(get=get_interactionLayers)) ::UnityEngine::LayerMask  interactionLayers;

 __declspec(property(get=get_maxInteractionDistance)) float_t  maxInteractionDistance;

 __declspec(property(get=get_panelInputRedirection)) ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection  panelInputRedirection;

 __declspec(property(get=get_processWorldSpaceInput)) bool  processWorldSpaceInput;

/// @brief Field s_Default, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_s_Default, put=setStaticF_s_Default)) ::GlobalNamespace::PanelInputConfiguration_Settings  s_Default;

static inline ::GlobalNamespace::PanelInputConfiguration_Settings getStaticF_s_Default() ;

/// @brief Method get_Default, addr 0xb8aebdc, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PanelInputConfiguration_Settings get_Default() ;

/// @brief Method get_autoCreatePanelComponents, addr 0xb8aec6c, size 0x8, virtual false, abstract: false, final false
inline bool get_autoCreatePanelComponents() ;

/// @brief Method get_defaultEventCameraIsMainCamera, addr 0xb8aec54, size 0x8, virtual false, abstract: false, final false
inline bool get_defaultEventCameraIsMainCamera() ;

/// @brief Method get_eventCameras, addr 0xb8aec5c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_eventCameras() ;

/// @brief Method get_interactionLayers, addr 0xb8aec44, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_interactionLayers() ;

/// @brief Method get_maxInteractionDistance, addr 0xb8aec4c, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxInteractionDistance() ;

/// @brief Method get_panelInputRedirection, addr 0xb8aec64, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection get_panelInputRedirection() ;

/// @brief Method get_processWorldSpaceInput, addr 0xb8aec3c, size 0x8, virtual false, abstract: false, final false
inline bool get_processWorldSpaceInput() ;

static inline void setStaticF_s_Default(::GlobalNamespace::PanelInputConfiguration_Settings  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PanelInputConfiguration_Settings() ;

// Ctor Parameters [CppParam { name: "m_ProcessWorldSpaceInput", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InteractionLayers", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxInteractionDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DefaultEventCameraIsMainCamera", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EventCameras", ty: "::ArrayW<::UnityW<::UnityEngine::Camera>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PanelInputRedirection", ty: "::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AutoCreatePanelComponents", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr PanelInputConfiguration_Settings(bool  m_ProcessWorldSpaceInput, ::UnityEngine::LayerMask  m_InteractionLayers, float_t  m_MaxInteractionDistance, bool  m_DefaultEventCameraIsMainCamera, ::ArrayW<::UnityW<::UnityEngine::Camera>>  m_EventCameras, ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection  m_PanelInputRedirection, bool  m_AutoCreatePanelComponents) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7766};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// [Tooltip("Determines whether world space panels process input events. Disable this if you need UGUI support but do not require world space input to improve performance.")]
/// @brief Field m_ProcessWorldSpaceInput, offset: 0x0, size: 0x1, def value: None
 bool  m_ProcessWorldSpaceInput;

/// [SerializeField]
/// [Tooltip("Determines which layers can block input events on world space panels.")]
/// @brief Field m_InteractionLayers, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  m_InteractionLayers;

/// [SerializeField]
/// [Tooltip("Sets how far away interactions with world-space UI are possible. Defaults to unlimited (infinity), but you can customize it for XR or performance needs. The distance uses GameObject units, consistent with transform positions and Camera clipping planes.")]
/// @brief Field m_MaxInteractionDistance, offset: 0x8, size: 0x4, def value: None
 float_t  m_MaxInteractionDistance;

/// [Tooltip("Defines whether the Main Camera is used as the Event Camera for world space panels. Disable to specify alternative Event Camera(s) for raycasting input.")]
/// [SerializeField]
/// @brief Field m_DefaultEventCameraIsMainCamera, offset: 0xc, size: 0x1, def value: None
 bool  m_DefaultEventCameraIsMainCamera;

/// [Tooltip("Defines the Event Camera(s) used for world space raycasting input.")]
/// [SerializeField]
/// @brief Field m_EventCameras, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Camera>>  m_EventCameras;

/// [Tooltip("Determines which input event system is used for UI interactions when combining UI Toolkit and UGUI.")]
/// [SerializeField]
/// @brief Field m_PanelInputRedirection, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection  m_PanelInputRedirection;

/// [Tooltip("Automatically adds UI Toolkit components under the EventSystem to handle input redirection between UI Toolkit and UGUI panels. Disable to manually assign these components through code.")]
/// [SerializeField]
/// @brief Field m_AutoCreatePanelComponents, offset: 0x1c, size: 0x1, def value: None
 bool  m_AutoCreatePanelComponents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PanelInputConfiguration_Settings, m_ProcessWorldSpaceInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelInputConfiguration_Settings, m_InteractionLayers) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelInputConfiguration_Settings, m_MaxInteractionDistance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelInputConfiguration_Settings, m_DefaultEventCameraIsMainCamera) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelInputConfiguration_Settings, m_EventCameras) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelInputConfiguration_Settings, m_PanelInputRedirection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelInputConfiguration_Settings, m_AutoCreatePanelComponents) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PanelInputConfiguration_Settings) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
