#pragma once
// IWYU pragma private; include "LitJson/ExporterFunc_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "LitJson/zzzz__ExporterFunc_1_def.hpp"
#include "LitJson/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void LitJson::ExporterFunc_1<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ExporterFunc_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void LitJson::ExporterFunc_1<T>::Invoke(T  obj, ::LitJson::JsonWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ExporterFunc_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
template<typename T>
inline ::System::IAsyncResult* LitJson::ExporterFunc_1<T>::BeginInvoke(T  obj, ::LitJson::JsonWriter*  writer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ExporterFunc_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, obj, writer, callback, object);
}
template<typename T>
inline void LitJson::ExporterFunc_1<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ExporterFunc_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline ::LitJson::ExporterFunc_1<T>* LitJson::ExporterFunc_1<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::ExporterFunc_1<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::LitJson::ExporterFunc_1<T>::ExporterFunc_1()   {
}
