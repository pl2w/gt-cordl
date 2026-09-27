#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformRotator.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransformRotator_def.hpp"
#include "GlobalNamespace/zzzz__TransformRotator__Start_d__5_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformRotator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformRotator::*)()>(&::GlobalNamespace::TransformRotator::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b3a490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformRotator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformRotator.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformRotator::*)()>(&::GlobalNamespace::TransformRotator::LateUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b3a538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformRotator*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformRotator.UpdateRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformRotator::*)(double_t)>(&::GlobalNamespace::TransformRotator::UpdateRotation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b3a638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformRotator*>(),
                        {"UpdateRotation", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformRotator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformRotator::*)()>(&::GlobalNamespace::TransformRotator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b3a728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformRotator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformRotator::__cordl_internal_get_axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformRotator::__cordl_internal_get_axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr void GlobalNamespace::TransformRotator::__cordl_internal_set_axis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis = value;
}
constexpr float_t& GlobalNamespace::TransformRotator::__cordl_internal_get_degreesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___degreesPerSecond;
}
constexpr float_t const& GlobalNamespace::TransformRotator::__cordl_internal_get_degreesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___degreesPerSecond;
}
constexpr void GlobalNamespace::TransformRotator::__cordl_internal_set_degreesPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___degreesPerSecond = value;
}
constexpr float_t& GlobalNamespace::TransformRotator::__cordl_internal_get_sinAmp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sinAmp;
}
constexpr float_t const& GlobalNamespace::TransformRotator::__cordl_internal_get_sinAmp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sinAmp;
}
constexpr void GlobalNamespace::TransformRotator::__cordl_internal_set_sinAmp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sinAmp = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TransformRotator::__cordl_internal_get_baseRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TransformRotator::__cordl_internal_get_baseRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseRotation;
}
constexpr void GlobalNamespace::TransformRotator::__cordl_internal_set_baseRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseRotation = value;
}
constexpr ::System::DateTime& GlobalNamespace::TransformRotator::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::System::DateTime const& GlobalNamespace::TransformRotator::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void GlobalNamespace::TransformRotator::__cordl_internal_set_anchor(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
inline void GlobalNamespace::TransformRotator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformRotator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformRotator::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformRotator*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformRotator::UpdateRotation(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformRotator*>(),
                        {"UpdateRotation", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::TransformRotator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformRotator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransformRotator* GlobalNamespace::TransformRotator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransformRotator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformRotator::TransformRotator()   {
}
