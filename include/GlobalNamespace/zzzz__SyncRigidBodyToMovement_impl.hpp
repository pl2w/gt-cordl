#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncRigidBodyToMovement.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SyncRigidBodyToMovement_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncRigidBodyToMovement.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncRigidBodyToMovement::*)()>(&::GlobalNamespace::SyncRigidBodyToMovement::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5989d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncRigidBodyToMovement.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncRigidBodyToMovement::*)()>(&::GlobalNamespace::SyncRigidBodyToMovement::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5989d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncRigidBodyToMovement.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncRigidBodyToMovement::*)()>(&::GlobalNamespace::SyncRigidBodyToMovement::OnDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5989e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncRigidBodyToMovement.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncRigidBodyToMovement::*)()>(&::GlobalNamespace::SyncRigidBodyToMovement::FixedUpdate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5989e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncRigidBodyToMovement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncRigidBodyToMovement::*)()>(&::GlobalNamespace::SyncRigidBodyToMovement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5989ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::SyncRigidBodyToMovement::__cordl_internal_get_targetRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::SyncRigidBodyToMovement::__cordl_internal_get_targetRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigidbody;
}
constexpr void GlobalNamespace::SyncRigidBodyToMovement::__cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SyncRigidBodyToMovement::__cordl_internal_get_targetParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SyncRigidBodyToMovement::__cordl_internal_get_targetParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetParent;
}
constexpr void GlobalNamespace::SyncRigidBodyToMovement::__cordl_internal_set_targetParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetParent = value;
}
inline void GlobalNamespace::SyncRigidBodyToMovement::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncRigidBodyToMovement::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncRigidBodyToMovement::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncRigidBodyToMovement::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncRigidBodyToMovement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncRigidBodyToMovement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SyncRigidBodyToMovement* GlobalNamespace::SyncRigidBodyToMovement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SyncRigidBodyToMovement*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyncRigidBodyToMovement::SyncRigidBodyToMovement()   {
}
