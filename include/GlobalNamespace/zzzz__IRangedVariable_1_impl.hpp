#pragma once
// IWYU pragma private; include "GlobalNamespace/IRangedVariable_1.hpp"
#include "GlobalNamespace/zzzz__IRangedVariable_1_def.hpp"
#include "GlobalNamespace/zzzz__IVariable_1_def.hpp"
#include "GlobalNamespace/zzzz__IVariable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
template<typename T>
inline T GlobalNamespace::IRangedVariable_1<T>::get_Min()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IRangedVariable_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::IRangedVariable_1<T>::set_Min(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IRangedVariable_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T GlobalNamespace::IRangedVariable_1<T>::get_Max()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IRangedVariable_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::IRangedVariable_1<T>::set_Max(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IRangedVariable_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T GlobalNamespace::IRangedVariable_1<T>::get_Range()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IRangedVariable_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::AnimationCurve* GlobalNamespace::IRangedVariable_1<T>::get_Curve()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IRangedVariable_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IVariable_1<T>"
template<typename T>
constexpr  GlobalNamespace::IRangedVariable_1<T>::operator ::GlobalNamespace::IVariable_1<T>*() noexcept {
return static_cast<::GlobalNamespace::IVariable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVariable_1<T>"
template<typename T>
constexpr ::GlobalNamespace::IVariable_1<T>* GlobalNamespace::IRangedVariable_1<T>::i___GlobalNamespace__IVariable_1_T_() noexcept {
return static_cast<::GlobalNamespace::IVariable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IVariable"
template<typename T>
constexpr  GlobalNamespace::IRangedVariable_1<T>::operator ::GlobalNamespace::IVariable*() noexcept {
return static_cast<::GlobalNamespace::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVariable"
template<typename T>
constexpr ::GlobalNamespace::IVariable* GlobalNamespace::IRangedVariable_1<T>::i___GlobalNamespace__IVariable() noexcept {
return static_cast<::GlobalNamespace::IVariable*>(static_cast<void*>(this));
}
