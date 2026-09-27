#pragma once
// IWYU pragma private; include "GorillaTag/ListProcessorAbstract_1.hpp"
#include "GorillaTag/zzzz__ListProcessor_1_impl.hpp"
#include "GorillaTag/zzzz__ListProcessorAbstract_1_def.hpp"
template<typename T>
inline void GorillaTag::ListProcessorAbstract_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessorAbstract_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GorillaTag::ListProcessorAbstract_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessorAbstract_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void GorillaTag::ListProcessorAbstract_1<T>::ProcessItem(/* [IsReadOnly] */ ::by_ref<T>  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ListProcessorAbstract_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline ::GorillaTag::ListProcessorAbstract_1<T>* GorillaTag::ListProcessorAbstract_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ListProcessorAbstract_1<T>*>());
}
template<typename T>
inline ::GorillaTag::ListProcessorAbstract_1<T>* GorillaTag::ListProcessorAbstract_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ListProcessorAbstract_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaTag::ListProcessorAbstract_1<T>::ListProcessorAbstract_1()   {
}
