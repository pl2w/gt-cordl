#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_LineData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_LineData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_LineData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_LineData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_LineData, "Drawing", "CommandBuilder/LineData");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/LineData
struct CORDL_TYPE CommandBuilder_LineData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_LineData() ;

// Ctor Parameters [CppParam { name: "a", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "b", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_LineData(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27697};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field a, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  a;

/// @brief Field b, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_LineData, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_LineData, b) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_LineData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
