#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/StaggeredConcentricDistribution.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__StaggeredConcentricDistribution_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecorator_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution.Distribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::*)(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::Distribute)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9f50668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f50924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::__cordl_internal_get_stepSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepSize;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::__cordl_internal_get_stepSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepSize;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::__cordl_internal_set_stepSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stepSize = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneDecorator, sceneAnchor, sceneDecoration);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution* Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*>());
}
/// @brief Convert operator to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr  Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::operator ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution* Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::i___Meta__XR__MRUtilityKit__SceneDecorator__SceneDecorator_IDistribution() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution::StaggeredConcentricDistribution()   {
}
