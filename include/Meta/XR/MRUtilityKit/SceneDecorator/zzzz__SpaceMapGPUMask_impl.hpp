#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SpaceMapGPUMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SpaceMapGPUMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SpaceMapGPU_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::SampleMask)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f52378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f524a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f524b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>& Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::__cordl_internal_get_spaceMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spaceMap;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> const& Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::__cordl_internal_get_spaceMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spaceMap;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::__cordl_internal_set_spaceMap(::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spaceMap = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, candidate);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask* Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask::SpaceMapGPUMask()   {
}
