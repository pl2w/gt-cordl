#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/CompletedFileHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__CompletedFileHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ScanEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::*)(::System::Object*, ::System::IntPtr)>(&::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9ff9fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*)>(&::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ffa0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ffa0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::*)(::System::IAsyncResult*)>(&::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ffa120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Core::CompletedFileHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void ICSharpCode::SharpZipLib::Core::CompletedFileHandler::Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* ICSharpCode::SharpZipLib::Core::CompletedFileHandler::BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void ICSharpCode::SharpZipLib::Core::CompletedFileHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler* ICSharpCode::SharpZipLib::Core::CompletedFileHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler::CompletedFileHandler()   {
}
