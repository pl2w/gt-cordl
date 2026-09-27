#pragma once
// IWYU pragma private; include "VYaml/Parser/Marker.hpp"
#include "VYaml/Parser/zzzz__Marker_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::Marker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Marker::*)(int32_t, int32_t, int32_t)>(&::VYaml::Parser::Marker::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb95bcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Marker>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Marker.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::Marker::*)()>(&::VYaml::Parser::Marker::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb95bce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::VYaml::Parser::Marker>(),
                    {::i2c::class_of<::VYaml::Parser::Marker>(), 3}
                ));
    return ___internal_method;
  }
};
inline void VYaml::Parser::Marker::_ctor(int32_t  position, int32_t  line, int32_t  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Marker>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, line, col);
}
inline ::StringW VYaml::Parser::Marker::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Parser::Marker>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Position", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Line", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Col", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::Marker::Marker(int32_t  Position, int32_t  Line, int32_t  Col) noexcept  {
this->Position = Position;
this->Line = Line;
this->Col = Col;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::Marker::Marker()   {
}
