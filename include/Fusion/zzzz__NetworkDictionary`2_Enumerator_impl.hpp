#pragma once
// IWYU pragma private; include "Fusion/NetworkDictionary`2_Enumerator.hpp"
#include "Fusion/zzzz__NetworkDictionary_2_impl.hpp"
#include "Fusion/zzzz__NetworkDictionary`2_Enumerator_def.hpp"
#include "Fusion/zzzz__NetworkDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename K,typename V>
inline void GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::_ctor(::Fusion::NetworkDictionary_2<K,V>  dict)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkDictionary_2<K,V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dict);
}
template<typename K,typename V>
inline bool GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename K,typename V>
inline void GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename K,typename V>
inline ::System::Collections::Generic::KeyValuePair_2<K,V> GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<K,V>>(*this, ___internal_method);
}
template<typename K,typename V>
inline ::System::Object* GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename K,typename V>
inline void GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template<typename K,typename V>
constexpr  GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template<typename K,typename V>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_K_V__()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename K,typename V>
constexpr  GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename K,typename V>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename K,typename V>
constexpr  GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename K,typename V>
constexpr ::System::IDisposable* GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_bucket", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_entry", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dict", ty: "::Fusion::NetworkDictionary_2<K,V>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K,typename V>
constexpr ::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::NetworkDictionary_2_Enumerator(int32_t  _bucket, int32_t  _entry, ::Fusion::NetworkDictionary_2<K,V>  _dict) noexcept  {
this->_bucket = _bucket;
this->_entry = _entry;
this->_dict = _dict;
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>::NetworkDictionary_2_Enumerator()   {
}
