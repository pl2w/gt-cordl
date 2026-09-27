#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/DetailedLocalizationTable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__LocalizationTable_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__DetailedLocalizationTable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__DetailedLocalizationTable_1_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__MissingEntryAction_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryData_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename TEntry>
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,TEntry>*& UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::__cordl_internal_get_m_TableEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntries;
}
template<typename TEntry>
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,TEntry>* const& UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::__cordl_internal_get_m_TableEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntries;
}
template<typename TEntry>
constexpr void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::__cordl_internal_set_m_TableEntries(::System::Collections::Generic::Dictionary_2<int64_t,TEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableEntries = value;
}
template<typename TEntry>
inline ::System::Collections::Generic::ICollection_1<int64_t>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::System_Collections_Generic_IDictionary_System_Int64_TEntry__get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"System.Collections.Generic.IDictionary<System.Int64,TEntry>.get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<int64_t>*>(this, ___internal_method);
}
template<typename TEntry>
inline ::System::Collections::Generic::ICollection_1<TEntry>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TEntry>*>(this, ___internal_method);
}
template<typename TEntry>
inline int32_t UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::get_Item(int64_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"get_Item", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, key);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::set_Item(int64_t  key, TEntry  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"set_Item", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<TEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::get_Item(::StringW  keyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, keyName);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::set_Item(::StringW  keyName, TEntry  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyName, value);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::CreateTableEntry()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::CreateTableEntry(::UnityEngine::Localization::Tables::TableEntryData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"CreateTableEntry", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, data);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::CreateEmpty(::UnityEngine::Localization::Tables::TableEntryReference  entryReference)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryReference);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::AddEntry(::StringW  key, ::StringW  localized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"AddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, key, localized);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::AddEntry(int64_t  keyId, ::StringW  localized)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, keyId, localized);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::AddEntryFromReference(::UnityEngine::Localization::Tables::TableEntryReference  entryReference, ::StringW  localized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"AddEntryFromReference", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, entryReference, localized);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::RemoveEntry(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"RemoveEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::RemoveEntry(int64_t  keyId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyId);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::GetEntryFromReference(::UnityEngine::Localization::Tables::TableEntryReference  entryReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"GetEntryFromReference", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, entryReference);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::GetEntry(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, key);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::GetEntry(int64_t  keyId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, keyId);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::Add(int64_t  keyId, TEntry  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"Add", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<TEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyId, value);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::Add(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::ContainsKey(int64_t  keyId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyId);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::ContainsValue(::StringW  localized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"ContainsValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localized);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::Contains(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::Remove(int64_t  keyId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"Remove", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyId);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::Remove(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TEntry>
inline ::System::Collections::Generic::IList_1<TEntry>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::CheckForMissingSharedTableDataEntries(::UnityEngine::Localization::Tables::MissingEntryAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"CheckForMissingSharedTableDataEntries", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::MissingEntryAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<TEntry>*>(this, ___internal_method, action);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::TryGetValue(int64_t  keyId, ::by_ref<TEntry>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<TEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyId, value);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template<typename TEntry>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*>(this, ___internal_method);
}
template<typename TEntry>
inline ::System::Collections::IEnumerator* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TEntry>
inline ::StringW UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEntry>
inline bool UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::_CheckForMissingSharedTableDataEntries_b__33_0(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>(),
                        {"<CheckForMissingSharedTableDataEntries>b__33_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
template<typename TEntry>
inline ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<int64_t,TEntry>"
template<typename TEntry>
constexpr  UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::operator ::System::Collections::Generic::IDictionary_2<int64_t,TEntry>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<int64_t,TEntry>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<int64_t,TEntry>"
template<typename TEntry>
constexpr ::System::Collections::Generic::IDictionary_2<int64_t,TEntry>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::i___System__Collections__Generic__IDictionary_2_int64_t_TEntry_() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<int64_t,TEntry>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>"
template<typename TEntry>
constexpr  UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>"
template<typename TEntry>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_int64_t_TEntry__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>"
template<typename TEntry>
constexpr  UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>"
template<typename TEntry>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_int64_t_TEntry__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TEntry>
constexpr  UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TEntry>
constexpr ::System::Collections::IEnumerable* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TEntry>
constexpr  UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TEntry>
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TEntry>
constexpr ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>::DetailedLocalizationTable_1()   {
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::setStaticF___9(::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*, "<>9", ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>(std::forward<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>(value));
}
template<typename TEntry>
inline ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*, "<>9", ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>();
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::setStaticF___9__33_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>,TEntry>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>,TEntry>*, "<>9__33_1", ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>,TEntry>*>(value));
}
template<typename TEntry>
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>,TEntry>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::getStaticF___9__33_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>,TEntry>*, "<>9__33_1", ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>();
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::setStaticF___9__41_0(::System::Func_2<::UnityEngine::Localization::Tables::TableEntryData*,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Localization::Tables::TableEntryData*,int64_t>*, "<>9__41_0", ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>(std::forward<::System::Func_2<::UnityEngine::Localization::Tables::TableEntryData*,int64_t>*>(value));
}
template<typename TEntry>
inline ::System::Func_2<::UnityEngine::Localization::Tables::TableEntryData*,int64_t>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::getStaticF___9__41_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Localization::Tables::TableEntryData*,int64_t>*, "<>9__41_0", ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>();
}
template<typename TEntry>
inline void UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEntry>
inline TEntry UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::_CheckForMissingSharedTableDataEntries_b__33_1(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>(),
                        {"<CheckForMissingSharedTableDataEntries>b__33_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(this, ___internal_method, e);
}
template<typename TEntry>
inline int64_t UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::_OnAfterDeserialize_b__41_0(::UnityEngine::Localization::Tables::TableEntryData*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>(),
                        {"<OnAfterDeserialize>b__41_0", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, o);
}
template<typename TEntry>
inline ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>* UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*>());
}
// Ctor Parameters []
template<typename TEntry>
constexpr ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>::DetailedLocalizationTable_1___c()   {
}
