#pragma once
// IWYU pragma private; include "GlobalNamespace/JellyfishUFOCamera.hpp"
#include "BoingKit/zzzz__Vector3Spring_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__JellyfishUFOCamera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JellyfishUFOCamera.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JellyfishUFOCamera::*)()>(&::GlobalNamespace::JellyfishUFOCamera::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55e6154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JellyfishUFOCamera*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JellyfishUFOCamera.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JellyfishUFOCamera::*)()>(&::GlobalNamespace::JellyfishUFOCamera::FixedUpdate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x55e6244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JellyfishUFOCamera*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JellyfishUFOCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JellyfishUFOCamera::*)()>(&::GlobalNamespace::JellyfishUFOCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e6468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JellyfishUFOCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::JellyfishUFOCamera::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::JellyfishUFOCamera::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void GlobalNamespace::JellyfishUFOCamera::__cordl_internal_set_Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
constexpr ::BoingKit::Vector3Spring& GlobalNamespace::JellyfishUFOCamera::__cordl_internal_get_m_spring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spring;
}
constexpr ::BoingKit::Vector3Spring const& GlobalNamespace::JellyfishUFOCamera::__cordl_internal_get_m_spring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spring;
}
constexpr void GlobalNamespace::JellyfishUFOCamera::__cordl_internal_set_m_spring(::BoingKit::Vector3Spring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_spring = value;
}
inline void GlobalNamespace::JellyfishUFOCamera::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JellyfishUFOCamera*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JellyfishUFOCamera::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JellyfishUFOCamera*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JellyfishUFOCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JellyfishUFOCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::JellyfishUFOCamera* GlobalNamespace::JellyfishUFOCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JellyfishUFOCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JellyfishUFOCamera::JellyfishUFOCamera()   {
}
