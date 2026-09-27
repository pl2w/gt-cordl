#pragma once
// IWYU pragma private; include "LitJson/ImporterFunc.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "LitJson/zzzz__ImporterFunc_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LitJson::ImporterFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ImporterFunc::*)(::System::Object*, ::System::IntPtr)>(&::LitJson::ImporterFunc::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b5faa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ImporterFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ImporterFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::ImporterFunc::*)(::System::Object*)>(&::LitJson::ImporterFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b5fbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::ImporterFunc*>(),
                    {::i2c::class_of<::LitJson::ImporterFunc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ImporterFunc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::LitJson::ImporterFunc::*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::LitJson::ImporterFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5fbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::ImporterFunc*>(),
                    {::i2c::class_of<::LitJson::ImporterFunc*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ImporterFunc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::ImporterFunc::*)(::System::IAsyncResult*)>(&::LitJson::ImporterFunc::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::ImporterFunc*>(),
                    {::i2c::class_of<::LitJson::ImporterFunc*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void LitJson::ImporterFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ImporterFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* LitJson::ImporterFunc::Invoke(::System::Object*  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ImporterFunc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::IAsyncResult* LitJson::ImporterFunc::BeginInvoke(::System::Object*  input, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ImporterFunc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, input, callback, object);
}
inline ::System::Object* LitJson::ImporterFunc::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::ImporterFunc*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, result);
}
inline ::LitJson::ImporterFunc* LitJson::ImporterFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::ImporterFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::LitJson::ImporterFunc::ImporterFunc()   {
}
