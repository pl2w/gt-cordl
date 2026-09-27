#pragma once
// IWYU pragma private; include "LitJson/WrapperFactory.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "LitJson/zzzz__WrapperFactory_def.hpp"
#include "LitJson/zzzz__IJsonWrapper_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LitJson::WrapperFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::WrapperFactory::*)(::System::Object*, ::System::IntPtr)>(&::LitJson::WrapperFactory::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b5fbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::WrapperFactory*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::WrapperFactory.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::IJsonWrapper* (::LitJson::WrapperFactory::*)()>(&::LitJson::WrapperFactory::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b5fc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::WrapperFactory*>(),
                    {::i2c::class_of<::LitJson::WrapperFactory*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::WrapperFactory.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::LitJson::WrapperFactory::*)(::System::AsyncCallback*, ::System::Object*)>(&::LitJson::WrapperFactory::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b5fc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::WrapperFactory*>(),
                    {::i2c::class_of<::LitJson::WrapperFactory*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::WrapperFactory.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::IJsonWrapper* (::LitJson::WrapperFactory::*)(::System::IAsyncResult*)>(&::LitJson::WrapperFactory::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5fcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::WrapperFactory*>(),
                    {::i2c::class_of<::LitJson::WrapperFactory*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void LitJson::WrapperFactory::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::WrapperFactory*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::LitJson::IJsonWrapper* LitJson::WrapperFactory::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::WrapperFactory*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::LitJson::IJsonWrapper*>(this, ___internal_method);
}
inline ::System::IAsyncResult* LitJson::WrapperFactory::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::WrapperFactory*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::LitJson::IJsonWrapper* LitJson::WrapperFactory::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::WrapperFactory*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::LitJson::IJsonWrapper*>(this, ___internal_method, result);
}
inline ::LitJson::WrapperFactory* LitJson::WrapperFactory::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::WrapperFactory*>(object, method));
}
// Ctor Parameters []
constexpr ::LitJson::WrapperFactory::WrapperFactory()   {
}
