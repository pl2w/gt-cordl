#pragma once
// IWYU pragma private; include "GlobalNamespace/PaperPlaneThrowable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PaperPlaneThrowable)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
class CallLimiterWithCooldown;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class PhotonEvent;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PaperPlaneThrowable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PaperPlaneThrowable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaperPlaneThrowable*, "", "PaperPlaneThrowable");
// Dependencies System.Nullable`1<T>, System.Object, TransferrableObject, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PaperPlaneThrowable
class CORDL_TYPE PaperPlaneThrowable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field _itemWorldAngVel, offset 0x398, size 0xc 
 __declspec(property(get=__cordl_internal_get__itemWorldAngVel, put=__cordl_internal_set__itemWorldAngVel)) ::UnityEngine::Vector3  _itemWorldAngVel;

/// @brief Field _itemWorldVel, offset 0x38c, size 0xc 
 __declspec(property(get=__cordl_internal_get__itemWorldVel, put=__cordl_internal_set__itemWorldVel)) ::UnityEngine::Vector3  _itemWorldVel;

/// @brief Field _lastWorldPos, offset 0x370, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastWorldPos, put=__cordl_internal_set__lastWorldPos)) ::UnityEngine::Vector3  _lastWorldPos;

/// @brief Field _lastWorldRot, offset 0x37c, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastWorldRot, put=__cordl_internal_set__lastWorldRot)) ::UnityEngine::Quaternion  _lastWorldRot;

/// @brief Field _playerView, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__playerView, put=setStaticF__playerView)) ::UnityW<::UnityEngine::Camera>  _playerView;

/// @brief Field _projectilePrefab, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get__projectilePrefab, put=__cordl_internal_set__projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  _projectilePrefab;

/// @brief Field _renderer, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _throwableID, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get__throwableID, put=__cordl_internal_set__throwableID)) ::StringW  _throwableID;

/// @brief Field _throwableIdHash, offset 0x360, size 0x10 
 __declspec(property(get=__cordl_internal_get__throwableIdHash, put=__cordl_internal_set__throwableIdHash)) ::System::Nullable_1<int32_t>  _throwableIdHash;

/// @brief Field gEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gEventArgs, put=setStaticF_gEventArgs)) ::ArrayW<::System::Object*>  gEventArgs;

/// @brief Field gLaunchRPC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gLaunchRPC, put=setStaticF_gLaunchRPC)) ::GlobalNamespace::PhotonEvent*  gLaunchRPC;

/// @brief Field gRaiseOpts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gRaiseOpts, put=setStaticF_gRaiseOpts)) ::Photon::Realtime::RaiseEventOptions*  gRaiseOpts;

/// @brief Field kProjectileEvent, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kProjectileEvent, put=setStaticF_kProjectileEvent)) int32_t  kProjectileEvent;

/// @brief Field m_spamCheck, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_spamCheck, put=__cordl_internal_set_m_spamCheck)) ::GlobalNamespace::CallLimiterWithCooldown*  m_spamCheck;

/// @brief Field minThrowSpeed, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_minThrowSpeed, put=__cordl_internal_set_minThrowSpeed)) float_t  minThrowSpeed;

/// @brief Method CalcAngularVelocity, addr 0x578deec, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CalcAngularVelocity(::UnityEngine::Quaternion  from, ::UnityEngine::Quaternion  to, float_t  dt) ;

/// @brief Method DropItem, addr 0x578e00c, size 0x8, virtual true, abstract: false, final false
inline void DropItem() ;

/// @brief Method FetchViewID, addr 0x578c900, size 0x1e4, virtual false, abstract: false, final false
static inline int32_t FetchViewID(::GlobalNamespace::PaperPlaneThrowable*  ppt) ;

/// @brief Method GetThrowableId, addr 0x578cae4, size 0x158, virtual false, abstract: false, final false
inline int32_t GetThrowableId() ;

/// @brief Method LateUpdateLocal, addr 0x578dd70, size 0x17c, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LaunchProjectileLocal, addr 0x578cc3c, size 0x280, virtual false, abstract: false, final false
inline void LaunchProjectileLocal(::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel) ;

static inline ::GlobalNamespace::PaperPlaneThrowable* New_ctor() ;

