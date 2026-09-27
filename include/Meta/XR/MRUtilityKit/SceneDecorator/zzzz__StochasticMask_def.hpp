#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/StochasticMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskAdd_MaskLayer_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StochasticMask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class StochasticMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "StochasticMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.CompositeMaskAdd::MaskLayer, Meta.XR.MRUtilityKit.SceneDecorator.Mask2D
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.StochasticMask
class CORDL_TYPE StochasticMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D {
public:
// Declarations
/// @brief Field probabilitySource, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_probabilitySource, put=__cordl_internal_set_probabilitySource)) ::GlobalNamespace::CompositeMaskAdd_MaskLayer  probabilitySource;

/// @brief Method Check, addr 0x9f52588, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f524b8, size 0xd0, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

constexpr ::GlobalNamespace::CompositeMaskAdd_MaskLayer const& __cordl_internal_get_probabilitySource() const;

constexpr ::GlobalNamespace::CompositeMaskAdd_MaskLayer& __cordl_internal_get_probabilitySource() ;

constexpr void __cordl_internal_set_probabilitySource(::GlobalNamespace::CompositeMaskAdd_MaskLayer  value) ;

/// @brief Method .ctor, addr 0x9f52590, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StochasticMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StochasticMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StochasticMask(StochasticMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StochasticMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StochasticMask(StochasticMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25942};

/// [SerializeField]
/// @brief Field probabilitySource, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::CompositeMaskAdd_MaskLayer  ___probabilitySource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask, ___probabilitySource) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask) == 0x50, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
