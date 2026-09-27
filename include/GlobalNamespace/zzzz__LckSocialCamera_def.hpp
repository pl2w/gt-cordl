#pragma once
// IWYU pragma private; include "GlobalNamespace/LckSocialCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraData_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraState_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraType_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
CORDL_MODULE_EXPORT(LckSocialCamera)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class LCKSocialCameraFollower;
}
namespace GlobalNamespace {
class LckSocialCameraManager;
}
namespace GlobalNamespace {
struct LckSocialCamera_CameraData;
}
namespace GlobalNamespace {
struct LckSocialCamera_CameraState;
}
namespace GlobalNamespace {
struct LckSocialCamera_CameraType;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRigSerializer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Liv::Lck::GorillaTag {
class IGtCameraVisuals;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LckSocialCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckSocialCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckSocialCamera*, "", "LckSocialCamera");
// [NetworkBehaviourWeaved(1)]
// Dependencies LckSocialCamera::CameraData, LckSocialCamera::CameraState, LckSocialCamera::CameraType, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckSocialCamera
class CORDL_TYPE LckSocialCamera : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using CameraData = ::GlobalNamespace::LckSocialCamera_CameraData;

using CameraState = ::GlobalNamespace::LckSocialCamera_CameraState;

using CameraType = ::GlobalNamespace::LckSocialCamera_CameraType;

/// @brief Field CameraVisuals, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraVisuals, put=__cordl_internal_set_CameraVisuals)) ::UnityW<::UnityEngine::GameObject>  CameraVisuals;

 __declspec(property(get=get_IsOnNeck, put=set_IsOnNeck)) bool  IsOnNeck;

 __declspec(property(get=get_SocialCameraFollower, put=set_SocialCameraFollower)) ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  SocialCameraFollower;

 __declspec(property(get=get_VrRig)) ::UnityW<::GlobalNamespace::VRRig>  VrRig;

/// @brief Field <SocialCameraFollower>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__SocialCameraFollower_k__BackingField, put=__cordl_internal_set__SocialCameraFollower_k__BackingField)) ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  _SocialCameraFollower_k__BackingField;

/// @brief Field __networkedData, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get___networkedData, put=__cordl_internal_set___networkedData)) ::GlobalNamespace::LckSocialCamera_CameraData  __networkedData;

/// @brief Field _localOwnedState, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__localOwnedState, put=__cordl_internal_set__localOwnedState)) ::GlobalNamespace::LckSocialCamera_CameraState  _localOwnedState;

/// @brief Field _networkOwnedState, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__networkOwnedState, put=__cordl_internal_set__networkOwnedState)) ::GlobalNamespace::LckSocialCamera_CameraState  _networkOwnedState;

/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get__networkedData)) ::GlobalNamespace::LckSocialCamera_CameraData  _networkedData;

/// @brief Field _scaleTransform, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleTransform, put=__cordl_internal_set__scaleTransform)) ::UnityW<::UnityEngine::Transform>  _scaleTransform;

/// @brief Field _vrrig, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrrig, put=__cordl_internal_set__vrrig)) ::UnityW<::GlobalNamespace::VRRig>  _vrrig;

/// @brief Field m_CameraVisuals, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraVisuals, put=__cordl_internal_set_m_CameraVisuals)) ::Liv::Lck::GorillaTag::IGtCameraVisuals*  m_CameraVisuals;

/// @brief Field m_cameraType, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cameraType, put=__cordl_internal_set_m_cameraType)) ::GlobalNamespace::LckSocialCamera_CameraType  m_cameraType;

/// @brief Field m_isCorrupted, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_isCorrupted, put=__cordl_internal_set_m_isCorrupted)) bool  m_isCorrupted;

/// @brief Field m_lckDelegateRegistered, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_lckDelegateRegistered, put=__cordl_internal_set_m_lckDelegateRegistered)) bool  m_lckDelegateRegistered;

/// @brief Field m_rigNetworkController, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rigNetworkController, put=__cordl_internal_set_m_rigNetworkController)) ::UnityW<::GlobalNamespace::VRRigSerializer>  m_rigNetworkController;

 __declspec(property(get=get_recording, put=set_recording)) bool  recording;

 __declspec(property(get=get_visible, put=set_visible)) bool  visible;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method ApplyVisualState, addr 0x56c9e28, size 0x250, virtual false, abstract: false, final false
inline void ApplyVisualState(::GlobalNamespace::LckSocialCamera_CameraState  newState) ;

