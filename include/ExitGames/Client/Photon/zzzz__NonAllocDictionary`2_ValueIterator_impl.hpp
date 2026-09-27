#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NonAllocDictionary`2_ValueIterator.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_ValueIterator_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename K,typename V>
inline void GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::_ctor(::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary);
}
template<typename K,typename V>
inline ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V> GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(*this, ___internal_method);
}
template<typename K,typename V>
inline void GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename K,typename V>
inline V GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<V>(*this, ___internal_method);
}
template<typename K,typename V>
inline ::System::Object* GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename K,typename V>
inline bool GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename K,typename V>
inline void GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<V>"
template<typename K,typename V>
constexpr  GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::operator ::System::Collections::Generic::IEnumerator_1<V>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<V>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<V>"
template<typename K,typename V>
constexpr ::System::Collections::Generic::IEnumerator_1<V>* GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::i___System__Collections__Generic__IEnumerator_1_V_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<V>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename K,typename V>
constexpr  GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename K,typename V>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename K,typename V>
constexpr  GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename K,typename V>
constexpr ::System::IDisposable* GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dict", ty: "::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K,typename V>
constexpr ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::NonAllocDictionary_2_ValueIterator(int32_t  _index, ::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*  _dict) noexcept  {
this->_index = _index;
this->_dict = _dict;
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>::NonAllocDictionary_2_ValueIterator()   {
}
