#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SceneDecoration.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Constraint_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__DistributionType_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Placement_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SpawnHierarchy_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Target_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__GridDistribution_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__RandomDistribution_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SimplexDistribution_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__StaggeredConcentricDistribution_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f54510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_Poolsize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Poolsize;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_Poolsize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Poolsize;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_Poolsize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Poolsize = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_decorationPrefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decorationPrefabs;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_decorationPrefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decorationPrefabs;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_decorationPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decorationPrefabs = value;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_executeSceneLabels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___executeSceneLabels;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_executeSceneLabels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___executeSceneLabels;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_executeSceneLabels(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___executeSceneLabels = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_targets(::Meta::XR::MRUtilityKit::SceneDecorator::Target  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targets = value;
}
constexpr ::UnityEngine::LayerMask& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_targetPhysicsLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPhysicsLayers;
}
constexpr ::UnityEngine::LayerMask const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_targetPhysicsLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPhysicsLayers;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_targetPhysicsLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPhysicsLayers = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_placement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placement;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_placement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placement;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_placement(::Meta::XR::MRUtilityKit::SceneDecorator::Placement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placement = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_placementDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementDirection;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_placementDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementDirection;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_placementDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placementDirection = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_selectBehind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectBehind;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_selectBehind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectBehind;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_selectBehind(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectBehind = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_rayOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayOffset;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_rayOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayOffset;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_rayOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayOffset = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_spawnHierarchy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHierarchy;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_spawnHierarchy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHierarchy;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_spawnHierarchy(::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnHierarchy = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_distributionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distributionType;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_distributionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distributionType;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_distributionType(::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distributionType = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_gridDistribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridDistribution;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution* const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_gridDistribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridDistribution;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_gridDistribution(::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridDistribution = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_simplexDistribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simplexDistribution;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution* const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_simplexDistribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simplexDistribution;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_simplexDistribution(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simplexDistribution = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_staggeredConcentricDistribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggeredConcentricDistribution;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution* const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_staggeredConcentricDistribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggeredConcentricDistribution;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_staggeredConcentricDistribution(::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staggeredConcentricDistribution = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_randomDistribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomDistribution;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution* const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_randomDistribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomDistribution;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_randomDistribution(::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomDistribution = value;
}
constexpr ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_masks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masks;
}
constexpr ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_masks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masks;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_masks(::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___masks = value;
}
constexpr ::ArrayW<::Meta::XR::MRUtilityKit::SceneDecorator::Constraint>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraints;
}
constexpr ::ArrayW<::Meta::XR::MRUtilityKit::SceneDecorator::Constraint> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraints;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_constraints(::ArrayW<::Meta::XR::MRUtilityKit::SceneDecorator::Constraint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constraints = value;
}
constexpr ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier>>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_modifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiers;
}
constexpr ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier>> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_modifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiers;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_modifiers(::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifiers = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_discardParentScaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___discardParentScaling;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_discardParentScaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___discardParentScaling;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_discardParentScaling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___discardParentScaling = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_lifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetime;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_lifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetime;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_lifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifetime = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_DrawDebugRaysAndImpactPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawDebugRaysAndImpactPoints;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_get_DrawDebugRaysAndImpactPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawDebugRaysAndImpactPoints;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::__cordl_internal_set_DrawDebugRaysAndImpactPoints(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawDebugRaysAndImpactPoints = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration* Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration::SceneDecoration()   {
}
