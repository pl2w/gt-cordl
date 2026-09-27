#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/RandomMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__RandomMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::SampleMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f52284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5228c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f52294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask* Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::RandomMask::RandomMask()   {
}
