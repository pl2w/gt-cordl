#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputValueReader`1_BypassScope.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader`1_BypassScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
template<typename TValue>
inline void GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>::_ctor(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
template<typename TValue>
inline void GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TValue>
constexpr  GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TValue>
constexpr ::System::IDisposable* GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Reader", ty: "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>::XRInputValueReader_1_BypassScope(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  m_Reader) noexcept  {
this->m_Reader = m_Reader;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>::XRInputValueReader_1_BypassScope()   {
}
