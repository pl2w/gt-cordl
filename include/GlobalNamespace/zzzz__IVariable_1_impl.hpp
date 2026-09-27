#pragma once
// IWYU pragma private; include "GlobalNamespace/IVariable_1.hpp"
#include "GlobalNamespace/zzzz__IVariable_1_def.hpp"
#include "GlobalNamespace/zzzz__IVariable_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline T GlobalNamespace::IVariable_1<T>::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVariable_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::IVariable_1<T>::set_Value(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVariable_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T GlobalNamespace::IVariable_1<T>::Get()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVariable_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::IVariable_1<T>::Set(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVariable_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Type* GlobalNamespace::IVariable_1<T>::IVariable_get_ValueType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVariable_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IVariable"
template<typename T>
constexpr  GlobalNamespace::IVariable_1<T>::operator ::GlobalNamespace::IVariable*() noexcept {
return static_cast<::GlobalNamespace::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVariable"
template<typename T>
constexpr ::GlobalNamespace::IVariable* GlobalNamespace::IVariable_1<T>::i___GlobalNamespace__IVariable() noexcept {
return static_cast<::GlobalNamespace::IVariable*>(static_cast<void*>(this));
}
