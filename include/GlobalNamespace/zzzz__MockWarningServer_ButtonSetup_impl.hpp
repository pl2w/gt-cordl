#pragma once
// IWYU pragma private; include "GlobalNamespace/MockWarningServer_ButtonSetup.hpp"
#include "GlobalNamespace/zzzz__WarningButtonResult_impl.hpp"
#include "GlobalNamespace/zzzz__MockWarningServer_ButtonSetup_def.hpp"
#include "GlobalNamespace/zzzz__WarningButtonResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer_ButtonSetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer_ButtonSetup::*)(::StringW, ::GlobalNamespace::WarningButtonResult)>(&::GlobalNamespace::MockWarningServer_ButtonSetup::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a3f2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer_ButtonSetup>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::WarningButtonResult>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockWarningServer_ButtonSetup::_ctor(::StringW  txt, ::GlobalNamespace::WarningButtonResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer_ButtonSetup>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::WarningButtonResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, txt, result);
}
// Ctor Parameters [CppParam { name: "buttonText", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buttonResult", ty: "::GlobalNamespace::WarningButtonResult", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MockWarningServer_ButtonSetup::MockWarningServer_ButtonSetup(::StringW  buttonText, ::GlobalNamespace::WarningButtonResult  buttonResult) noexcept  {
this->buttonText = buttonText;
this->buttonResult = buttonResult;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockWarningServer_ButtonSetup::MockWarningServer_ButtonSetup()   {
}
