#pragma once
// IWYU pragma private; include "GlobalNamespace/OnSignalReceived_6.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_6_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>::Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, ::GlobalNamespace::PhotonSignalInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, arg3, arg4, arg5, arg6, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline ::System::IAsyncResult* GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>::BeginInvoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, ::GlobalNamespace::PhotonSignalInfo  info, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, arg1, arg2, arg3, arg4, arg5, arg6, info, callback, object);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline ::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>* GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*>(object, method));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
constexpr ::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>::OnSignalReceived_6()   {
}
