#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/GridDistribution.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__GridDistribution_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecorator_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution.Distribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::*)(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::Distribute)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9f4fbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f4ff5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::__cordl_internal_get_spacingX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spacingX;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::__cordl_internal_get_spacingX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spacingX;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::__cordl_internal_set_spacingX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spacingX = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::__cordl_internal_get_spacingY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spacingY;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::__cordl_internal_get_spacingY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spacingY;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::__cordl_internal_set_spacingY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spacingY = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneDecorator, sceneAnchor, sceneDecoration);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution* Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*>());
}
/// @brief Convert operator to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr  Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::operator ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution* Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::i___Meta__XR__MRUtilityKit__SceneDecorator__SceneDecorator_IDistribution() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution::GridDistribution()   {
}
