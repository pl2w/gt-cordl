#pragma once
// IWYU pragma private; include "UnityEngine/GUIClip_ParentClipScope.hpp"
#include "UnityEngine/zzzz__GUIClip_ParentClipScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GUIClip_ParentClipScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GUIClip_ParentClipScope::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Rect)>(&::GlobalNamespace::GUIClip_ParentClipScope::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb6435ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GUIClip_ParentClipScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GUIClip_ParentClipScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GUIClip_ParentClipScope::*)()>(&::GlobalNamespace::GUIClip_ParentClipScope::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb643630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GUIClip_ParentClipScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GUIClip_ParentClipScope::_ctor(::UnityEngine::Matrix4x4  objectTransform, ::UnityEngine::Rect  clipRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GUIClip_ParentClipScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, objectTransform, clipRect);
}
inline void GlobalNamespace::GUIClip_ParentClipScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GUIClip_ParentClipScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GUIClip_ParentClipScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GUIClip_ParentClipScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GUIClip_ParentClipScope::GUIClip_ParentClipScope(bool  m_Disposed) noexcept  {
this->m_Disposed = m_Disposed;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GUIClip_ParentClipScope::GUIClip_ParentClipScope()   {
}
