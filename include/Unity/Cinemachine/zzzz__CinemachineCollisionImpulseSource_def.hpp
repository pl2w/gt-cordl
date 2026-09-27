#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCollisionImpulseSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineImpulseSource_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineCollisionImpulseSource)
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision2D;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineCollisionImpulseSource;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineCollisionImpulseSource*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCollisionImpulseSource*, "Unity.Cinemachine", "CinemachineCollisionImpulseSource");
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Collision Impulse Source")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineCollisionImpulseSource.html")]
// Dependencies Unity.Cinemachine.CinemachineImpulseSource, UnityEngine.LayerMask
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCollisionImpulseSource
class CORDL_TYPE CinemachineCollisionImpulseSource : public ::Unity::Cinemachine::CinemachineImpulseSource {
public:
// Declarations
/// @brief Field IgnoreTag, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_IgnoreTag, put=__cordl_internal_set_IgnoreTag)) ::StringW  IgnoreTag;

/// @brief Field LayerMask, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_LayerMask, put=__cordl_internal_set_LayerMask)) ::UnityEngine::LayerMask  LayerMask;

/// @brief Field ScaleImpactWithMass, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_ScaleImpactWithMass, put=__cordl_internal_set_ScaleImpactWithMass)) bool  ScaleImpactWithMass;

/// @brief Field ScaleImpactWithSpeed, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_ScaleImpactWithSpeed, put=__cordl_internal_set_ScaleImpactWithSpeed)) bool  ScaleImpactWithSpeed;

/// @brief Field UseImpactDirection, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseImpactDirection, put=__cordl_internal_set_UseImpactDirection)) bool  UseImpactDirection;

/// @brief Field m_RigidBody, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RigidBody, put=__cordl_internal_set_m_RigidBody)) ::UnityW<::UnityEngine::Rigidbody>  m_RigidBody;

/// @brief Field m_RigidBody2D, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RigidBody2D, put=__cordl_internal_set_m_RigidBody2D)) ::UnityW<::UnityEngine::Rigidbody2D>  m_RigidBody2D;

/// @brief Method GenerateImpactEvent, addr 0xaee15b4, size 0x2dc, virtual false, abstract: false, final false
inline void GenerateImpactEvent(::UnityEngine::Collider*  other, ::UnityEngine::Vector3  vel) ;

/// @brief Method GenerateImpactEvent2D, addr 0xaee1b4c, size 0x2dc, virtual false, abstract: false, final false
inline void GenerateImpactEvent2D(::UnityEngine::Collider2D*  other2d, ::UnityEngine::Vector3  vel) ;

/// @brief Method GetMassAndVelocity, addr 0xaee18ec, size 0x214, virtual false, abstract: false, final false
inline float_t GetMassAndVelocity(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  vel) ;

/// @brief Method GetMassAndVelocity2D, addr 0xaee1e84, size 0x20c, virtual false, abstract: false, final false
inline float_t GetMassAndVelocity2D(::UnityEngine::Collider2D*  other2d, ::by_ref<::UnityEngine::Vector3>  vel) ;

static inline ::Unity::Cinemachine::CinemachineCollisionImpulseSource* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0xaee156c, size 0x48, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  c) ;

/// @brief Method OnCollisionEnter2D, addr 0xaee1b00, size 0x4c, virtual false, abstract: false, final false
inline void OnCollisionEnter2D(::UnityEngine::Collision2D*  c) ;

/// @brief Method OnEnable, addr 0xaee1568, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0xaee1890, size 0x5c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  c) ;

/// @brief Method OnTriggerEnter2D, addr 0xaee1e28, size 0x5c, virtual false, abstract: false, final false
inline void OnTriggerEnter2D(::UnityEngine::Collider2D*  c) ;

/// @brief Method Reset, addr 0xaee14a8, size 0x48, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xaee14f0, size 0x78, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::StringW const& __cordl_internal_get_IgnoreTag() const;

constexpr ::StringW& __cordl_internal_get_IgnoreTag() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_LayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_LayerMask() ;

constexpr bool const& __cordl_internal_get_ScaleImpactWithMass() const;

constexpr bool& __cordl_internal_get_ScaleImpactWithMass() ;

constexpr bool const& __cordl_internal_get_ScaleImpactWithSpeed() const;

constexpr bool& __cordl_internal_get_ScaleImpactWithSpeed() ;

constexpr bool const& __cordl_internal_get_UseImpactDirection() const;

constexpr bool& __cordl_internal_get_UseImpactDirection() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_RigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_RigidBody() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_m_RigidBody2D() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_m_RigidBody2D() ;

constexpr void __cordl_internal_set_IgnoreTag(::StringW  value) ;

constexpr void __cordl_internal_set_LayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_ScaleImpactWithMass(bool  value) ;

constexpr void __cordl_internal_set_ScaleImpactWithSpeed(bool  value) ;

constexpr void __cordl_internal_set_UseImpactDirection(bool  value) ;

constexpr void __cordl_internal_set_m_RigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_m_RigidBody2D(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

/// @brief Method .ctor, addr 0xaee2090, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCollisionImpulseSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCollisionImpulseSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCollisionImpulseSource(CinemachineCollisionImpulseSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCollisionImpulseSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCollisionImpulseSource(CinemachineCollisionImpulseSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22467};

/// [Header("Trigger Object Filter")]
/// [Tooltip("Only collisions with objects on these layers will generate Impulse events")]
/// [FormerlySerializedAs("m_LayerMask")]
/// @brief Field LayerMask, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___LayerMask;

/// [TagField]
/// [Tooltip("No Impulse events will be generated for collisions with objects having these tags")]
/// [FormerlySerializedAs("m_IgnoreTag")]
/// @brief Field IgnoreTag, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___IgnoreTag;

/// [Header("How To Generate The Impulse")]
/// [Tooltip("If checked, signal direction will be affected by the direction of impact")]
/// [FormerlySerializedAs("m_UseImpactDirection")]
/// @brief Field UseImpactDirection, offset: 0x40, size: 0x1, def value: None
 bool  ___UseImpactDirection;

/// [Tooltip("If checked, signal amplitude will be multiplied by the mass of the impacting object")]
/// [FormerlySerializedAs("m_ScaleImpactWithMass")]
/// @brief Field ScaleImpactWithMass, offset: 0x41, size: 0x1, def value: None
 bool  ___ScaleImpactWithMass;

/// [Tooltip("If checked, signal amplitude will be multiplied by the speed of the impacting object")]
/// [FormerlySerializedAs("m_ScaleImpactWithSpeed")]
/// @brief Field ScaleImpactWithSpeed, offset: 0x42, size: 0x1, def value: None
 bool  ___ScaleImpactWithSpeed;

/// @brief Field m_RigidBody, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_RigidBody;

/// @brief Field m_RigidBody2D, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___m_RigidBody2D;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineCollisionImpulseSource, ___LayerMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollisionImpulseSource, ___IgnoreTag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollisionImpulseSource, ___UseImpactDirection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollisionImpulseSource, ___ScaleImpactWithMass) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollisionImpulseSource, ___ScaleImpactWithSpeed) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollisionImpulseSource, ___m_RigidBody) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollisionImpulseSource, ___m_RigidBody2D) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineCollisionImpulseSource) == 0x58, "Size mismatch!");

} // namespace end def Unity::Cinemachine
