#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/ProgressHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ProgressHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ProgressEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ProgressHandler::*)(::System::Object*, ::System::IntPtr)>(&::ICSharpCode::SharpZipLib::Core::ProgressHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9ff9e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ProgressHandler::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*)>(&::ICSharpCode::SharpZipLib::Core::ProgressHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ff9f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ICSharpCode::SharpZipLib::Core::ProgressHandler::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::ICSharpCode::SharpZipLib::Core::ProgressHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ff9fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ProgressHandler::*)(::System::IAsyncResult*)>(&::ICSharpCode::SharpZipLib::Core::ProgressHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ff9fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Core::ProgressHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void ICSharpCode::SharpZipLib::Core::ProgressHandler::Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* ICSharpCode::SharpZipLib::Core::ProgressHandler::BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void ICSharpCode::SharpZipLib::Core::ProgressHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::ICSharpCode::SharpZipLib::Core::ProgressHandler* ICSharpCode::SharpZipLib::Core::ProgressHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::ProgressHandler::ProgressHandler()   {
}
