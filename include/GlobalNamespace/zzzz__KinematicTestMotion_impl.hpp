#pragma once
// IWYU pragma private; include "GlobalNamespace/KinematicTestMotion.hpp"
#include "GlobalNamespace/zzzz__KinematicTestMotion_MoveType_impl.hpp"
#include "GlobalNamespace/zzzz__KinematicTestMotion_UpdateType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KinematicTestMotion_def.hpp"
#include "GlobalNamespace/zzzz__KinematicTestMotion_MoveType_def.hpp"
#include "GlobalNamespace/zzzz__KinematicTestMotion_UpdateType_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KinematicTestMotion.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KinematicTestMotion::*)()>(&::GlobalNamespace::KinematicTestMotion::FixedUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5adfe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KinematicTestMotion.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KinematicTestMotion::*)()>(&::GlobalNamespace::KinematicTestMotion::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5adffdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KinematicTestMotion.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KinematicTestMotion::*)()>(&::GlobalNamespace::KinematicTestMotion::LateUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ae0004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KinematicTestMotion.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KinematicTestMotion::*)(float_t)>(&::GlobalNamespace::KinematicTestMotion::UpdatePosition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5adfebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KinematicTestMotion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KinematicTestMotion::*)()>(&::GlobalNamespace::KinematicTestMotion::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ae0030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void GlobalNamespace::KinematicTestMotion::__cordl_internal_set_start(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void GlobalNamespace::KinematicTestMotion::__cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr void GlobalNamespace::KinematicTestMotion::__cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbody = value;
}
constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_updateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateType;
}
constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType const& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_updateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateType;
}
constexpr void GlobalNamespace::KinematicTestMotion::__cordl_internal_set_updateType(::GlobalNamespace::KinematicTestMotion_UpdateType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateType = value;
}
constexpr ::GlobalNamespace::KinematicTestMotion_MoveType& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_moveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveType;
}
constexpr ::GlobalNamespace::KinematicTestMotion_MoveType const& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_moveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveType;
}
constexpr void GlobalNamespace::KinematicTestMotion::__cordl_internal_set_moveType(::GlobalNamespace::KinematicTestMotion_MoveType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveType = value;
}
constexpr float_t& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_period()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr float_t const& GlobalNamespace::KinematicTestMotion::__cordl_internal_get_period() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr void GlobalNamespace::KinematicTestMotion::__cordl_internal_set_period(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___period = value;
}
inline void GlobalNamespace::KinematicTestMotion::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KinematicTestMotion::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KinematicTestMotion::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KinematicTestMotion::UpdatePosition(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::KinematicTestMotion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KinematicTestMotion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KinematicTestMotion* GlobalNamespace::KinematicTestMotion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KinematicTestMotion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KinematicTestMotion::KinematicTestMotion()   {
}
