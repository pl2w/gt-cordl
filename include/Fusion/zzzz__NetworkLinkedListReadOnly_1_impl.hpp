#pragma once
// IWYU pragma private; include "Fusion/NetworkLinkedListReadOnly_1.hpp"
#include "Fusion/zzzz__NetworkLinkedListReadOnly_1_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
template<typename T>
inline void Fusion::NetworkLinkedListReadOnly_1<T>::_ctor(uint8_t*  data, int32_t  capacity, ::Fusion::IElementReaderWriter_1<T>*  rw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, capacity, rw);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedListReadOnly_1<T>::get_Head()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"get_Head", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedListReadOnly_1<T>::get_Tail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"get_Tail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedListReadOnly_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedListReadOnly_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkLinkedListReadOnly_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline int32_t* Fusion::NetworkLinkedListReadOnly_1<T>::GetEntryByListIndex(int32_t  listIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"GetEntryByListIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method, listIndex);
}
template<typename T>
inline bool Fusion::NetworkLinkedListReadOnly_1<T>::Contains(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template<typename T>
inline bool Fusion::NetworkLinkedListReadOnly_1<T>::Contains(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"Contains", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, comparer);
}
template<typename T>
inline T Fusion::NetworkLinkedListReadOnly_1<T>::Get(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedListReadOnly_1<T>::IndexOf(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"IndexOf", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
template<typename T>
inline int32_t Fusion::NetworkLinkedListReadOnly_1<T>::IndexOf(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"IndexOf", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value, equalityComparer);
}
template<typename T>
inline int32_t* Fusion::NetworkLinkedListReadOnly_1<T>::Entry(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"Entry", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method, index);
}
template<typename T>
inline T Fusion::NetworkLinkedListReadOnly_1<T>::Read(int32_t*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkLinkedListReadOnly_1<T>>(),
                        {"Read", {}, {::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, entry);
}
// Ctor Parameters [CppParam { name: "_data", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_stride", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rw", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Fusion::NetworkLinkedListReadOnly_1<T>::NetworkLinkedListReadOnly_1(int32_t*  _data, int32_t  _stride, int32_t  _capacity, ::Fusion::IElementReaderWriter_1<T>*  _rw) noexcept  {
this->_data = _data;
this->_stride = _stride;
this->_capacity = _capacity;
this->_rw = _rw;
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkLinkedListReadOnly_1<T>::NetworkLinkedListReadOnly_1()   {
}