/// @brief Method Awake, addr 0x56ca3fc, size 0x1f0, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x56cb3a4, size 0x28, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x56cb3cc, size 0x28, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetFlag, addr 0x56ca27c, size 0xc, virtual false, abstract: false, final false
static inline bool GetFlag(::GlobalNamespace::LckSocialCamera_CameraState  currentState, ::GlobalNamespace::LckSocialCamera_CameraState  flag) ;

static inline ::GlobalNamespace::LckSocialCamera* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56ca5ec, size 0x1cc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x56cb0a4, size 0x160, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56cafc0, size 0xe4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnManagerSpawned, addr 0x56cb2f0, size 0x78, virtual false, abstract: false, final false
inline void OnManagerSpawned(::GlobalNamespace::LckSocialCameraManager*  manager) ;

/// @brief Method OnSpawned, addr 0x56c9c7c, size 0xf0, virtual true, abstract: false, final false
inline void OnSpawned() ;

/// @brief Method OnSuccesfullSpawn, addr 0x56ca7b8, size 0x39c, virtual false, abstract: false, final false
inline void OnSuccesfullSpawn(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::RigContainer*>  rig, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>  info) ;

/// @brief Method ReadDataFusion, addr 0x56ca094, size 0x48, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x56ca184, size 0xc8, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataShared, addr 0x56ca0dc, size 0x30, virtual false, abstract: false, final false
inline void ReadDataShared(::GlobalNamespace::LckSocialCamera_CameraState  newState) ;

/// @brief Method SetFlag, addr 0x56ca288, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LckSocialCamera_CameraState SetFlag(::GlobalNamespace::LckSocialCamera_CameraState  currentState, ::GlobalNamespace::LckSocialCamera_CameraState  flag, bool  shouldBeSet) ;

/// @brief Method SliceUpdate, addr 0x56cada4, size 0x21c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method TurnOff, addr 0x56cb368, size 0x2c, virtual false, abstract: false, final false
inline void TurnOff() ;

/// @brief Method WriteDataFusion, addr 0x56ca078, size 0x1c, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x56ca10c, size 0x78, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_CameraVisuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_CameraVisuals() ;

constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> const& __cordl_internal_get__SocialCameraFollower_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>& __cordl_internal_get__SocialCameraFollower_k__BackingField() ;

constexpr ::GlobalNamespace::LckSocialCamera_CameraData const& __cordl_internal_get___networkedData() const;

constexpr ::GlobalNamespace::LckSocialCamera_CameraData& __cordl_internal_get___networkedData() ;

constexpr ::GlobalNamespace::LckSocialCamera_CameraState const& __cordl_internal_get__localOwnedState() const;

constexpr ::GlobalNamespace::LckSocialCamera_CameraState& __cordl_internal_get__localOwnedState() ;

constexpr ::GlobalNamespace::LckSocialCamera_CameraState const& __cordl_internal_get__networkOwnedState() const;

constexpr ::GlobalNamespace::LckSocialCamera_CameraState& __cordl_internal_get__networkOwnedState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__scaleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__scaleTransform() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__vrrig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__vrrig() ;

constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals* const& __cordl_internal_get_m_CameraVisuals() const;

constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals*& __cordl_internal_get_m_CameraVisuals() ;

constexpr ::GlobalNamespace::LckSocialCamera_CameraType const& __cordl_internal_get_m_cameraType() const;

constexpr ::GlobalNamespace::LckSocialCamera_CameraType& __cordl_internal_get_m_cameraType() ;

constexpr bool const& __cordl_internal_get_m_isCorrupted() const;

constexpr bool& __cordl_internal_get_m_isCorrupted() ;

constexpr bool const& __cordl_internal_get_m_lckDelegateRegistered() const;

constexpr bool& __cordl_internal_get_m_lckDelegateRegistered() ;

constexpr ::UnityW<::GlobalNamespace::VRRigSerializer> const& __cordl_internal_get_m_rigNetworkController() const;

constexpr ::UnityW<::GlobalNamespace::VRRigSerializer>& __cordl_internal_get_m_rigNetworkController() ;

