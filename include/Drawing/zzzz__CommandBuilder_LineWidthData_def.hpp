#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_LineWidthData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_LineWidthData)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_LineWidthData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_LineWidthData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_LineWidthData, "Drawing", "CommandBuilder/LineWidthData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/LineWidthData
struct CORDL_TYPE CommandBuilder_LineWidthData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_LineWidthData() ;

// Ctor Parameters [CppParam { name: "pixels", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "automaticJoins", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_LineWidthData(float_t  pixels, bool  automaticJoins) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27705};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field pixels, offset: 0x0, size: 0x4, def value: None
 float_t  pixels;

/// @brief Field automaticJoins, offset: 0x4, size: 0x1, def value: None
 bool  automaticJoins;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_LineWidthData, pixels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_LineWidthData, automaticJoins) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_LineWidthData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
