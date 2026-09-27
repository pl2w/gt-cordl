#pragma once
// IWYU pragma private; include "VYaml/Internal/InsertionQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__InsertionQueue_1_def.hpp"
template<typename T>
constexpr int32_t& VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
template<typename T>
constexpr int32_t const& VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
template<typename T>
constexpr void VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
template<typename T>
constexpr ::ArrayW<T>& VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_get_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename T>
constexpr ::ArrayW<T> const& VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_get_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename T>
constexpr void VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_set_array(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___array = value;
}
template<typename T>
constexpr int32_t& VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_get_headIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headIndex;
}
template<typename T>
constexpr int32_t const& VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_get_headIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headIndex;
}
template<typename T>
constexpr void VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_set_headIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headIndex = value;
}
template<typename T>
constexpr int32_t& VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_get_tailIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tailIndex;
}
template<typename T>
constexpr int32_t const& VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_get_tailIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tailIndex;
}
template<typename T>
constexpr void VYaml::Internal::InsertionQueue_1<T>::__cordl_internal_set_tailIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tailIndex = value;
}
template<typename T>
inline int32_t VYaml::Internal::InsertionQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T VYaml::Internal::InsertionQueue_1<T>::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::Enqueue(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"Enqueue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline T VYaml::Internal::InsertionQueue_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"Dequeue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::Insert(int32_t  posTo, T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, posTo, item);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::Grow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"Grow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::SetCapacity(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"SetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::MoveNext(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"MoveNext", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template<typename T>
inline void VYaml::Internal::InsertionQueue_1<T>::ThrowForEmptyQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::InsertionQueue_1<T>*>(),
                        {"ThrowForEmptyQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline ::VYaml::Internal::InsertionQueue_1<T>* VYaml::Internal::InsertionQueue_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Internal::InsertionQueue_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Internal::InsertionQueue_1<T>::InsertionQueue_1()   {
}
