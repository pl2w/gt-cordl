#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/FastZip.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Deflater_CompressionLevel_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FastZip_Overwrite_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEncryptionMethod_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FastZip_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__DirectoryEventArgs_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__FileSystemScanner_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__INameTransform_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__IScanFilter_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__NameFilter_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ScanEventArgs_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Deflater_CompressionLevel_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FastZipEvents_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FastZip_Overwrite_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FastZip_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IEntryFactory_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEncryptionMethod_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntryFactory_TimeSetting_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipFile_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipOutputStream_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f7bafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::GlobalNamespace::ZipEntryFactory_TimeSetting)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9f7bc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ZipEntryFactory_TimeSetting>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f7bd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9f7be38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_CreateEmptyDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_CreateEmptyDirectories)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_CreateEmptyDirectories", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_CreateEmptyDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_CreateEmptyDirectories)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7bed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_CreateEmptyDirectories", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_Password", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7bee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_EntryEncryptionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_EntryEncryptionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7bef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_EntryEncryptionMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_EntryEncryptionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_EntryEncryptionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7bef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_EntryEncryptionMethod", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_NameTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Core::INameTransform* (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_NameTransform)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f7bf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_NameTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_NameTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::ICSharpCode::SharpZipLib::Core::INameTransform*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_NameTransform)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9f7bfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_NameTransform", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_EntryFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::IEntryFactory* (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_EntryFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_EntryFactory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_EntryFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_EntryFactory)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f7c058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_EntryFactory", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IEntryFactory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_UseZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::UseZip64 (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_UseZip64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_UseZip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_UseZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::ICSharpCode::SharpZipLib::Zip::UseZip64)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_UseZip64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_UseZip64", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::UseZip64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_RestoreDateTimeOnExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_RestoreDateTimeOnExtract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_RestoreDateTimeOnExtract", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_RestoreDateTimeOnExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_RestoreDateTimeOnExtract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_RestoreDateTimeOnExtract", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_RestoreAttributesOnExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_RestoreAttributesOnExtract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_RestoreAttributesOnExtract", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_RestoreAttributesOnExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_RestoreAttributesOnExtract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_RestoreAttributesOnExtract", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.get_CompressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Deflater_CompressionLevel (::ICSharpCode::SharpZipLib::Zip::FastZip::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZip::get_CompressionLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_CompressionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.set_CompressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::GlobalNamespace::Deflater_CompressionLevel)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::set_CompressionLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_CompressionLevel", {}, {::i2c::type_of<::GlobalNamespace::Deflater_CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.CreateZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::StringW, ::StringW, bool, ::StringW, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f7c0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.CreateZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::StringW, ::StringW, bool, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f7c15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.CreateZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::System::IO::Stream*, ::StringW, bool, ::StringW, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7c154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.CreateZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::System::IO::Stream*, ::StringW, bool, ::StringW, ::StringW, bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f7c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.CreateZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::StringW, ::StringW, bool, ::ICSharpCode::SharpZipLib::Core::IScanFilter*, ::ICSharpCode::SharpZipLib::Core::IScanFilter*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f7c6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.CreateZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::System::IO::Stream*, ::StringW, bool, ::ICSharpCode::SharpZipLib::Core::IScanFilter*, ::ICSharpCode::SharpZipLib::Core::IScanFilter*, bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f7c720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.CreateZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::System::IO::Stream*, ::StringW, bool, ::ICSharpCode::SharpZipLib::Core::FileSystemScanner*, bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x9f7c254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.ExtractZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::StringW, ::StringW, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::ExtractZip)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f7c7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.ExtractZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::StringW, ::StringW, ::GlobalNamespace::FastZip_Overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*, ::StringW, ::StringW, bool, bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::ExtractZip)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f7c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::FastZip_Overwrite>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.ExtractZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::System::IO::Stream*, ::StringW, ::GlobalNamespace::FastZip_Overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*, ::StringW, ::StringW, bool, bool, bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::ExtractZip)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x9f7c8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::FastZip_Overwrite>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.ProcessDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::ProcessDirectory)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f7d84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ProcessDirectory", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.ProcessFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::ProcessFile)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x9f7d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ProcessFile", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.ConfigureEntryEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::ConfigureEntryEncryption)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f7dc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ConfigureEntryEncryption", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.AddFileContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::StringW, ::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::AddFileContents)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9f7dc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"AddFileContents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.ExtractFileEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::ExtractFileEntry)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x9f7de2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractFileEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.ExtractEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::ExtractEntry)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x9f7d294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.MakeExternalAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::FileInfo*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::MakeExternalAttributes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f7e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"MakeExternalAttributes", {}, {::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip.NameIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZip::NameIsValid)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f7e6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"NameIsValid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get__EntryEncryptionMethod_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EntryEncryptionMethod_k__BackingField;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get__EntryEncryptionMethod_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EntryEncryptionMethod_k__BackingField;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set__EntryEncryptionMethod_k__BackingField(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EntryEncryptionMethod_k__BackingField = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_continueRunning_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueRunning_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_continueRunning_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueRunning_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_continueRunning_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueRunning_ = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_buffer_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer_;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_buffer_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_buffer_(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_outputStream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputStream_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream* const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_outputStream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputStream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_outputStream_(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputStream_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile*& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_zipFile_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipFile_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile* const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_zipFile_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipFile_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_zipFile_(::ICSharpCode::SharpZipLib::Zip::ZipFile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zipFile_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_sourceDirectory_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceDirectory_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_sourceDirectory_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceDirectory_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_sourceDirectory_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceDirectory_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter*& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_fileFilter_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileFilter_;
}
constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter* const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_fileFilter_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileFilter_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_fileFilter_(::ICSharpCode::SharpZipLib::Core::NameFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileFilter_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter*& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_directoryFilter_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directoryFilter_;
}
constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter* const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_directoryFilter_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directoryFilter_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_directoryFilter_(::ICSharpCode::SharpZipLib::Core::NameFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directoryFilter_ = value;
}
constexpr ::GlobalNamespace::FastZip_Overwrite& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_overwrite_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overwrite_;
}
constexpr ::GlobalNamespace::FastZip_Overwrite const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_overwrite_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overwrite_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_overwrite_(::GlobalNamespace::FastZip_Overwrite  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overwrite_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_confirmDelegate_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmDelegate_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate* const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_confirmDelegate_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmDelegate_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_confirmDelegate_(::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confirmDelegate_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_restoreDateTimeOnExtract_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restoreDateTimeOnExtract_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_restoreDateTimeOnExtract_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restoreDateTimeOnExtract_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_restoreDateTimeOnExtract_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restoreDateTimeOnExtract_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_restoreAttributesOnExtract_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restoreAttributesOnExtract_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_restoreAttributesOnExtract_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restoreAttributesOnExtract_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_restoreAttributesOnExtract_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restoreAttributesOnExtract_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_createEmptyDirectories_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createEmptyDirectories_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_createEmptyDirectories_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createEmptyDirectories_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_createEmptyDirectories_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createEmptyDirectories_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::FastZipEvents*& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_events_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::FastZipEvents* const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_events_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_events_(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_entryFactory_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryFactory_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_entryFactory_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryFactory_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_entryFactory_(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryFactory_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform*& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_extractNameTransform_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extractNameTransform_;
}
constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_extractNameTransform_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extractNameTransform_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_extractNameTransform_(::ICSharpCode::SharpZipLib::Core::INameTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extractNameTransform_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_useZip64_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useZip64_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64 const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_useZip64_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useZip64_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_useZip64_(::ICSharpCode::SharpZipLib::Zip::UseZip64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useZip64_ = value;
}
constexpr ::GlobalNamespace::Deflater_CompressionLevel& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_compressionLevel_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionLevel_;
}
constexpr ::GlobalNamespace::Deflater_CompressionLevel const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_compressionLevel_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionLevel_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_compressionLevel_(::GlobalNamespace::Deflater_CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressionLevel_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_password_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_get_password_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZip::__cordl_internal_set_password_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___password_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::_ctor(::GlobalNamespace::ZipEntryFactory_TimeSetting  timeSetting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ZipEntryFactory_TimeSetting>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSetting);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::_ctor(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::_ctor(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZip::get_CreateEmptyDirectories()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_CreateEmptyDirectories", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_CreateEmptyDirectories(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_CreateEmptyDirectories", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::FastZip::get_Password()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_Password", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_Password(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod ICSharpCode::SharpZipLib::Zip::FastZip::get_EntryEncryptionMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_EntryEncryptionMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_EntryEncryptionMethod(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_EntryEncryptionMethod", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Core::INameTransform* ICSharpCode::SharpZipLib::Zip::FastZip::get_NameTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_NameTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Core::INameTransform*>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_NameTransform", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* ICSharpCode::SharpZipLib::Zip::FastZip::get_EntryFactory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_EntryFactory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::IEntryFactory*>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_EntryFactory(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_EntryFactory", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IEntryFactory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Zip::UseZip64 ICSharpCode::SharpZipLib::Zip::FastZip::get_UseZip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_UseZip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::UseZip64>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_UseZip64", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::UseZip64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZip::get_RestoreDateTimeOnExtract()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_RestoreDateTimeOnExtract", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_RestoreDateTimeOnExtract(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_RestoreDateTimeOnExtract", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZip::get_RestoreAttributesOnExtract()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_RestoreAttributesOnExtract", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_RestoreAttributesOnExtract(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_RestoreAttributesOnExtract", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Deflater_CompressionLevel ICSharpCode::SharpZipLib::Zip::FastZip::get_CompressionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"get_CompressionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Deflater_CompressionLevel>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::set_CompressionLevel(::GlobalNamespace::Deflater_CompressionLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"set_CompressionLevel", {}, {::i2c::type_of<::GlobalNamespace::Deflater_CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip(::StringW  zipFileName, ::StringW  sourceDirectory, bool  recurse, ::StringW  fileFilter, ::StringW  directoryFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zipFileName, sourceDirectory, recurse, fileFilter, directoryFilter);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip(::StringW  zipFileName, ::StringW  sourceDirectory, bool  recurse, ::StringW  fileFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zipFileName, sourceDirectory, recurse, fileFilter);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip(::System::IO::Stream*  outputStream, ::StringW  sourceDirectory, bool  recurse, ::StringW  fileFilter, ::StringW  directoryFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, sourceDirectory, recurse, fileFilter, directoryFilter);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip(::System::IO::Stream*  outputStream, ::StringW  sourceDirectory, bool  recurse, ::StringW  fileFilter, ::StringW  directoryFilter, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, sourceDirectory, recurse, fileFilter, directoryFilter, leaveOpen);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip(::StringW  zipFileName, ::StringW  sourceDirectory, bool  recurse, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zipFileName, sourceDirectory, recurse, fileFilter, directoryFilter);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip(::System::IO::Stream*  outputStream, ::StringW  sourceDirectory, bool  recurse, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, sourceDirectory, recurse, fileFilter, directoryFilter, leaveOpen);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::CreateZip(::System::IO::Stream*  outputStream, ::StringW  sourceDirectory, bool  recurse, ::ICSharpCode::SharpZipLib::Core::FileSystemScanner*  scanner, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"CreateZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, sourceDirectory, recurse, scanner, leaveOpen);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::ExtractZip(::StringW  zipFileName, ::StringW  targetDirectory, ::StringW  fileFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zipFileName, targetDirectory, fileFilter);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::ExtractZip(::StringW  zipFileName, ::StringW  targetDirectory, ::GlobalNamespace::FastZip_Overwrite  overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*  confirmDelegate, ::StringW  fileFilter, ::StringW  directoryFilter, bool  restoreDateTime, bool  allowParentTraversal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractZip", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::FastZip_Overwrite>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zipFileName, targetDirectory, overwrite, confirmDelegate, fileFilter, directoryFilter, restoreDateTime, allowParentTraversal);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::ExtractZip(::System::IO::Stream*  inputStream, ::StringW  targetDirectory, ::GlobalNamespace::FastZip_Overwrite  overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*  confirmDelegate, ::StringW  fileFilter, ::StringW  directoryFilter, bool  restoreDateTime, bool  isStreamOwner, bool  allowParentTraversal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractZip", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::FastZip_Overwrite>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream, targetDirectory, overwrite, confirmDelegate, fileFilter, directoryFilter, restoreDateTime, isStreamOwner, allowParentTraversal);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::ProcessDirectory(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ProcessDirectory", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::ProcessFile(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ProcessFile", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::ConfigureEntryEncryption(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ConfigureEntryEncryption", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::AddFileContents(::StringW  name, ::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"AddFileContents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, stream);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::ExtractFileEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  targetName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractFileEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry, targetName);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZip::ExtractEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"ExtractEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::FastZip::MakeExternalAttributes(::System::IO::FileInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"MakeExternalAttributes", {}, {::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, info);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZip::NameIsValid(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip*>(),
                        {"NameIsValid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline ::ICSharpCode::SharpZipLib::Zip::FastZip* ICSharpCode::SharpZipLib::Zip::FastZip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::FastZip*>());
}
inline ::ICSharpCode::SharpZipLib::Zip::FastZip* ICSharpCode::SharpZipLib::Zip::FastZip::New_ctor(::GlobalNamespace::ZipEntryFactory_TimeSetting  timeSetting)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::FastZip*>(timeSetting));
}
inline ::ICSharpCode::SharpZipLib::Zip::FastZip* ICSharpCode::SharpZipLib::Zip::FastZip::New_ctor(::System::DateTime  time)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::FastZip*>(time));
}
inline ::ICSharpCode::SharpZipLib::Zip::FastZip* ICSharpCode::SharpZipLib::Zip::FastZip::New_ctor(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*  events)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::FastZip*>(events));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::FastZip::FastZip()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::*)(::System::Object*, ::System::IntPtr)>(&::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f7e750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f7e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f7e814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::*)(::System::IAsyncResult*)>(&::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f7e834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::Invoke(::StringW  fileName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fileName);
}
inline ::System::IAsyncResult* ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::BeginInvoke(::StringW  fileName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, fileName, callback, object);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate* ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate::FastZip_ConfirmOverwriteDelegate()   {
}
