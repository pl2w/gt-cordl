#pragma once
// IWYU pragma private; include "GlobalNamespace/LoopingArray_1.hpp"
#include "GorillaTag/zzzz__ObjectPool_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LoopingArray_1_def.hpp"
#include "GlobalNamespace/zzzz__LoopingArray_1_def.hpp"
#include "GorillaTag/zzzz__ObjectPoolEvents_def.hpp"
template<typename T>
constexpr int32_t& GlobalNamespace::LoopingArray_1<T>::__cordl_internal_get_m_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_length;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::LoopingArray_1<T>::__cordl_internal_get_m_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_length;
}
template<typename T>
constexpr void GlobalNamespace::LoopingArray_1<T>::__cordl_internal_set_m_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_length = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::LoopingArray_1<T>::__cordl_internal_get_m_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currentIndex;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::LoopingArray_1<T>::__cordl_internal_get_m_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currentIndex;
}
template<typename T>
constexpr void GlobalNamespace::LoopingArray_1<T>::__cordl_internal_set_m_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_currentIndex = value;
}
template<typename T>
constexpr ::ArrayW<T>& GlobalNamespace::LoopingArray_1<T>::__cordl_internal_get_m_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_array;
}
template<typename T>
constexpr ::ArrayW<T> const& GlobalNamespace::LoopingArray_1<T>::__cordl_internal_get_m_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_array;
}
template<typename T>
constexpr void GlobalNamespace::LoopingArray_1<T>::__cordl_internal_set_m_array(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_array = value;
}
template<typename T>
inline int32_t GlobalNamespace::LoopingArray_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::LoopingArray_1<T>::get_CurrentIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"get_CurrentIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::LoopingArray_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1<T>::_ctor(int32_t  capicity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capicity);
}
template<typename T>
inline int32_t GlobalNamespace::LoopingArray_1<T>::AddAndIncrement(/* [IsReadOnly] */ ::by_ref<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"AddAndIncrement", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template<typename T>
inline int32_t GlobalNamespace::LoopingArray_1<T>::IncrementAndAdd(/* [IsReadOnly] */ ::by_ref<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"IncrementAndAdd", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1<T>::GorillaTag_ObjectPoolEvents_OnTaken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"GorillaTag.ObjectPoolEvents.OnTaken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1<T>::GorillaTag_ObjectPoolEvents_OnReturned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1<T>*>(),
                        {"GorillaTag.ObjectPoolEvents.OnReturned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::LoopingArray_1<T>* GlobalNamespace::LoopingArray_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LoopingArray_1<T>*>());
}
template<typename T>
inline ::GlobalNamespace::LoopingArray_1<T>* GlobalNamespace::LoopingArray_1<T>::New_ctor(int32_t  capicity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LoopingArray_1<T>*>(capicity));
}
/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
template<typename T>
constexpr  GlobalNamespace::LoopingArray_1<T>::operator ::GorillaTag::ObjectPoolEvents*() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
template<typename T>
constexpr ::GorillaTag::ObjectPoolEvents* GlobalNamespace::LoopingArray_1<T>::i___GorillaTag__ObjectPoolEvents() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LoopingArray_1<T>::LoopingArray_1()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::LoopingArray_1_Pool<T>::__cordl_internal_get_m_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_size;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::LoopingArray_1_Pool<T>::__cordl_internal_get_m_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_size;
}
template<typename T>
constexpr void GlobalNamespace::LoopingArray_1_Pool<T>::__cordl_internal_set_m_size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_size = value;
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1_Pool<T>::_ctor(int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1_Pool<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1_Pool<T>::_ctor(int32_t  size, int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1_Pool<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, amount);
}
template<typename T>
inline void GlobalNamespace::LoopingArray_1_Pool<T>::_ctor(int32_t  size, int32_t  initialAmount, int32_t  maxAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoopingArray_1_Pool<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, initialAmount, maxAmount);
}
template<typename T>
inline ::GlobalNamespace::LoopingArray_1<T>* GlobalNamespace::LoopingArray_1_Pool<T>::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LoopingArray_1_Pool<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LoopingArray_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::LoopingArray_1_Pool<T>* GlobalNamespace::LoopingArray_1_Pool<T>::New_ctor(int32_t  amount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LoopingArray_1_Pool<T>*>(amount));
}
template<typename T>
inline ::GlobalNamespace::LoopingArray_1_Pool<T>* GlobalNamespace::LoopingArray_1_Pool<T>::New_ctor(int32_t  size, int32_t  amount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LoopingArray_1_Pool<T>*>(size, amount));
}
template<typename T>
inline ::GlobalNamespace::LoopingArray_1_Pool<T>* GlobalNamespace::LoopingArray_1_Pool<T>::New_ctor(int32_t  size, int32_t  initialAmount, int32_t  maxAmount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LoopingArray_1_Pool<T>*>(size, initialAmount, maxAmount));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LoopingArray_1_Pool<T>::LoopingArray_1_Pool()   {
}
