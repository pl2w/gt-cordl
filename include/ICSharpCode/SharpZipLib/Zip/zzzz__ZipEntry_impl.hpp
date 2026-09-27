#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntry.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_Known_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_Known_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipExtraData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f7f62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::StringW, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f7f824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::StringW, int32_t, int32_t, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9f7f63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9f7f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_HasCrc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_HasCrc)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f7f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_HasCrc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_IsCrypted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsCrypted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f7f9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsCrypted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_IsCrypted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_IsCrypted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f7fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_IsCrypted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_IsUnicodeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsUnicodeText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f7fa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsUnicodeText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_IsUnicodeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_IsUnicodeText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f7f844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_IsUnicodeText", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_CryptoCheckValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CryptoCheckValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CryptoCheckValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_CryptoCheckValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_CryptoCheckValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_CryptoCheckValue", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Flags", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_ZipFileIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_ZipFileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_ZipFileIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_ZipFileIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_ZipFileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_ZipFileIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7faa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Offset", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_ExternalFileAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_ExternalFileAttributes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f7e67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_ExternalFileAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_ExternalFileAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_ExternalFileAttributes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f7faa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_ExternalFileAttributes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_VersionMadeBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_VersionMadeBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_VersionMadeBy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_IsDOSEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsDOSEntry)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f7e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsDOSEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.HasDosAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::HasDosAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f7facc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"HasDosAttributes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_HostSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_HostSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_HostSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_HostSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_HostSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_HostSystem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Version)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f7fb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_CanDecompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CanDecompress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f7fc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CanDecompress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.ForceZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::ForceZip64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f7fd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"ForceZip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.IsZip64Forced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::IsZip64Forced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"IsZip64Forced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_LocalHeaderRequiresZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_LocalHeaderRequiresZip64)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f7fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_LocalHeaderRequiresZip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_CentralHeaderRequiresZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CentralHeaderRequiresZip64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f7fc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CentralHeaderRequiresZip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_DosTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_DosTime)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9f7fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_DosTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_DosTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_DosTime)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9f7ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_DosTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_DateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_DateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f800c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_DateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_DateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_DateTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f7f830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_DateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f800c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f800d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Size)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f7e644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Size)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f800d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Size", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_CompressedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CompressedSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f800ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CompressedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_CompressedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_CompressedSize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f80104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_CompressedSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_Crc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Crc)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f80118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Crc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_Crc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Crc)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f80130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Crc", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_CompressionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::CompressionMethod (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CompressionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f80144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CompressionMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_CompressionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::ICSharpCode::SharpZipLib::Zip::CompressionMethod)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_CompressionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_CompressionMethod", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_CompressionMethodForHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::CompressionMethod (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CompressionMethodForHeader)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f80154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CompressionMethodForHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_ExtraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_ExtraData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8017c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_ExtraData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_ExtraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_ExtraData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9f80184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_ExtraData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_AESKeySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_AESKeySize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f7fbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_AESKeySize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_AESKeySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_AESKeySize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f7dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_AESKeySize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_AESEncryptionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_AESEncryptionStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7dd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_AESEncryptionStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_AESSaltLen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_AESSaltLen)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f80268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_AESSaltLen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_AESOverheadSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_AESOverheadSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f80288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_AESOverheadSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_EncryptionOverheadSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_EncryptionOverheadSize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f7fdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_EncryptionOverheadSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.ProcessExtraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::ProcessExtraData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9f802ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"ProcessExtraData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.GetDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (*)(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::GetDateTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f805ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"GetDateTime", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.ProcessAESExtraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::ProcessAESExtraData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f80688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"ProcessAESExtraData", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f80888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Comment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.set_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Comment)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f80890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_IsDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsDirectory)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9f7d7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.get_IsFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsFile)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f7d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.IsCompressionMethodSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::IsCompressionMethodSupported)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f7e694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"IsCompressionMethodSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::Clone)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9f80924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipEntry::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f80a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.IsCompressionMethodSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ICSharpCode::SharpZipLib::Zip::CompressionMethod)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::IsCompressionMethodSupported)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f8090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"IsCompressionMethodSupported", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntry.CleanName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntry::CleanName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9f80a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"CleanName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ZipEntry_Known& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_known()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___known;
}
constexpr ::GlobalNamespace::ZipEntry_Known const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_known() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___known;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_known(::GlobalNamespace::ZipEntry_Known  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___known = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_externalFileAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalFileAttributes;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_externalFileAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalFileAttributes;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_externalFileAttributes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___externalFileAttributes = value;
}
constexpr uint16_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_versionMadeBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionMadeBy;
}
constexpr uint16_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_versionMadeBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionMadeBy;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_versionMadeBy(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___versionMadeBy = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr uint64_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr uint64_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_size(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr uint64_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_compressedSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedSize;
}
constexpr uint64_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_compressedSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedSize;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_compressedSize(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressedSize = value;
}
constexpr uint16_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_versionToExtract()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionToExtract;
}
constexpr uint16_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_versionToExtract() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionToExtract;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_versionToExtract(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___versionToExtract = value;
}
constexpr uint32_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_crc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr uint32_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_crc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_crc(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc = value;
}
constexpr ::System::DateTime& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_dateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTime;
}
constexpr ::System::DateTime const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_dateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTime;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_dateTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dateTime = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_method(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_extra()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extra;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_extra() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extra;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_extra(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extra = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comment = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_flags(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_zipFileIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipFileIndex;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_zipFileIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipFileIndex;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_zipFileIndex(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zipFileIndex = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_offset(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_forceZip64_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceZip64_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_forceZip64_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceZip64_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_forceZip64_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceZip64_ = value;
}
constexpr uint8_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_cryptoCheckValue_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cryptoCheckValue_;
}
constexpr uint8_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get_cryptoCheckValue_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cryptoCheckValue_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set_cryptoCheckValue_(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cryptoCheckValue_ = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get__aesVer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aesVer;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get__aesVer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aesVer;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set__aesVer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aesVer = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get__aesEncryptionStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aesEncryptionStrength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_get__aesEncryptionStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aesEncryptionStrength;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipEntry::__cordl_internal_set__aesEncryptionStrength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aesEncryptionStrength = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::_ctor(::StringW  name, int32_t  versionRequiredToExtract)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, versionRequiredToExtract);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::_ctor(::StringW  name, int32_t  versionRequiredToExtract, int32_t  madeByInfo, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, versionRequiredToExtract, madeByInfo, method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_HasCrc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_HasCrc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsCrypted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsCrypted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_IsCrypted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_IsCrypted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsUnicodeText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsUnicodeText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_IsUnicodeText(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_IsUnicodeText", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CryptoCheckValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CryptoCheckValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_CryptoCheckValue(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_CryptoCheckValue", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Flags(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Flags", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_ZipFileIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_ZipFileIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_ZipFileIndex(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_ZipFileIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Offset(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Offset", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_ExternalFileAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_ExternalFileAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_ExternalFileAttributes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_ExternalFileAttributes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_VersionMadeBy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_VersionMadeBy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsDOSEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsDOSEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::HasDosAttributes(int32_t  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"HasDosAttributes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributes);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_HostSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_HostSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_HostSystem(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_HostSystem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CanDecompress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CanDecompress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::ForceZip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"ForceZip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::IsZip64Forced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"IsZip64Forced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_LocalHeaderRequiresZip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_LocalHeaderRequiresZip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CentralHeaderRequiresZip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CentralHeaderRequiresZip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_DosTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_DosTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_DosTime(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_DosTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime ICSharpCode::SharpZipLib::Zip::ZipEntry::get_DateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_DateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_DateTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_DateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Size(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Size", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CompressedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CompressedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_CompressedSize(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_CompressedSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Crc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Crc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Crc(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Crc", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Zip::CompressionMethod ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CompressionMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CompressionMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_CompressionMethod(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_CompressionMethod", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Zip::CompressionMethod ICSharpCode::SharpZipLib::Zip::ZipEntry::get_CompressionMethodForHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_CompressionMethodForHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ZipEntry::get_ExtraData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_ExtraData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_ExtraData(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_ExtraData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_AESKeySize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_AESKeySize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_AESKeySize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_AESKeySize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_AESEncryptionStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_AESEncryptionStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_AESSaltLen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_AESSaltLen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_AESOverheadSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_AESOverheadSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipEntry::get_EncryptionOverheadSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_EncryptionOverheadSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::ProcessExtraData(bool  localHeader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"ProcessExtraData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localHeader);
}
inline ::System::Nullable_1<::System::DateTime> ICSharpCode::SharpZipLib::Zip::ZipEntry::GetDateTime(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*  extraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"GetDateTime", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(nullptr, ___internal_method, extraData);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::ProcessAESExtraData(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*  extraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"ProcessAESExtraData", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extraData);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipEntry::get_Comment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_Comment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntry::set_Comment(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::get_IsFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"get_IsFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::IsCompressionMethodSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"IsCompressionMethodSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* ICSharpCode::SharpZipLib::Zip::ZipEntry::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipEntry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntry::IsCompressionMethodSupported(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"IsCompressionMethodSupported", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, method);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipEntry::CleanName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(),
                        {"CleanName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipEntry::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(name));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipEntry::New_ctor(::StringW  name, int32_t  versionRequiredToExtract)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(name, versionRequiredToExtract));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipEntry::New_ctor(::StringW  name, int32_t  versionRequiredToExtract, int32_t  madeByInfo, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(name, versionRequiredToExtract, madeByInfo, method));
}
/// @brief [Obsolete("Use Clone instead")]
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipEntry::New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(entry));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry::ZipEntry()   {
}
