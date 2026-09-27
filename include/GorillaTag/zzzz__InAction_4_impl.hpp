#pragma once
// IWYU pragma private; include "GorillaTag/InAction_4.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GorillaTag/zzzz__InAction_4_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2,typename T3,typename T4>
inline void GorillaTag::InAction_4<T1,T2,T3,T4>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InAction_4<T1,T2,T3,T4>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void GorillaTag::InAction_4<T1,T2,T3,T4>::Invoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3, /* [IsReadOnly] */ ::by_ref<T4>  obj4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_4<T1,T2,T3,T4>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj1, obj2, obj3, obj4);
}
template<typename T1,typename T2,typename T3,typename T4>
inline ::System::IAsyncResult* GorillaTag::InAction_4<T1,T2,T3,T4>::BeginInvoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3, /* [IsReadOnly] */ ::by_ref<T4>  obj4, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_4<T1,T2,T3,T4>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, obj1, obj2, obj3, obj4, callback, object);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void GorillaTag::InAction_4<T1,T2,T3,T4>::EndInvoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3, /* [IsReadOnly] */ ::by_ref<T4>  obj4, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_4<T1,T2,T3,T4>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj1, obj2, obj3, obj4, result);
}
template<typename T1,typename T2,typename T3,typename T4>
inline ::GorillaTag::InAction_4<T1,T2,T3,T4>* GorillaTag::InAction_4<T1,T2,T3,T4>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::InAction_4<T1,T2,T3,T4>*>(object, method));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::GorillaTag::InAction_4<T1,T2,T3,T4>::InAction_4()   {
}
