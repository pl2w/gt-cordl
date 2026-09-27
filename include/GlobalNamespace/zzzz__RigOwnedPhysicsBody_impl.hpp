#pragma once
// IWYU pragma private; include "GlobalNamespace/RigOwnedPhysicsBody.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RigOwnedPhysicsBody_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__RigOwnedRigidbodyView_def.hpp"
#include "Photon/Pun/zzzz__RigOwnedTransformView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigOwnedPhysicsBody.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigOwnedPhysicsBody::*)()>(&::GlobalNamespace::RigOwnedPhysicsBody::Awake)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ac15c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigOwnedPhysicsBody.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigOwnedPhysicsBody::*)()>(&::GlobalNamespace::RigOwnedPhysicsBody::OnEnable)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5ac1718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigOwnedPhysicsBody.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigOwnedPhysicsBody::*)()>(&::GlobalNamespace::RigOwnedPhysicsBody::OnDisable)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ac1eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigOwnedPhysicsBody.OnNetConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigOwnedPhysicsBody::*)()>(&::GlobalNamespace::RigOwnedPhysicsBody::OnNetConnect)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5ac19ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"OnNetConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigOwnedPhysicsBody.OnNetDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigOwnedPhysicsBody::*)()>(&::GlobalNamespace::RigOwnedPhysicsBody::OnNetDisconnect)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5ac1ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"OnNetDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigOwnedPhysicsBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigOwnedPhysicsBody::*)()>(&::GlobalNamespace::RigOwnedPhysicsBody::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac204c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::Photon::Pun::RigOwnedTransformView>& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_transformView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformView;
}
constexpr ::UnityW<::Photon::Pun::RigOwnedTransformView> const& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_transformView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformView;
}
constexpr void GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_set_transformView(::UnityW<::Photon::Pun::RigOwnedTransformView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformView = value;
}
constexpr bool& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_hasTransformView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTransformView;
}
constexpr bool const& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_hasTransformView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTransformView;
}
constexpr void GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_set_hasTransformView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasTransformView = value;
}
constexpr ::UnityW<::Photon::Pun::RigOwnedRigidbodyView>& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_rigidbodyView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbodyView;
}
constexpr ::UnityW<::Photon::Pun::RigOwnedRigidbodyView> const& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_rigidbodyView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbodyView;
}
constexpr void GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_set_rigidbodyView(::UnityW<::Photon::Pun::RigOwnedRigidbodyView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbodyView = value;
}
constexpr bool& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_hasRigidbodyView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRigidbodyView;
}
constexpr bool const& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_hasRigidbodyView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRigidbodyView;
}
constexpr void GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_set_hasRigidbodyView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasRigidbodyView = value;
}
constexpr ::ArrayW<::UnityW<::Photon::Pun::MonoBehaviourPun>>& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_otherComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherComponents;
}
constexpr ::ArrayW<::UnityW<::Photon::Pun::MonoBehaviourPun>> const& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_otherComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherComponents;
}
constexpr void GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_set_otherComponents(::ArrayW<::UnityW<::Photon::Pun::MonoBehaviourPun>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherComponents = value;
}
constexpr bool& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_hasRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRig;
}
constexpr bool const& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_hasRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRig;
}
constexpr void GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_set_hasRig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasRig = value;
}
constexpr bool& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_detachTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachTransform;
}
constexpr bool const& GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_get_detachTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachTransform;
}
constexpr void GlobalNamespace::RigOwnedPhysicsBody::__cordl_internal_set_detachTransform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detachTransform = value;
}
inline void GlobalNamespace::RigOwnedPhysicsBody::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigOwnedPhysicsBody::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigOwnedPhysicsBody::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigOwnedPhysicsBody::OnNetConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"OnNetConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigOwnedPhysicsBody::OnNetDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {"OnNetDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigOwnedPhysicsBody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigOwnedPhysicsBody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigOwnedPhysicsBody* GlobalNamespace::RigOwnedPhysicsBody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigOwnedPhysicsBody*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigOwnedPhysicsBody::RigOwnedPhysicsBody()   {
}
