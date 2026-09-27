#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarArchive.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarArchive_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__ProgressMessageHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarInputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarOutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.add_ProgressMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::add_ProgressMessageEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fda8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"add_ProgressMessageEvent", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.remove_ProgressMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::remove_ProgressMessageEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fda974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"remove_ProgressMessageEvent", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.OnProgressMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::ICSharpCode::SharpZipLib::Tar::TarEntry*, ::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::OnProgressMessageEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9fdaa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9fdaa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::ICSharpCode::SharpZipLib::Tar::TarInputStream*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fdaa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fdab44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CreateInputTarArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarArchive* (*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CreateInputTarArchive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdabf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateInputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CreateInputTarArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarArchive* (*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CreateInputTarArchive)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fdac00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateInputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CreateInputTarArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarArchive* (*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CreateInputTarArchive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdae44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateInputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CreateInputTarArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarArchive* (*)(::System::IO::Stream*, int32_t, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CreateInputTarArchive)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9fdad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateInputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CreateOutputTarArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarArchive* (*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CreateOutputTarArchive)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fdae4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateOutputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CreateOutputTarArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarArchive* (*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CreateOutputTarArchive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdb090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateOutputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CreateOutputTarArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarArchive* (*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CreateOutputTarArchive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdb098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateOutputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CreateOutputTarArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarArchive* (*)(::System::IO::Stream*, int32_t, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CreateOutputTarArchive)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9fdaf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateOutputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.SetKeepOldFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::SetKeepOldFiles)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fdb0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"SetKeepOldFiles", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_AsciiTranslate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_AsciiTranslate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_AsciiTranslate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.set_AsciiTranslate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::set_AsciiTranslate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fdb15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_AsciiTranslate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.SetAsciiTranslation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::SetAsciiTranslation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fdb1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"SetAsciiTranslation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_PathPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_PathPrefix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_PathPrefix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.set_PathPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::set_PathPrefix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_PathPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_RootPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_RootPath)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_RootPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.set_RootPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::set_RootPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9fdb330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_RootPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.SetUserInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(int32_t, ::StringW, int32_t, ::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::SetUserInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fdb3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"SetUserInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_ApplyUserInfoOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_ApplyUserInfoOverrides)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_ApplyUserInfoOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.set_ApplyUserInfoOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::set_ApplyUserInfoOverrides)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fdb4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_ApplyUserInfoOverrides", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_UserId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_UserName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_UserName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_GroupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_GroupId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_GroupId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_GroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_GroupName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fdb634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_GroupName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.get_RecordSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::get_RecordSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9fdb690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_RecordSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fdb710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.CloseArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::CloseArchive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fdb744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CloseArchive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.ListContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::ListContents)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9fdb750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ListContents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.ExtractContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::ExtractContents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdb7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ExtractContents", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.ExtractContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::StringW, bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::ExtractContents)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9fdb7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ExtractContents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.ExtractEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::StringW, ::ICSharpCode::SharpZipLib::Tar::TarEntry*, bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::ExtractEntry)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x9fdb8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ExtractEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.ExtractAndTranslateEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::StringW, ::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::ExtractAndTranslateEntry)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9fdbe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ExtractAndTranslateEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.WriteEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::ICSharpCode::SharpZipLib::Tar::TarEntry*, bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::WriteEntry)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9fdc314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"WriteEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.WriteEntryCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(::ICSharpCode::SharpZipLib::Tar::TarEntry*, bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::WriteEntryCore)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x9fdc518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"WriteEntryCore", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9fdcc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9fdcd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fdcd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarArchive::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fdcd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.EnsureDirectoryExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::EnsureDirectoryExists)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9fdbccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"EnsureDirectoryExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarArchive.IsBinary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarArchive::IsBinary)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x9fdc0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"IsBinary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_ProgressMessageEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProgressMessageEvent;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler* const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_ProgressMessageEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProgressMessageEvent;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_ProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProgressMessageEvent = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_keepOldFiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepOldFiles;
}
constexpr bool const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_keepOldFiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepOldFiles;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_keepOldFiles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepOldFiles = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_asciiTranslate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asciiTranslate;
}
constexpr bool const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_asciiTranslate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asciiTranslate;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_asciiTranslate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asciiTranslate = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_userId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_userId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_userId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userId = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_userName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_userName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_userName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userName = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_groupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_groupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_groupId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupId = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_groupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupName;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_groupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupName;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_groupName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupName = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_rootPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootPath;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_rootPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootPath;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_rootPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootPath = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_pathPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathPrefix;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_pathPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathPrefix;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_pathPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathPrefix = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_applyUserInfoOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyUserInfoOverrides;
}
constexpr bool const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_applyUserInfoOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyUserInfoOverrides;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_applyUserInfoOverrides(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyUserInfoOverrides = value;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream*& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_tarIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tarIn;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream* const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_tarIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tarIn;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_tarIn(::ICSharpCode::SharpZipLib::Tar::TarInputStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tarIn = value;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarOutputStream*& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_tarOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tarOut;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_tarOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tarOut;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_tarOut(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tarOut = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr bool const& ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarArchive::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::add_ProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"add_ProgressMessageEvent", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::remove_ProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"remove_ProgressMessageEvent", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::OnProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry, message);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::_ctor(::ICSharpCode::SharpZipLib::Tar::TarInputStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::_ctor(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::CreateInputTarArchive(::System::IO::Stream*  inputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateInputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(nullptr, ___internal_method, inputStream);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::CreateInputTarArchive(::System::IO::Stream*  inputStream, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateInputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(nullptr, ___internal_method, inputStream, nameEncoding);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::CreateInputTarArchive(::System::IO::Stream*  inputStream, int32_t  blockFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateInputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(nullptr, ___internal_method, inputStream, blockFactor);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::CreateInputTarArchive(::System::IO::Stream*  inputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateInputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(nullptr, ___internal_method, inputStream, blockFactor, nameEncoding);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::CreateOutputTarArchive(::System::IO::Stream*  outputStream, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateOutputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(nullptr, ___internal_method, outputStream, nameEncoding);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::CreateOutputTarArchive(::System::IO::Stream*  outputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateOutputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(nullptr, ___internal_method, outputStream);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::CreateOutputTarArchive(::System::IO::Stream*  outputStream, int32_t  blockFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateOutputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(nullptr, ___internal_method, outputStream, blockFactor);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::CreateOutputTarArchive(::System::IO::Stream*  outputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CreateOutputTarArchive", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(nullptr, ___internal_method, outputStream, blockFactor, nameEncoding);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::SetKeepOldFiles(bool  keepExistingFiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"SetKeepOldFiles", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepExistingFiles);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarArchive::get_AsciiTranslate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_AsciiTranslate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::set_AsciiTranslate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_AsciiTranslate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::SetAsciiTranslation(bool  translateAsciiFiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"SetAsciiTranslation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translateAsciiFiles);
}
inline ::StringW ICSharpCode::SharpZipLib::Tar::TarArchive::get_PathPrefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_PathPrefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::set_PathPrefix(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_PathPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ICSharpCode::SharpZipLib::Tar::TarArchive::get_RootPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_RootPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::set_RootPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_RootPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::SetUserInfo(int32_t  userId, ::StringW  userName, int32_t  groupId, ::StringW  groupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"SetUserInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, userName, groupId, groupName);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarArchive::get_ApplyUserInfoOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_ApplyUserInfoOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::set_ApplyUserInfoOverrides(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_ApplyUserInfoOverrides", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarArchive::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Tar::TarArchive::get_UserName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_UserName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarArchive::get_GroupId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_GroupId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Tar::TarArchive::get_GroupName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_GroupName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarArchive::get_RecordSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"get_RecordSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::CloseArchive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"CloseArchive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::ListContents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ListContents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::ExtractContents(::StringW  destinationDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ExtractContents", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinationDirectory);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::ExtractContents(::StringW  destinationDirectory, bool  allowParentTraversal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ExtractContents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinationDirectory, allowParentTraversal);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::ExtractEntry(::StringW  destDir, ::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry, bool  allowParentTraversal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ExtractEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destDir, entry, allowParentTraversal);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::ExtractAndTranslateEntry(::StringW  destFile, ::System::IO::Stream*  outputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"ExtractAndTranslateEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destFile, outputStream);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::WriteEntry(::ICSharpCode::SharpZipLib::Tar::TarEntry*  sourceEntry, bool  recurse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"WriteEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceEntry, recurse);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::WriteEntryCore(::ICSharpCode::SharpZipLib::Tar::TarEntry*  sourceEntry, bool  recurse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"WriteEntryCore", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceEntry, recurse);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarArchive::EnsureDirectoryExists(::StringW  directoryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"EnsureDirectoryExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, directoryName);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarArchive::IsBinary(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(),
                        {"IsBinary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filename);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarArchive*>());
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::New_ctor(::ICSharpCode::SharpZipLib::Tar::TarInputStream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(stream));
}
inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* ICSharpCode::SharpZipLib::Tar::TarArchive::New_ctor(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarArchive*>(stream));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ICSharpCode::SharpZipLib::Tar::TarArchive::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ICSharpCode::SharpZipLib::Tar::TarArchive::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Tar::TarArchive::TarArchive()   {
}
