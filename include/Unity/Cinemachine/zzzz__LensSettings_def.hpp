#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LensSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__LensSettings_OverrideModes_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_PhysicalSettings_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LensSettings)
namespace GlobalNamespace {
struct LensSettings_OverrideModes;
}
namespace GlobalNamespace {
struct LensSettings_PhysicalSettings;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct LensSettings;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::LensSettings);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::LensSettings, "Unity.Cinemachine", "LensSettings");
// Dependencies Unity.Cinemachine.LensSettings::OverrideModes, Unity.Cinemachine.LensSettings::PhysicalSettings
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.LensSettings
struct CORDL_TYPE LensSettings {
public:
// Declarations
using OverrideModes = ::GlobalNamespace::LensSettings_OverrideModes;

using PhysicalSettings = ::GlobalNamespace::LensSettings_PhysicalSettings;

 __declspec(property(get=get_Aspect)) float_t  Aspect;

 __declspec(property(get=get_IsPhysicalCamera)) bool  IsPhysicalCamera;

 __declspec(property(get=get_Orthographic)) bool  Orthographic;

/// @brief Method AreEqual, addr 0xaeb8c18, size 0x298, virtual false, abstract: false, final false
static inline bool AreEqual(::by_ref<::Unity::Cinemachine::LensSettings>  a, ::by_ref<::Unity::Cinemachine::LensSettings>  b) ;

/// @brief Method CopyCameraMode, addr 0xaeb8800, size 0x20, virtual false, abstract: false, final false
inline void CopyCameraMode(::by_ref<::Unity::Cinemachine::LensSettings>  fromLens) ;

/// @brief Method FromCamera, addr 0xaeb8574, size 0x28c, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::LensSettings FromCamera(::UnityEngine::Camera*  fromCamera) ;

/// @brief Method Lerp, addr 0xaeac6a8, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::LensSettings Lerp(::Unity::Cinemachine::LensSettings  lensA, ::Unity::Cinemachine::LensSettings  lensB, float_t  t) ;

/// @brief Method Lerp, addr 0xaeb8820, size 0x2c4, virtual false, abstract: false, final false
inline void Lerp(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::LensSettings>  lensB, float_t  t) ;

/// @brief Method PullInheritedPropertiesFromCamera, addr 0xaeb4cf8, size 0x6c, virtual false, abstract: false, final false
inline void PullInheritedPropertiesFromCamera(::UnityEngine::Camera*  camera) ;

/// @brief Method Validate, addr 0xaeb8ae4, size 0x134, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_Aspect, addr 0xaead158, size 0x2c, virtual false, abstract: false, final false
inline float_t get_Aspect() ;

/// @brief Method get_Default, addr 0xaeab38c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::LensSettings get_Default() ;

/// @brief Method get_IsPhysicalCamera, addr 0xaeb8544, size 0x30, virtual false, abstract: false, final false
inline bool get_IsPhysicalCamera() ;

/// @brief Method get_Orthographic, addr 0xaeac838, size 0x30, virtual false, abstract: false, final false
inline bool get_Orthographic() ;

// Ctor Parameters []
// @brief default ctor
constexpr LensSettings() ;

// Ctor Parameters [CppParam { name: "FieldOfView", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OrthographicSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NearClipPlane", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FarClipPlane", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Dutch", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModeOverride", ty: "::GlobalNamespace::LensSettings_OverrideModes", modifiers: "", def_value: None, comment: None }, CppParam { name: "PhysicalProperties", ty: "::GlobalNamespace::LensSettings_PhysicalSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OrthoFromCamera", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PhysicalFromCamera", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AspectFromCamera", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LensSettings(float_t  FieldOfView, float_t  OrthographicSize, float_t  NearClipPlane, float_t  FarClipPlane, float_t  Dutch, ::GlobalNamespace::LensSettings_OverrideModes  ModeOverride, ::GlobalNamespace::LensSettings_PhysicalSettings  PhysicalProperties, bool  m_OrthoFromCamera, bool  m_PhysicalFromCamera, float_t  m_AspectFromCamera) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// [Tooltip("This setting controls the Field of View or Local Length of the lens, depending on whether the camera mode is physical or nonphysical.  Field of View can be either horizontal or vertical, depending on the setting in the Camera component.")]
/// @brief Field FieldOfView, offset: 0x0, size: 0x4, def value: None
 float_t  FieldOfView;

/// [Tooltip("When using an orthographic camera, this defines the half-height, in world coordinates, of the camera view.")]
/// @brief Field OrthographicSize, offset: 0x4, size: 0x4, def value: None
 float_t  OrthographicSize;

/// [Tooltip("This defines the near region in the renderable range of the camera frustum. Raising this value will stop the game from drawing things near the camera, which can sometimes come in handy.  Larger values will also increase your shadow resolution.")]
/// @brief Field NearClipPlane, offset: 0x8, size: 0x4, def value: None
 float_t  NearClipPlane;

/// [Tooltip("This defines the far region of the renderable range of the camera frustum. Typically you want to set this value as low as possible without cutting off desired distant objects")]
/// @brief Field FarClipPlane, offset: 0xc, size: 0x4, def value: None
 float_t  FarClipPlane;

/// [Tooltip("Camera Z roll, or tilt, in degrees.")]
/// @brief Field Dutch, offset: 0x10, size: 0x4, def value: None
 float_t  Dutch;

/// [Tooltip("Allows you to select a different camera mode to apply to the Camera component when Cinemachine activates this Virtual Camera.")]
/// @brief Field ModeOverride, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::LensSettings_OverrideModes  ModeOverride;

/// @brief Field PhysicalProperties, offset: 0x18, size: 0x38, def value: None
 ::GlobalNamespace::LensSettings_PhysicalSettings  PhysicalProperties;

/// @brief Field m_OrthoFromCamera, offset: 0x50, size: 0x1, def value: None
 bool  m_OrthoFromCamera;

/// @brief Field m_PhysicalFromCamera, offset: 0x51, size: 0x1, def value: None
 bool  m_PhysicalFromCamera;

/// @brief Field m_AspectFromCamera, offset: 0x54, size: 0x4, def value: None
 float_t  m_AspectFromCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::LensSettings, FieldOfView) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, OrthographicSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, NearClipPlane) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, FarClipPlane) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, Dutch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, ModeOverride) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, PhysicalProperties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, m_OrthoFromCamera) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, m_PhysicalFromCamera) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LensSettings, m_AspectFromCamera) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::LensSettings) == 0x58, "Size mismatch!");

} // namespace end def Unity::Cinemachine
