#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/CanvasOptimizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_ScaleMode_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_ScreenMatchMode_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_Unit_def.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_BlockingObjects_def.hpp"
#include "UnityEngine/zzzz__AdditionalCanvasShaderChannels_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RenderMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasOptimizer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UI {
class CanvasScaler;
}
namespace UnityEngine::UI {
class GraphicRaycaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasOptimizer_CanvasState;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasState_CanvasOptimizer_CanvasScalerSettings;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasState_CanvasOptimizer_CanvasSettings;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasState_CanvasOptimizer_GraphicRaycasterSettings;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasTracker;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceGraphicRaycaster;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasOptimizer;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasOptimizer_CanvasState;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasState_CanvasOptimizer_CanvasScalerSettings;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasState_CanvasOptimizer_CanvasSettings;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasState_CanvasOptimizer_GraphicRaycasterSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer*, "UnityEngine.XR.Interaction.Toolkit.UI", "CanvasOptimizer");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState*, "UnityEngine.XR.Interaction.Toolkit.UI", "CanvasOptimizer/CanvasState");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings*, "UnityEngine.XR.Interaction.Toolkit.UI", "CanvasOptimizer/CanvasState/CanvasScalerSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings*, "UnityEngine.XR.Interaction.Toolkit.UI", "CanvasOptimizer/CanvasState/CanvasSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings*, "UnityEngine.XR.Interaction.Toolkit.UI", "CanvasOptimizer/CanvasState/GraphicRaycasterSettings");
// [AddComponentMenu("Event/Canvas Optimizer", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer
class CORDL_TYPE CanvasOptimizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CanvasState = ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState;

/// @brief Field m_CanvasTrackers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CanvasTrackers, put=__cordl_internal_set_m_CanvasTrackers)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>,::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState*>*  m_CanvasTrackers;

/// @brief Field m_CullingCamera, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CullingCamera, put=__cordl_internal_set_m_CullingCamera)) ::UnityW<::UnityEngine::Camera>  m_CullingCamera;

/// @brief Field m_CullingCameraTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CullingCameraTransform, put=__cordl_internal_set_m_CullingCameraTransform)) ::UnityW<::UnityEngine::Transform>  m_CullingCameraTransform;

/// @brief Field m_RayFacingIgnoreAngle, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RayFacingIgnoreAngle, put=__cordl_internal_set_m_RayFacingIgnoreAngle)) float_t  m_RayFacingIgnoreAngle;

/// @brief Field m_RayPositionIgnoreAngle, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RayPositionIgnoreAngle, put=__cordl_internal_set_m_RayPositionIgnoreAngle)) float_t  m_RayPositionIgnoreAngle;

/// @brief Field m_RayPositionIgnoreDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RayPositionIgnoreDistance, put=__cordl_internal_set_m_RayPositionIgnoreDistance)) float_t  m_RayPositionIgnoreDistance;

 __declspec(property(get=get_rayFacingIgnoreAngle, put=set_rayFacingIgnoreAngle)) float_t  rayFacingIgnoreAngle;

 __declspec(property(get=get_rayPositionIgnoreAngle, put=set_rayPositionIgnoreAngle)) float_t  rayPositionIgnoreAngle;

 __declspec(property(get=get_rayPositionIgnoreDistance, put=set_rayPositionIgnoreDistance)) float_t  rayPositionIgnoreDistance;

/// @brief Method Awake, addr 0xb42f53c, size 0x208, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForNestedCanvasChanges, addr 0xb42f8dc, size 0x150, virtual false, abstract: false, final false
inline void CheckForNestedCanvasChanges() ;

/// @brief Method CheckForOutOfViewCanvases, addr 0xb42fa2c, size 0x1e0, virtual false, abstract: false, final false
inline void CheckForOutOfViewCanvases() ;

/// @brief Method FindCullingCamera, addr 0xb42f744, size 0xa8, virtual false, abstract: false, final false
inline void FindCullingCamera() ;

/// @brief Method InitializeCanvasTracking, addr 0xb42fc0c, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker> InitializeCanvasTracking(::UnityEngine::Canvas*  target) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer* New_ctor() ;

/// @brief Method RegisterCanvas, addr 0xb42f7ec, size 0xd8, virtual false, abstract: false, final false
inline void RegisterCanvas(::UnityEngine::Canvas*  canvas) ;

