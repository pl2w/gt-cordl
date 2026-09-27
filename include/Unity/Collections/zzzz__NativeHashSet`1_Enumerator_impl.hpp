#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashSet`1_Enumerator.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper`1_Enumerator_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashSet`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GlobalNamespace::NativeHashSet_1_Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashSet_1_Enumerator<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::NativeHashSet_1_Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashSet_1_Enumerator<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::NativeHashSet_1_Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashSet_1_Enumerator<T>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::NativeHashSet_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashSet_1_Enumerator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::NativeHashSet_1_Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashSet_1_Enumerator<T>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  GlobalNamespace::NativeHashSet_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::NativeHashSet_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::NativeHashSet_1_Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::NativeHashSet_1_Enumerator<T>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::NativeHashSet_1_Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::NativeHashSet_1_Enumerator<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::HashMapHelper_1_Enumerator<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NativeHashSet_1_Enumerator<T>::NativeHashSet_1_Enumerator(::GlobalNamespace::HashMapHelper_1_Enumerator<T>  m_Enumerator) noexcept  {
this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeHashSet_1_Enumerator<T>::NativeHashSet_1_Enumerator()   {
}
