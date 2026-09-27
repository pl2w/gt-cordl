#pragma once
// IWYU pragma private; include "Photon/Pun/RigOwnedTransformView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RigOwnedTransformView)
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
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class RigOwnedTransformView;
}
// Write type traits
MARK_REF_T(::Photon::Pun::RigOwnedTransformView*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::RigOwnedTransformView*, "Photon.Pun", "RigOwnedTransformView");
// [HelpURL("https://doc.photonengine.com/en-us/pun/v2/gameplay/synchronization-and-state")]
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.RigOwnedTransformView
class CORDL_TYPE RigOwnedTransformView : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
 __declspec(property(get=get_IsMine, put=set_IsMine)) bool  IsMine;

/// @brief Field <IsMine>k__BackingField, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMine_k__BackingField, put=__cordl_internal_set__IsMine_k__BackingField)) bool  _IsMine_k__BackingField;

/// @brief Field m_Angle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Angle, put=__cordl_internal_set_m_Angle)) float_t  m_Angle;

/// @brief Field m_Direction, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Direction, put=__cordl_internal_set_m_Direction)) ::UnityEngine::Vector3  m_Direction;

/// @brief Field m_Distance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Distance, put=__cordl_internal_set_m_Distance)) float_t  m_Distance;

/// @brief Field m_NetworkPosition, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_NetworkPosition, put=__cordl_internal_set_m_NetworkPosition)) ::UnityEngine::Vector3  m_NetworkPosition;

/// @brief Field m_NetworkRotation, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_NetworkRotation, put=__cordl_internal_set_m_NetworkRotation)) ::UnityEngine::Quaternion  m_NetworkRotation;

/// @brief Field m_StoredPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StoredPosition, put=__cordl_internal_set_m_StoredPosition)) ::UnityEngine::Vector3  m_StoredPosition;

/// @brief Field m_SynchronizePosition, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizePosition, put=__cordl_internal_set_m_SynchronizePosition)) bool  m_SynchronizePosition;

/// @brief Field m_SynchronizeRotation, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeRotation, put=__cordl_internal_set_m_SynchronizeRotation)) bool  m_SynchronizeRotation;

/// @brief Field m_SynchronizeScale, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeScale, put=__cordl_internal_set_m_SynchronizeScale)) bool  m_SynchronizeScale;

/// @brief Field m_UseLocal, offset 0x73, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseLocal, put=__cordl_internal_set_m_UseLocal)) bool  m_UseLocal;

/// @brief Field m_firstTake, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_firstTake, put=__cordl_internal_set_m_firstTake)) bool  m_firstTake;

/// @brief Field m_networkScale, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_networkScale, put=__cordl_internal_set_m_networkScale)) ::UnityEngine::Vector3  m_networkScale;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Awake, addr 0x5b782bc, size 0xe4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GTAddition_DoTeleport, addr 0x5b79490, size 0xc, virtual false, abstract: false, final false
inline void GTAddition_DoTeleport() ;

/// @brief Method IsValid, addr 0x5b78890, size 0x6c, virtual false, abstract: false, final false
inline bool IsValid(::UnityEngine::Quaternion  q) ;

/// @brief Method IsValid, addr 0x5b7883c, size 0x54, virtual false, abstract: false, final false
inline bool IsValid(::UnityEngine::Vector3  v) ;

static inline ::Photon::Pun::RigOwnedTransformView* New_ctor() ;

/// @brief Method OnEnable, addr 0x5b783ac, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPhotonSerializeView, addr 0x5b788fc, size 0xb94, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Reset, addr 0x5b783a0, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetIsMine, addr 0x5b782b4, size 0x8, virtual false, abstract: false, final false
inline void SetIsMine(bool  isMine) ;

/// @brief Method Update, addr 0x5b783b8, size 0x484, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__IsMine_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMine_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_Angle() const;

constexpr float_t& __cordl_internal_get_m_Angle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Direction() ;

