#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ConstantMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConstantMask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class ConstantMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "ConstantMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Mask
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.ConstantMask
class CORDL_TYPE ConstantMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask {
public:
// Declarations
/// @brief Field constant, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_constant, put=__cordl_internal_set_constant)) float_t  constant;

/// @brief Method Check, addr 0x9f51940, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f51938, size 0x8, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

constexpr float_t const& __cordl_internal_get_constant() const;

constexpr float_t& __cordl_internal_get_constant() ;

constexpr void __cordl_internal_set_constant(float_t  value) ;

/// @brief Method .ctor, addr 0x9f51948, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantMask(ConstantMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantMask(ConstantMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25929};

/// [SerializeField]
/// @brief Field constant, offset: 0x18, size: 0x4, def value: None
 float_t  ___constant;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask, ___constant) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::ConstantMask) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
