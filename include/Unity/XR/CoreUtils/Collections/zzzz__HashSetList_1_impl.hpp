#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/HashSetList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__HashSetList_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_get_m_InternalList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalList;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_get_m_InternalList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalList;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_set_m_InternalList(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalList = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_get_m_InternalHashSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalHashSet;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_get_m_InternalHashSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalHashSet;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_set_m_InternalHashSet(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalHashSet = value;
}
template<typename T>
constexpr int32_t& Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_get_m_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Count;
}
template<typename T>
constexpr int32_t const& Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_get_m_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Count;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::__cordl_internal_set_m_Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Count = value;
}
template<typename T>
inline int32_t Unity::XR::CoreUtils::Collections::HashSetList_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"System.Collections.Generic.ICollection<T>.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline T Unity::XR::CoreUtils::Collections::HashSetList_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline ::GlobalNamespace::List_1_Enumerator<T> Unity::XR::CoreUtils::Collections::HashSetList_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::List_1_Enumerator<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::System_Collections_Generic_ICollection_T__Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"System.Collections.Generic.ICollection<T>.Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::ExceptWith(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"ExceptWith", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::IntersectWith(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"IntersectWith", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"IsProperSubsetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"IsProperSupersetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"IsSupersetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::Overlaps(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"Overlaps", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"SetEquals", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"SymmetricExceptWith", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::UnionWith(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"UnionWith", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::HashSetList_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::CopyTo(::ArrayW<T>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::HashSetList_1<T>::RefreshList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"RefreshList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IReadOnlyList_1<T>* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::AsList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(),
                        {"AsList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Collections::HashSetList_1<T>* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Collections::HashSetList_1<T>*>(capacity));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::HashSetList_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::HashSetList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::HashSetList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::HashSetList_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template<typename T>
constexpr ::System::Runtime::Serialization::ISerializable* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::HashSetList_1<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template<typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::HashSetList_1<T>::operator ::System::Collections::Generic::ISet_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::ISet_1<T>* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::i___System__Collections__Generic__ISet_1_T_() noexcept {
return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::HashSetList_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* Unity::XR::CoreUtils::Collections::HashSetList_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<T>::HashSetList_1()   {
}