constexpr float_t const& __cordl_internal_get_m_Distance() const;

constexpr float_t& __cordl_internal_get_m_Distance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NetworkPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NetworkPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_NetworkRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_NetworkRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StoredPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StoredPosition() ;

constexpr bool const& __cordl_internal_get_m_SynchronizePosition() const;

constexpr bool& __cordl_internal_get_m_SynchronizePosition() ;

constexpr bool const& __cordl_internal_get_m_SynchronizeRotation() const;

constexpr bool& __cordl_internal_get_m_SynchronizeRotation() ;

constexpr bool const& __cordl_internal_get_m_SynchronizeScale() const;

constexpr bool& __cordl_internal_get_m_SynchronizeScale() ;

constexpr bool const& __cordl_internal_get_m_UseLocal() const;

constexpr bool& __cordl_internal_get_m_UseLocal() ;

constexpr bool const& __cordl_internal_get_m_firstTake() const;

constexpr bool& __cordl_internal_get_m_firstTake() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_networkScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_networkScale() ;

constexpr void __cordl_internal_set__IsMine_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_Angle(float_t  value) ;

constexpr void __cordl_internal_set_m_Direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Distance(float_t  value) ;

constexpr void __cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_StoredPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_SynchronizePosition(bool  value) ;

constexpr void __cordl_internal_set_m_SynchronizeRotation(bool  value) ;

constexpr void __cordl_internal_set_m_SynchronizeScale(bool  value) ;

constexpr void __cordl_internal_set_m_UseLocal(bool  value) ;

constexpr void __cordl_internal_set_m_firstTake(bool  value) ;

constexpr void __cordl_internal_set_m_networkScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5b7949c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsMine, addr 0x5b782a4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMine() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsMine, addr 0x5b782ac, size 0x8, virtual false, abstract: false, final false
inline void set_IsMine(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigOwnedTransformView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigOwnedTransformView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigOwnedTransformView(RigOwnedTransformView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigOwnedTransformView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigOwnedTransformView(RigOwnedTransformView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3895};

/// @brief Field m_Distance, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_Distance;

/// @brief Field m_Angle, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_Angle;

/// @brief Field m_Direction, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Direction;

/// @brief Field m_NetworkPosition, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_NetworkPosition;

/// @brief Field m_StoredPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StoredPosition;

/// @brief Field m_networkScale, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_networkScale;

/// @brief Field m_NetworkRotation, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_NetworkRotation;

/// @brief Field m_SynchronizePosition, offset: 0x70, size: 0x1, def value: None
 bool  ___m_SynchronizePosition;

/// @brief Field m_SynchronizeRotation, offset: 0x71, size: 0x1, def value: None
 bool  ___m_SynchronizeRotation;

/// @brief Field m_SynchronizeScale, offset: 0x72, size: 0x1, def value: None
 bool  ___m_SynchronizeScale;

/// [Tooltip("Indicates if localPosition and localRotation should be used. Scale ignores this setting, and always uses localScale to avoid issues with lossyScale.")]
/// @brief Field m_UseLocal, offset: 0x73, size: 0x1, def value: None
 bool  ___m_UseLocal;

/// @brief Field m_firstTake, offset: 0x74, size: 0x1, def value: None
 bool  ___m_firstTake;

/// [CompilerGenerated]
/// @brief Field <IsMine>k__BackingField, offset: 0x75, size: 0x1, def value: None
 bool  ____IsMine_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_Distance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_Angle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_Direction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_NetworkPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_StoredPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_networkScale) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_NetworkRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_SynchronizePosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_SynchronizeRotation) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_SynchronizeScale) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_UseLocal) == 0x73, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ___m_firstTake) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::RigOwnedTransformView, ____IsMine_k__BackingField) == 0x75, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::RigOwnedTransformView) == 0x78, "Size mismatch!");

} // namespace end def Photon::Pun
