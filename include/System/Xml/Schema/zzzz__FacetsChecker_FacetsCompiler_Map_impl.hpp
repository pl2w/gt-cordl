#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetsChecker_FacetsCompiler_Map.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_FacetsCompiler_Map_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FacetsCompiler_FacetsChecker_Map._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsCompiler_FacetsChecker_Map::*)(char16_t, ::StringW)>(&::GlobalNamespace::FacetsCompiler_FacetsChecker_Map::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaaddb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FacetsCompiler_FacetsChecker_Map::_ctor(char16_t  m, ::StringW  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m, r);
}
// Ctor Parameters [CppParam { name: "match", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "replacement", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FacetsCompiler_FacetsChecker_Map::FacetsCompiler_FacetsChecker_Map(char16_t  match, ::StringW  replacement) noexcept  {
this->match = match;
this->replacement = replacement;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FacetsCompiler_FacetsChecker_Map::FacetsCompiler_FacetsChecker_Map()   {
}
