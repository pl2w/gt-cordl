#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaWrappedSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__RPCNetworkBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaWrappedSerializer)
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
class IWrappedSerializable;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkView;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace Photon::Pun {
class IOnPhotonViewPreNetDestroy;
}
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Pun {
struct RpcTarget;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaWrappedSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaWrappedSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaWrappedSerializer*, "", "GorillaWrappedSerializer");
// [NetworkBehaviourWeaved(0)]
// Dependencies Fusion.NetworkBehaviour, RPCNetworkBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaWrappedSerializer
class CORDL_TYPE GorillaWrappedSerializer : public ::Fusion::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsLocallyOwned)) bool  IsLocallyOwned;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_NetView)) ::UnityW<::GlobalNamespace::NetworkView>  NetView;

/// @brief Field <data>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__data_k__BackingField, put=__cordl_internal_set__data_k__BackingField)) ::System::Object*  _data_k__BackingField;

 __declspec(property(get=get_data, put=set_data)) ::System::Object*  data;

/// @brief Field netView, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_netView, put=__cordl_internal_set_netView)) ::UnityW<::GlobalNamespace::NetworkView>  netView;

/// @brief Field serializeTarget, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeTarget, put=__cordl_internal_set_serializeTarget)) ::GlobalNamespace::IWrappedSerializable*  serializeTarget;

/// @brief Field successfullInstantiate, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_successfullInstantiate, put=__cordl_internal_set_successfullInstantiate)) bool  successfullInstantiate;

/// @brief Field targetObject, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetObject, put=__cordl_internal_set_targetObject)) ::UnityW<::UnityEngine::GameObject>  targetObject;

/// @brief Field targetType, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetType, put=__cordl_internal_set_targetType)) ::System::Type*  targetType;

/// @brief Convert operator to "::Photon::Pun::IOnPhotonViewPreNetDestroy"
constexpr operator  ::Photon::Pun::IOnPhotonViewPreNetDestroy*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr operator  ::Photon::Pun::IPhotonViewCallback*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr operator  ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method AddRPCComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::RPCNetworkBase*>)
inline T AddRPCComponent() ;

/// @brief Method Awake, addr 0x58f5314, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x58f4d94, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x58f4d98, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method Despawned, addr 0x58f5b54, size 0x10, virtual true, abstract: false, final false
inline void Despawned(::Fusion::NetworkRunner*  runner, bool  hasState) ;

/// @brief Method FailedToSpawn, addr 0x58f566c, size 0xe4, virtual false, abstract: false, final false
inline void FailedToSpawn() ;

/// @brief Method FixedUpdateNetwork, addr 0x58f581c, size 0xbc, virtual true, abstract: false, final false
inline void FixedUpdateNetwork() ;

