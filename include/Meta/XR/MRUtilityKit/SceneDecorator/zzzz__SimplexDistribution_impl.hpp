#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SimplexDistribution.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SimplexDistribution_PointSamplingConfig_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SimplexDistribution_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecorator_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SimplexDistribution_PointSamplingConfig_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution.GeneratePointsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::ArrayW<::UnityEngine::Vector2>,::ArrayW<::UnityEngine::Vector2>> (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::GlobalNamespace::SimplexDistribution_PointSamplingConfig)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::GeneratePointsLocal)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x9f50164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*>(),
                        {"GeneratePointsLocal", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::GlobalNamespace::SimplexDistribution_PointSamplingConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution.Distribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::*)(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::Distribute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9f50534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f50608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SimplexDistribution_PointSamplingConfig& Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::__cordl_internal_get_pointSamplingConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointSamplingConfig;
}
constexpr ::GlobalNamespace::SimplexDistribution_PointSamplingConfig const& Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::__cordl_internal_get_pointSamplingConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointSamplingConfig;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::__cordl_internal_set_pointSamplingConfig(::GlobalNamespace::SimplexDistribution_PointSamplingConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointSamplingConfig = value;
}
inline ::System::ValueTuple_2<::ArrayW<::UnityEngine::Vector2>,::ArrayW<::UnityEngine::Vector2>> Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::GeneratePointsLocal(::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::GlobalNamespace::SimplexDistribution_PointSamplingConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*>(),
                        {"GeneratePointsLocal", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::GlobalNamespace::SimplexDistribution_PointSamplingConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ArrayW<::UnityEngine::Vector2>,::ArrayW<::UnityEngine::Vector2>>>(nullptr, ___internal_method, sceneAnchor, config);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneDecorator, sceneAnchor, sceneDecoration);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution* Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*>());
}
/// @brief Convert operator to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr  Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::operator ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution* Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::i___Meta__XR__MRUtilityKit__SceneDecorator__SceneDecorator_IDistribution() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution::SimplexDistribution()   {
}
