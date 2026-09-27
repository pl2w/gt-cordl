#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_TextData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__LabelAlignment_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuilder_TextData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_TextData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_TextData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_TextData, "Drawing", "CommandBuilder/TextData");
// Dependencies Drawing.LabelAlignment, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/TextData
struct CORDL_TYPE CommandBuilder_TextData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_TextData() ;

// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignment", ty: "::Drawing::LabelAlignment", modifiers: "", def_value: None, comment: None }, CppParam { name: "sizeInPixels", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numCharacters", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_TextData(::Unity::Mathematics::float3  center, ::Drawing::LabelAlignment  alignment, float_t  sizeInPixels, int32_t  numCharacters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27706};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  center;

/// @brief Field alignment, offset: 0xc, size: 0x10, def value: None
 ::Drawing::LabelAlignment  alignment;

/// @brief Field sizeInPixels, offset: 0x1c, size: 0x4, def value: None
 float_t  sizeInPixels;

/// @brief Field numCharacters, offset: 0x20, size: 0x4, def value: None
 int32_t  numCharacters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData, alignment) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData, sizeInPixels) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData, numCharacters) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_TextData) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
