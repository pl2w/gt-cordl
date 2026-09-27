#pragma once
// IWYU pragma private; include "GorillaTag/InDelegateListProcessor_2.hpp"
#include "GorillaTag/zzzz__DelegateListProcessorPlusMinus_2_impl.hpp"
#include "GorillaTag/zzzz__InDelegateListProcessor_2_def.hpp"
#include "GorillaTag/zzzz__InAction_2_def.hpp"
template<typename T1,typename T2>
constexpr T1& GorillaTag::InDelegateListProcessor_2<T1,T2>::__cordl_internal_get_m_data1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data1;
}
template<typename T1,typename T2>
constexpr T1 const& GorillaTag::InDelegateListProcessor_2<T1,T2>::__cordl_internal_get_m_data1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data1;
}
template<typename T1,typename T2>
constexpr void GorillaTag::InDelegateListProcessor_2<T1,T2>::__cordl_internal_set_m_data1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_data1 = value;
}
template<typename T1,typename T2>
constexpr T2& GorillaTag::InDelegateListProcessor_2<T1,T2>::__cordl_internal_get_m_data2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data2;
}
template<typename T1,typename T2>
constexpr T2 const& GorillaTag::InDelegateListProcessor_2<T1,T2>::__cordl_internal_get_m_data2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data2;
}
template<typename T1,typename T2>
constexpr void GorillaTag::InDelegateListProcessor_2<T1,T2>::__cordl_internal_set_m_data2(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_data2 = value;
}
template<typename T1,typename T2>
inline void GorillaTag::InDelegateListProcessor_2<T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline void GorillaTag::InDelegateListProcessor_2<T1,T2>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T1,typename T2>
inline void GorillaTag::InDelegateListProcessor_2<T1,T2>::InvokeSafe(/* [IsReadOnly] */ ::by_ref<T1>  data1, /* [IsReadOnly] */ ::by_ref<T2>  data2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>(),
                        {"InvokeSafe", {}, {::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data1, data2);
}
template<typename T1,typename T2>
inline void GorillaTag::InDelegateListProcessor_2<T1,T2>::Invoke(/* [IsReadOnly] */ ::by_ref<T1>  data1, /* [IsReadOnly] */ ::by_ref<T2>  data2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data1, data2);
}
template<typename T1,typename T2>
inline void GorillaTag::InDelegateListProcessor_2<T1,T2>::ProcessItem(/* [IsReadOnly] */ ::by_ref<::GorillaTag::InAction_2<T1,T2>*>  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T1,typename T2>
inline void GorillaTag::InDelegateListProcessor_2<T1,T2>::SetData(/* [IsReadOnly] */ ::by_ref<T1>  data1, /* [IsReadOnly] */ ::by_ref<T2>  data2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>(),
                        {"SetData", {}, {::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data1, data2);
}
template<typename T1,typename T2>
inline void GorillaTag::InDelegateListProcessor_2<T1,T2>::ResetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>(),
                        {"ResetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline ::GorillaTag::InDelegateListProcessor_2<T1,T2>* GorillaTag::InDelegateListProcessor_2<T1,T2>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>());
}
template<typename T1,typename T2>
inline ::GorillaTag::InDelegateListProcessor_2<T1,T2>* GorillaTag::InDelegateListProcessor_2<T1,T2>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::InDelegateListProcessor_2<T1,T2>*>(capacity));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::GorillaTag::InDelegateListProcessor_2<T1,T2>::InDelegateListProcessor_2()   {
}