/// @brief Method FusionDataRPC, addr 0x58f2c10, size 0x4, virtual true, abstract: false, final false
inline void FusionDataRPC(::StringW  method, ::Photon::Pun::RpcTarget  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method FusionDataRPC, addr 0x58f5b98, size 0x4, virtual true, abstract: false, final false
inline void FusionDataRPC(::StringW  method, ::GlobalNamespace::NetPlayer*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

static inline ::GlobalNamespace::GorillaWrappedSerializer* New_ctor() ;

/// @brief Method OnBeforeDespawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBeforeDespawn() ;

/// @brief Method OnFailedSpawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFailedSpawn() ;

/// @brief Method OnSpawnSetupCheck, addr 0x58f5750, size 0xa8, virtual true, abstract: false, final false
inline bool OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType) ;

/// @brief Method OnSuccesfullySpawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy, addr 0x58f5b64, size 0x10, virtual true, abstract: false, final true
inline void Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy(::Photon::Pun::PhotonView*  rootView) ;

/// @brief Method Photon.Pun.IPunInstantiateMagicCallback.OnPhotonInstantiate, addr 0x58f53b8, size 0xdc, virtual true, abstract: false, final true
inline void Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Photon.Pun.IPunObservable.OnPhotonSerializeView, addr 0x58f59b4, size 0x1a0, virtual true, abstract: false, final true
inline void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ProcessSpawn, addr 0x58f5494, size 0x100, virtual false, abstract: false, final false
inline void ProcessSpawn(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo) ;

/// @brief Method Render, addr 0x58f58d8, size 0xdc, virtual true, abstract: false, final false
inline void Render() ;

/// @brief Method SendRPC, addr 0x58f5b74, size 0x24, virtual false, abstract: false, final false
inline void SendRPC(::StringW  rpcName, bool  targetOthers, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method SendRPC, addr 0x58f5b9c, size 0xb0, virtual false, abstract: false, final false
inline void SendRPC(::StringW  rpcName, ::GlobalNamespace::NetPlayer*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Spawned, addr 0x58f5594, size 0xd8, virtual true, abstract: false, final false
inline void Spawned() ;

/// @brief Method ValidOnSerialize, addr 0x58f57f8, size 0x24, virtual true, abstract: false, final false
inline bool ValidOnSerialize(::Photon::Pun::PhotonStream*  stream, /* [IsReadOnly] */ ::by_ref<::Photon::Pun::PhotonMessageInfo>  info) ;

constexpr ::System::Object* const& __cordl_internal_get__data_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__data_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::NetworkView> const& __cordl_internal_get_netView() const;

constexpr ::UnityW<::GlobalNamespace::NetworkView>& __cordl_internal_get_netView() ;

constexpr ::GlobalNamespace::IWrappedSerializable* const& __cordl_internal_get_serializeTarget() const;

constexpr ::GlobalNamespace::IWrappedSerializable*& __cordl_internal_get_serializeTarget() ;

constexpr bool const& __cordl_internal_get_successfullInstantiate() const;

constexpr bool& __cordl_internal_get_successfullInstantiate() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetObject() ;

constexpr ::System::Type* const& __cordl_internal_get_targetType() const;

constexpr ::System::Type*& __cordl_internal_get_targetType() ;

constexpr void __cordl_internal_set__data_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set_netView(::UnityW<::GlobalNamespace::NetworkView>  value) ;

constexpr void __cordl_internal_set_serializeTarget(::GlobalNamespace::IWrappedSerializable*  value) ;

constexpr void __cordl_internal_set_successfullInstantiate(bool  value) ;

constexpr void __cordl_internal_set_targetObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_targetType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x58f4d8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLocallyOwned, addr 0x58f52e4, size 0x18, virtual false, abstract: false, final false
inline bool get_IsLocallyOwned() ;

/// @brief Method get_IsValid, addr 0x58f52fc, size 0x18, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_NetView, addr 0x58f52cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::NetworkView> get_NetView() ;

/// [CompilerGenerated]
/// @brief Method get_data, addr 0x58f52d4, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* get_data() ;

/// @brief Convert to "::Photon::Pun::IOnPhotonViewPreNetDestroy"
constexpr ::Photon::Pun::IOnPhotonViewPreNetDestroy* i___Photon__Pun__IOnPhotonViewPreNetDestroy() noexcept;

/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* i___Photon__Pun__IPunInstantiateMagicCallback() noexcept;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_data, addr 0x58f52dc, size 0x8, virtual true, abstract: false, final false
inline void set_data(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaWrappedSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaWrappedSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaWrappedSerializer(GorillaWrappedSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaWrappedSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaWrappedSerializer(GorillaWrappedSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2125};

/// @brief Field successfullInstantiate, offset: 0x80, size: 0x1, def value: None
 bool  ___successfullInstantiate;

/// @brief Field serializeTarget, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::IWrappedSerializable*  ___serializeTarget;

/// @brief Field targetType, offset: 0x90, size: 0x8, def value: None
 ::System::Type*  ___targetType;

/// @brief Field targetObject, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetObject;

/// [SerializeField]
/// @brief Field netView, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkView>  ___netView;

/// [CompilerGenerated]
/// @brief Field <data>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::System::Object*  ____data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaWrappedSerializer, ___successfullInstantiate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWrappedSerializer, ___serializeTarget) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWrappedSerializer, ___targetType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWrappedSerializer, ___targetObject) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWrappedSerializer, ___netView) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWrappedSerializer, ____data_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaWrappedSerializer) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
