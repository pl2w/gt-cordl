#pragma once
// IWYU pragma private; include "UnityEngine/ScriptingUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptingUtility_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ScriptingUtility_TestClass_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScriptingUtility.IsManagedCodeWorking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::ScriptingUtility::IsManagedCodeWorking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5e4d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScriptingUtility*>(),
                        {"IsManagedCodeWorking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScriptingUtility.SetupCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ScriptingUtility::SetupCallbacks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5e4d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScriptingUtility*>(),
                        {"SetupCallbacks", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::ScriptingUtility::IsManagedCodeWorking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScriptingUtility*>(),
                        {"IsManagedCodeWorking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::ScriptingUtility::SetupCallbacks(::System::IntPtr  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScriptingUtility*>(),
                        {"SetupCallbacks", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScriptingUtility::ScriptingUtility()   {
}
