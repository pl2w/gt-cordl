#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NonAllocDictionary_2.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_Node_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_KeyIterator_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_Node_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_PairIterator_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_ValueIterator_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
template<typename K,typename V>
constexpr int32_t& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__freeHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeHead;
}
template<typename K,typename V>
constexpr int32_t const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__freeHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeHead;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set__freeHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freeHead = value;
}
template<typename K,typename V>
constexpr int32_t& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__freeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeCount;
}
template<typename K,typename V>
constexpr int32_t const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__freeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeCount;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set__freeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freeCount = value;
}
template<typename K,typename V>
constexpr int32_t& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__usedCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usedCount;
}
template<typename K,typename V>
constexpr int32_t const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__usedCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usedCount;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set__usedCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____usedCount = value;
}
template<typename K,typename V>
constexpr uint32_t& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename K,typename V>
constexpr uint32_t const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set__capacity(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capacity = value;
}
template<typename K,typename V>
constexpr ::ArrayW<int32_t>& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__buckets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buckets;
}
template<typename K,typename V>
constexpr ::ArrayW<int32_t> const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__buckets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buckets;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set__buckets(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buckets = value;
}
template<typename K,typename V>
constexpr ::ArrayW<::GlobalNamespace::NonAllocDictionary_2_Node<K,V>>& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodes;
}
template<typename K,typename V>
constexpr ::ArrayW<::GlobalNamespace::NonAllocDictionary_2_Node<K,V>> const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get__nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodes;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set__nodes(::ArrayW<::GlobalNamespace::NonAllocDictionary_2_Node<K,V>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodes = value;
}
template<typename K,typename V>
constexpr bool& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get_isReadOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReadOnly;
}
template<typename K,typename V>
constexpr bool const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get_isReadOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReadOnly;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set_isReadOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isReadOnly = value;
}
template<typename K,typename V>
constexpr ::System::Collections::Generic::ICollection_1<K>*& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get_keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
template<typename K,typename V>
constexpr ::System::Collections::Generic::ICollection_1<K>* const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get_keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set_keys(::System::Collections::Generic::ICollection_1<K>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keys = value;
}
template<typename K,typename V>
constexpr ::System::Collections::Generic::ICollection_1<V>*& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get_values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
template<typename K,typename V>
constexpr ::System::Collections::Generic::ICollection_1<V>* const& ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_get_values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
template<typename K,typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::__cordl_internal_set_values(::System::Collections::Generic::ICollection_1<V>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___values = value;
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::setStaticF__primeTableUInt(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "_primeTableUInt", ::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(std::forward<::ArrayW<uint32_t>>(value));
}
template<typename K,typename V>
inline ::ArrayW<uint32_t> ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::getStaticF__primeTableUInt()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "_primeTableUInt", ::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>();
}
template<typename K,typename V>
inline ::GlobalNamespace::NonAllocDictionary_2_KeyIterator<K,V> ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NonAllocDictionary_2_KeyIterator<K,V>>(this, ___internal_method);
}
template<typename K,typename V>
inline ::System::Collections::Generic::ICollection_1<V>* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::System_Collections_Generic_IDictionary_K_V__get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"System.Collections.Generic.IDictionary<K,V>.get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<V>*>(this, ___internal_method);
}
template<typename K,typename V>
inline ::System::Collections::Generic::ICollection_1<K>* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::System_Collections_Generic_IDictionary_K_V__get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"System.Collections.Generic.IDictionary<K,V>.get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<K>*>(this, ___internal_method);
}
template<typename K,typename V>
inline ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V> ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>>(this, ___internal_method);
}
template<typename K,typename V>
inline int32_t ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename K,typename V>
inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename K,typename V>
inline uint32_t ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::_ctor(uint32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename K,typename V>
inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::ContainsKey(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename K,typename V>
inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Contains(::System::Collections::Generic::KeyValuePair_2<K,V>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<K,V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename K,typename V>
inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::TryGetValue(K  key, ::by_ref<V>  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<K>(), ::i2c::type_of<::by_ref<V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, val);
}
template<typename K,typename V>
inline V ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::get_Item(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"get_Item", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<V>(this, ___internal_method, key);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::set_Item(K  key, V  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"set_Item", {}, {::i2c::type_of<K>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Set(K  key, V  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Set", {}, {::i2c::type_of<K>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Add(K  key, V  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Add", {}, {::i2c::type_of<K>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Add(::System::Collections::Generic::KeyValuePair_2<K,V>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<K,V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename K,typename V>
inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Remove(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Remove", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename K,typename V>
inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Remove(::System::Collections::Generic::KeyValuePair_2<K,V>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<K,V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename K,typename V>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_K_V___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<K,V>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(this, ___internal_method);
}
template<typename K,typename V>
inline ::GlobalNamespace::NonAllocDictionary_2_PairIterator<K,V> ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NonAllocDictionary_2_PairIterator<K,V>>(this, ___internal_method);
}
template<typename K,typename V>
inline ::System::Collections::IEnumerator* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename K,typename V>
inline int32_t ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::FindNode(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"FindNode", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Insert(K  key, V  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Insert", {}, {::i2c::type_of<K>(), ::i2c::type_of<V>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Expand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Expand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_K_V___CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<K,V>>.CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename K,typename V>
inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::IsPrimeFromList(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"IsPrimeFromList", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
template<typename K,typename V>
inline uint32_t ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::GetNextPrime(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"GetNextPrime", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
template<typename K,typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::_cordl_Assert(bool  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(),
                        {"Assert", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
template<typename K,typename V>
inline ::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::New_ctor(uint32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*>(capacity));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<K,V>"
template<typename K,typename V>
constexpr  ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::operator ::System::Collections::Generic::IDictionary_2<K,V>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<K,V>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<K,V>"
template<typename K,typename V>
constexpr ::System::Collections::Generic::IDictionary_2<K,V>* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::i___System__Collections__Generic__IDictionary_2_K_V_() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<K,V>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template<typename K,typename V>
constexpr  ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template<typename K,typename V>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_K_V__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template<typename K,typename V>
constexpr  ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template<typename K,typename V>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_K_V__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename K,typename V>
constexpr  ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename K,typename V>
constexpr ::System::Collections::IEnumerable* ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>::NonAllocDictionary_2()   {
}
