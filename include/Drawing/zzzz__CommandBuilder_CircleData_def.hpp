#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_CircleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_CircleData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_CircleData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_CircleData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_CircleData, "Drawing", "CommandBuilder/CircleData");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/CircleData
struct CORDL_TYPE CommandBuilder_CircleData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_CircleData() ;

// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_CircleData(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  center;

/// @brief Field normal, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  normal;

/// @brief Field radius, offset: 0x18, size: 0x4, def value: None
 float_t  radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_CircleData, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_CircleData, normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_CircleData, radius) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_CircleData) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
