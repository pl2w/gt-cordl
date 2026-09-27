#pragma once
// IWYU pragma private; include "Fusion/NetworkDictionary_2.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkDictionary_2_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__INetworkDictionary_def.hpp"
#include "Fusion/zzzz__NetworkDictionaryReadOnly_2_def.hpp"
#include "Fusion/zzzz__NetworkDictionary_2_def.hpp"
#include "Fusion/zzzz__NetworkDictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename K,typename V>
constexpr ::System::Lazy_1<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>*& Fusion::NetworkDictionary_2_DebuggerProxy<K,V>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename K,typename V>
constexpr ::System::Lazy_1<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>* const& Fusion::NetworkDictionary_2_DebuggerProxy<K,V>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename K,typename V>
constexpr void Fusion::NetworkDictionary_2_DebuggerProxy<K,V>::__cordl_internal_set__items(::System::Lazy_1<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2_DebuggerProxy<K,V>::_ctor(::Fusion::NetworkDictionary_2<K,V>  dict)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2_DebuggerProxy<K,V>*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkDictionary_2<K,V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
template<typename K,typename V>
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>> Fusion::NetworkDictionary_2_DebuggerProxy<K,V>::get_Items()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2_DebuggerProxy<K,V>*>(),
                        {"get_Items", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>(this, ___internal_method);
}
template<typename K,typename V>
inline ::Fusion::NetworkDictionary_2_DebuggerProxy<K,V>* Fusion::NetworkDictionary_2_DebuggerProxy<K,V>::New_ctor(::Fusion::NetworkDictionary_2<K,V>  dict)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkDictionary_2_DebuggerProxy<K,V>*>(dict));
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::Fusion::NetworkDictionary_2_DebuggerProxy<K,V>::NetworkDictionary_2_DebuggerProxy()   {
}
template<typename K,typename V>
constexpr ::Fusion::NetworkDictionary_2<K,V>& Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>::__cordl_internal_get_dict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dict;
}
template<typename K,typename V>
constexpr ::Fusion::NetworkDictionary_2<K,V> const& Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>::__cordl_internal_get_dict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dict;
}
template<typename K,typename V>
constexpr void Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>::__cordl_internal_set_dict(::Fusion::NetworkDictionary_2<K,V>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dict = value;
}
template<typename K,typename V>
inline void Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename K,typename V>
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>> Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>(this, ___internal_method);
}
template<typename K,typename V>
inline ::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>* Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>*>());
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0()   {
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::get__free()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"get__free", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::set__free(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"set__free", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::get__freeCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"get__freeCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::set__freeCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"set__freeCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::get__usedCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"get__usedCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::set__usedCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"set__usedCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline V Fusion::NetworkDictionary_2<K,V>::get_Item(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"get_Item", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<V>(*this, ___internal_method, key);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::set_Item(K  key, V  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"set_Item", {}, {::i2c::type_of<K>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::_ctor(int32_t*  data, int32_t  capacity, ::Fusion::IElementReaderWriter_1<K>*  keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  valReaderWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<K>*>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<V>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, capacity, keyReaderWriter, valReaderWriter);
}
template<typename K,typename V>
inline ::Fusion::NetworkDictionaryReadOnly_2<K,V> Fusion::NetworkDictionary_2<K,V>::ToReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"ToReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(*this, ___internal_method);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename K,typename V>
inline bool Fusion::NetworkDictionary_2<K,V>::ContainsKey(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"ContainsKey", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
template<typename K,typename V>
inline bool Fusion::NetworkDictionary_2<K,V>::ContainsValue(V  value, ::System::Collections::Generic::IEqualityComparer_1<V>*  equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"ContainsValue", {}, {::i2c::type_of<V>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<V>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, equalityComparer);
}
template<typename K,typename V>
inline V Fusion::NetworkDictionary_2<K,V>::Get(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Get", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<V>(*this, ___internal_method, key);
}
template<typename K,typename V>
inline V Fusion::NetworkDictionary_2<K,V>::Set(K  key, V  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Set", {}, {::i2c::type_of<K>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<V>(*this, ___internal_method, key, value);
}
template<typename K,typename V>
inline bool Fusion::NetworkDictionary_2<K,V>::Add(K  key, V  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Add", {}, {::i2c::type_of<K>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, value);
}
template<typename K,typename V>
inline bool Fusion::NetworkDictionary_2<K,V>::TryGet(K  key, ::by_ref<V>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"TryGet", {}, {::i2c::type_of<K>(), ::i2c::type_of<::by_ref<V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, value);
}
template<typename K,typename V>
inline bool Fusion::NetworkDictionary_2<K,V>::Remove(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Remove", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
template<typename K,typename V>
inline bool Fusion::NetworkDictionary_2<K,V>::Remove(K  key, ::by_ref<V>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Remove", {}, {::i2c::type_of<K>(), ::i2c::type_of<::by_ref<V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, value);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::Insert(K  key, V  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Insert", {}, {::i2c::type_of<K>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key, val);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::Find(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Find", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key);
}
template<typename K,typename V>
inline uint32_t Fusion::NetworkDictionary_2<K,V>::GetBucketFromHashCode(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"GetBucketFromHashCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, hash);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::ClrEntry(int32_t  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"ClrEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entry);
}
template<typename K,typename V>
inline K Fusion::NetworkDictionary_2<K,V>::GetKey(int32_t  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"GetKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<K>(*this, ___internal_method, entry);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::SetKey(int32_t  entry, K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"SetKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entry, key);
}
template<typename K,typename V>
inline V Fusion::NetworkDictionary_2<K,V>::GetVal(int32_t  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"GetVal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<V>(*this, ___internal_method, entry);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::SetVal(int32_t  entry, V  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"SetVal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entry, val);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::GetNxt(int32_t  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"GetNxt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, entry);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::SetNxt(int32_t  entry, int32_t  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"SetNxt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entry, next);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionary_2<K,V>::GetKeyHashCode(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"GetKeyHashCode", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key);
}
template<typename K,typename V>
inline ::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V> Fusion::NetworkDictionary_2<K,V>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V>>(*this, ___internal_method);
}
template<typename K,typename V>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* Fusion::NetworkDictionary_2<K,V>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_K_V___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<K,V>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(*this, ___internal_method);
}
template<typename K,typename V>
inline ::System::Collections::IEnumerator* Fusion::NetworkDictionary_2<K,V>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionary_2<K,V>::Fusion_INetworkDictionary_Add(::System::Object*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"Fusion.INetworkDictionary.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template<typename K,typename V>
inline ::Fusion::NetworkDictionaryReadOnly_2<K,V> Fusion::NetworkDictionary_2<K,V>::op_Implicit___Fusion__NetworkDictionaryReadOnly_2_K_V_(::Fusion::NetworkDictionary_2<K,V>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionary_2<K,V>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkDictionary_2<K,V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(nullptr, ___internal_method, value);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template<typename K,typename V>
constexpr  Fusion::NetworkDictionary_2<K,V>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template<typename K,typename V>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* Fusion::NetworkDictionary_2<K,V>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_K_V__()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename K,typename V>
constexpr  Fusion::NetworkDictionary_2<K,V>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename K,typename V>
constexpr ::System::Collections::IEnumerable* Fusion::NetworkDictionary_2<K,V>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Fusion::INetworkDictionary"
template<typename K,typename V>
constexpr  Fusion::NetworkDictionary_2<K,V>::operator ::Fusion::INetworkDictionary*()  {
return static_cast<::Fusion::INetworkDictionary*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkDictionary"
template<typename K,typename V>
constexpr ::Fusion::INetworkDictionary* Fusion::NetworkDictionary_2<K,V>::i___Fusion__INetworkDictionary()  {
return static_cast<::Fusion::INetworkDictionary*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_data", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_nxtOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_keyOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_valOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_entryStride", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bucketsOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_entriesOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_keyReaderWriter", ty: "::Fusion::IElementReaderWriter_1<K>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_valReaderWriter", ty: "::Fusion::IElementReaderWriter_1<V>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_equalityComparer", ty: "::System::Collections::Generic::EqualityComparer_1<K>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K,typename V>
constexpr ::Fusion::NetworkDictionary_2<K,V>::NetworkDictionary_2(int32_t*  _data, int32_t  _capacity, int32_t  _nxtOffset, int32_t  _keyOffset, int32_t  _valOffset, int32_t  _entryStride, int32_t  _bucketsOffset, int32_t  _entriesOffset, ::Fusion::IElementReaderWriter_1<K>*  _keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  _valReaderWriter, ::System::Collections::Generic::EqualityComparer_1<K>*  _equalityComparer) noexcept  {
this->_data = _data;
this->_capacity = _capacity;
this->_nxtOffset = _nxtOffset;
this->_keyOffset = _keyOffset;
this->_valOffset = _valOffset;
this->_entryStride = _entryStride;
this->_bucketsOffset = _bucketsOffset;
this->_entriesOffset = _entriesOffset;
this->_keyReaderWriter = _keyReaderWriter;
this->_valReaderWriter = _valReaderWriter;
this->_equalityComparer = _equalityComparer;
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::Fusion::NetworkDictionary_2<K,V>::NetworkDictionary_2()   {
}
