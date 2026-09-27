#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CellularNoiseMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CellularNoiseMask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class CellularNoiseMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::CellularNoiseMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::CellularNoiseMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "CellularNoiseMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Mask2D
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.CellularNoiseMask
class CORDL_TYPE CellularNoiseMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D {
public:
// Declarations
/// @brief Method Check, addr 0x9f50a84, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::CellularNoiseMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f509dc, size 0x74, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

/// @brief Method .ctor, addr 0x9f50a8c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CellularNoiseMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CellularNoiseMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CellularNoiseMask(CellularNoiseMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CellularNoiseMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CellularNoiseMask(CellularNoiseMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25921};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::CellularNoiseMask) == 0x38, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
