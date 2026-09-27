#pragma once
// IWYU pragma private; include "GlobalNamespace/OnSignalReceived_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_2_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2>
inline void GlobalNamespace::OnSignalReceived_2<T1,T2>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnSignalReceived_2<T1,T2>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T1,typename T2>
inline void GlobalNamespace::OnSignalReceived_2<T1,T2>::Invoke(T1  arg1, T2  arg2, ::GlobalNamespace::PhotonSignalInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnSignalReceived_2<T1,T2>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, info);
}
template<typename T1,typename T2>
inline ::System::IAsyncResult* GlobalNamespace::OnSignalReceived_2<T1,T2>::BeginInvoke(T1  arg1, T2  arg2, ::GlobalNamespace::PhotonSignalInfo  info, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnSignalReceived_2<T1,T2>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, arg1, arg2, info, callback, object);
}
template<typename T1,typename T2>
inline void GlobalNamespace::OnSignalReceived_2<T1,T2>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnSignalReceived_2<T1,T2>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T1,typename T2>
inline ::GlobalNamespace::OnSignalReceived_2<T1,T2>* GlobalNamespace::OnSignalReceived_2<T1,T2>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnSignalReceived_2<T1,T2>*>(object, method));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::GlobalNamespace::OnSignalReceived_2<T1,T2>::OnSignalReceived_2()   {
}
