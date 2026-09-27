#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceBuilder_RefInstance.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceBuilder_RefInstance_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputDeviceBuilder_RefInstance.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputDeviceBuilder_RefInstance::*)()>(&::GlobalNamespace::InputDeviceBuilder_RefInstance::Dispose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaf31c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputDeviceBuilder_RefInstance>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputDeviceBuilder_RefInstance::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputDeviceBuilder_RefInstance>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::InputDeviceBuilder_RefInstance::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::InputDeviceBuilder_RefInstance::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputDeviceBuilder_RefInstance::InputDeviceBuilder_RefInstance()   {
}
