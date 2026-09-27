#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerInputPoller__InputCallback.hpp"
#include "GlobalNamespace/zzzz__EControllerInputPressFlags_impl.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller__InputCallback_def.hpp"
#include "GlobalNamespace/zzzz__EControllerInputPressFlags_def.hpp"
#include "GlobalNamespace/zzzz__EHandednessFlags_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller__InputCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller__InputCallback::*)(::GlobalNamespace::EControllerInputPressFlags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller__InputCallback::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e7118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller__InputCallback>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ControllerInputPoller__InputCallback::_ctor(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller__InputCallback>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flags, callback);
}
// Ctor Parameters [CppParam { name: "flags", ty: "::GlobalNamespace::EControllerInputPressFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callback", ty: "::System::Action_1<::GlobalNamespace::EHandednessFlags>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ControllerInputPoller__InputCallback::ControllerInputPoller__InputCallback(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) noexcept  {
this->flags = flags;
this->callback = callback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerInputPoller__InputCallback::ControllerInputPoller__InputCallback()   {
}
