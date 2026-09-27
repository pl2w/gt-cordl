#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_LineDataV3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_LineDataV3)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_LineDataV3;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_LineDataV3);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_LineDataV3, "Drawing", "CommandBuilder/LineDataV3");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/LineDataV3
struct CORDL_TYPE CommandBuilder_LineDataV3 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_LineDataV3() ;

// Ctor Parameters [CppParam { name: "a", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "b", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_LineDataV3(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field a, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  a;

/// @brief Field b, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_LineDataV3, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_LineDataV3, b) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_LineDataV3) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
