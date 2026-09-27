#pragma once
// IWYU pragma private; include "LitJson/ExporterFunc.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "LitJson/zzzz__ExporterFunc_def.hpp"
#include "LitJson/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LitJson::ExporterFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ExporterFunc::*)(::System::Object*, ::System::IntPtr)>(&::LitJson::ExporterFunc::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b5f950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ExporterFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ExporterFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ExporterFunc::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::ExporterFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b5fa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::ExporterFunc*>(),
                    {::i2c::class_of<::LitJson::ExporterFunc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ExporterFunc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::LitJson::ExporterFunc::*)(::System::Object*, ::LitJson::JsonWriter*, ::System::AsyncCallback*, ::System::Object*)>(&::LitJson::ExporterFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b5fa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::ExporterFunc*>(),
                    {::i2c::class_of<::LitJson::ExporterFunc*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ExporterFunc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ExporterFunc::*)(::System::IAsyncResult*)>(&::LitJson::ExporterFunc::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5fa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::ExporterFunc*>(),
                    {::i2c::class_of<::LitJson::ExporterFunc*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void LitJson::ExporterFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ExporterFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void LitJson::ExporterFunc::Invoke(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ExporterFunc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline ::System::IAsyncResult* LitJson::ExporterFunc::BeginInvoke(::System::Object*  obj, ::LitJson::JsonWriter*  writer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ExporterFunc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, obj, writer, callback, object);
}
inline void LitJson::ExporterFunc::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ExporterFunc*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::LitJson::ExporterFunc* LitJson::ExporterFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::ExporterFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::LitJson::ExporterFunc::ExporterFunc()   {
}
