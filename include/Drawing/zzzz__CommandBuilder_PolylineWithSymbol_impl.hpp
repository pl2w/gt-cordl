#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_PolylineWithSymbol.hpp"
#include "Drawing/zzzz__CommandBuilder_SymbolDecoration_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_PolylineWithSymbol_def.hpp"
#include "Drawing/zzzz__CommandBuilder_SymbolDecoration_def.hpp"
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandBuilder_PolylineWithSymbol._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBuilder_PolylineWithSymbol::*)(::GlobalNamespace::CommandBuilder_SymbolDecoration, float_t, float_t, float_t, bool)>(&::GlobalNamespace::CommandBuilder_PolylineWithSymbol::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x55ad390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CommandBuilder_PolylineWithSymbol>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_SymbolDecoration>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBuilder_PolylineWithSymbol.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBuilder_PolylineWithSymbol::*)(::by_ref<::Drawing::CommandBuilder>, ::Unity::Mathematics::float3)>(&::GlobalNamespace::CommandBuilder_PolylineWithSymbol::MoveTo)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x55ad55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CommandBuilder_PolylineWithSymbol>(),
                        {"MoveTo", {}, {::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CommandBuilder_PolylineWithSymbol::_ctor(::GlobalNamespace::CommandBuilder_SymbolDecoration  symbol, float_t  symbolSize, float_t  symbolPadding, float_t  symbolSpacing, bool  reverseSymbols)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CommandBuilder_PolylineWithSymbol>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_SymbolDecoration>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, symbol, symbolSize, symbolPadding, symbolSpacing, reverseSymbols);
}
inline void GlobalNamespace::CommandBuilder_PolylineWithSymbol::MoveTo(::by_ref<::Drawing::CommandBuilder>  draw, ::Unity::Mathematics::float3  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CommandBuilder_PolylineWithSymbol>(),
                        {"MoveTo", {}, {::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, draw, next);
}
// Ctor Parameters [CppParam { name: "prev", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "symbolSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "symbolSpacing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "symbolPadding", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "symbolOffset", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "symbol", ty: "::GlobalNamespace::CommandBuilder_SymbolDecoration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reverseSymbols", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "odd", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_PolylineWithSymbol::CommandBuilder_PolylineWithSymbol(::Unity::Mathematics::float3  prev, float_t  offset, float_t  symbolSize, float_t  symbolSpacing, float_t  symbolPadding, float_t  symbolOffset, ::GlobalNamespace::CommandBuilder_SymbolDecoration  symbol, bool  reverseSymbols, bool  odd) noexcept  {
this->prev = prev;
this->offset = offset;
this->symbolSize = symbolSize;
this->symbolSpacing = symbolSpacing;
this->symbolPadding = symbolPadding;
this->symbolOffset = symbolOffset;
this->symbol = symbol;
this->reverseSymbols = reverseSymbols;
this->odd = odd;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_PolylineWithSymbol::CommandBuilder_PolylineWithSymbol()   {
}