/// @brief Method UnregisterCanvas, addr 0xb42fe4c, size 0x94, virtual false, abstract: false, final false
inline void UnregisterCanvas(::UnityEngine::Canvas*  canvas) ;

/// @brief Method Update, addr 0xb42f8c4, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>,::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState*>* const& __cordl_internal_get_m_CanvasTrackers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>,::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState*>*& __cordl_internal_get_m_CanvasTrackers() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_CullingCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_CullingCamera() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_CullingCameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_CullingCameraTransform() ;

constexpr float_t const& __cordl_internal_get_m_RayFacingIgnoreAngle() const;

constexpr float_t& __cordl_internal_get_m_RayFacingIgnoreAngle() ;

constexpr float_t const& __cordl_internal_get_m_RayPositionIgnoreAngle() const;

constexpr float_t& __cordl_internal_get_m_RayPositionIgnoreAngle() ;

constexpr float_t const& __cordl_internal_get_m_RayPositionIgnoreDistance() const;

constexpr float_t& __cordl_internal_get_m_RayPositionIgnoreDistance() ;

constexpr void __cordl_internal_set_m_CanvasTrackers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>,::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState*>*  value) ;

constexpr void __cordl_internal_set_m_CullingCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_CullingCameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RayFacingIgnoreAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_RayPositionIgnoreAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_RayPositionIgnoreDistance(float_t  value) ;

/// @brief Method .ctor, addr 0xb430708, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_rayFacingIgnoreAngle, addr 0xb42f51c, size 0x8, virtual false, abstract: false, final false
inline float_t get_rayFacingIgnoreAngle() ;

/// @brief Method get_rayPositionIgnoreAngle, addr 0xb42f50c, size 0x8, virtual false, abstract: false, final false
inline float_t get_rayPositionIgnoreAngle() ;

/// @brief Method get_rayPositionIgnoreDistance, addr 0xb42f52c, size 0x8, virtual false, abstract: false, final false
inline float_t get_rayPositionIgnoreDistance() ;

/// @brief Method set_rayFacingIgnoreAngle, addr 0xb42f524, size 0x8, virtual false, abstract: false, final false
inline void set_rayFacingIgnoreAngle(float_t  value) ;

/// @brief Method set_rayPositionIgnoreAngle, addr 0xb42f514, size 0x8, virtual false, abstract: false, final false
inline void set_rayPositionIgnoreAngle(float_t  value) ;

