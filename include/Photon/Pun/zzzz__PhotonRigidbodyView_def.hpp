#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonRigidbodyView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonRigidbodyView)
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonRigidbodyView;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonRigidbodyView*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonRigidbodyView*, "Photon.Pun", "PhotonRigidbodyView");
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// [AddComponentMenu("Photon Networking/Photon Rigidbody View")]
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonRigidbodyView
class CORDL_TYPE PhotonRigidbodyView : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
/// @brief Field m_Angle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Angle, put=__cordl_internal_set_m_Angle)) float_t  m_Angle;

/// @brief Field m_Body, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Body, put=__cordl_internal_set_m_Body)) ::UnityW<::UnityEngine::Rigidbody>  m_Body;

/// @brief Field m_Distance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Distance, put=__cordl_internal_set_m_Distance)) float_t  m_Distance;

/// @brief Field m_NetworkPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_NetworkPosition, put=__cordl_internal_set_m_NetworkPosition)) ::UnityEngine::Vector3  m_NetworkPosition;

/// @brief Field m_NetworkRotation, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_NetworkRotation, put=__cordl_internal_set_m_NetworkRotation)) ::UnityEngine::Quaternion  m_NetworkRotation;

/// @brief Field m_SynchronizeAngularVelocity, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeAngularVelocity, put=__cordl_internal_set_m_SynchronizeAngularVelocity)) bool  m_SynchronizeAngularVelocity;

/// @brief Field m_SynchronizeVelocity, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeVelocity, put=__cordl_internal_set_m_SynchronizeVelocity)) bool  m_SynchronizeVelocity;

/// @brief Field m_TeleportEnabled, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TeleportEnabled, put=__cordl_internal_set_m_TeleportEnabled)) bool  m_TeleportEnabled;

/// @brief Field m_TeleportIfDistanceGreaterThan, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TeleportIfDistanceGreaterThan, put=__cordl_internal_set_m_TeleportIfDistanceGreaterThan)) float_t  m_TeleportIfDistanceGreaterThan;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Awake, addr 0xa73f054, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0xa73f0bc, size 0x2e4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Photon::Pun::PhotonRigidbodyView* New_ctor() ;

/// @brief Method OnPhotonSerializeView, addr 0xa73f3a0, size 0x56c, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr float_t const& __cordl_internal_get_m_Angle() const;

constexpr float_t& __cordl_internal_get_m_Angle() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_Body() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_Body() ;

constexpr float_t const& __cordl_internal_get_m_Distance() const;

constexpr float_t& __cordl_internal_get_m_Distance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NetworkPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NetworkPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_NetworkRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_NetworkRotation() ;

constexpr bool const& __cordl_internal_get_m_SynchronizeAngularVelocity() const;

constexpr bool& __cordl_internal_get_m_SynchronizeAngularVelocity() ;

constexpr bool const& __cordl_internal_get_m_SynchronizeVelocity() const;

constexpr bool& __cordl_internal_get_m_SynchronizeVelocity() ;

constexpr bool const& __cordl_internal_get_m_TeleportEnabled() const;

constexpr bool& __cordl_internal_get_m_TeleportEnabled() ;

constexpr float_t const& __cordl_internal_get_m_TeleportIfDistanceGreaterThan() const;

constexpr float_t& __cordl_internal_get_m_TeleportIfDistanceGreaterThan() ;

constexpr void __cordl_internal_set_m_Angle(float_t  value) ;

constexpr void __cordl_internal_set_m_Body(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_m_Distance(float_t  value) ;

constexpr void __cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_SynchronizeAngularVelocity(bool  value) ;

constexpr void __cordl_internal_set_m_SynchronizeVelocity(bool  value) ;

constexpr void __cordl_internal_set_m_TeleportEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_TeleportIfDistanceGreaterThan(float_t  value) ;

/// @brief Method .ctor, addr 0xa73f90c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonRigidbodyView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonRigidbodyView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonRigidbodyView(PhotonRigidbodyView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonRigidbodyView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonRigidbodyView(PhotonRigidbodyView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29735};

/// @brief Field m_Distance, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_Distance;

/// @brief Field m_Angle, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_Angle;

/// @brief Field m_Body, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_Body;

/// @brief Field m_NetworkPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_NetworkPosition;

/// @brief Field m_NetworkRotation, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_NetworkRotation;

/// [HideInInspector]
/// @brief Field m_SynchronizeVelocity, offset: 0x54, size: 0x1, def value: None
 bool  ___m_SynchronizeVelocity;

/// [HideInInspector]
/// @brief Field m_SynchronizeAngularVelocity, offset: 0x55, size: 0x1, def value: None
 bool  ___m_SynchronizeAngularVelocity;

/// [HideInInspector]
/// @brief Field m_TeleportEnabled, offset: 0x56, size: 0x1, def value: None
 bool  ___m_TeleportEnabled;

/// [HideInInspector]
/// @brief Field m_TeleportIfDistanceGreaterThan, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_TeleportIfDistanceGreaterThan;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_Distance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_Angle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_Body) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_NetworkPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_NetworkRotation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_SynchronizeVelocity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_SynchronizeAngularVelocity) == 0x55, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_TeleportEnabled) == 0x56, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_TeleportIfDistanceGreaterThan) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonRigidbodyView) == 0x60, "Size mismatch!");

} // namespace end def Photon::Pun
