#pragma once
// IWYU pragma private; include "LitJson/ImporterFunc_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "LitJson/zzzz__ImporterFunc_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TJson,typename TValue>
inline void LitJson::ImporterFunc_2<TJson,TValue>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ImporterFunc_2<TJson,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TJson,typename TValue>
inline TValue LitJson::ImporterFunc_2<TJson,TValue>::Invoke(TJson  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ImporterFunc_2<TJson,TValue>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, input);
}
template<typename TJson,typename TValue>
inline ::System::IAsyncResult* LitJson::ImporterFunc_2<TJson,TValue>::BeginInvoke(TJson  input, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ImporterFunc_2<TJson,TValue>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, input, callback, object);
}
template<typename TJson,typename TValue>
inline TValue LitJson::ImporterFunc_2<TJson,TValue>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ImporterFunc_2<TJson,TValue>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, result);
}
template<typename TJson,typename TValue>
inline ::LitJson::ImporterFunc_2<TJson,TValue>* LitJson::ImporterFunc_2<TJson,TValue>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::ImporterFunc_2<TJson,TValue>*>(object, method));
}
// Ctor Parameters []
template<typename TJson,typename TValue>
constexpr ::LitJson::ImporterFunc_2<TJson,TValue>::ImporterFunc_2()   {
}
