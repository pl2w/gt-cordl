#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/AnchorComponentDistanceMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__AnchorComponentDistanceMask_Axis_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__AnchorComponentDistanceMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__AnchorComponentDistanceMask_Axis_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::SampleMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f5092c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f509ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f509b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AnchorComponentDistanceMask_Axis& Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::__cordl_internal_get_axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr ::GlobalNamespace::AnchorComponentDistanceMask_Axis const& Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::__cordl_internal_get_axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::__cordl_internal_set_axis(::GlobalNamespace::AnchorComponentDistanceMask_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask* Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask::AnchorComponentDistanceMask()   {
}
