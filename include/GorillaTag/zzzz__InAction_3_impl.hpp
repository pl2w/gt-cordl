#pragma once
// IWYU pragma private; include "GorillaTag/InAction_3.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GorillaTag/zzzz__InAction_3_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2,typename T3>
inline void GorillaTag::InAction_3<T1,T2,T3>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::InAction_3<T1,T2,T3>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T1,typename T2,typename T3>
inline void GorillaTag::InAction_3<T1,T2,T3>::Invoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_3<T1,T2,T3>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj1, obj2, obj3);
}
template<typename T1,typename T2,typename T3>
inline ::System::IAsyncResult* GorillaTag::InAction_3<T1,T2,T3>::BeginInvoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_3<T1,T2,T3>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, obj1, obj2, obj3, callback, object);
}
template<typename T1,typename T2,typename T3>
inline void GorillaTag::InAction_3<T1,T2,T3>::EndInvoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::InAction_3<T1,T2,T3>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj1, obj2, obj3, result);
}
template<typename T1,typename T2,typename T3>
inline ::GorillaTag::InAction_3<T1,T2,T3>* GorillaTag::InAction_3<T1,T2,T3>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::InAction_3<T1,T2,T3>*>(object, method));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3>
constexpr ::GorillaTag::InAction_3<T1,T2,T3>::InAction_3()   {
}
