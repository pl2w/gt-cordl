#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem_FocusBasedEventSequenceContext.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_FocusBasedEventSequenceContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb8a4f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::*)()>(&::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb8a8190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::_ctor(::UnityEngine::UIElements::DefaultEventSystem*  es)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, es);
}
inline void GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "es", ty: "::UnityEngine::UIElements::DefaultEventSystem*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::DefaultEventSystem_FocusBasedEventSequenceContext(::UnityEngine::UIElements::DefaultEventSystem*  es) noexcept  {
this->es = es;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext::DefaultEventSystem_FocusBasedEventSequenceContext()   {
}
