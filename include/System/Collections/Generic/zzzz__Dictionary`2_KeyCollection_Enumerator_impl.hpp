#pragma once
// IWYU pragma private; include "System/Collections/Generic/Dictionary`2_KeyCollection_Enumerator.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_KeyCollection_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::_ctor(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline TKey GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<TKey>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TKey>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TKey>* GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::i___System__Collections__Generic__IEnumerator_1_TKey_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentKey", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::KeyCollection_Dictionary_2_Enumerator(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary, int32_t  _index, int32_t  _version, TKey  _currentKey) noexcept  {
this->_dictionary = _dictionary;
this->_index = _index;
this->_version = _version;
this->_currentKey = _currentKey;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::KeyCollection_Dictionary_2_Enumerator<TKey,TValue>::KeyCollection_Dictionary_2_Enumerator()   {
}
