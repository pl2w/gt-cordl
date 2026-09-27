#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_TextData3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__LabelAlignment_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuilder_TextData3D)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_TextData3D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_TextData3D);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_TextData3D, "Drawing", "CommandBuilder/TextData3D");
// Dependencies Drawing.LabelAlignment, Unity.Mathematics.float3, Unity.Mathematics.quaternion
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/TextData3D
struct CORDL_TYPE CommandBuilder_TextData3D {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_TextData3D() ;

// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignment", ty: "::Drawing::LabelAlignment", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numCharacters", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_TextData3D(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Drawing::LabelAlignment  alignment, float_t  size, int32_t  numCharacters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27707};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  center;

/// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  rotation;

/// @brief Field alignment, offset: 0x1c, size: 0x10, def value: None
 ::Drawing::LabelAlignment  alignment;

/// @brief Field size, offset: 0x2c, size: 0x4, def value: None
 float_t  size;

/// @brief Field numCharacters, offset: 0x30, size: 0x4, def value: None
 int32_t  numCharacters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData3D, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData3D, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData3D, alignment) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData3D, size) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_TextData3D, numCharacters) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_TextData3D) == 0x34, "Size mismatch!");

} // namespace end def GlobalNamespace
