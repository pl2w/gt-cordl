#pragma once
// IWYU pragma private; include "GlobalNamespace/UFOCamera.hpp"
#include "BoingKit/zzzz__Vector3Spring_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__UFOCamera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UFOCamera.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UFOCamera::*)()>(&::GlobalNamespace::UFOCamera::Start)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x55e7878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOCamera*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UFOCamera.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UFOCamera::*)()>(&::GlobalNamespace::UFOCamera::FixedUpdate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55e79ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOCamera*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UFOCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UFOCamera::*)()>(&::GlobalNamespace::UFOCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e7ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::UFOCamera::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::UFOCamera::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void GlobalNamespace::UFOCamera::__cordl_internal_set_Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::UFOCamera::__cordl_internal_get_m_targetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::UFOCamera::__cordl_internal_get_m_targetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetOffset;
}
constexpr void GlobalNamespace::UFOCamera::__cordl_internal_set_m_targetOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_targetOffset = value;
}
constexpr ::BoingKit::Vector3Spring& GlobalNamespace::UFOCamera::__cordl_internal_get_m_spring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spring;
}
constexpr ::BoingKit::Vector3Spring const& GlobalNamespace::UFOCamera::__cordl_internal_get_m_spring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spring;
}
constexpr void GlobalNamespace::UFOCamera::__cordl_internal_set_m_spring(::BoingKit::Vector3Spring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_spring = value;
}
inline void GlobalNamespace::UFOCamera::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOCamera*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UFOCamera::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOCamera*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UFOCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UFOCamera* GlobalNamespace::UFOCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UFOCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UFOCamera::UFOCamera()   {
}
