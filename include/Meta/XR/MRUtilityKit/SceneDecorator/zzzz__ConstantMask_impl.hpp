#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ConstantMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ConstantMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::SampleMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f51938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f51940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f51948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::__cordl_internal_get_constant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constant;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::__cordl_internal_get_constant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constant;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::__cordl_internal_set_constant(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constant = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask* Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask::ConstantMask()   {
}
