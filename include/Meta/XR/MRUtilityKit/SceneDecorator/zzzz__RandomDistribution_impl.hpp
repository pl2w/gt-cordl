#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/RandomDistribution.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__RandomDistribution_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecorator_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution.Distribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::*)(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::Distribute)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9f4ff6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f50154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::__cordl_internal_get_numPerUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPerUnit;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::__cordl_internal_get_numPerUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPerUnit;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::__cordl_internal_set_numPerUnit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numPerUnit = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneDecorator, sceneAnchor, sceneDecoration);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution* Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*>());
}
/// @brief Convert operator to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr  Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::operator ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution* Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::i___Meta__XR__MRUtilityKit__SceneDecorator__SceneDecorator_IDistribution() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution::RandomDistribution()   {
}
