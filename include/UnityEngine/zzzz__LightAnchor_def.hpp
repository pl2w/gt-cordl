#pragma once
// IWYU pragma private; include "UnityEngine/LightAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LightAnchor_UpDirection_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightAnchor)
namespace GlobalNamespace {
struct LightAnchor_Axes;
}
namespace GlobalNamespace {
struct LightAnchor_UpDirection;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LightAnchor;
}
// Write type traits
MARK_REF_T(::UnityEngine::LightAnchor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightAnchor*, "UnityEngine", "LightAnchor");
// [AddComponentMenu("Rendering/Light Anchor")]
// [ExecuteInEditMode]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.LightAnchor::UpDirection, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightAnchor
class CORDL_TYPE LightAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Axes = ::GlobalNamespace::LightAnchor_Axes;

using UpDirection = ::GlobalNamespace::LightAnchor_UpDirection;

 __declspec(property(get=get_anchorPosition)) ::UnityEngine::Vector3  anchorPosition;

 __declspec(property(get=get_anchorPositionOffset, put=set_anchorPositionOffset)) ::UnityEngine::Vector3  anchorPositionOffset;

 __declspec(property(get=get_anchorPositionOverride, put=set_anchorPositionOverride)) ::UnityW<::UnityEngine::Transform>  anchorPositionOverride;

 __declspec(property(get=get_distance, put=set_distance)) float_t  distance;

 __declspec(property(get=get_frameSpace, put=set_frameSpace)) ::GlobalNamespace::LightAnchor_UpDirection  frameSpace;

/// @brief Field m_AnchorPositionOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_AnchorPositionOffset, put=__cordl_internal_set_m_AnchorPositionOffset)) ::UnityEngine::Vector3  m_AnchorPositionOffset;

/// @brief Field m_AnchorPositionOverride, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnchorPositionOverride, put=__cordl_internal_set_m_AnchorPositionOverride)) ::UnityW<::UnityEngine::Transform>  m_AnchorPositionOverride;

/// @brief Field m_Distance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Distance, put=__cordl_internal_set_m_Distance)) float_t  m_Distance;

/// @brief Field m_FrameSpace, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrameSpace, put=__cordl_internal_set_m_FrameSpace)) ::GlobalNamespace::LightAnchor_UpDirection  m_FrameSpace;

/// @brief Field m_Pitch, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Pitch, put=__cordl_internal_set_m_Pitch)) float_t  m_Pitch;

/// @brief Field m_Roll, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Roll, put=__cordl_internal_set_m_Roll)) float_t  m_Roll;

/// @brief Field m_Yaw, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Yaw, put=__cordl_internal_set_m_Yaw)) float_t  m_Yaw;

 __declspec(property(get=get_pitch, put=set_pitch)) float_t  pitch;

 __declspec(property(get=get_roll, put=set_roll)) float_t  roll;

 __declspec(property(get=get_yaw, put=set_yaw)) float_t  yaw;

/// @brief Method GetWorldSpaceAxes, addr 0xb111494, size 0x820, virtual false, abstract: false, final false
inline ::GlobalNamespace::LightAnchor_Axes GetWorldSpaceAxes(::UnityEngine::Camera*  camera, ::UnityEngine::Vector3  anchor) ;

static inline ::UnityEngine::LightAnchor* New_ctor() ;

/// @brief Method NormalizeAngleDegree, addr 0xb110da4, size 0x34, virtual false, abstract: false, final false
static inline float_t NormalizeAngleDegree(float_t  angle) ;

/// @brief Method OnDrawGizmosSelected, addr 0xb1120f4, size 0xd0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method SynchronizeOnTransform, addr 0xb110fc8, size 0x4cc, virtual false, abstract: false, final false
inline void SynchronizeOnTransform(::UnityEngine::Camera*  camera) ;

/// @brief Method Update, addr 0xb111ff4, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTransform, addr 0xb111cb4, size 0x68, virtual false, abstract: false, final false
inline void UpdateTransform(::UnityEngine::Camera*  camera, ::UnityEngine::Vector3  anchor) ;

/// @brief Method UpdateTransform, addr 0xb111d1c, size 0x2d8, virtual false, abstract: false, final false
inline void UpdateTransform(::UnityEngine::Vector3  up, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  anchor) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_AnchorPositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_AnchorPositionOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_AnchorPositionOverride() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_AnchorPositionOverride() ;

constexpr float_t const& __cordl_internal_get_m_Distance() const;

constexpr float_t& __cordl_internal_get_m_Distance() ;

constexpr ::GlobalNamespace::LightAnchor_UpDirection const& __cordl_internal_get_m_FrameSpace() const;

