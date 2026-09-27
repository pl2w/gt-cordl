#pragma once
// IWYU pragma private; include "GlobalNamespace/GRMetalEnergyGate_DoorParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GRMetalEnergyGate_DoorParams)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GRMetalEnergyGate_DoorParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRMetalEnergyGate_DoorParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRMetalEnergyGate_DoorParams, "", "GRMetalEnergyGate/DoorParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRMetalEnergyGate/DoorParams
struct CORDL_TYPE GRMetalEnergyGate_DoorParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRMetalEnergyGate_DoorParams() ;

// Ctor Parameters [CppParam { name: "doorTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "doorClosedPosition", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "doorOpenPosition", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr GRMetalEnergyGate_DoorParams(::UnityW<::UnityEngine::Transform>  doorTransform, ::UnityW<::UnityEngine::Transform>  doorClosedPosition, ::UnityW<::UnityEngine::Transform>  doorOpenPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1988};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field doorTransform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  doorTransform;

/// @brief Field doorClosedPosition, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  doorClosedPosition;

/// @brief Field doorOpenPosition, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  doorOpenPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate_DoorParams, doorTransform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate_DoorParams, doorClosedPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate_DoorParams, doorOpenPosition) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRMetalEnergyGate_DoorParams) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
