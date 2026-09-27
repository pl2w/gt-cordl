#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/ScreenSpaceRayPoseDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceRayPoseDriver)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class UnityObjectReferenceCache_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
class ScreenSpaceRayPoseDriver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*, "UnityEngine.XR.Interaction.Toolkit.AR.Inputs", "ScreenSpaceRayPoseDriver");
// [AddComponentMenu("XR/Input/Screen Space Ray Pose Driver", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceRayPoseDriver.html")]
// [DefaultExecutionOrder(-31000)]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceRayPoseDriver
class CORDL_TYPE ScreenSpaceRayPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_controllerCamera, put=set_controllerCamera)) ::UnityW<::UnityEngine::Camera>  controllerCamera;

 __declspec(property(get=get_dragCurrentPositionInput, put=set_dragCurrentPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  dragCurrentPositionInput;

 __declspec(property(get=get_dragStartPositionInput, put=set_dragStartPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  dragStartPositionInput;

/// @brief Field m_ControllerCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllerCamera, put=__cordl_internal_set_m_ControllerCamera)) ::UnityW<::UnityEngine::Camera>  m_ControllerCamera;

/// @brief Field m_DragCurrentPositionInput, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragCurrentPositionInput, put=__cordl_internal_set_m_DragCurrentPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_DragCurrentPositionInput;

/// @brief Field m_DragStartPosition, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragStartPosition, put=__cordl_internal_set_m_DragStartPosition)) ::UnityEngine::Vector2  m_DragStartPosition;

/// @brief Field m_DragStartPositionInput, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragStartPositionInput, put=__cordl_internal_set_m_DragStartPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_DragStartPositionInput;

/// @brief Field m_ParentTransformCache, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ParentTransformCache, put=__cordl_internal_set_m_ParentTransformCache)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::Transform>>*  m_ParentTransformCache;

/// @brief Field m_ScreenTouchCountInput, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScreenTouchCountInput, put=__cordl_internal_set_m_ScreenTouchCountInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  m_ScreenTouchCountInput;

/// @brief Field m_TapStartPosition, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TapStartPosition, put=__cordl_internal_set_m_TapStartPosition)) ::UnityEngine::Vector2  m_TapStartPosition;

/// @brief Field m_TapStartPositionInput, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TapStartPositionInput, put=__cordl_internal_set_m_TapStartPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_TapStartPositionInput;

 __declspec(property(get=get_screenTouchCountInput, put=set_screenTouchCountInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  screenTouchCountInput;

 __declspec(property(get=get_tapStartPositionInput, put=set_tapStartPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  tapStartPositionInput;

/// @brief Method ApplyPose, addr 0xb4cfee0, size 0x26c, virtual false, abstract: false, final false
inline void ApplyPose(::UnityEngine::Vector2  screenPosition) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4cfd20, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4cfbd8, size 0x148, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0xb4cfd60, size 0x180, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_ControllerCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_ControllerCamera() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_DragCurrentPositionInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_DragCurrentPositionInput() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_DragStartPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_DragStartPosition() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_DragStartPositionInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_DragStartPositionInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_m_ParentTransformCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_m_ParentTransformCache() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* const& __cordl_internal_get_m_ScreenTouchCountInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*& __cordl_internal_get_m_ScreenTouchCountInput() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_TapStartPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_TapStartPosition() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_TapStartPositionInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_TapStartPositionInput() ;

constexpr void __cordl_internal_set_m_ControllerCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_DragCurrentPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_DragStartPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_DragStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_ParentTransformCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_m_ScreenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_TapStartPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_TapStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method .ctor, addr 0xb4d014c, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_controllerCamera, addr 0xb4cfa38, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_controllerCamera() ;

/// @brief Method get_dragCurrentPositionInput, addr 0xb4cfb10, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_dragCurrentPositionInput() ;

/// @brief Method get_dragStartPositionInput, addr 0xb4cfaac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_dragStartPositionInput() ;

/// @brief Method get_screenTouchCountInput, addr 0xb4cfb74, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* get_screenTouchCountInput() ;

/// @brief Method get_tapStartPositionInput, addr 0xb4cfa48, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_tapStartPositionInput() ;

/// @brief Method set_controllerCamera, addr 0xb4cfa40, size 0x8, virtual false, abstract: false, final false
inline void set_controllerCamera(::UnityEngine::Camera*  value) ;

/// @brief Method set_dragCurrentPositionInput, addr 0xb4cfb18, size 0x5c, virtual false, abstract: false, final false
inline void set_dragCurrentPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_dragStartPositionInput, addr 0xb4cfab4, size 0x5c, virtual false, abstract: false, final false
inline void set_dragStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_screenTouchCountInput, addr 0xb4cfb7c, size 0x5c, virtual false, abstract: false, final false
inline void set_screenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value) ;

/// @brief Method set_tapStartPositionInput, addr 0xb4cfa50, size 0x5c, virtual false, abstract: false, final false
inline void set_tapStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceRayPoseDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceRayPoseDriver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenSpaceRayPoseDriver(ScreenSpaceRayPoseDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceRayPoseDriver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenSpaceRayPoseDriver(ScreenSpaceRayPoseDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11702};

/// [SerializeField]
/// [Tooltip("The camera associated with the screen, and through which screen presses/touches will be interpreted.")]
/// @brief Field m_ControllerCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_ControllerCamera;

/// [SerializeField]
/// @brief Field m_TapStartPositionInput, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_TapStartPositionInput;

/// [SerializeField]
/// @brief Field m_DragStartPositionInput, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_DragStartPositionInput;

/// [SerializeField]
/// @brief Field m_DragCurrentPositionInput, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_DragCurrentPositionInput;

/// [SerializeField]
/// [Tooltip("The input used to read the screen touch count value.")]
/// @brief Field m_ScreenTouchCountInput, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  ___m_ScreenTouchCountInput;

/// @brief Field m_ParentTransformCache, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::Transform>>*  ___m_ParentTransformCache;

/// @brief Field m_TapStartPosition, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_TapStartPosition;

/// @brief Field m_DragStartPosition, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_DragStartPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver, ___m_ControllerCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver, ___m_TapStartPositionInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver, ___m_DragStartPositionInput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver, ___m_DragCurrentPositionInput) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver, ___m_ScreenTouchCountInput) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver, ___m_ParentTransformCache) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver, ___m_TapStartPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver, ___m_DragStartPosition) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AR::Inputs
