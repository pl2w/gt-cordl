#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MeshSimplification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/Acoustics/zzzz__MeshFlags_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MeshSimplification)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct MeshSimplification;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::MeshSimplification);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::MeshSimplification, "Meta.XR.Acoustics", "MeshSimplification");
// Dependencies Meta.XR.Acoustics.MeshFlags, System.UIntPtr
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.MeshSimplification
struct CORDL_TYPE MeshSimplification {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshSimplification() ;

// Ctor Parameters [CppParam { name: "thisSize", ty: "::System::UIntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::Meta::XR::Acoustics::MeshFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "unitScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxError", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minDiffractionEdgeAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minDiffractionEdgeLength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "flagLength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "threadCount", ty: "::System::UIntPtr", modifiers: "", def_value: None, comment: None }]
constexpr MeshSimplification(::System::UIntPtr  thisSize, ::Meta::XR::Acoustics::MeshFlags  flags, float_t  unitScale, float_t  maxError, float_t  minDiffractionEdgeAngle, float_t  minDiffractionEdgeLength, float_t  flagLength, ::System::UIntPtr  threadCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field thisSize, offset: 0x0, size: 0x8, def value: None
 ::System::UIntPtr  thisSize;

/// @brief Field flags, offset: 0x8, size: 0x4, def value: None
 ::Meta::XR::Acoustics::MeshFlags  flags;

/// @brief Field unitScale, offset: 0xc, size: 0x4, def value: None
 float_t  unitScale;

/// @brief Field maxError, offset: 0x10, size: 0x4, def value: None
 float_t  maxError;

/// @brief Field minDiffractionEdgeAngle, offset: 0x14, size: 0x4, def value: None
 float_t  minDiffractionEdgeAngle;

/// @brief Field minDiffractionEdgeLength, offset: 0x18, size: 0x4, def value: None
 float_t  minDiffractionEdgeLength;

/// @brief Field flagLength, offset: 0x1c, size: 0x4, def value: None
 float_t  flagLength;

/// @brief Field threadCount, offset: 0x20, size: 0x8, def value: None
 ::System::UIntPtr  threadCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::MeshSimplification, thisSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshSimplification, flags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshSimplification, unitScale) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshSimplification, maxError) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshSimplification, minDiffractionEdgeAngle) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshSimplification, minDiffractionEdgeLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshSimplification, flagLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshSimplification, threadCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::MeshSimplification) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
