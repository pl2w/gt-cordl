#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/RandomDistribution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RandomDistribution)
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
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class RandomDistribution;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*, "Meta.XR.MRUtilityKit.SceneDecorator", "RandomDistribution");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.RandomDistribution
class CORDL_TYPE RandomDistribution : public ::System::Object {
public:
// Declarations
/// @brief Field numPerUnit, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_numPerUnit, put=__cordl_internal_set_numPerUnit)) float_t  numPerUnit;

/// @brief Convert operator to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr operator  ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*() noexcept;

/// @brief Method Distribute, addr 0x9f4ff6c, size 0x1e8, virtual true, abstract: false, final true
inline void Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution* New_ctor() ;

constexpr float_t const& __cordl_internal_get_numPerUnit() const;

constexpr float_t& __cordl_internal_get_numPerUnit() ;

constexpr void __cordl_internal_set_numPerUnit(float_t  value) ;

/// @brief Method .ctor, addr 0x9f50154, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution* i___Meta__XR__MRUtilityKit__SceneDecorator__SceneDecorator_IDistribution() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomDistribution() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomDistribution", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomDistribution(RandomDistribution && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomDistribution", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomDistribution(RandomDistribution const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25914};

/// [SerializeField]
/// [Tooltip("How many entries to generate per unit (1m)")]
/// @brief Field numPerUnit, offset: 0x10, size: 0x4, def value: None
 float_t  ___numPerUnit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution, ___numPerUnit) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
