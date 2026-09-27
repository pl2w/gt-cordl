#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonRigidbody2DView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonRigidbody2DView)
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
class Rigidbody2D;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonRigidbody2DView;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonRigidbody2DView*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonRigidbody2DView*, "Photon.Pun", "PhotonRigidbody2DView");
// [RequireComponent(typeof(UnityEngine.Rigidbody2D))]
// [AddComponentMenu("Photon Networking/Photon Rigidbody 2D View")]
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.Vector2
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonRigidbody2DView
class CORDL_TYPE PhotonRigidbody2DView : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
/// @brief Field m_Angle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Angle, put=__cordl_internal_set_m_Angle)) float_t  m_Angle;

/// @brief Field m_Body, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Body, put=__cordl_internal_set_m_Body)) ::UnityW<::UnityEngine::Rigidbody2D>  m_Body;

/// @brief Field m_Distance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Distance, put=__cordl_internal_set_m_Distance)) float_t  m_Distance;

/// @brief Field m_NetworkPosition, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NetworkPosition, put=__cordl_internal_set_m_NetworkPosition)) ::UnityEngine::Vector2  m_NetworkPosition;

/// @brief Field m_NetworkRotation, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NetworkRotation, put=__cordl_internal_set_m_NetworkRotation)) float_t  m_NetworkRotation;

/// @brief Field m_SynchronizeAngularVelocity, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeAngularVelocity, put=__cordl_internal_set_m_SynchronizeAngularVelocity)) bool  m_SynchronizeAngularVelocity;

/// @brief Field m_SynchronizeVelocity, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeVelocity, put=__cordl_internal_set_m_SynchronizeVelocity)) bool  m_SynchronizeVelocity;

/// @brief Field m_TeleportEnabled, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TeleportEnabled, put=__cordl_internal_set_m_TeleportEnabled)) bool  m_TeleportEnabled;

/// @brief Field m_TeleportIfDistanceGreaterThan, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TeleportIfDistanceGreaterThan, put=__cordl_internal_set_m_TeleportIfDistanceGreaterThan)) float_t  m_TeleportIfDistanceGreaterThan;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Awake, addr 0xa73e9cc, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0xa73ea2c, size 0x1e8, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Photon::Pun::PhotonRigidbody2DView* New_ctor() ;

/// @brief Method OnPhotonSerializeView, addr 0xa73ec14, size 0x428, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr float_t const& __cordl_internal_get_m_Angle() const;

constexpr float_t& __cordl_internal_get_m_Angle() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_m_Body() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_m_Body() ;

constexpr float_t const& __cordl_internal_get_m_Distance() const;

constexpr float_t& __cordl_internal_get_m_Distance() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_NetworkPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_NetworkPosition() ;

constexpr float_t const& __cordl_internal_get_m_NetworkRotation() const;

constexpr float_t& __cordl_internal_get_m_NetworkRotation() ;

constexpr bool const& __cordl_internal_get_m_SynchronizeAngularVelocity() const;

constexpr bool& __cordl_internal_get_m_SynchronizeAngularVelocity() ;

constexpr bool const& __cordl_internal_get_m_SynchronizeVelocity() const;

constexpr bool& __cordl_internal_get_m_SynchronizeVelocity() ;

constexpr bool const& __cordl_internal_get_m_TeleportEnabled() const;

constexpr bool& __cordl_internal_get_m_TeleportEnabled() ;

constexpr float_t const& __cordl_internal_get_m_TeleportIfDistanceGreaterThan() const;

constexpr float_t& __cordl_internal_get_m_TeleportIfDistanceGreaterThan() ;

constexpr void __cordl_internal_set_m_Angle(float_t  value) ;

constexpr void __cordl_internal_set_m_Body(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

constexpr void __cordl_internal_set_m_Distance(float_t  value) ;

constexpr void __cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_NetworkRotation(float_t  value) ;

constexpr void __cordl_internal_set_m_SynchronizeAngularVelocity(bool  value) ;

constexpr void __cordl_internal_set_m_SynchronizeVelocity(bool  value) ;

constexpr void __cordl_internal_set_m_TeleportEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_TeleportIfDistanceGreaterThan(float_t  value) ;

/// @brief Method .ctor, addr 0xa73f03c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonRigidbody2DView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonRigidbody2DView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonRigidbody2DView(PhotonRigidbody2DView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonRigidbody2DView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonRigidbody2DView(PhotonRigidbody2DView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29734};

/// @brief Field m_Distance, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_Distance;

/// @brief Field m_Angle, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_Angle;

/// @brief Field m_Body, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___m_Body;

/// @brief Field m_NetworkPosition, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_NetworkPosition;

/// @brief Field m_NetworkRotation, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_NetworkRotation;

/// [HideInInspector]
/// @brief Field m_SynchronizeVelocity, offset: 0x44, size: 0x1, def value: None
 bool  ___m_SynchronizeVelocity;

/// [HideInInspector]
/// @brief Field m_SynchronizeAngularVelocity, offset: 0x45, size: 0x1, def value: None
 bool  ___m_SynchronizeAngularVelocity;

/// [HideInInspector]
/// @brief Field m_TeleportEnabled, offset: 0x46, size: 0x1, def value: None
 bool  ___m_TeleportEnabled;

/// [HideInInspector]
/// @brief Field m_TeleportIfDistanceGreaterThan, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_TeleportIfDistanceGreaterThan;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_Distance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_Angle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_Body) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_NetworkPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_NetworkRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_SynchronizeVelocity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_SynchronizeAngularVelocity) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_TeleportEnabled) == 0x46, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_TeleportIfDistanceGreaterThan) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonRigidbody2DView) == 0x50, "Size mismatch!");

} // namespace end def Photon::Pun
