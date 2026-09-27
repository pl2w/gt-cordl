#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/ProgressMessageHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__ProgressMessageHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarArchive_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarEntry_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::*)(::System::Object*, ::System::IntPtr)>(&::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fda778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::*)(::ICSharpCode::SharpZipLib::Tar::TarArchive*, ::ICSharpCode::SharpZipLib::Tar::TarEntry*, ::StringW)>(&::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fda884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::*)(::ICSharpCode::SharpZipLib::Tar::TarArchive*, ::ICSharpCode::SharpZipLib::Tar::TarEntry*, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fda898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::*)(::System::IAsyncResult*)>(&::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fda8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::Invoke(::ICSharpCode::SharpZipLib::Tar::TarArchive*  archive, ::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archive, entry, message);
}
inline ::System::IAsyncResult* ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::BeginInvoke(::ICSharpCode::SharpZipLib::Tar::TarArchive*  archive, ::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry, ::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, archive, entry, message, callback, object);
}
inline void ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler* ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler::ProgressMessageHandler()   {
}
