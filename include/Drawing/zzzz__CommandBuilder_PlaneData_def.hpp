#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_PlaneData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_PlaneData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_PlaneData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_PlaneData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_PlaneData, "Drawing", "CommandBuilder/PlaneData");
// Dependencies Unity.Mathematics.float2, Unity.Mathematics.float3, Unity.Mathematics.quaternion
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/PlaneData
struct CORDL_TYPE CommandBuilder_PlaneData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_PlaneData() ;

// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_PlaneData(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  center;

/// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  rotation;

/// @brief Field size, offset: 0x1c, size: 0x8, def value: None
 ::Unity::Mathematics::float2  size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_PlaneData, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PlaneData, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PlaneData, size) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_PlaneData) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
