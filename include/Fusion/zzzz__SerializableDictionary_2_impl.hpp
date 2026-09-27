#pragma once
// IWYU pragma private; include "Fusion/SerializableDictionary_2.hpp"
#include "Fusion/zzzz__SerializableDictionary_impl.hpp"
#include "Fusion/zzzz__SerializableDictionary`2_Entry_impl.hpp"
#include "Fusion/zzzz__SerializableDictionary_2_def.hpp"
#include "Fusion/zzzz__SerializableDictionary`2_Entry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename TKey,typename TValue>
constexpr ::ArrayW<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>>& Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename TKey,typename TValue>
constexpr ::ArrayW<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>> const& Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename TKey,typename TValue>
constexpr void Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_set__items(::ArrayW<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>,int32_t>>*& Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get__duplicatesAndNulls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duplicatesAndNulls;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>,int32_t>>* const& Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get__duplicatesAndNulls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duplicatesAndNulls;
}
template<typename TKey,typename TValue>
constexpr void Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_set__duplicatesAndNulls(::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>,int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duplicatesAndNulls = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>*& Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get__dictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dictionary;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* const& Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get__dictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dictionary;
}
template<typename TKey,typename TValue>
constexpr void Fusion::SerializableDictionary_2<TKey,TValue>::__cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dictionary = value;
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* Fusion::SerializableDictionary_2<TKey,TValue>::get_Inner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"get_Inner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Fusion::SerializableDictionary_2<TKey,TValue>::get_DictionaryAsCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"get_DictionaryAsCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Fusion::SerializableDictionary_2<TKey,TValue>* Fusion::SerializableDictionary_2<TKey,TValue>::Wrap(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"Wrap", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SerializableDictionary_2<TKey,TValue>*>(nullptr, ___internal_method, dictionary);
}
template<typename TKey,typename TValue>
inline TValue Fusion::SerializableDictionary_2<TKey,TValue>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"get_Item", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::set_Item(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"set_Item", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline int32_t Fusion::SerializableDictionary_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Fusion::SerializableDictionary_2<TKey,TValue>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::Add(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Fusion::SerializableDictionary_2<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Fusion::SerializableDictionary_2<TKey,TValue>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Fusion::SerializableDictionary_2<TKey,TValue>::TryGetValue(TKey  key, ::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2_KeyCollection<TKey,TValue>* Fusion::SerializableDictionary_2<TKey,TValue>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2_KeyCollection<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2_ValueCollection<TKey,TValue>* Fusion::SerializableDictionary_2<TKey,TValue>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2_ValueCollection<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::GlobalNamespace::Dictionary_2_Enumerator<TKey,TValue> Fusion::SerializableDictionary_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Dictionary_2_Enumerator<TKey,TValue>>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Fusion::SerializableDictionary_2<TKey,TValue>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* Fusion::SerializableDictionary_2<TKey,TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* Fusion::SerializableDictionary_2<TKey,TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.IDictionary<TKey,TValue>.get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline bool Fusion::SerializableDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template<typename TKey,typename TValue>
inline bool Fusion::SerializableDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* Fusion::SerializableDictionary_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* Fusion::SerializableDictionary_2<TKey,TValue>::CreateDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"CreateDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::Store()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"Store", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Fusion::SerializableDictionary_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Fusion::SerializableDictionary_2<TKey,TValue>* Fusion::SerializableDictionary_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SerializableDictionary_2<TKey,TValue>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr  Fusion::SerializableDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* Fusion::SerializableDictionary_2<TKey,TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Fusion::SerializableDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Fusion::SerializableDictionary_2<TKey,TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Fusion::SerializableDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Fusion::SerializableDictionary_2<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  Fusion::SerializableDictionary_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* Fusion::SerializableDictionary_2<TKey,TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr  Fusion::SerializableDictionary_2<TKey,TValue>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr ::UnityEngine::ISerializationCallbackReceiver* Fusion::SerializableDictionary_2<TKey,TValue>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Fusion::SerializableDictionary_2<TKey,TValue>::SerializableDictionary_2()   {
}
