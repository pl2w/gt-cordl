#pragma once
// IWYU pragma private; include "GorillaTag/InAction_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GorillaTag/zzzz__InAction_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GorillaTag::InAction_1<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InAction_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void GorillaTag::InAction_1<T>::Invoke(/* [IsReadOnly] */ ::by_ref<T>  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename T>
inline ::System::IAsyncResult* GorillaTag::InAction_1<T>::BeginInvoke(/* [IsReadOnly] */ ::by_ref<T>  obj, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, obj, callback, object);
}
template<typename T>
inline void GorillaTag::InAction_1<T>::EndInvoke(/* [IsReadOnly] */ ::by_ref<T>  obj, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, result);
}
template<typename T>
inline ::GorillaTag::InAction_1<T>* GorillaTag::InAction_1<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::InAction_1<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaTag::InAction_1<T>::InAction_1()   {
}
