#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_TriangleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_TriangleData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_TriangleData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_TriangleData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_TriangleData, "Drawing", "CommandBuilder/TriangleData");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/TriangleData
struct CORDL_TYPE CommandBuilder_TriangleData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_TriangleData() ;

// Ctor Parameters [CppParam { name: "a", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "b", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "c", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_TriangleData(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27696};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field a, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  a;

/// @brief Field b, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  b;

/// @brief Field c, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_TriangleData, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TriangleData, b) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TriangleData, c) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_TriangleData) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