/// @brief Method OnDisable, addr 0x578cfbc, size 0xc8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x578cebc, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x578d650, size 0x54, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnLaunchRPC, addr 0x578c598, size 0x368, virtual false, abstract: false, final false
inline void OnLaunchRPC(int32_t  sender, int32_t  receiver, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnPhotonEvent, addr 0x578d084, size 0x4e4, virtual false, abstract: false, final false
inline void OnPhotonEvent(::ExitGames::Client::Photon::EventData*  evData) ;

/// @brief Method OnProjectileHit, addr 0x578dcf4, size 0x7c, virtual false, abstract: false, final false
inline void OnProjectileHit(::UnityEngine::Vector3  endPoint) ;

/// @brief Method OnRelease, addr 0x578d6a4, size 0x650, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method Start, addr 0x578d568, size 0xe8, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__itemWorldAngVel() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__itemWorldAngVel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__itemWorldVel() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__itemWorldVel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastWorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastWorldPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastWorldRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastWorldRot() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__projectilePrefab() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::StringW const& __cordl_internal_get__throwableID() const;

constexpr ::StringW& __cordl_internal_get__throwableID() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__throwableIdHash() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__throwableIdHash() ;

constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& __cordl_internal_get_m_spamCheck() const;

constexpr ::GlobalNamespace::CallLimiterWithCooldown*& __cordl_internal_get_m_spamCheck() ;

constexpr float_t const& __cordl_internal_get_minThrowSpeed() const;

constexpr float_t& __cordl_internal_get_minThrowSpeed() ;

constexpr void __cordl_internal_set__itemWorldAngVel(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__itemWorldVel(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastWorldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastWorldRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__throwableID(::StringW  value) ;

constexpr void __cordl_internal_set__throwableIdHash(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_m_spamCheck(::GlobalNamespace::CallLimiterWithCooldown*  value) ;

constexpr void __cordl_internal_set_minThrowSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x578e014, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Camera> getStaticF__playerView() ;

static inline ::ArrayW<::System::Object*> getStaticF_gEventArgs() ;

static inline ::GlobalNamespace::PhotonEvent* getStaticF_gLaunchRPC() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_gRaiseOpts() ;

static inline int32_t getStaticF_kProjectileEvent() ;

static inline void setStaticF__playerView(::UnityW<::UnityEngine::Camera>  value) ;

static inline void setStaticF_gEventArgs(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_gLaunchRPC(::GlobalNamespace::PhotonEvent*  value) ;

static inline void setStaticF_gRaiseOpts(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_kProjectileEvent(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaperPlaneThrowable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaperPlaneThrowable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PaperPlaneThrowable(PaperPlaneThrowable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaperPlaneThrowable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaperPlaneThrowable(PaperPlaneThrowable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1437};

/// [Tooltip("Renderer on the body to disable when spawning the projectile")]
/// [SerializeField]
/// @brief Field _renderer, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [Tooltip("Prefab in the Global object pool to spawn when throwing")]
/// [SerializeField]
/// @brief Field _projectilePrefab, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____projectilePrefab;

/// [Tooltip("Minimum velocity of the hand required to launch the projectile")]
/// [SerializeField]
/// @brief Field minThrowSpeed, offset: 0x348, size: 0x4, def value: None
 float_t  ___minThrowSpeed;

/// @brief Field m_spamCheck, offset: 0x350, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiterWithCooldown*  ___m_spamCheck;

/// [SerializeField]
/// @brief Field _throwableID, offset: 0x358, size: 0x8, def value: None
 ::StringW  ____throwableID;

/// @brief Field _throwableIdHash, offset: 0x360, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ____throwableIdHash;

/// [Space]
/// @brief Field _lastWorldPos, offset: 0x370, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastWorldPos;

/// @brief Field _lastWorldRot, offset: 0x37c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____lastWorldRot;

/// [Space]
/// @brief Field _itemWorldVel, offset: 0x38c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____itemWorldVel;

/// @brief Field _itemWorldAngVel, offset: 0x398, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____itemWorldAngVel;

/// @brief Size padding 0x3d0 - 0x3a8 = 0x28, packed as 0x28
 uint8_t  _cordl_size_padding[0x28];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ____renderer) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ____projectilePrefab) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ___minThrowSpeed) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ___m_spamCheck) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ____throwableID) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ____throwableIdHash) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ____lastWorldPos) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ____lastWorldRot) == 0x37c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ____itemWorldVel) == 0x38c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneThrowable, ____itemWorldAngVel) == 0x398, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PaperPlaneThrowable) == 0x3d0, "Size mismatch!");

} // namespace end def GlobalNamespace
