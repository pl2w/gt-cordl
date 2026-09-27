#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/XRInteractableUtility_AllowTriggerCollidersScope.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__XRInteractableUtility_AllowTriggerCollidersScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::*)(bool)>(&::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb42768c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::*)()>(&::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb427718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::_ctor(bool  newAllowTriggerColliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newAllowTriggerColliders);
}
inline void GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OldValue", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::XRInteractableUtility_AllowTriggerCollidersScope(bool  m_Disposed, bool  m_OldValue) noexcept  {
this->m_Disposed = m_Disposed;
this->m_OldValue = m_OldValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope::XRInteractableUtility_AllowTriggerCollidersScope()   {
}