constexpr ::GlobalNamespace::LightAnchor_UpDirection& __cordl_internal_get_m_FrameSpace() ;

constexpr float_t const& __cordl_internal_get_m_Pitch() const;

constexpr float_t& __cordl_internal_get_m_Pitch() ;

constexpr float_t const& __cordl_internal_get_m_Roll() const;

constexpr float_t& __cordl_internal_get_m_Roll() ;

constexpr float_t const& __cordl_internal_get_m_Yaw() const;

constexpr float_t& __cordl_internal_get_m_Yaw() ;

constexpr void __cordl_internal_set_m_AnchorPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_AnchorPositionOverride(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_Distance(float_t  value) ;

constexpr void __cordl_internal_set_m_FrameSpace(::GlobalNamespace::LightAnchor_UpDirection  value) ;

constexpr void __cordl_internal_set_m_Pitch(float_t  value) ;

constexpr void __cordl_internal_set_m_Roll(float_t  value) ;

constexpr void __cordl_internal_set_m_Yaw(float_t  value) ;

/// @brief Method .ctor, addr 0xb1121c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_anchorPosition, addr 0xb110e94, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_anchorPosition() ;

/// @brief Method get_anchorPositionOffset, addr 0xb110fb0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_anchorPositionOffset() ;

/// @brief Method get_anchorPositionOverride, addr 0xb110fa0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_anchorPositionOverride() ;

/// @brief Method get_distance, addr 0xb110e58, size 0x8, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// @brief Method get_frameSpace, addr 0xb110e84, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LightAnchor_UpDirection get_frameSpace() ;

/// @brief Method get_pitch, addr 0xb110dd8, size 0x8, virtual false, abstract: false, final false
inline float_t get_pitch() ;

/// @brief Method get_roll, addr 0xb110e18, size 0x8, virtual false, abstract: false, final false
inline float_t get_roll() ;

/// @brief Method get_yaw, addr 0xb110d64, size 0x8, virtual false, abstract: false, final false
inline float_t get_yaw() ;

/// @brief Method set_anchorPositionOffset, addr 0xb110fbc, size 0xc, virtual false, abstract: false, final false
inline void set_anchorPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_anchorPositionOverride, addr 0xb110fa8, size 0x8, virtual false, abstract: false, final false
inline void set_anchorPositionOverride(::UnityEngine::Transform*  value) ;

/// @brief Method set_distance, addr 0xb110e60, size 0x24, virtual false, abstract: false, final false
inline void set_distance(float_t  value) ;

/// @brief Method set_frameSpace, addr 0xb110e8c, size 0x8, virtual false, abstract: false, final false
inline void set_frameSpace(::GlobalNamespace::LightAnchor_UpDirection  value) ;

/// @brief Method set_pitch, addr 0xb110de0, size 0x38, virtual false, abstract: false, final false
inline void set_pitch(float_t  value) ;

/// @brief Method set_roll, addr 0xb110e20, size 0x38, virtual false, abstract: false, final false
inline void set_roll(float_t  value) ;

/// @brief Method set_yaw, addr 0xb110d6c, size 0x38, virtual false, abstract: false, final false
inline void set_yaw(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightAnchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightAnchor(LightAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightAnchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightAnchor(LightAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16565};

/// @brief Field k_ArcRadius offset 0xffffffff size 0x4
static constexpr float_t  k_ArcRadius{static_cast<float_t>(5.0f)};

/// @brief Field k_AxisLength offset 0xffffffff size 0x4
static constexpr float_t  k_AxisLength{static_cast<float_t>(10.0f)};

/// @brief Field k_MaxDistance offset 0xffffffff size 0x4
static constexpr float_t  k_MaxDistance{static_cast<float_t>(10000.0f)};

/// [SerializeField]
/// [Min(0)]
/// @brief Field m_Distance, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_Distance;

/// [SerializeField]
/// @brief Field m_FrameSpace, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::LightAnchor_UpDirection  ___m_FrameSpace;

/// [SerializeField]
/// @brief Field m_AnchorPositionOverride, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_AnchorPositionOverride;

/// [SerializeField]
/// @brief Field m_AnchorPositionOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_AnchorPositionOffset;

/// [SerializeField]
/// @brief Field m_Yaw, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_Yaw;

/// [SerializeField]
/// @brief Field m_Pitch, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_Pitch;

/// [SerializeField]
/// @brief Field m_Roll, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_Roll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightAnchor, ___m_Distance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightAnchor, ___m_FrameSpace) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightAnchor, ___m_AnchorPositionOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightAnchor, ___m_AnchorPositionOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightAnchor, ___m_Yaw) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightAnchor, ___m_Pitch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightAnchor, ___m_Roll) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LightAnchor) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine
