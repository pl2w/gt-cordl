#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/NotInsideMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__NotInsideMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::SampleMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f51f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::Check)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x9f51f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::__cordl_internal_get_Labels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Labels;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::__cordl_internal_get_Labels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Labels;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::__cordl_internal_set_Labels(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Labels = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask* Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask::NotInsideMask()   {
}
