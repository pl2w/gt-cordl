#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/GridDistribution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GridDistribution)
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
class GridDistribution;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*, "Meta.XR.MRUtilityKit.SceneDecorator", "GridDistribution");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.GridDistribution
class CORDL_TYPE GridDistribution : public ::System::Object {
public:
// Declarations
/// @brief Field spacingX, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_spacingX, put=__cordl_internal_set_spacingX)) float_t  spacingX;

/// @brief Field spacingY, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_spacingY, put=__cordl_internal_set_spacingY)) float_t  spacingY;

/// @brief Convert operator to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr operator  ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*() noexcept;

/// @brief Method Distribute, addr 0x9f4fbbc, size 0x22c, virtual true, abstract: false, final true
inline void Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution* New_ctor() ;

constexpr float_t const& __cordl_internal_get_spacingX() const;

constexpr float_t& __cordl_internal_get_spacingX() ;

constexpr float_t const& __cordl_internal_get_spacingY() const;

constexpr float_t& __cordl_internal_get_spacingY() ;

constexpr void __cordl_internal_set_spacingX(float_t  value) ;

constexpr void __cordl_internal_set_spacingY(float_t  value) ;

/// @brief Method .ctor, addr 0x9f4ff5c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution"
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution* i___Meta__XR__MRUtilityKit__SceneDecorator__SceneDecorator_IDistribution() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridDistribution() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridDistribution", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridDistribution(GridDistribution && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridDistribution", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridDistribution(GridDistribution const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25913};

/// [SerializeField]
/// @brief Field spacingX, offset: 0x10, size: 0x4, def value: None
 float_t  ___spacingX;

/// [SerializeField]
/// @brief Field spacingY, offset: 0x14, size: 0x4, def value: None
 float_t  ___spacingY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution, ___spacingX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution, ___spacingY) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
