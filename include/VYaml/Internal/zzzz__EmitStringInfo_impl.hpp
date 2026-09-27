#pragma once
// IWYU pragma private; include "VYaml/Internal/EmitStringInfo.hpp"
#include "VYaml/Internal/zzzz__EmitStringInfo_def.hpp"
#include "VYaml/Emitter/zzzz__ScalarStyle_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::EmitStringInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Internal::EmitStringInfo::*)(int32_t, bool, bool)>(&::VYaml::Internal::EmitStringInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9665e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::EmitStringInfo.SuggestScalarStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Emitter::ScalarStyle (::VYaml::Internal::EmitStringInfo::*)()>(&::VYaml::Internal::EmitStringInfo::SuggestScalarStyle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb9665f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringInfo>(),
                        {"SuggestScalarStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Internal::EmitStringInfo::_ctor(int32_t  lines, bool  needsQuotes, bool  isReservedWord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lines, needsQuotes, isReservedWord);
}
inline ::VYaml::Emitter::ScalarStyle VYaml::Internal::EmitStringInfo::SuggestScalarStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::EmitStringInfo>(),
                        {"SuggestScalarStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Emitter::ScalarStyle>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Lines", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NeedsQuotes", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsReservedWord", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Internal::EmitStringInfo::EmitStringInfo(int32_t  Lines, bool  NeedsQuotes, bool  IsReservedWord) noexcept  {
this->Lines = Lines;
this->NeedsQuotes = NeedsQuotes;
this->IsReservedWord = IsReservedWord;
}
// Ctor Parameters []
constexpr ::VYaml::Internal::EmitStringInfo::EmitStringInfo()   {
}
