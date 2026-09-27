#pragma once
// IWYU pragma private; include "GlobalNamespace/DeployableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DeployableObject)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class DeployedChild;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
struct PhotonSignalInfo;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3>
class PhotonSignal_3;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DeployableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeployableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeployableObject*, "", "DeployableObject");
// Dependencies TransferrableObject, UnityEngine.Component, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeployableObject
class CORDL_TYPE DeployableObject : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field _child, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get__child, put=__cordl_internal_set__child)) ::UnityW<::GlobalNamespace::DeployedChild>  _child;

/// @brief Field _deploySignal, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get__deploySignal, put=__cordl_internal_set__deploySignal)) ::GlobalNamespace::PhotonSignal_3<int64_t,int32_t,int64_t>*  _deploySignal;

/// @brief Field _disabledWhileDeployed, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledWhileDeployed, put=__cordl_internal_set__disabledWhileDeployed)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _disabledWhileDeployed;

/// @brief Field _maxDeployDistance, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDeployDistance, put=__cordl_internal_set__maxDeployDistance)) float_t  _maxDeployDistance;

/// @brief Field _maxThrowVelocity, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxThrowVelocity, put=__cordl_internal_set__maxThrowVelocity)) float_t  _maxThrowVelocity;

/// @brief Field _objectToDeploy, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectToDeploy, put=__cordl_internal_set__objectToDeploy)) ::UnityW<::UnityEngine::GameObject>  _objectToDeploy;

/// @brief Field _onDeploy, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get__onDeploy, put=__cordl_internal_set__onDeploy)) ::UnityEngine::Events::UnityEvent*  _onDeploy;

/// @brief Field _onReturn, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get__onReturn, put=__cordl_internal_set__onReturn)) ::UnityEngine::Events::UnityEvent*  _onReturn;

/// @brief Field _rigAwareObjects, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigAwareObjects, put=__cordl_internal_set__rigAwareObjects)) ::ArrayW<::UnityW<::UnityEngine::Component>>  _rigAwareObjects;

/// @brief Field deploySound, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_deploySound, put=__cordl_internal_set_deploySound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  deploySound;

/// @brief Field m_VRRig, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VRRig, put=__cordl_internal_set_m_VRRig)) ::UnityW<::GlobalNamespace::VRRig>  m_VRRig;

/// @brief Field m_spamChecker, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_spamChecker, put=__cordl_internal_set_m_spamChecker)) ::GlobalNamespace::CallLimiter*  m_spamChecker;

/// @brief Method Awake, addr 0x564a484, size 0xb0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DeployChild, addr 0x564a92c, size 0x54, virtual false, abstract: false, final false
inline void DeployChild() ;

/// @brief Method DeployLocal, addr 0x564acfc, size 0x98, virtual true, abstract: false, final false
inline void DeployLocal(::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel, bool  isRemote) ;

