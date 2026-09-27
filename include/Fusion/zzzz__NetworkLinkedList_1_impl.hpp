#pragma once
// IWYU pragma private; include "Fusion/NetworkLinkedList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkLinkedList_1_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__INetworkLinkedList_def.hpp"
#include "Fusion/zzzz__NetworkLinkedList_1_def.hpp"
#include "Fusion/zzzz__NetworkLinkedList`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Lazy_1<::ArrayW<T>>*& Fusion::NetworkLinkedList_1_DebuggerProxy<T>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr ::System::Lazy_1<::ArrayW<T>>* const& Fusion::NetworkLinkedList_1_DebuggerProxy<T>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr void Fusion::NetworkLinkedList_1_DebuggerProxy<T>::__cordl_internal_set__items(::System::Lazy_1<::ArrayW<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename T>
inline void Fusion::NetworkLinkedList_1_DebuggerProxy<T>::_ctor(::Fusion::NetworkLinkedList_1<T>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1_DebuggerProxy<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkLinkedList_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template<typename T>
inline ::ArrayW<T> Fusion::NetworkLinkedList_1_DebuggerProxy<T>::get_Items()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1_DebuggerProxy<T>*>(),
                        {"get_Items", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::NetworkLinkedList_1_DebuggerProxy<T>* Fusion::NetworkLinkedList_1_DebuggerProxy<T>::New_ctor(::Fusion::NetworkLinkedList_1<T>  list)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkLinkedList_1_DebuggerProxy<T>*>(list));
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkLinkedList_1_DebuggerProxy<T>::NetworkLinkedList_1_DebuggerProxy()   {
}
template<typename T>
constexpr ::Fusion::NetworkLinkedList_1<T>& Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>::__cordl_internal_get_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
template<typename T>
constexpr ::Fusion::NetworkLinkedList_1<T> const& Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>::__cordl_internal_get_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
template<typename T>
constexpr void Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>::__cordl_internal_set_list(::Fusion::NetworkLinkedList_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___list = value;
}
template<typename T>
inline void Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>* Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0()   {
}
template<typename T>
inline int32_t Fusion::NetworkLinkedList_1<T>::get_Head()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"get_Head", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::set_Head(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"set_Head", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedList_1<T>::get_Tail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"get_Tail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::set_Tail(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"set_Tail", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedList_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedList_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkLinkedList_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::_ctor(uint8_t*  data, int32_t  capacity, ::Fusion::IElementReaderWriter_1<T>*  rw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, capacity, rw);
}
template<typename T>
inline ::Fusion::NetworkLinkedList_1<T> Fusion::NetworkLinkedList_1<T>::Remap(void*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Remap", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<T>>(*this, ___internal_method, list);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline bool Fusion::NetworkLinkedList_1<T>::Contains(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template<typename T>
inline bool Fusion::NetworkLinkedList_1<T>::Contains(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Contains", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, comparer);
}
template<typename T>
inline T Fusion::NetworkLinkedList_1<T>::Set(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index, value);
}
template<typename T>
inline T Fusion::NetworkLinkedList_1<T>::Get(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedList_1<T>::IndexOf(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"IndexOf", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedList_1<T>::IndexOf(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"IndexOf", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value, equalityComparer);
}
template<typename T>
inline bool Fusion::NetworkLinkedList_1<T>::Remove(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template<typename T>
inline bool Fusion::NetworkLinkedList_1<T>::Remove(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Remove", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, equalityComparer);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::Add(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline int32_t* Fusion::NetworkLinkedList_1<T>::FindFreeEntry(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"FindFreeEntry", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method, index);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::RemoveEntry(int32_t*  entry, int32_t  entryIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"RemoveEntry", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entry, entryIndex);
}
template<typename T>
inline int32_t* Fusion::NetworkLinkedList_1<T>::GetEntryByListIndex(int32_t  listIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"GetEntryByListIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method, listIndex);
}
template<typename T>
inline int32_t* Fusion::NetworkLinkedList_1<T>::Entry(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Entry", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method, index);
}
template<typename T>
inline T Fusion::NetworkLinkedList_1<T>::Read(int32_t*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Read", {}, {::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, entry);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::Write(int32_t*  entry, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Write", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entry, value);
}
template<typename T>
inline ::GlobalNamespace::NetworkLinkedList_1_Enumerator<T> Fusion::NetworkLinkedList_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkLinkedList_1_Enumerator<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Fusion::NetworkLinkedList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Fusion::NetworkLinkedList_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkLinkedList_1<T>::Fusion_INetworkLinkedList_Add(::System::Object*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedList_1<T>>(),
                        {"Fusion.INetworkLinkedList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Fusion::NetworkLinkedList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Fusion::NetworkLinkedList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Fusion::NetworkLinkedList_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Fusion::NetworkLinkedList_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Fusion::INetworkLinkedList"
template<typename T>
constexpr  Fusion::NetworkLinkedList_1<T>::operator ::Fusion::INetworkLinkedList*()  {
return static_cast<::Fusion::INetworkLinkedList*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkLinkedList"
template<typename T>
constexpr ::Fusion::INetworkLinkedList* Fusion::NetworkLinkedList_1<T>::i___Fusion__INetworkLinkedList()  {
return static_cast<::Fusion::INetworkLinkedList*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_data", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_stride", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rw", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Fusion::NetworkLinkedList_1<T>::NetworkLinkedList_1(int32_t*  _data, int32_t  _stride, int32_t  _capacity, ::Fusion::IElementReaderWriter_1<T>*  _rw) noexcept  {
this->_data = _data;
this->_stride = _stride;
this->_capacity = _capacity;
this->_rw = _rw;
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkLinkedList_1<T>::NetworkLinkedList_1()   {
}