constexpr void __cordl_internal_set_CameraVisuals(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__SocialCameraFollower_k__BackingField(::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  value) ;

constexpr void __cordl_internal_set___networkedData(::GlobalNamespace::LckSocialCamera_CameraData  value) ;

constexpr void __cordl_internal_set__localOwnedState(::GlobalNamespace::LckSocialCamera_CameraState  value) ;

constexpr void __cordl_internal_set__networkOwnedState(::GlobalNamespace::LckSocialCamera_CameraState  value) ;

constexpr void __cordl_internal_set__scaleTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__vrrig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_m_CameraVisuals(::Liv::Lck::GorillaTag::IGtCameraVisuals*  value) ;

constexpr void __cordl_internal_set_m_cameraType(::GlobalNamespace::LckSocialCamera_CameraType  value) ;

constexpr void __cordl_internal_set_m_isCorrupted(bool  value) ;

constexpr void __cordl_internal_set_m_lckDelegateRegistered(bool  value) ;

constexpr void __cordl_internal_set_m_rigNetworkController(::UnityW<::GlobalNamespace::VRRigSerializer>  value) ;

/// @brief Method .ctor, addr 0x56cb394, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsOnNeck, addr 0x56ca24c, size 0x30, virtual false, abstract: false, final false
inline bool get_IsOnNeck() ;

/// [CompilerGenerated]
/// @brief Method get_SocialCameraFollower, addr 0x56c9c6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> get_SocialCameraFollower() ;

/// @brief Method get_VrRig, addr 0x56c9c64, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_VrRig() ;

/// @brief Method get__networkedData, addr 0x56c9c0c, size 0x58, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::LckSocialCamera_CameraData> get__networkedData() ;

/// @brief Method get_recording, addr 0x56ca2cc, size 0x30, virtual false, abstract: false, final false
inline bool get_recording() ;

/// @brief Method get_visible, addr 0x56ca29c, size 0x30, virtual false, abstract: false, final false
inline bool get_visible() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method set_IsOnNeck, addr 0x56c9de4, size 0x44, virtual false, abstract: false, final false
inline void set_IsOnNeck(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SocialCameraFollower, addr 0x56c9c74, size 0x8, virtual false, abstract: false, final false
inline void set_SocialCameraFollower(::GlobalNamespace::LCKSocialCameraFollower*  value) ;

/// @brief Method set_recording, addr 0x56c9da0, size 0x44, virtual false, abstract: false, final false
inline void set_recording(bool  value) ;

/// @brief Method set_visible, addr 0x56c9d6c, size 0x34, virtual false, abstract: false, final false
inline void set_visible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckSocialCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckSocialCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckSocialCamera(LckSocialCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckSocialCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckSocialCamera(LckSocialCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1039};

/// [SerializeField]
/// @brief Field _scaleTransform, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____scaleTransform;

/// [SerializeField]
/// @brief Field CameraVisuals, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___CameraVisuals;

/// [SerializeField]
/// @brief Field _vrrig, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____vrrig;

/// [SerializeField]
/// @brief Field m_rigNetworkController, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigSerializer>  ___m_rigNetworkController;

/// [SerializeField]
/// @brief Field m_cameraType, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::LckSocialCamera_CameraType  ___m_cameraType;

/// [CompilerGenerated]
/// @brief Field <SocialCameraFollower>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  ____SocialCameraFollower_k__BackingField;

/// @brief Field m_isCorrupted, offset: 0xd0, size: 0x1, def value: None
 bool  ___m_isCorrupted;

/// @brief Field m_lckDelegateRegistered, offset: 0xd1, size: 0x1, def value: None
 bool  ___m_lckDelegateRegistered;

/// @brief Field m_CameraVisuals, offset: 0xd8, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::IGtCameraVisuals*  ___m_CameraVisuals;

/// @brief Field _localOwnedState, offset: 0xe0, size: 0x4, def value: None
 ::GlobalNamespace::LckSocialCamera_CameraState  ____localOwnedState;

/// @brief Field _networkOwnedState, offset: 0xe4, size: 0x4, def value: None
 ::GlobalNamespace::LckSocialCamera_CameraState  ____networkOwnedState;

/// [WeaverGenerated]
/// [DefaultForProperty("_networkedData", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field __networkedData, offset: 0xe8, size: 0x4, def value: None
 ::GlobalNamespace::LckSocialCamera_CameraData  _____networkedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ____scaleTransform) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ___CameraVisuals) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ____vrrig) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ___m_rigNetworkController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ___m_cameraType) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ____SocialCameraFollower_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ___m_isCorrupted) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ___m_lckDelegateRegistered) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ___m_CameraVisuals) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ____localOwnedState) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, ____networkOwnedState) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCamera, _____networkedData) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckSocialCamera) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
