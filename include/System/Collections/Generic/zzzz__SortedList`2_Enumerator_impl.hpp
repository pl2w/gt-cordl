#pragma once
// IWYU pragma private; include "System/Collections/Generic/SortedList`2_Enumerator.hpp"
#include "System/Collections/Generic/zzzz__SortedList`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::_ctor(::System::Collections::Generic::SortedList_2<TKey,TValue>*  sortedList, int32_t  getEnumeratorRetType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<TKey,TValue>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sortedList, getEnumeratorRetType);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::System_Collections_IDictionaryEnumerator_get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IDictionaryEnumerator.get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::DictionaryEntry GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::System_Collections_IDictionaryEnumerator_get_Entry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IDictionaryEnumerator.get_Entry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::System_Collections_IDictionaryEnumerator_get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IDictionaryEnumerator.get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::operator ::System::Collections::IDictionaryEnumerator*()  {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IDictionaryEnumerator* GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::i___System__Collections__IDictionaryEnumerator()  {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_sortedList", ty: "::System::Collections::Generic::SortedList_2<TKey,TValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_key", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_getEnumeratorRetType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::SortedList_2_Enumerator(::System::Collections::Generic::SortedList_2<TKey,TValue>*  _sortedList, TKey  _key, TValue  _value, int32_t  _index, int32_t  _version, int32_t  _getEnumeratorRetType) noexcept  {
this->_sortedList = _sortedList;
this->_key = _key;
this->_value = _value;
this->_index = _index;
this->_version = _version;
this->_getEnumeratorRetType = _getEnumeratorRetType;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::SortedList_2_Enumerator<TKey,TValue>::SortedList_2_Enumerator()   {
}
