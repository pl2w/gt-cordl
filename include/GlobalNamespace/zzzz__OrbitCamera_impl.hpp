#pragma once
// IWYU pragma private; include "GlobalNamespace/OrbitCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OrbitCamera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OrbitCamera.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OrbitCamera::*)()>(&::GlobalNamespace::OrbitCamera::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e8900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrbitCamera*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OrbitCamera.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OrbitCamera::*)()>(&::GlobalNamespace::OrbitCamera::Update)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x55e8904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrbitCamera*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OrbitCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OrbitCamera::*)()>(&::GlobalNamespace::OrbitCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e8b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrbitCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OrbitCamera::__cordl_internal_get_m_phase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_phase;
}
constexpr float_t const& GlobalNamespace::OrbitCamera::__cordl_internal_get_m_phase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_phase;
}
constexpr void GlobalNamespace::OrbitCamera::__cordl_internal_set_m_phase(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_phase = value;
}
inline void GlobalNamespace::OrbitCamera::setStaticF_kOrbitSpeed(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kOrbitSpeed", ::GlobalNamespace::OrbitCamera*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OrbitCamera::getStaticF_kOrbitSpeed()  {
return ::cordl_internals::getStaticField<float_t, "kOrbitSpeed", ::GlobalNamespace::OrbitCamera*>();
}
inline void GlobalNamespace::OrbitCamera::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrbitCamera*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OrbitCamera::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrbitCamera*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OrbitCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrbitCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OrbitCamera* GlobalNamespace::OrbitCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OrbitCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OrbitCamera::OrbitCamera()   {
}
