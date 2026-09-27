#pragma once
// IWYU pragma private; include "GlobalNamespace/DeployableObject.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__DeployableObject_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__DeployedChild_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_3_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)()>(&::GlobalNamespace::DeployableObject::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x564a484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)()>(&::GlobalNamespace::DeployableObject::OnEnable)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x564a534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)()>(&::GlobalNamespace::DeployableObject::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x564a72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.OnRigPreDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::DeployableObject::OnRigPreDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x564a7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"OnRigPreDisable", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)()>(&::GlobalNamespace::DeployableObject::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x564a89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.LateUpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)()>(&::GlobalNamespace::DeployableObject::LateUpdateReplicated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x564a8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DeployableObject::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::DeployableObject::OnRelease)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x564a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.DeployLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::DeployableObject::DeployLocal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x564acfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.DeployRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)(int64_t, int32_t, int64_t, ::GlobalNamespace::PhotonSignalInfo)>(&::GlobalNamespace::DeployableObject::DeployRPC)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x564af34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"DeployRPC", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.DisableWhileDeployed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)(bool)>(&::GlobalNamespace::DeployableObject::DisableWhileDeployed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x564ad94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"DisableWhileDeployed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.DeployChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)()>(&::GlobalNamespace::DeployableObject::DeployChild)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x564a92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"DeployChild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject.ReturnChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)()>(&::GlobalNamespace::DeployableObject::ReturnChild)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x564a784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"ReturnChild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeployableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeployableObject::*)()>(&::GlobalNamespace::DeployableObject::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x564b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DeployableObject::__cordl_internal_get__objectToDeploy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectToDeploy;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DeployableObject::__cordl_internal_get__objectToDeploy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectToDeploy;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__objectToDeploy(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectToDeploy = value;
}
constexpr ::UnityW<::GlobalNamespace::DeployedChild>& GlobalNamespace::DeployableObject::__cordl_internal_get__child()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____child;
}
constexpr ::UnityW<::GlobalNamespace::DeployedChild> const& GlobalNamespace::DeployableObject::__cordl_internal_get__child() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____child;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__child(::UnityW<::GlobalNamespace::DeployedChild>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____child = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::DeployableObject::__cordl_internal_get__disabledWhileDeployed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledWhileDeployed;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::DeployableObject::__cordl_internal_get__disabledWhileDeployed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledWhileDeployed;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__disabledWhileDeployed(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledWhileDeployed = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::DeployableObject::__cordl_internal_get_deploySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deploySound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::DeployableObject::__cordl_internal_get_deploySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deploySound;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set_deploySound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deploySound = value;
}
constexpr ::GlobalNamespace::PhotonSignal_3<int64_t,int32_t,int64_t>*& GlobalNamespace::DeployableObject::__cordl_internal_get__deploySignal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deploySignal;
}
constexpr ::GlobalNamespace::PhotonSignal_3<int64_t,int32_t,int64_t>* const& GlobalNamespace::DeployableObject::__cordl_internal_get__deploySignal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deploySignal;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__deploySignal(::GlobalNamespace::PhotonSignal_3<int64_t,int32_t,int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deploySignal = value;
}
constexpr float_t& GlobalNamespace::DeployableObject::__cordl_internal_get__maxDeployDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDeployDistance;
}
constexpr float_t const& GlobalNamespace::DeployableObject::__cordl_internal_get__maxDeployDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDeployDistance;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__maxDeployDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDeployDistance = value;
}
constexpr float_t& GlobalNamespace::DeployableObject::__cordl_internal_get__maxThrowVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxThrowVelocity;
}
constexpr float_t const& GlobalNamespace::DeployableObject::__cordl_internal_get__maxThrowVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxThrowVelocity;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__maxThrowVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxThrowVelocity = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::DeployableObject::__cordl_internal_get__onDeploy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onDeploy;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::DeployableObject::__cordl_internal_get__onDeploy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onDeploy;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__onDeploy(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onDeploy = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::DeployableObject::__cordl_internal_get__onReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onReturn;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::DeployableObject::__cordl_internal_get__onReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onReturn;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__onReturn(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onReturn = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& GlobalNamespace::DeployableObject::__cordl_internal_get__rigAwareObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigAwareObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& GlobalNamespace::DeployableObject::__cordl_internal_get__rigAwareObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigAwareObjects;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set__rigAwareObjects(::ArrayW<::UnityW<::UnityEngine::Component>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigAwareObjects = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::DeployableObject::__cordl_internal_get_m_spamChecker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spamChecker;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::DeployableObject::__cordl_internal_get_m_spamChecker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spamChecker;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set_m_spamChecker(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_spamChecker = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::DeployableObject::__cordl_internal_get_m_VRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::DeployableObject::__cordl_internal_get_m_VRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VRRig;
}
constexpr void GlobalNamespace::DeployableObject::__cordl_internal_set_m_VRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VRRig = value;
}
inline void GlobalNamespace::DeployableObject::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeployableObject::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeployableObject::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeployableObject::OnRigPreDisable(::GlobalNamespace::RigContainer*  rc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"OnRigPreDisable", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc);
}
inline void GlobalNamespace::DeployableObject::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeployableObject::LateUpdateReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DeployableObject::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::DeployableObject::DeployLocal(::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel, bool  isRemote)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeployableObject*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, launchPos, launchRot, releaseVel, isRemote);
}
inline void GlobalNamespace::DeployableObject::DeployRPC(int64_t  packedPos, int32_t  packedRot, int64_t  packedVel, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"DeployRPC", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packedPos, packedRot, packedVel, info);
}
inline void GlobalNamespace::DeployableObject::DisableWhileDeployed(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"DisableWhileDeployed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::DeployableObject::DeployChild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"DeployChild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeployableObject::ReturnChild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {"ReturnChild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeployableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeployableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeployableObject* GlobalNamespace::DeployableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeployableObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeployableObject::DeployableObject()   {
}
