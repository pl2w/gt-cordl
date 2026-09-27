#pragma once
// IWYU pragma private; include "GorillaTag/DelegateListProcessorPlusMinus_2.hpp"
#include "GorillaTag/zzzz__ListProcessorAbstract_1_impl.hpp"
#include "GorillaTag/zzzz__DelegateListProcessorPlusMinus_2_def.hpp"
template<typename T1,typename T2>
inline void GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline void GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T1,typename T2>
inline T1 GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>::op_Addition(::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*  left, T2  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*>(),
                        {"op_Addition", {}, {::i2c::type_of<::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*>(), ::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T1>(nullptr, ___internal_method, left, right);
}
template<typename T1,typename T2>
inline T1 GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>::op_Subtraction(::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*  left, T2  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*>(), ::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T1>(nullptr, ___internal_method, left, right);
}
template<typename T1,typename T2>
inline ::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>* GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*>());
}
template<typename T1,typename T2>
inline ::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>* GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*>(capacity));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>::DelegateListProcessorPlusMinus_2()   {
}
