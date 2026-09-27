#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/AnchorDistanceMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__AnchorDistanceMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::SampleMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f509c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f509cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f509d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask* Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorDistanceMask::AnchorDistanceMask()   {
}
