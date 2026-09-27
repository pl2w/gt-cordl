#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/DebugGizmos_ColorScope.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__DebugGizmos_ColorScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugGizmos_ColorScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugGizmos_ColorScope::*)(::UnityEngine::Color)>(&::GlobalNamespace::DebugGizmos_ColorScope::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9efa178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugGizmos_ColorScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugGizmos_ColorScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugGizmos_ColorScope::*)()>(&::GlobalNamespace::DebugGizmos_ColorScope::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9efc740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugGizmos_ColorScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DebugGizmos_ColorScope::_ctor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugGizmos_ColorScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline void GlobalNamespace::DebugGizmos_ColorScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugGizmos_ColorScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DebugGizmos_ColorScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DebugGizmos_ColorScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_savedColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugGizmos_ColorScope::DebugGizmos_ColorScope(::UnityEngine::Color  _savedColor) noexcept  {
this->_savedColor = _savedColor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugGizmos_ColorScope::DebugGizmos_ColorScope()   {
}
