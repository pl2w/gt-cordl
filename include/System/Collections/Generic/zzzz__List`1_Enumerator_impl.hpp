#pragma once
// IWYU pragma private; include "System/Collections/Generic/List`1_Enumerator.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GlobalNamespace::List_1_Enumerator<T>::_ctor(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::List_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template<typename T>
inline void GlobalNamespace::List_1_Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::List_1_Enumerator<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::List_1_Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::List_1_Enumerator<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::List_1_Enumerator<T>::MoveNextRare()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::List_1_Enumerator<T>>(),
                        {"MoveNextRare", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::List_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::List_1_Enumerator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::List_1_Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::List_1_Enumerator<T>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::List_1_Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::List_1_Enumerator<T>>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  GlobalNamespace::List_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::List_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::List_1_Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::List_1_Enumerator<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::List_1_Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::List_1_Enumerator<T>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::List_1_Enumerator<T>::List_1_Enumerator(::System::Collections::Generic::List_1<T>*  _list, int32_t  _index, int32_t  _version, T  _current) noexcept  {
this->_list = _list;
this->_index = _index;
this->_version = _version;
this->_current = _current;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::List_1_Enumerator<T>::List_1_Enumerator()   {
}
