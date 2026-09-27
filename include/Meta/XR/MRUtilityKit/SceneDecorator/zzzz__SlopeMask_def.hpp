#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SlopeMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SlopeMask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SlopeMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SlopeMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SlopeMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "SlopeMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Mask
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SlopeMask
class CORDL_TYPE SlopeMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask {
public:
// Declarations
/// @brief Method Check, addr 0x9f52368, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::SlopeMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f52360, size 0x8, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

/// @brief Method .ctor, addr 0x9f52370, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlopeMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlopeMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlopeMask(SlopeMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlopeMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlopeMask(SlopeMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25940};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SlopeMask) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
