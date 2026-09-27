#pragma once
// IWYU pragma private; include "Fusion/Internal/IUnityValueSurrogate_1.hpp"
#include "Fusion/Internal/zzzz__IUnityValueSurrogate_1_def.hpp"
#include "Fusion/Internal/zzzz__IUnitySurrogate_def.hpp"
template<typename T>
inline T Fusion::Internal::IUnityValueSurrogate_1<T>::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::IUnityValueSurrogate_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Fusion::Internal::IUnityValueSurrogate_1<T>::set_DataProperty(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::IUnityValueSurrogate_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Fusion::Internal::IUnitySurrogate"
template<typename T>
constexpr  Fusion::Internal::IUnityValueSurrogate_1<T>::operator ::Fusion::Internal::IUnitySurrogate*() noexcept {
return static_cast<::Fusion::Internal::IUnitySurrogate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Internal::IUnitySurrogate"
template<typename T>
constexpr ::Fusion::Internal::IUnitySurrogate* Fusion::Internal::IUnityValueSurrogate_1<T>::i___Fusion__Internal__IUnitySurrogate() noexcept {
return static_cast<::Fusion::Internal::IUnitySurrogate*>(static_cast<void*>(this));
}
