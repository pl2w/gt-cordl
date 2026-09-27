#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_BoxData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_BoxData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_BoxData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_BoxData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_BoxData, "Drawing", "CommandBuilder/BoxData");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/BoxData
struct CORDL_TYPE CommandBuilder_BoxData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_BoxData() ;

// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_BoxData(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  center;

/// @brief Field size, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_BoxData, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_BoxData, size) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_BoxData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
