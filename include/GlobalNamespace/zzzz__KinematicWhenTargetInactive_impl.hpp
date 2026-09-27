#pragma once
// IWYU pragma private; include "GlobalNamespace/KinematicWhenTargetInactive.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rigidbody_impl.hpp"
#include "GlobalNamespace/zzzz__KinematicWhenTargetInactive_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KinematicWhenTargetInactive.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KinematicWhenTargetInactive::*)()>(&::GlobalNamespace::KinematicWhenTargetInactive::LateUpdate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x57928dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicWhenTargetInactive*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KinematicWhenTargetInactive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KinematicWhenTargetInactive::*)()>(&::GlobalNamespace::KinematicWhenTargetInactive::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57929c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicWhenTargetInactive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>& GlobalNamespace::KinematicWhenTargetInactive::__cordl_internal_get_rigidBodies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBodies;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>> const& GlobalNamespace::KinematicWhenTargetInactive::__cordl_internal_get_rigidBodies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBodies;
}
constexpr void GlobalNamespace::KinematicWhenTargetInactive::__cordl_internal_set_rigidBodies(::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBodies = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KinematicWhenTargetInactive::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KinematicWhenTargetInactive::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::KinematicWhenTargetInactive::__cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
inline void GlobalNamespace::KinematicWhenTargetInactive::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicWhenTargetInactive*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KinematicWhenTargetInactive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicWhenTargetInactive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KinematicWhenTargetInactive* GlobalNamespace::KinematicWhenTargetInactive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KinematicWhenTargetInactive*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KinematicWhenTargetInactive::KinematicWhenTargetInactive()   {
}
