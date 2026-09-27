#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_PolylineWithSymbol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__CommandBuilder_SymbolDecoration_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_PolylineWithSymbol)
namespace Drawing {
struct CommandBuilder;
}
namespace GlobalNamespace {
struct CommandBuilder_SymbolDecoration;
}
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_PolylineWithSymbol;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_PolylineWithSymbol);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, "Drawing", "CommandBuilder/PolylineWithSymbol");
// Dependencies Drawing.CommandBuilder::SymbolDecoration, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/PolylineWithSymbol
struct CORDL_TYPE CommandBuilder_PolylineWithSymbol {
public:
// Declarations
/// @brief Method MoveTo, addr 0x55ad55c, size 0x4e0, virtual false, abstract: false, final false
inline void MoveTo(::by_ref<::Drawing::CommandBuilder>  draw, ::Unity::Mathematics::float3  next) ;

/// @brief Method .ctor, addr 0x55ad390, size 0x1cc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CommandBuilder_SymbolDecoration  symbol, float_t  symbolSize, float_t  symbolPadding, float_t  symbolSpacing, bool  reverseSymbols) ;

// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_PolylineWithSymbol() ;

// Ctor Parameters [CppParam { name: "prev", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "symbolSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "symbolSpacing", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "symbolPadding", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "symbolOffset", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "symbol", ty: "::GlobalNamespace::CommandBuilder_SymbolDecoration", modifiers: "", def_value: None, comment: None }, CppParam { name: "reverseSymbols", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "odd", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_PolylineWithSymbol(::Unity::Mathematics::float3  prev, float_t  offset, float_t  symbolSize, float_t  symbolSpacing, float_t  symbolPadding, float_t  symbolOffset, ::GlobalNamespace::CommandBuilder_SymbolDecoration  symbol, bool  reverseSymbols, bool  odd) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27714};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field prev, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  prev;

/// @brief Field offset, offset: 0xc, size: 0x4, def value: None
 float_t  offset;

/// @brief Field symbolSize, offset: 0x10, size: 0x4, def value: None
 float_t  symbolSize;

/// @brief Field symbolSpacing, offset: 0x14, size: 0x4, def value: None
 float_t  symbolSpacing;

/// @brief Field symbolPadding, offset: 0x18, size: 0x4, def value: None
 float_t  symbolPadding;

/// @brief Field symbolOffset, offset: 0x1c, size: 0x4, def value: None
 float_t  symbolOffset;

/// @brief Field symbol, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CommandBuilder_SymbolDecoration  symbol;

/// @brief Field reverseSymbols, offset: 0x24, size: 0x1, def value: None
 bool  reverseSymbols;

/// @brief Field odd, offset: 0x25, size: 0x1, def value: None
 bool  odd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, prev) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, offset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, symbolSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, symbolSpacing) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, symbolPadding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, symbolOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, symbol) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, reverseSymbols) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol, odd) == 0x25, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_PolylineWithSymbol) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
