#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/FileFailureHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__FileFailureHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ScanFailureEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileFailureHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileFailureHandler::*)(::System::Object*, ::System::IntPtr)>(&::ICSharpCode::SharpZipLib::Core::FileFailureHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9ffa280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileFailureHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileFailureHandler::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*)>(&::ICSharpCode::SharpZipLib::Core::FileFailureHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ffa38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileFailureHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ICSharpCode::SharpZipLib::Core::FileFailureHandler::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::ICSharpCode::SharpZipLib::Core::FileFailureHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ffa3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileFailureHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileFailureHandler::*)(::System::IAsyncResult*)>(&::ICSharpCode::SharpZipLib::Core::FileFailureHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ffa3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Core::FileFailureHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void ICSharpCode::SharpZipLib::Core::FileFailureHandler::Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* ICSharpCode::SharpZipLib::Core::FileFailureHandler::BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void ICSharpCode::SharpZipLib::Core::FileFailureHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::ICSharpCode::SharpZipLib::Core::FileFailureHandler* ICSharpCode::SharpZipLib::Core::FileFailureHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::FileFailureHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::FileFailureHandler::FileFailureHandler()   {
}
