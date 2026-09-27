#pragma once
// IWYU pragma private; include "VYaml/Parser/VersionDirective.hpp"
#include "VYaml/Parser/zzzz__VersionDirective_def.hpp"
#include "VYaml/Parser/zzzz__ITokenContent_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::VersionDirective._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::VersionDirective::*)(int32_t, int32_t)>(&::VYaml::Parser::VersionDirective::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb962448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::VersionDirective>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Parser::VersionDirective::_ctor(int32_t  major, int32_t  minor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::VersionDirective>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, major, minor);
}
/// @brief Convert operator to "::VYaml::Parser::ITokenContent"
constexpr  VYaml::Parser::VersionDirective::operator ::VYaml::Parser::ITokenContent*()  {
return static_cast<::VYaml::Parser::ITokenContent*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::VYaml::Parser::ITokenContent"
constexpr ::VYaml::Parser::ITokenContent* VYaml::Parser::VersionDirective::i___VYaml__Parser__ITokenContent()  {
return static_cast<::VYaml::Parser::ITokenContent*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Major", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Minor", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::VersionDirective::VersionDirective(int32_t  Major, int32_t  Minor) noexcept  {
this->Major = Major;
this->Minor = Minor;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::VersionDirective::VersionDirective()   {
}
