#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_CircleXZData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_CircleXZData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_CircleXZData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_CircleXZData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_CircleXZData, "Drawing", "CommandBuilder/CircleXZData");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/CircleXZData
struct CORDL_TYPE CommandBuilder_CircleXZData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_CircleXZData() ;

// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "startAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "endAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_CircleXZData(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  center;

/// @brief Field radius, offset: 0xc, size: 0x4, def value: None
 float_t  radius;

/// @brief Field startAngle, offset: 0x10, size: 0x4, def value: None
 float_t  startAngle;

/// @brief Field endAngle, offset: 0x14, size: 0x4, def value: None
 float_t  endAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_CircleXZData, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_CircleXZData, radius) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_CircleXZData, startAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_CircleXZData, endAngle) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_CircleXZData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
