#pragma once
// IWYU pragma private; include "GlobalNamespace/GRRigidBodyNoiseEventMaker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRRigidBodyNoiseEventMaker_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRRigidBodyNoiseEventMaker.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRigidBodyNoiseEventMaker::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::GRRigidBodyNoiseEventMaker::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x58aa0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRigidBodyNoiseEventMaker*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRigidBodyNoiseEventMaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRigidBodyNoiseEventMaker::*)()>(&::GlobalNamespace::GRRigidBodyNoiseEventMaker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58aa23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRigidBodyNoiseEventMaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRRigidBodyNoiseEventMaker::__cordl_internal_get_velocityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityThreshold;
}
constexpr float_t const& GlobalNamespace::GRRigidBodyNoiseEventMaker::__cordl_internal_get_velocityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityThreshold;
}
constexpr void GlobalNamespace::GRRigidBodyNoiseEventMaker::__cordl_internal_set_velocityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityThreshold = value;
}
inline void GlobalNamespace::GRRigidBodyNoiseEventMaker::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRigidBodyNoiseEventMaker*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::GRRigidBodyNoiseEventMaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRigidBodyNoiseEventMaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRRigidBodyNoiseEventMaker* GlobalNamespace::GRRigidBodyNoiseEventMaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRRigidBodyNoiseEventMaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRRigidBodyNoiseEventMaker::GRRigidBodyNoiseEventMaker()   {
}
