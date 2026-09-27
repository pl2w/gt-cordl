#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SimplexNoiseMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimplexNoiseMask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SimplexNoiseMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexNoiseMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexNoiseMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "SimplexNoiseMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Mask2D
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SimplexNoiseMask
class CORDL_TYPE SimplexNoiseMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D {
public:
// Declarations
/// @brief Method Check, addr 0x9f52348, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexNoiseMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f522bc, size 0x8c, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

/// @brief Method .ctor, addr 0x9f52350, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimplexNoiseMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimplexNoiseMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimplexNoiseMask(SimplexNoiseMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimplexNoiseMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimplexNoiseMask(SimplexNoiseMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25939};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexNoiseMask) == 0x38, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
