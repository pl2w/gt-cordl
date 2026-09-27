#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/IXRInputValueReader_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_def.hpp"
template<typename TValue>
inline TValue UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>::ReadValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>::TryReadValue(::by_ref<TValue>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
template<typename TValue>
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
