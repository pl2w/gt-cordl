#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputButtonReader_BypassScope.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_BypassScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRInputButtonReader_BypassScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRInputButtonReader_BypassScope::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::GlobalNamespace::XRInputButtonReader_BypassScope::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4c92a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInputButtonReader_BypassScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRInputButtonReader_BypassScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRInputButtonReader_BypassScope::*)()>(&::GlobalNamespace::XRInputButtonReader_BypassScope::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4c9a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInputButtonReader_BypassScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRInputButtonReader_BypassScope::_ctor(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInputButtonReader_BypassScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void GlobalNamespace::XRInputButtonReader_BypassScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInputButtonReader_BypassScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::XRInputButtonReader_BypassScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::XRInputButtonReader_BypassScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Reader", ty: "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRInputButtonReader_BypassScope::XRInputButtonReader_BypassScope(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_Reader) noexcept  {
this->m_Reader = m_Reader;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRInputButtonReader_BypassScope::XRInputButtonReader_BypassScope()   {
}
