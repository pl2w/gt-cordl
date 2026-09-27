#pragma once
// IWYU pragma private; include "GorillaTag/InDelegateListProcessor_1.hpp"
#include "GorillaTag/zzzz__DelegateListProcessorPlusMinus_2_impl.hpp"
#include "GorillaTag/zzzz__InDelegateListProcessor_1_def.hpp"
#include "GorillaTag/zzzz__InAction_1_def.hpp"
template<typename T>
constexpr T& GorillaTag::InDelegateListProcessor_1<T>::__cordl_internal_get_m_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data;
}
template<typename T>
constexpr T const& GorillaTag::InDelegateListProcessor_1<T>::__cordl_internal_get_m_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data;
}
template<typename T>
constexpr void GorillaTag::InDelegateListProcessor_1<T>::__cordl_internal_set_m_data(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_data = value;
}
template<typename T>
inline void GorillaTag::InDelegateListProcessor_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GorillaTag::InDelegateListProcessor_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void GorillaTag::InDelegateListProcessor_1<T>::InvokeSafe(/* [IsReadOnly] */ ::by_ref<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_1<T>*>(),
                        {"InvokeSafe", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename T>
inline void GorillaTag::InDelegateListProcessor_1<T>::Invoke(/* [IsReadOnly] */ ::by_ref<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_1<T>*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename T>
inline void GorillaTag::InDelegateListProcessor_1<T>::ProcessItem(/* [IsReadOnly] */ ::by_ref<::GorillaTag::InAction_1<T>*>  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InDelegateListProcessor_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline ::GorillaTag::InDelegateListProcessor_1<T>* GorillaTag::InDelegateListProcessor_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::InDelegateListProcessor_1<T>*>());
}
template<typename T>
inline ::GorillaTag::InDelegateListProcessor_1<T>* GorillaTag::InDelegateListProcessor_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::InDelegateListProcessor_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaTag::InDelegateListProcessor_1<T>::InDelegateListProcessor_1()   {
}