/// @brief Method DeployRPC, addr 0x564af34, size 0x3b8, virtual false, abstract: false, final false
inline void DeployRPC(int64_t  packedPos, int32_t  packedRot, int64_t  packedVel, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method DisableWhileDeployed, addr 0x564ad94, size 0x94, virtual false, abstract: false, final false
inline void DisableWhileDeployed(bool  active) ;

/// @brief Method LateUpdateReplicated, addr 0x564a8cc, size 0x60, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

static inline ::GlobalNamespace::DeployableObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x564a89c, size 0x30, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x564a72c, size 0x58, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x564a534, size 0x1f8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRelease, addr 0x564a980, size 0x37c, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnRigPreDisable, addr 0x564a7d8, size 0xc4, virtual false, abstract: false, final false
inline void OnRigPreDisable(::GlobalNamespace::RigContainer*  rc) ;

/// @brief Method ReturnChild, addr 0x564a784, size 0x54, virtual false, abstract: false, final false
inline void ReturnChild() ;

constexpr ::UnityW<::GlobalNamespace::DeployedChild> const& __cordl_internal_get__child() const;

constexpr ::UnityW<::GlobalNamespace::DeployedChild>& __cordl_internal_get__child() ;

constexpr ::GlobalNamespace::PhotonSignal_3<int64_t,int32_t,int64_t>* const& __cordl_internal_get__deploySignal() const;

constexpr ::GlobalNamespace::PhotonSignal_3<int64_t,int32_t,int64_t>*& __cordl_internal_get__deploySignal() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__disabledWhileDeployed() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__disabledWhileDeployed() ;

constexpr float_t const& __cordl_internal_get__maxDeployDistance() const;

constexpr float_t& __cordl_internal_get__maxDeployDistance() ;

constexpr float_t const& __cordl_internal_get__maxThrowVelocity() const;

constexpr float_t& __cordl_internal_get__maxThrowVelocity() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__objectToDeploy() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__objectToDeploy() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onDeploy() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onDeploy() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onReturn() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onReturn() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& __cordl_internal_get__rigAwareObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& __cordl_internal_get__rigAwareObjects() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_deploySound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_deploySound() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_m_VRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_m_VRRig() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_m_spamChecker() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_m_spamChecker() ;

constexpr void __cordl_internal_set__child(::UnityW<::GlobalNamespace::DeployedChild>  value) ;

constexpr void __cordl_internal_set__deploySignal(::GlobalNamespace::PhotonSignal_3<int64_t,int32_t,int64_t>*  value) ;

constexpr void __cordl_internal_set__disabledWhileDeployed(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__maxDeployDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxThrowVelocity(float_t  value) ;

constexpr void __cordl_internal_set__objectToDeploy(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__onDeploy(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onReturn(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__rigAwareObjects(::ArrayW<::UnityW<::UnityEngine::Component>>  value) ;

constexpr void __cordl_internal_set_deploySound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_VRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_m_spamChecker(::GlobalNamespace::CallLimiter*  value) ;

/// @brief Method .ctor, addr 0x564b2ec, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeployableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeployableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeployableObject(DeployableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeployableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeployableObject(DeployableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{702};

/// [SerializeField]
/// @brief Field _objectToDeploy, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____objectToDeploy;

/// [SerializeField]
/// @brief Field _child, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DeployedChild>  ____child;

/// [SerializeField]
/// @brief Field _disabledWhileDeployed, offset: 0x348, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____disabledWhileDeployed;

/// [SerializeField]
/// @brief Field deploySound, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___deploySound;

/// [SerializeField]
/// @brief Field _deploySignal, offset: 0x358, size: 0x8, def value: None
 ::GlobalNamespace::PhotonSignal_3<int64_t,int32_t,int64_t>*  ____deploySignal;

/// [SerializeField]
/// @brief Field _maxDeployDistance, offset: 0x360, size: 0x4, def value: None
 float_t  ____maxDeployDistance;

/// [SerializeField]
/// @brief Field _maxThrowVelocity, offset: 0x364, size: 0x4, def value: None
 float_t  ____maxThrowVelocity;

/// [SerializeField]
/// @brief Field _onDeploy, offset: 0x368, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onDeploy;

/// [SerializeField]
/// @brief Field _onReturn, offset: 0x370, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onReturn;

/// [SerializeField]
/// @brief Field _rigAwareObjects, offset: 0x378, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Component>>  ____rigAwareObjects;

/// [SerializeField]
/// @brief Field m_spamChecker, offset: 0x380, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___m_spamChecker;

/// @brief Field m_VRRig, offset: 0x388, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___m_VRRig;

/// @brief Size padding 0x3c0 - 0x390 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeployableObject, ____objectToDeploy) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ____child) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ____disabledWhileDeployed) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ___deploySound) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ____deploySignal) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ____maxDeployDistance) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ____maxThrowVelocity) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ____onDeploy) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ____onReturn) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ____rigAwareObjects) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ___m_spamChecker) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployableObject, ___m_VRRig) == 0x388, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeployableObject) == 0x3c0, "Size mismatch!");

} // namespace end def GlobalNamespace
