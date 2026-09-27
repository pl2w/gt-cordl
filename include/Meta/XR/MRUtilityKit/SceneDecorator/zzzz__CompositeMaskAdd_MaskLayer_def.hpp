#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CompositeMaskAdd_MaskLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CompositeMaskAdd_MaskLayer)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class Mask;
}
// Forward declare root types
namespace GlobalNamespace {
struct CompositeMaskAdd_MaskLayer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CompositeMaskAdd_MaskLayer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeMaskAdd_MaskLayer, "Meta.XR.MRUtilityKit.SceneDecorator", "CompositeMaskAdd/MaskLayer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.CompositeMaskAdd/MaskLayer
struct CORDL_TYPE CompositeMaskAdd_MaskLayer {
public:
// Declarations
/// @brief Method SampleMask, addr 0x9f513b4, size 0x9c, virtual false, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

// Ctor Parameters []
// @brief default ctor
constexpr CompositeMaskAdd_MaskLayer() ;

// Ctor Parameters [CppParam { name: "mask", ty: "::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>", modifiers: "", def_value: None, comment: None }, CppParam { name: "outputScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "outputLimitMin", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "outputLimitMax", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "outputOffset", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CompositeMaskAdd_MaskLayer(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask, float_t  outputScale, float_t  outputLimitMin, float_t  outputLimitMax, float_t  outputOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25923};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field mask, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask;

/// @brief Field outputScale, offset: 0x8, size: 0x4, def value: None
 float_t  outputScale;

/// @brief Field outputLimitMin, offset: 0xc, size: 0x4, def value: None
 float_t  outputLimitMin;

/// @brief Field outputLimitMax, offset: 0x10, size: 0x4, def value: None
 float_t  outputLimitMax;

/// @brief Field outputOffset, offset: 0x14, size: 0x4, def value: None
 float_t  outputOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeMaskAdd_MaskLayer, mask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeMaskAdd_MaskLayer, outputScale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeMaskAdd_MaskLayer, outputLimitMin) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeMaskAdd_MaskLayer, outputLimitMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeMaskAdd_MaskLayer, outputOffset) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeMaskAdd_MaskLayer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