/// @brief Method set_rayPositionIgnoreDistance, addr 0xb42f534, size 0x8, virtual false, abstract: false, final false
inline void set_rayPositionIgnoreDistance(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasOptimizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasOptimizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasOptimizer(CanvasOptimizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasOptimizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasOptimizer(CanvasOptimizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11276};

/// [SerializeField]
/// [Tooltip("How wide of an field-of-view to use when determining if a canvas is in view.")]
/// @brief Field m_RayPositionIgnoreAngle, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_RayPositionIgnoreAngle;

/// [SerializeField]
/// [Tooltip("How much the camera and canvas rotate away from one another and still be considered facing.")]
/// @brief Field m_RayFacingIgnoreAngle, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_RayFacingIgnoreAngle;

/// [SerializeField]
/// [Tooltip("How far away a canvas can be from this camera and still receive input.")]
/// @brief Field m_RayPositionIgnoreDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_RayPositionIgnoreDistance;

/// @brief Field m_CullingCamera, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_CullingCamera;

/// @brief Field m_CullingCameraTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_CullingCameraTransform;

/// @brief Field m_CanvasTrackers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>,::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState*>*  ___m_CanvasTrackers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer, ___m_RayPositionIgnoreAngle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer, ___m_RayFacingIgnoreAngle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer, ___m_RayPositionIgnoreDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer, ___m_CullingCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer, ___m_CullingCameraTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer, ___m_CanvasTrackers) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer/CanvasState
class CORDL_TYPE CanvasOptimizer_CanvasState : public ::System::Object {
public:
// Declarations
using CanvasScalerSettings = ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings;

using CanvasSettings = ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings;

using GraphicRaycasterSettings = ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings;

/// @brief Field m_Canvas, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Canvas, put=__cordl_internal_set_m_Canvas)) ::UnityW<::UnityEngine::Canvas>  m_Canvas;

/// @brief Field m_CanvasScalerSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CanvasScalerSettings, put=__cordl_internal_set_m_CanvasScalerSettings)) ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings*  m_CanvasScalerSettings;

/// @brief Field m_CanvasSettings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CanvasSettings, put=__cordl_internal_set_m_CanvasSettings)) ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings*  m_CanvasSettings;

/// @brief Field m_CheckTimer, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CheckTimer, put=__cordl_internal_set_m_CheckTimer)) float_t  m_CheckTimer;

/// @brief Field m_GraphicRaycasterSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GraphicRaycasterSettings, put=__cordl_internal_set_m_GraphicRaycasterSettings)) ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings*  m_GraphicRaycasterSettings;

/// @brief Field m_Nested, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Nested, put=__cordl_internal_set_m_Nested)) bool  m_Nested;

/// @brief Field m_Raycaster, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Raycaster, put=__cordl_internal_set_m_Raycaster)) ::UnityW<::UnityEngine::UI::GraphicRaycaster>  m_Raycaster;

/// @brief Field m_RaysDisabled, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RaysDisabled, put=__cordl_internal_set_m_RaysDisabled)) bool  m_RaysDisabled;

/// @brief Field m_TrackedDeviceGraphicRaycaster, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedDeviceGraphicRaycaster, put=__cordl_internal_set_m_TrackedDeviceGraphicRaycaster)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>  m_TrackedDeviceGraphicRaycaster;

/// @brief Field m_Tracker, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Tracker, put=__cordl_internal_set_m_Tracker)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>  m_Tracker;

/// @brief Field m_WasNested, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasNested, put=__cordl_internal_set_m_WasNested)) bool  m_WasNested;

/// @brief Method CheckForNestedChanges, addr 0xb42fee0, size 0x4fc, virtual false, abstract: false, final false
inline void CheckForNestedChanges(bool  force) ;

/// @brief Method CheckForOutOfView, addr 0xb4303dc, size 0x32c, virtual false, abstract: false, final false
inline void CheckForOutOfView(::UnityEngine::Transform*  gazeSource, float_t  fovAngle, float_t  facingAngle, float_t  maxDistance) ;

/// @brief Method Initialize, addr 0xb42fda0, size 0xac, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*  tracker) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings* const& __cordl_internal_get_m_CanvasScalerSettings() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings*& __cordl_internal_get_m_CanvasScalerSettings() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings* const& __cordl_internal_get_m_CanvasSettings() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings*& __cordl_internal_get_m_CanvasSettings() ;

constexpr float_t const& __cordl_internal_get_m_CheckTimer() const;

constexpr float_t& __cordl_internal_get_m_CheckTimer() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings* const& __cordl_internal_get_m_GraphicRaycasterSettings() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings*& __cordl_internal_get_m_GraphicRaycasterSettings() ;

constexpr bool const& __cordl_internal_get_m_Nested() const;

constexpr bool& __cordl_internal_get_m_Nested() ;

constexpr ::UnityW<::UnityEngine::UI::GraphicRaycaster> const& __cordl_internal_get_m_Raycaster() const;

constexpr ::UnityW<::UnityEngine::UI::GraphicRaycaster>& __cordl_internal_get_m_Raycaster() ;

constexpr bool const& __cordl_internal_get_m_RaysDisabled() const;

constexpr bool& __cordl_internal_get_m_RaysDisabled() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster> const& __cordl_internal_get_m_TrackedDeviceGraphicRaycaster() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>& __cordl_internal_get_m_TrackedDeviceGraphicRaycaster() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker> const& __cordl_internal_get_m_Tracker() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>& __cordl_internal_get_m_Tracker() ;

constexpr bool const& __cordl_internal_get_m_WasNested() const;

constexpr bool& __cordl_internal_get_m_WasNested() ;

constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set_m_CanvasScalerSettings(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings*  value) ;

constexpr void __cordl_internal_set_m_CanvasSettings(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings*  value) ;

constexpr void __cordl_internal_set_m_CheckTimer(float_t  value) ;

constexpr void __cordl_internal_set_m_GraphicRaycasterSettings(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings*  value) ;

constexpr void __cordl_internal_set_m_Nested(bool  value) ;

constexpr void __cordl_internal_set_m_Raycaster(::UnityW<::UnityEngine::UI::GraphicRaycaster>  value) ;

constexpr void __cordl_internal_set_m_RaysDisabled(bool  value) ;

constexpr void __cordl_internal_set_m_TrackedDeviceGraphicRaycaster(::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>  value) ;

constexpr void __cordl_internal_set_m_Tracker(::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>  value) ;

constexpr void __cordl_internal_set_m_WasNested(bool  value) ;

/// @brief Method .ctor, addr 0xb42fcbc, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasOptimizer_CanvasState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasOptimizer_CanvasState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasOptimizer_CanvasState(CanvasOptimizer_CanvasState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasOptimizer_CanvasState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasOptimizer_CanvasState(CanvasOptimizer_CanvasState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11275};

/// @brief Field k_CanvasCheckInterval offset 0xffffffff size 0x4
static constexpr float_t  k_CanvasCheckInterval{static_cast<float_t>(0.5f)};

/// @brief Field m_Tracker, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker>  ___m_Tracker;

/// @brief Field m_CanvasSettings, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings*  ___m_CanvasSettings;

/// @brief Field m_CanvasScalerSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings*  ___m_CanvasScalerSettings;

/// @brief Field m_GraphicRaycasterSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings*  ___m_GraphicRaycasterSettings;

/// @brief Field m_WasNested, offset: 0x30, size: 0x1, def value: None
 bool  ___m_WasNested;

/// @brief Field m_Nested, offset: 0x31, size: 0x1, def value: None
 bool  ___m_Nested;

/// @brief Field m_RaysDisabled, offset: 0x32, size: 0x1, def value: None
 bool  ___m_RaysDisabled;

/// @brief Field m_Canvas, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ___m_Canvas;

/// @brief Field m_Raycaster, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::GraphicRaycaster>  ___m_Raycaster;

/// @brief Field m_TrackedDeviceGraphicRaycaster, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>  ___m_TrackedDeviceGraphicRaycaster;

/// @brief Field m_CheckTimer, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_CheckTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_Tracker) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_CanvasSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_CanvasScalerSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_GraphicRaycasterSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_WasNested) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_Nested) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_RaysDisabled) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_Canvas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_Raycaster) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_TrackedDeviceGraphicRaycaster) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState, ___m_CheckTimer) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasOptimizer_CanvasState) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
// Dependencies System.Object, UnityEngine.LayerMask, UnityEngine.UI.GraphicRaycaster::BlockingObjects
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer/CanvasState/GraphicRaycasterSettings
class CORDL_TYPE CanvasState_CanvasOptimizer_GraphicRaycasterSettings : public ::System::Object {
public:
// Declarations
/// @brief Field <present>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__present_k__BackingField, put=__cordl_internal_set__present_k__BackingField)) bool  _present_k__BackingField;

/// @brief Field m_BlockingMask, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BlockingMask, put=__cordl_internal_set_m_BlockingMask)) ::UnityEngine::LayerMask  m_BlockingMask;

/// @brief Field m_BlockingObjects, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BlockingObjects, put=__cordl_internal_set_m_BlockingObjects)) ::GlobalNamespace::GraphicRaycaster_BlockingObjects  m_BlockingObjects;

/// @brief Field m_IgnoreReversedGraphics, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreReversedGraphics, put=__cordl_internal_set_m_IgnoreReversedGraphics)) bool  m_IgnoreReversedGraphics;

 __declspec(property(get=get_present, put=set_present)) bool  present;

/// @brief Method CopyFrom, addr 0xb4307f8, size 0x28, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::UI::GraphicRaycaster*  source) ;

/// @brief Method CopyTo, addr 0xb430a7c, size 0x28, virtual false, abstract: false, final false
inline void CopyTo(::UnityEngine::UI::GraphicRaycaster*  dest) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get__present_k__BackingField() const;

constexpr bool& __cordl_internal_get__present_k__BackingField() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_BlockingMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_BlockingMask() ;

constexpr ::GlobalNamespace::GraphicRaycaster_BlockingObjects const& __cordl_internal_get_m_BlockingObjects() const;

constexpr ::GlobalNamespace::GraphicRaycaster_BlockingObjects& __cordl_internal_get_m_BlockingObjects() ;

constexpr bool const& __cordl_internal_get_m_IgnoreReversedGraphics() const;

constexpr bool& __cordl_internal_get_m_IgnoreReversedGraphics() ;

constexpr void __cordl_internal_set__present_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_BlockingObjects(::GlobalNamespace::GraphicRaycaster_BlockingObjects  value) ;

constexpr void __cordl_internal_set_m_IgnoreReversedGraphics(bool  value) ;

/// @brief Method .ctor, addr 0xb430ab4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_present, addr 0xb430adc, size 0x8, virtual false, abstract: false, final false
inline bool get_present() ;

/// [CompilerGenerated]
/// @brief Method set_present, addr 0xb430ae4, size 0x8, virtual false, abstract: false, final false
inline void set_present(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasState_CanvasOptimizer_GraphicRaycasterSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasState_CanvasOptimizer_GraphicRaycasterSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasState_CanvasOptimizer_GraphicRaycasterSettings(CanvasState_CanvasOptimizer_GraphicRaycasterSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasState_CanvasOptimizer_GraphicRaycasterSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasState_CanvasOptimizer_GraphicRaycasterSettings(CanvasState_CanvasOptimizer_GraphicRaycasterSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11274};

/// [CompilerGenerated]
/// @brief Field <present>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____present_k__BackingField;

/// @brief Field m_BlockingMask, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_BlockingMask;

/// @brief Field m_BlockingObjects, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::GraphicRaycaster_BlockingObjects  ___m_BlockingObjects;

/// @brief Field m_IgnoreReversedGraphics, offset: 0x1c, size: 0x1, def value: None
 bool  ___m_IgnoreReversedGraphics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings, ____present_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings, ___m_BlockingMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings, ___m_BlockingObjects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings, ___m_IgnoreReversedGraphics) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_GraphicRaycasterSettings) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
// Dependencies System.Object, UnityEngine.UI.CanvasScaler::ScaleMode, UnityEngine.UI.CanvasScaler::ScreenMatchMode, UnityEngine.UI.CanvasScaler::Unit, UnityEngine.Vector2
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer/CanvasState/CanvasScalerSettings
class CORDL_TYPE CanvasState_CanvasOptimizer_CanvasScalerSettings : public ::System::Object {
public:
// Declarations
/// @brief Field <present>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__present_k__BackingField, put=__cordl_internal_set__present_k__BackingField)) bool  _present_k__BackingField;

/// @brief Field m_DefaultSpriteDPI, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultSpriteDPI, put=__cordl_internal_set_m_DefaultSpriteDPI)) float_t  m_DefaultSpriteDPI;

/// @brief Field m_DynamicPixelsPerUnit, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DynamicPixelsPerUnit, put=__cordl_internal_set_m_DynamicPixelsPerUnit)) float_t  m_DynamicPixelsPerUnit;

/// @brief Field m_FallbackScreenDPI, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FallbackScreenDPI, put=__cordl_internal_set_m_FallbackScreenDPI)) float_t  m_FallbackScreenDPI;

/// @brief Field m_MatchWidthOrHeight, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MatchWidthOrHeight, put=__cordl_internal_set_m_MatchWidthOrHeight)) float_t  m_MatchWidthOrHeight;

/// @brief Field m_PhysicalUnit, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PhysicalUnit, put=__cordl_internal_set_m_PhysicalUnit)) ::GlobalNamespace::CanvasScaler_Unit  m_PhysicalUnit;

/// @brief Field m_ReferencePixelsPerUnit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ReferencePixelsPerUnit, put=__cordl_internal_set_m_ReferencePixelsPerUnit)) float_t  m_ReferencePixelsPerUnit;

/// @brief Field m_ReferenceResolution, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReferenceResolution, put=__cordl_internal_set_m_ReferenceResolution)) ::UnityEngine::Vector2  m_ReferenceResolution;

/// @brief Field m_ScaleFactor, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScaleFactor, put=__cordl_internal_set_m_ScaleFactor)) float_t  m_ScaleFactor;

/// @brief Field m_ScreenMatchMode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScreenMatchMode, put=__cordl_internal_set_m_ScreenMatchMode)) ::GlobalNamespace::CanvasScaler_ScreenMatchMode  m_ScreenMatchMode;

/// @brief Field m_UiScaleMode, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UiScaleMode, put=__cordl_internal_set_m_UiScaleMode)) ::GlobalNamespace::CanvasScaler_ScaleMode  m_UiScaleMode;

 __declspec(property(get=get_present, put=set_present)) bool  present;

/// @brief Method CopyFrom, addr 0xb4307a4, size 0x54, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::UI::CanvasScaler*  source) ;

/// @brief Method CopyTo, addr 0xb4309f8, size 0x84, virtual false, abstract: false, final false
inline void CopyTo(::UnityEngine::UI::CanvasScaler*  dest) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get__present_k__BackingField() const;

constexpr bool& __cordl_internal_get__present_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_DefaultSpriteDPI() const;

constexpr float_t& __cordl_internal_get_m_DefaultSpriteDPI() ;

constexpr float_t const& __cordl_internal_get_m_DynamicPixelsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_DynamicPixelsPerUnit() ;

constexpr float_t const& __cordl_internal_get_m_FallbackScreenDPI() const;

constexpr float_t& __cordl_internal_get_m_FallbackScreenDPI() ;

constexpr float_t const& __cordl_internal_get_m_MatchWidthOrHeight() const;

constexpr float_t& __cordl_internal_get_m_MatchWidthOrHeight() ;

constexpr ::GlobalNamespace::CanvasScaler_Unit const& __cordl_internal_get_m_PhysicalUnit() const;

constexpr ::GlobalNamespace::CanvasScaler_Unit& __cordl_internal_get_m_PhysicalUnit() ;

constexpr float_t const& __cordl_internal_get_m_ReferencePixelsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_ReferencePixelsPerUnit() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ReferenceResolution() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ReferenceResolution() ;

constexpr float_t const& __cordl_internal_get_m_ScaleFactor() const;

constexpr float_t& __cordl_internal_get_m_ScaleFactor() ;

constexpr ::GlobalNamespace::CanvasScaler_ScreenMatchMode const& __cordl_internal_get_m_ScreenMatchMode() const;

constexpr ::GlobalNamespace::CanvasScaler_ScreenMatchMode& __cordl_internal_get_m_ScreenMatchMode() ;

constexpr ::GlobalNamespace::CanvasScaler_ScaleMode const& __cordl_internal_get_m_UiScaleMode() const;

constexpr ::GlobalNamespace::CanvasScaler_ScaleMode& __cordl_internal_get_m_UiScaleMode() ;

constexpr void __cordl_internal_set__present_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_DefaultSpriteDPI(float_t  value) ;

constexpr void __cordl_internal_set_m_DynamicPixelsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_FallbackScreenDPI(float_t  value) ;

constexpr void __cordl_internal_set_m_MatchWidthOrHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_PhysicalUnit(::GlobalNamespace::CanvasScaler_Unit  value) ;

constexpr void __cordl_internal_set_m_ReferencePixelsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_ReferenceResolution(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_ScaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_m_ScreenMatchMode(::GlobalNamespace::CanvasScaler_ScreenMatchMode  value) ;

constexpr void __cordl_internal_set_m_UiScaleMode(::GlobalNamespace::CanvasScaler_ScaleMode  value) ;

/// @brief Method .ctor, addr 0xb430aac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_present, addr 0xb430acc, size 0x8, virtual false, abstract: false, final false
inline bool get_present() ;

/// [CompilerGenerated]
/// @brief Method set_present, addr 0xb430ad4, size 0x8, virtual false, abstract: false, final false
inline void set_present(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasState_CanvasOptimizer_CanvasScalerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasState_CanvasOptimizer_CanvasScalerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasState_CanvasOptimizer_CanvasScalerSettings(CanvasState_CanvasOptimizer_CanvasScalerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasState_CanvasOptimizer_CanvasScalerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasState_CanvasOptimizer_CanvasScalerSettings(CanvasState_CanvasOptimizer_CanvasScalerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11273};

/// [CompilerGenerated]
/// @brief Field <present>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____present_k__BackingField;

/// @brief Field m_DefaultSpriteDPI, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_DefaultSpriteDPI;

/// @brief Field m_DynamicPixelsPerUnit, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_DynamicPixelsPerUnit;

/// @brief Field m_FallbackScreenDPI, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_FallbackScreenDPI;

/// @brief Field m_MatchWidthOrHeight, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_MatchWidthOrHeight;

/// @brief Field m_PhysicalUnit, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::CanvasScaler_Unit  ___m_PhysicalUnit;

/// @brief Field m_ReferencePixelsPerUnit, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_ReferencePixelsPerUnit;

/// @brief Field m_ReferenceResolution, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_ReferenceResolution;

/// @brief Field m_ScaleFactor, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_ScaleFactor;

/// @brief Field m_ScreenMatchMode, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::CanvasScaler_ScreenMatchMode  ___m_ScreenMatchMode;

/// @brief Field m_UiScaleMode, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::CanvasScaler_ScaleMode  ___m_UiScaleMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ____present_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_DefaultSpriteDPI) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_DynamicPixelsPerUnit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_FallbackScreenDPI) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_MatchWidthOrHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_PhysicalUnit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_ReferencePixelsPerUnit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_ReferenceResolution) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_ScaleFactor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_ScreenMatchMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings, ___m_UiScaleMode) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasScalerSettings) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
// Dependencies System.Object, UnityEngine.AdditionalCanvasShaderChannels, UnityEngine.RenderMode
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer/CanvasState/CanvasSettings
class CORDL_TYPE CanvasState_CanvasOptimizer_CanvasSettings : public ::System::Object {
public:
// Declarations
/// @brief Field <present>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__present_k__BackingField, put=__cordl_internal_set__present_k__BackingField)) bool  _present_k__BackingField;

/// @brief Field m_AdditionalShaderChannels, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AdditionalShaderChannels, put=__cordl_internal_set_m_AdditionalShaderChannels)) ::UnityEngine::AdditionalCanvasShaderChannels  m_AdditionalShaderChannels;

/// @brief Field m_NormalizedSortingGridSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NormalizedSortingGridSize, put=__cordl_internal_set_m_NormalizedSortingGridSize)) float_t  m_NormalizedSortingGridSize;

/// @brief Field m_OverridePixelPerfect, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverridePixelPerfect, put=__cordl_internal_set_m_OverridePixelPerfect)) bool  m_OverridePixelPerfect;

/// @brief Field m_OverrideSorting, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideSorting, put=__cordl_internal_set_m_OverrideSorting)) bool  m_OverrideSorting;

/// @brief Field m_PlaneDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PlaneDistance, put=__cordl_internal_set_m_PlaneDistance)) float_t  m_PlaneDistance;

/// @brief Field m_ReferencePixelsPerUnit, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ReferencePixelsPerUnit, put=__cordl_internal_set_m_ReferencePixelsPerUnit)) float_t  m_ReferencePixelsPerUnit;

/// @brief Field m_RenderMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RenderMode, put=__cordl_internal_set_m_RenderMode)) ::UnityEngine::RenderMode  m_RenderMode;

/// @brief Field m_ScaleFactor, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScaleFactor, put=__cordl_internal_set_m_ScaleFactor)) float_t  m_ScaleFactor;

/// @brief Field m_SortingLayerID, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SortingLayerID, put=__cordl_internal_set_m_SortingLayerID)) int32_t  m_SortingLayerID;

/// @brief Field m_SortingLayerName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SortingLayerName, put=__cordl_internal_set_m_SortingLayerName)) ::StringW  m_SortingLayerName;

/// @brief Field m_SortingOrder, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SortingOrder, put=__cordl_internal_set_m_SortingOrder)) int32_t  m_SortingOrder;

/// @brief Field m_TargetDisplay, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetDisplay, put=__cordl_internal_set_m_TargetDisplay)) int32_t  m_TargetDisplay;

 __declspec(property(get=get_present, put=set_present)) bool  present;

/// @brief Method CopyFrom, addr 0xb430820, size 0xf8, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::Canvas*  source) ;

/// @brief Method CopyTo, addr 0xb430918, size 0xe0, virtual false, abstract: false, final false
inline void CopyTo(::UnityEngine::Canvas*  dest) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get__present_k__BackingField() const;

constexpr bool& __cordl_internal_get__present_k__BackingField() ;

constexpr ::UnityEngine::AdditionalCanvasShaderChannels const& __cordl_internal_get_m_AdditionalShaderChannels() const;

constexpr ::UnityEngine::AdditionalCanvasShaderChannels& __cordl_internal_get_m_AdditionalShaderChannels() ;

constexpr float_t const& __cordl_internal_get_m_NormalizedSortingGridSize() const;

constexpr float_t& __cordl_internal_get_m_NormalizedSortingGridSize() ;

constexpr bool const& __cordl_internal_get_m_OverridePixelPerfect() const;

constexpr bool& __cordl_internal_get_m_OverridePixelPerfect() ;

constexpr bool const& __cordl_internal_get_m_OverrideSorting() const;

constexpr bool& __cordl_internal_get_m_OverrideSorting() ;

constexpr float_t const& __cordl_internal_get_m_PlaneDistance() const;

constexpr float_t& __cordl_internal_get_m_PlaneDistance() ;

constexpr float_t const& __cordl_internal_get_m_ReferencePixelsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_ReferencePixelsPerUnit() ;

constexpr ::UnityEngine::RenderMode const& __cordl_internal_get_m_RenderMode() const;

constexpr ::UnityEngine::RenderMode& __cordl_internal_get_m_RenderMode() ;

constexpr float_t const& __cordl_internal_get_m_ScaleFactor() const;

constexpr float_t& __cordl_internal_get_m_ScaleFactor() ;

constexpr int32_t const& __cordl_internal_get_m_SortingLayerID() const;

constexpr int32_t& __cordl_internal_get_m_SortingLayerID() ;

constexpr ::StringW const& __cordl_internal_get_m_SortingLayerName() const;

constexpr ::StringW& __cordl_internal_get_m_SortingLayerName() ;

constexpr int32_t const& __cordl_internal_get_m_SortingOrder() const;

constexpr int32_t& __cordl_internal_get_m_SortingOrder() ;

constexpr int32_t const& __cordl_internal_get_m_TargetDisplay() const;

constexpr int32_t& __cordl_internal_get_m_TargetDisplay() ;

constexpr void __cordl_internal_set__present_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AdditionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels  value) ;

constexpr void __cordl_internal_set_m_NormalizedSortingGridSize(float_t  value) ;

constexpr void __cordl_internal_set_m_OverridePixelPerfect(bool  value) ;

constexpr void __cordl_internal_set_m_OverrideSorting(bool  value) ;

constexpr void __cordl_internal_set_m_PlaneDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_ReferencePixelsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_RenderMode(::UnityEngine::RenderMode  value) ;

constexpr void __cordl_internal_set_m_ScaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_m_SortingLayerID(int32_t  value) ;

constexpr void __cordl_internal_set_m_SortingLayerName(::StringW  value) ;

constexpr void __cordl_internal_set_m_SortingOrder(int32_t  value) ;

constexpr void __cordl_internal_set_m_TargetDisplay(int32_t  value) ;

/// @brief Method .ctor, addr 0xb430aa4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_present, addr 0xb430abc, size 0x8, virtual false, abstract: false, final false
inline bool get_present() ;

/// [CompilerGenerated]
/// @brief Method set_present, addr 0xb430ac4, size 0x8, virtual false, abstract: false, final false
inline void set_present(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasState_CanvasOptimizer_CanvasSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasState_CanvasOptimizer_CanvasSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasState_CanvasOptimizer_CanvasSettings(CanvasState_CanvasOptimizer_CanvasSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasState_CanvasOptimizer_CanvasSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasState_CanvasOptimizer_CanvasSettings(CanvasState_CanvasOptimizer_CanvasSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11272};

/// [CompilerGenerated]
/// @brief Field <present>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____present_k__BackingField;

/// @brief Field m_AdditionalShaderChannels, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::AdditionalCanvasShaderChannels  ___m_AdditionalShaderChannels;

/// @brief Field m_NormalizedSortingGridSize, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_NormalizedSortingGridSize;

/// @brief Field m_OverridePixelPerfect, offset: 0x1c, size: 0x1, def value: None
 bool  ___m_OverridePixelPerfect;

/// @brief Field m_OverrideSorting, offset: 0x1d, size: 0x1, def value: None
 bool  ___m_OverrideSorting;

/// @brief Field m_PlaneDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_PlaneDistance;

/// @brief Field m_ReferencePixelsPerUnit, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_ReferencePixelsPerUnit;

/// @brief Field m_RenderMode, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::RenderMode  ___m_RenderMode;

/// @brief Field m_ScaleFactor, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_ScaleFactor;

/// @brief Field m_SortingLayerID, offset: 0x30, size: 0x4, def value: None
 int32_t  ___m_SortingLayerID;

/// @brief Field m_SortingLayerName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___m_SortingLayerName;

/// @brief Field m_SortingOrder, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_SortingOrder;

/// @brief Field m_TargetDisplay, offset: 0x44, size: 0x4, def value: None
 int32_t  ___m_TargetDisplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ____present_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_AdditionalShaderChannels) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_NormalizedSortingGridSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_OverridePixelPerfect) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_OverrideSorting) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_PlaneDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_ReferencePixelsPerUnit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_RenderMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_ScaleFactor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_SortingLayerID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_SortingLayerName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_SortingOrder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings, ___m_TargetDisplay) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasState_CanvasOptimizer_CanvasSettings) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
