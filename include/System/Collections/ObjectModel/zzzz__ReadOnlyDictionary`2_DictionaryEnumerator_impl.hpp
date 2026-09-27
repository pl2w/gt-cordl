#pragma once
// IWYU pragma private; include "System/Collections/ObjectModel/ReadOnlyDictionary`2_DictionaryEnumerator.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionary`2_DictionaryEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary);
}
template<typename TKey,typename TValue>
inline ::System::Collections::DictionaryEntry GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>>(),
                        {"get_Entry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::operator ::System::Collections::IDictionaryEnumerator*()  {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IDictionaryEnumerator* GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::i___System__Collections__IDictionaryEnumerator()  {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::IDictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::ReadOnlyDictionary_2_DictionaryEnumerator(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _dictionary, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  _enumerator) noexcept  {
this->_dictionary = _dictionary;
this->_enumerator = _enumerator;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator<TKey,TValue>::ReadOnlyDictionary_2_DictionaryEnumerator()   {
}
