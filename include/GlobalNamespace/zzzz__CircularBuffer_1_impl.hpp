#pragma once
// IWYU pragma private; include "GlobalNamespace/CircularBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CircularBuffer_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get_backingArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backingArray;
}
template<typename T>
constexpr ::ArrayW<T> const& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get_backingArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backingArray;
}
template<typename T>
constexpr void GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_set_backingArray(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backingArray = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get__Capacity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get__Capacity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_set__Capacity_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capacity_k__BackingField = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get_nextWriteIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextWriteIdx;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get_nextWriteIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextWriteIdx;
}
template<typename T>
constexpr void GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_set_nextWriteIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextWriteIdx = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get_lastWriteIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWriteIdx;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_get_lastWriteIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWriteIdx;
}
template<typename T>
constexpr void GlobalNamespace::CircularBuffer_1<T>::__cordl_internal_set_lastWriteIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWriteIdx = value;
}
template<typename T>
inline int32_t GlobalNamespace::CircularBuffer_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::CircularBuffer_1<T>::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline int32_t GlobalNamespace::CircularBuffer_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::CircularBuffer_1<T>::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void GlobalNamespace::CircularBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void GlobalNamespace::CircularBuffer_1<T>::Add(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void GlobalNamespace::CircularBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::CircularBuffer_1<T>::Last()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {"Last", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::CircularBuffer_1<T>::get_Item(int32_t  logicalIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CircularBuffer_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, logicalIdx);
}
template<typename T>
inline ::GlobalNamespace::CircularBuffer_1<T>* GlobalNamespace::CircularBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CircularBuffer_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::CircularBuffer_1<T>::CircularBuffer_1()   {
}
