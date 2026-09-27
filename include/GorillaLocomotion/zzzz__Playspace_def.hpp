#pragma once
// IWYU pragma private; include "GorillaLocomotion/Playspace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Playspace)
namespace GorillaLocomotion {
class GTPlayer;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaLocomotion {
class Playspace;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Playspace*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Playspace*, "GorillaLocomotion", "Playspace");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion {
// Is value type: false
// CS Name: GorillaLocomotion.Playspace
class CORDL_TYPE Playspace : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _defaultChaseSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultChaseSpeed, put=__cordl_internal_set__defaultChaseSpeed)) float_t  _defaultChaseSpeed;

/// @brief Field _localGorillaHead, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__localGorillaHead, put=__cordl_internal_set__localGorillaHead)) ::UnityW<::UnityEngine::GameObject>  _localGorillaHead;

/// @brief Field _snapToThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapToThreshold, put=__cordl_internal_set__snapToThreshold)) float_t  _snapToThreshold;

/// @brief Field _sphereRadius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__sphereRadius, put=__cordl_internal_set__sphereRadius)) float_t  _sphereRadius;

/// @brief Field _sqrSnapToThreshold, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__sqrSnapToThreshold, put=__cordl_internal_set__sqrSnapToThreshold)) float_t  _sqrSnapToThreshold;

/// @brief Field _sqrSphereRadius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sqrSphereRadius, put=__cordl_internal_set__sqrSphereRadius)) float_t  _sqrSphereRadius;

/// @brief Field m_gtPlayer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gtPlayer, put=__cordl_internal_set_m_gtPlayer)) ::UnityW<::GorillaLocomotion::GTPlayer>  m_gtPlayer;

/// @brief Field m_xrBody, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_xrBody, put=__cordl_internal_set_m_xrBody)) ::UnityW<::UnityEngine::Transform>  m_xrBody;

/// @brief Field m_xrOrigin, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_xrOrigin, put=__cordl_internal_set_m_xrOrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  m_xrOrigin;

/// @brief Method Awake, addr 0x5cdde00, size 0x1c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetChaseSpeed, addr 0x5cde1e8, size 0x8, virtual false, abstract: false, final false
inline float_t GetChaseSpeed() ;

static inline ::GorillaLocomotion::Playspace* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5cde1f0, size 0x30, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Start, addr 0x5cdde1c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5cdde20, size 0x3c8, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__defaultChaseSpeed() const;

constexpr float_t& __cordl_internal_get__defaultChaseSpeed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__localGorillaHead() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__localGorillaHead() ;

constexpr float_t const& __cordl_internal_get__snapToThreshold() const;

constexpr float_t& __cordl_internal_get__snapToThreshold() ;

constexpr float_t const& __cordl_internal_get__sphereRadius() const;

constexpr float_t& __cordl_internal_get__sphereRadius() ;

constexpr float_t const& __cordl_internal_get__sqrSnapToThreshold() const;

constexpr float_t& __cordl_internal_get__sqrSnapToThreshold() ;

constexpr float_t const& __cordl_internal_get__sqrSphereRadius() const;

constexpr float_t& __cordl_internal_get__sqrSphereRadius() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_m_gtPlayer() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_m_gtPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_xrBody() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_xrBody() ;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_xrOrigin() const;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_xrOrigin() ;

constexpr void __cordl_internal_set__defaultChaseSpeed(float_t  value) ;

constexpr void __cordl_internal_set__localGorillaHead(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__snapToThreshold(float_t  value) ;

constexpr void __cordl_internal_set__sphereRadius(float_t  value) ;

constexpr void __cordl_internal_set__sqrSnapToThreshold(float_t  value) ;

constexpr void __cordl_internal_set__sqrSphereRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_gtPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_m_xrBody(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_xrOrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value) ;

/// @brief Method .ctor, addr 0x5cde220, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Playspace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Playspace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Playspace(Playspace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Playspace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Playspace(Playspace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4508};

/// [SerializeField]
/// @brief Field _localGorillaHead, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____localGorillaHead;

/// [SerializeField]
/// @brief Field _sphereRadius, offset: 0x28, size: 0x4, def value: None
 float_t  ____sphereRadius;

/// @brief Field _sqrSphereRadius, offset: 0x2c, size: 0x4, def value: None
 float_t  ____sqrSphereRadius;

/// [SerializeField]
/// @brief Field _defaultChaseSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ____defaultChaseSpeed;

/// [SerializeField]
/// @brief Field _snapToThreshold, offset: 0x34, size: 0x4, def value: None
 float_t  ____snapToThreshold;

/// @brief Field _sqrSnapToThreshold, offset: 0x38, size: 0x4, def value: None
 float_t  ____sqrSnapToThreshold;

/// [SerializeField]
/// @brief Field m_gtPlayer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___m_gtPlayer;

/// [SerializeField]
/// @brief Field m_xrOrigin, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  ___m_xrOrigin;

/// @brief Field m_xrBody, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_xrBody;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Playspace, ____localGorillaHead) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Playspace, ____sphereRadius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Playspace, ____sqrSphereRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Playspace, ____defaultChaseSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Playspace, ____snapToThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Playspace, ____sqrSnapToThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Playspace, ___m_gtPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Playspace, ___m_xrOrigin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Playspace, ___m_xrBody) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Playspace) == 0x58, "Size mismatch!");

} // namespace end def GorillaLocomotion
