#pragma once
// IWYU pragma private; include "GlobalNamespace/ScalerUpper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__ScalerUpper_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScalerUpper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScalerUpper::*)()>(&::GlobalNamespace::ScalerUpper::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5744a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScalerUpper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScalerUpper.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScalerUpper::*)()>(&::GlobalNamespace::ScalerUpper::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5744b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScalerUpper*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScalerUpper.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScalerUpper::*)()>(&::GlobalNamespace::ScalerUpper::OnDisable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5744b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScalerUpper*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScalerUpper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScalerUpper::*)()>(&::GlobalNamespace::ScalerUpper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5744c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScalerUpper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::ScalerUpper::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::ScalerUpper::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::ScalerUpper::__cordl_internal_set_target(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ScalerUpper::__cordl_internal_get_scaleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ScalerUpper::__cordl_internal_get_scaleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCurve;
}
constexpr void GlobalNamespace::ScalerUpper::__cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleCurve = value;
}
constexpr float_t& GlobalNamespace::ScalerUpper::__cordl_internal_get_t()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t;
}
constexpr float_t const& GlobalNamespace::ScalerUpper::__cordl_internal_get_t() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t;
}
constexpr void GlobalNamespace::ScalerUpper::__cordl_internal_set_t(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___t = value;
}
inline void GlobalNamespace::ScalerUpper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScalerUpper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScalerUpper::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScalerUpper*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScalerUpper::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScalerUpper*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScalerUpper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScalerUpper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScalerUpper* GlobalNamespace::ScalerUpper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScalerUpper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScalerUpper::ScalerUpper()   {
}
