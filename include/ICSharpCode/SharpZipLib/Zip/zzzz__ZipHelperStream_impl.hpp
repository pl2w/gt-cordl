#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipHelperStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipHelperStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__DescriptorData_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__EntryPatchData_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f8d7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f818c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8f1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8f1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f8f1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f8f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.get_CanTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f8f22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f8f248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8f264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8f284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f8f2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8f2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Seek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8f300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8f320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8f340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f8f360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteLocalHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::EntryPatchData*)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLocalHeader)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x9f8f3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLocalHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.LocateBlockWithSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int32_t, int64_t, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::LocateBlockWithSignature)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9f8d894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"LocateBlockWithSignature", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteZip64EndOfCentralDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int64_t, int64_t, int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteZip64EndOfCentralDirectory)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9f8f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteZip64EndOfCentralDirectory", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteEndOfCentralDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int64_t, int64_t, int64_t, ::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteEndOfCentralDirectory)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x9f894d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteEndOfCentralDirectory", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.ReadLEShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ReadLEShort)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f825e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"ReadLEShort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.ReadLEInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ReadLEInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f81934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"ReadLEInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.ReadLELong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ReadLELong)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9f82674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"ReadLELong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteLEShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEShort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f82a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteLEUshort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(uint16_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEUshort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f8f86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEUshort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteLEInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEInt)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f81eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteLEUint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(uint32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEUint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f8f8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEUint", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteLELong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLELong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9f82a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLELong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteLEUlong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(uint64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEUlong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9f8f8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEUlong", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.WriteDataDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteDataDescriptor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9f8cf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteDataDescriptor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream.ReadDataDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::*)(bool, ::ICSharpCode::SharpZipLib::Zip::DescriptorData*)>(&::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ReadDataDescriptor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f8744c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"ReadDataDescriptor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::DescriptorData*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipHelperStream::__cordl_internal_get_isOwner_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOwner_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipHelperStream::__cordl_internal_get_isOwner_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOwner_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::__cordl_internal_set_isOwner_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOwner_ = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Zip::ZipHelperStream::__cordl_internal_get_stream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream_;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Zip::ZipHelperStream::__cordl_internal_get_stream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::__cordl_internal_set_stream_(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_CanTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipHelperStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLocalHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::ICSharpCode::SharpZipLib::Zip::EntryPatchData*  patchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLocalHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry, patchData);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::LocateBlockWithSignature(int32_t  signature, int64_t  endLocation, int32_t  minimumBlockSize, int32_t  maximumVariableData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"LocateBlockWithSignature", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, signature, endLocation, minimumBlockSize, maximumVariableData);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteZip64EndOfCentralDirectory(int64_t  noOfEntries, int64_t  sizeEntries, int64_t  centralDirOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteZip64EndOfCentralDirectory", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noOfEntries, sizeEntries, centralDirOffset);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteEndOfCentralDirectory(int64_t  noOfEntries, int64_t  sizeEntries, int64_t  startOfCentralDirectory, ::ArrayW<uint8_t>  comment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteEndOfCentralDirectory", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noOfEntries, sizeEntries, startOfCentralDirectory, comment);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ReadLEShort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"ReadLEShort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ReadLEInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"ReadLEInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ReadLELong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"ReadLELong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEShort(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEUshort(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEUshort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEInt(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEUint(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEUint", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLELong(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLELong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteLEUlong(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteLEUlong", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipHelperStream::WriteDataDescriptor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"WriteDataDescriptor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ReadDataDescriptor(bool  zip64, ::ICSharpCode::SharpZipLib::Zip::DescriptorData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(),
                        {"ReadDataDescriptor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::DescriptorData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zip64, data);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream* ICSharpCode::SharpZipLib::Zip::ZipHelperStream::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(name));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream* ICSharpCode::SharpZipLib::Zip::ZipHelperStream::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*>(stream));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream::ZipHelperStream()   {
}
