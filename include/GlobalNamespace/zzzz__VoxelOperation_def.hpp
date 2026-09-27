#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OperationType_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelOperation)
namespace GlobalNamespace {
struct VoxelAction;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct VoxelOperation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelOperation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelOperation, "", "VoxelOperation");
// Dependencies OperationType, Unity.Mathematics.int3
namespace GlobalNamespace {
// Is value type: true
// CS Name: VoxelOperation
struct CORDL_TYPE VoxelOperation {
public:
// Declarations
/// @brief Method IsValid, addr 0x5df60b0, size 0x30, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToString, addr 0x5df60e0, size 0x24c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5df5fe8, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  origin, ::GlobalNamespace::VoxelAction  action) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoxelOperation() ;

// Ctor Parameters [CppParam { name: "origin", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "operationType", ty: "::GlobalNamespace::OperationType", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "strength", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr VoxelOperation(::Unity::Mathematics::int3  origin, ::GlobalNamespace::OperationType  operationType, int16_t  radius, int16_t  strength, uint8_t  material) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{496};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field origin, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::int3  origin;

/// @brief Field operationType, offset: 0xc, size: 0x1, def value: None
 ::GlobalNamespace::OperationType  operationType;

/// @brief Field radius, offset: 0xe, size: 0x2, def value: None
 int16_t  radius;

/// @brief Field strength, offset: 0x10, size: 0x2, def value: None
 int16_t  strength;

/// @brief Field material, offset: 0x12, size: 0x1, def value: None
 uint8_t  material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelOperation, origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelOperation, operationType) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelOperation, radius) == 0xe, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelOperation, strength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelOperation, material) == 0x12, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelOperation) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
