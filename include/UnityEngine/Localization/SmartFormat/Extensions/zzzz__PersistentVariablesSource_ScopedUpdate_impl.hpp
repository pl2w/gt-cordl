#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/PersistentVariablesSource_ScopedUpdate.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__PersistentVariablesSource_ScopedUpdate_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PersistentVariablesSource_ScopedUpdate.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistentVariablesSource_ScopedUpdate::*)()>(&::GlobalNamespace::PersistentVariablesSource_ScopedUpdate::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb040260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistentVariablesSource_ScopedUpdate>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PersistentVariablesSource_ScopedUpdate::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistentVariablesSource_ScopedUpdate>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PersistentVariablesSource_ScopedUpdate::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PersistentVariablesSource_ScopedUpdate::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PersistentVariablesSource_ScopedUpdate::PersistentVariablesSource_ScopedUpdate()   {
}
