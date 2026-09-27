#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/AnchorComponentDistanceMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__AnchorComponentDistanceMask_Axis_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnchorComponentDistanceMask)
namespace GlobalNamespace {
struct AnchorComponentDistanceMask_Axis;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class AnchorComponentDistanceMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "AnchorComponentDistanceMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.AnchorComponentDistanceMask::Axis, Meta.XR.MRUtilityKit.SceneDecorator.Mask
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.AnchorComponentDistanceMask
class CORDL_TYPE AnchorComponentDistanceMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask {
public:
// Declarations
using Axis = ::GlobalNamespace::AnchorComponentDistanceMask_Axis;

/// @brief Field axis, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_axis, put=__cordl_internal_set_axis)) ::GlobalNamespace::AnchorComponentDistanceMask_Axis  axis;

/// @brief Method Check, addr 0x9f509ac, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f5092c, size 0x80, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

constexpr ::GlobalNamespace::AnchorComponentDistanceMask_Axis const& __cordl_internal_get_axis() const;

constexpr ::GlobalNamespace::AnchorComponentDistanceMask_Axis& __cordl_internal_get_axis() ;

constexpr void __cordl_internal_set_axis(::GlobalNamespace::AnchorComponentDistanceMask_Axis  value) ;

/// @brief Method .ctor, addr 0x9f509b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnchorComponentDistanceMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnchorComponentDistanceMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnchorComponentDistanceMask(AnchorComponentDistanceMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnchorComponentDistanceMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnchorComponentDistanceMask(AnchorComponentDistanceMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25919};

/// [SerializeField]
/// @brief Field axis, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::AnchorComponentDistanceMask_Axis  ___axis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask, ___axis) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::AnchorComponentDistanceMask) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
