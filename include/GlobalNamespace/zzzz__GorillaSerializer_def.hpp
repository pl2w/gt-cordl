#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RPCNetworkBase_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaSerializer)
namespace GlobalNamespace {
class IGorillaSerializeable;
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
namespace Photon::Realtime {
class Player;
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
class GorillaSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSerializer*, "", "GorillaSerializer");
// [RequireComponent(typeof(Photon.Pun.PhotonView))]
// Dependencies RPCNetworkBase, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSerializer
class CORDL_TYPE GorillaSerializer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field photonView, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field serializeTarget, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeTarget, put=__cordl_internal_set_serializeTarget)) ::GlobalNamespace::IGorillaSerializeable*  serializeTarget;

/// @brief Field successfullInstantiate, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_successfullInstantiate, put=__cordl_internal_set_successfullInstantiate)) bool  successfullInstantiate;

/// @brief Field targetObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetObject, put=__cordl_internal_set_targetObject)) ::UnityW<::UnityEngine::GameObject>  targetObject;

/// @brief Field targetType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetType, put=__cordl_internal_set_targetType)) ::System::Type*  targetType;

/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr operator  ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method AddRPCComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::RPCNetworkBase*>)
inline T AddRPCComponent() ;

static inline ::GlobalNamespace::GorillaSerializer* New_ctor() ;

/// @brief Method OnInstantiateSetup, addr 0x58f4c18, size 0xa8, virtual true, abstract: false, final false
inline bool OnInstantiateSetup(::Photon::Pun::PhotonMessageInfo  info, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType) ;

/// @brief Method OnPhotonInstantiate, addr 0x58f4998, size 0x27c, virtual true, abstract: false, final false
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSuccessfullInstantiate, addr 0x58f4c14, size 0x4, virtual true, abstract: false, final false
inline void OnSuccessfullInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Photon.Pun.IPunObservable.OnPhotonSerializeView, addr 0x58f47f8, size 0x1a0, virtual true, abstract: false, final true
inline void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendRPC, addr 0x58f4ce4, size 0x24, virtual false, abstract: false, final false
inline void SendRPC(::StringW  rpcName, bool  targetOthers, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method SendRPC, addr 0x58f4d08, size 0x18, virtual false, abstract: false, final false
inline void SendRPC(::StringW  rpcName, ::Photon::Realtime::Player*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method ValidOnSerialize, addr 0x58f4cc0, size 0x24, virtual true, abstract: false, final false
inline bool ValidOnSerialize(::Photon::Pun::PhotonStream*  stream, /* [IsReadOnly] */ ::by_ref<::Photon::Pun::PhotonMessageInfo>  info) ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr ::GlobalNamespace::IGorillaSerializeable* const& __cordl_internal_get_serializeTarget() const;

constexpr ::GlobalNamespace::IGorillaSerializeable*& __cordl_internal_get_serializeTarget() ;

constexpr bool const& __cordl_internal_get_successfullInstantiate() const;

constexpr bool& __cordl_internal_get_successfullInstantiate() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetObject() ;

constexpr ::System::Type* const& __cordl_internal_get_targetType() const;

constexpr ::System::Type*& __cordl_internal_get_targetType() ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_serializeTarget(::GlobalNamespace::IGorillaSerializeable*  value) ;

constexpr void __cordl_internal_set_successfullInstantiate(bool  value) ;

constexpr void __cordl_internal_set_targetObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_targetType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x58f4d20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* i___Photon__Pun__IPunInstantiateMagicCallback() noexcept;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSerializer(GorillaSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSerializer(GorillaSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2122};

/// @brief Field successfullInstantiate, offset: 0x20, size: 0x1, def value: None
 bool  ___successfullInstantiate;

/// @brief Field serializeTarget, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::IGorillaSerializeable*  ___serializeTarget;

/// @brief Field targetType, offset: 0x30, size: 0x8, def value: None
 ::System::Type*  ___targetType;

/// @brief Field targetObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetObject;

/// [SerializeField]
/// @brief Field photonView, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSerializer, ___successfullInstantiate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSerializer, ___serializeTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSerializer, ___targetType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSerializer, ___targetObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSerializer, ___photonView) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSerializer) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
