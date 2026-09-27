#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MapParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/Acoustics/zzzz__AcousticMapFlags_def.hpp"
#include "Meta/XR/Acoustics/zzzz__SceneIRCallbacks_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MapParameters)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct MapParameters;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::MapParameters);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::MapParameters, "Meta.XR.Acoustics", "MapParameters");
// Dependencies Meta.XR.Acoustics.AcousticMapFlags, Meta.XR.Acoustics.SceneIRCallbacks, System.UIntPtr
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.MapParameters
struct CORDL_TYPE MapParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MapParameters() ;

// Ctor Parameters [CppParam { name: "thisSize", ty: "::System::UIntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "callbacks", ty: "::Meta::XR::Acoustics::SceneIRCallbacks", modifiers: "", def_value: None, comment: None }, CppParam { name: "threadCount", ty: "::System::UIntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "reflectionCount", ty: "::System::UIntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::Meta::XR::Acoustics::AcousticMapFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "minResolution", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxResolution", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "headHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gravityVectorX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gravityVectorY", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gravityVectorZ", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MapParameters(::System::UIntPtr  thisSize, ::Meta::XR::Acoustics::SceneIRCallbacks  callbacks, ::System::UIntPtr  threadCount, ::System::UIntPtr  reflectionCount, ::Meta::XR::Acoustics::AcousticMapFlags  flags, float_t  minResolution, float_t  maxResolution, float_t  headHeight, float_t  maxHeight, float_t  gravityVectorX, float_t  gravityVectorY, float_t  gravityVectorZ) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field thisSize, offset: 0x0, size: 0x8, def value: None
 ::System::UIntPtr  thisSize;

/// @brief Field callbacks, offset: 0x8, size: 0x10, def value: None
 ::Meta::XR::Acoustics::SceneIRCallbacks  callbacks;

/// @brief Field threadCount, offset: 0x18, size: 0x8, def value: None
 ::System::UIntPtr  threadCount;

/// @brief Field reflectionCount, offset: 0x20, size: 0x8, def value: None
 ::System::UIntPtr  reflectionCount;

/// @brief Field flags, offset: 0x28, size: 0x4, def value: None
 ::Meta::XR::Acoustics::AcousticMapFlags  flags;

/// @brief Field minResolution, offset: 0x2c, size: 0x4, def value: None
 float_t  minResolution;

/// @brief Field maxResolution, offset: 0x30, size: 0x4, def value: None
 float_t  maxResolution;

/// @brief Field headHeight, offset: 0x34, size: 0x4, def value: None
 float_t  headHeight;

/// @brief Field maxHeight, offset: 0x38, size: 0x4, def value: None
 float_t  maxHeight;

/// @brief Field gravityVectorX, offset: 0x3c, size: 0x4, def value: None
 float_t  gravityVectorX;

/// @brief Field gravityVectorY, offset: 0x40, size: 0x4, def value: None
 float_t  gravityVectorY;

/// @brief Field gravityVectorZ, offset: 0x44, size: 0x4, def value: None
 float_t  gravityVectorZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, thisSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, callbacks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, threadCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, reflectionCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, flags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, minResolution) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, maxResolution) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, headHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, maxHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, gravityVectorX) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, gravityVectorY) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MapParameters, gravityVectorZ) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::MapParameters) == 0x48, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
