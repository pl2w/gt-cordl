#pragma once
// IWYU pragma private; include "System/Net/UploadFileCompletedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__UploadFileCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__UploadFileCompletedEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::UploadFileCompletedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::UploadFileCompletedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::UploadFileCompletedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xac4f28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadFileCompletedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::UploadFileCompletedEventHandler::*)(::System::Object*, ::System::Net::UploadFileCompletedEventArgs*)>(&::System::Net::UploadFileCompletedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac54414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(),
                    {::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadFileCompletedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::UploadFileCompletedEventHandler::*)(::System::Object*, ::System::Net::UploadFileCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::UploadFileCompletedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac54428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(),
                    {::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadFileCompletedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::UploadFileCompletedEventHandler::*)(::System::IAsyncResult*)>(&::System::Net::UploadFileCompletedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac54450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(),
                    {::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::UploadFileCompletedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Net::UploadFileCompletedEventHandler::Invoke(::System::Object*  sender, ::System::Net::UploadFileCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* System::Net::UploadFileCompletedEventHandler::BeginInvoke(::System::Object*  sender, ::System::Net::UploadFileCompletedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void System::Net::UploadFileCompletedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::UploadFileCompletedEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Net::UploadFileCompletedEventHandler* System::Net::UploadFileCompletedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::UploadFileCompletedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::UploadFileCompletedEventHandler::UploadFileCompletedEventHandler()   {
}
