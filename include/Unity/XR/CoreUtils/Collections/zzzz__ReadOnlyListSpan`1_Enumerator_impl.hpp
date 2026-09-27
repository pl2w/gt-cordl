#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/ReadOnlyListSpan`1_Enumerator.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__ReadOnlyListSpan`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline int32_t GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::get_start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {"get_start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::get_end()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {"get_end", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::_ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template<typename T>
inline void GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::_ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  list, int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list, start, end);
}
template<typename T>
inline bool GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_start_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_end_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "list", ty: "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::ReadOnlyListSpan_1_Enumerator(int32_t  _start_k__BackingField, int32_t  _end_k__BackingField, ::System::Collections::Generic::IReadOnlyList_1<T>*  list, int32_t  m_CurrentIndex) noexcept  {
this->_start_k__BackingField = _start_k__BackingField;
this->_end_k__BackingField = _end_k__BackingField;
this->list = list;
this->m_CurrentIndex = m_CurrentIndex;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>::ReadOnlyListSpan_1_Enumerator()   {
}
