#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_ControlSchemeChangeSyntax.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_ControlSchemeChangeSyntax_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax.AndPairRemainingDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputUser_ControlSchemeChangeSyntax (::GlobalNamespace::InputUser_ControlSchemeChangeSyntax::*)()>(&::GlobalNamespace::InputUser_ControlSchemeChangeSyntax::AndPairRemainingDevices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xafd10c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUser_ControlSchemeChangeSyntax>(),
                        {"AndPairRemainingDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax GlobalNamespace::InputUser_ControlSchemeChangeSyntax::AndPairRemainingDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUser_ControlSchemeChangeSyntax>(),
                        {"AndPairRemainingDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputUser_ControlSchemeChangeSyntax>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UserIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax::InputUser_ControlSchemeChangeSyntax(int32_t  m_UserIndex) noexcept  {
this->m_UserIndex = m_UserIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax::InputUser_ControlSchemeChangeSyntax()   {
}
