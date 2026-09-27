#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CookieMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CookieMask_SampleMode_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CookieMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CookieMask_SampleMode_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::SampleMask)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x9f51950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f51c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f51c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::__cordl_internal_get_cookie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::__cordl_internal_get_cookie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::__cordl_internal_set_cookie(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cookie = value;
}
constexpr ::GlobalNamespace::CookieMask_SampleMode& Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::__cordl_internal_get_sampleMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleMode;
}
constexpr ::GlobalNamespace::CookieMask_SampleMode const& Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::__cordl_internal_get_sampleMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleMode;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::__cordl_internal_set_sampleMode(::GlobalNamespace::CookieMask_SampleMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleMode = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask* Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask::CookieMask()   {
}
