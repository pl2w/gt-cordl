#pragma once
// IWYU pragma private; include "Meta/WitAi/ArrayPool_1.hpp"
#include "Meta/WitAi/zzzz__ObjectPool_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__ArrayPool_1_def.hpp"
#include "Meta/WitAi/zzzz__ArrayPool_1_def.hpp"
template<typename TElementType>
constexpr int32_t& Meta::WitAi::ArrayPool_1<TElementType>::__cordl_internal_get__Capacity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
template<typename TElementType>
constexpr int32_t const& Meta::WitAi::ArrayPool_1<TElementType>::__cordl_internal_get__Capacity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
template<typename TElementType>
constexpr void Meta::WitAi::ArrayPool_1<TElementType>::__cordl_internal_set__Capacity_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capacity_k__BackingField = value;
}
template<typename TElementType>
inline void Meta::WitAi::ArrayPool_1<TElementType>::_ctor(int32_t  capacity, int32_t  preload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ArrayPool_1<TElementType>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, preload);
}
template<typename TElementType>
inline ::Meta::WitAi::ArrayPool_1<TElementType>* Meta::WitAi::ArrayPool_1<TElementType>::New_ctor(int32_t  capacity, int32_t  preload)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ArrayPool_1<TElementType>*>(capacity, preload));
}
// Ctor Parameters []
template<typename TElementType>
constexpr ::Meta::WitAi::ArrayPool_1<TElementType>::ArrayPool_1()   {
}
template<typename TElementType>
constexpr int32_t& Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>::__cordl_internal_get_capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capacity;
}
template<typename TElementType>
constexpr int32_t const& Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>::__cordl_internal_get_capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capacity;
}
template<typename TElementType>
constexpr void Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>::__cordl_internal_set_capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capacity = value;
}
template<typename TElementType>
inline void Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TElementType>
inline ::ArrayW<TElementType> Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TElementType>>(this, ___internal_method);
}
template<typename TElementType>
inline ::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>* Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>*>());
}
// Ctor Parameters []
template<typename TElementType>
constexpr ::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>::ArrayPool_1___c__DisplayClass3_0()   {
}
