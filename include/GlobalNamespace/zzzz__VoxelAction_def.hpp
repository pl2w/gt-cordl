#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OperationType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelAction)
namespace GlobalNamespace {
struct OperationType;
}
// Forward declare root types
namespace GlobalNamespace {
struct VoxelAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelAction, "", "VoxelAction");
// Dependencies OperationType
namespace GlobalNamespace {
// Is value type: true
// CS Name: VoxelAction
struct CORDL_TYPE VoxelAction {
public:
// Declarations
/// @brief Method IsValid, addr 0x5df5f8c, size 0x5c, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method .ctor, addr 0x5df5f7c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OperationType  operation, float_t  radius, float_t  strength, uint8_t  material) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoxelAction() ;

// Ctor Parameters [CppParam { name: "operation", ty: "::GlobalNamespace::OperationType", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "strength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr VoxelAction(::GlobalNamespace::OperationType  operation, float_t  radius, float_t  strength, uint8_t  material) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{495};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field operation, offset: 0x0, size: 0x1, def value: None
 ::GlobalNamespace::OperationType  operation;

/// @brief Field radius, offset: 0x4, size: 0x4, def value: None
 float_t  radius;

/// @brief Field strength, offset: 0x8, size: 0x4, def value: None
 float_t  strength;

/// @brief Field material, offset: 0xc, size: 0x1, def value: None
 uint8_t  material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelAction, operation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelAction, radius) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelAction, strength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelAction, material) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelAction) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
