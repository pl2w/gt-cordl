#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SimplexDistribution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SimplexDistribution_PointSamplingConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SimplexDistribution)
namespace GlobalNamespace {
struct SimplexDistribution_PointSamplingConfig;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecoration;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecorator_IDistribution;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecorator;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SimplexDistribution;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*, "Meta.XR.MRUtilityKit.SceneDecorator", "SimplexDistribution");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.SimplexDistribution::PointSamplingConfig, System.Object
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SimplexDistribution
class CORDL_TYPE SimplexDistribution : public ::System::Object {
public:
// Declarations
using PointSamplingConfig = ::GlobalNamespace::SimplexDistribution_PointSamplingConfig;

/// @brief Field pointSamplingConfig, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_pointSamplingConfig, put=__cordl_internal_set_pointSamplingConfig)) ::GlobalNamespace::SimplexDistribution_PointSamplingConfig  pointSamplingConfig;

/// @brief Convert operator to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr operator  ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*() noexcept;

/// @brief Method Distribute, addr 0x9f50534, size 0xd4, virtual true, abstract: false, final true
inline void Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

/// @brief Method GeneratePointsLocal, addr 0x9f50164, size 0x3d0, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::ArrayW<::UnityEngine::Vector2>,::ArrayW<::UnityEngine::Vector2>> GeneratePointsLocal(::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::GlobalNamespace::SimplexDistribution_PointSamplingConfig  config) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution* New_ctor() ;

constexpr ::GlobalNamespace::SimplexDistribution_PointSamplingConfig const& __cordl_internal_get_pointSamplingConfig() const;

constexpr ::GlobalNamespace::SimplexDistribution_PointSamplingConfig& __cordl_internal_get_pointSamplingConfig() ;

constexpr void __cordl_internal_set_pointSamplingConfig(::GlobalNamespace::SimplexDistribution_PointSamplingConfig  value) ;

/// @brief Method .ctor, addr 0x9f50608, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution* i___Meta__XR__MRUtilityKit__SceneDecorator__SceneDecorator_IDistribution() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimplexDistribution() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimplexDistribution", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimplexDistribution(SimplexDistribution && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimplexDistribution", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimplexDistribution(SimplexDistribution const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25916};

/// [SerializeField]
/// @brief Field pointSamplingConfig, offset: 0x10, size: 0xc, def value: None
 ::GlobalNamespace::SimplexDistribution_PointSamplingConfig  ___pointSamplingConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution, ___pointSamplingConfig) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
