#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CompositeMaskMul.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskAdd_MaskLayer_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CompositeMaskMul)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class CompositeMaskMul;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*, "Meta.XR.MRUtilityKit.SceneDecorator", "CompositeMaskMul");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.CompositeMaskAdd::MaskLayer, Meta.XR.MRUtilityKit.SceneDecorator.Mask2D
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.CompositeMaskMul
class CORDL_TYPE CompositeMaskMul : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D {
public:
// Declarations
/// @brief Field maskLayers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_maskLayers, put=__cordl_internal_set_maskLayers)) ::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer>  maskLayers;

/// @brief Method Check, addr 0x9f51920, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f517f4, size 0x12c, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

constexpr ::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer> const& __cordl_internal_get_maskLayers() const;

constexpr ::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer>& __cordl_internal_get_maskLayers() ;

constexpr void __cordl_internal_set_maskLayers(::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer>  value) ;

/// @brief Method .ctor, addr 0x9f51928, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompositeMaskMul() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompositeMaskMul", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompositeMaskMul(CompositeMaskMul && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompositeMaskMul", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompositeMaskMul(CompositeMaskMul const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25928};

/// [SerializeField]
/// @brief Field maskLayers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer>  ___maskLayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul, ___maskLayers) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul) == 0x40, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
