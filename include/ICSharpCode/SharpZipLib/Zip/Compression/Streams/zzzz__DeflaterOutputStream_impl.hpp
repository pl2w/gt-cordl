#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/DeflaterOutputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__DeflaterOutputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Deflater_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fd97f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fce660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9fce7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Finish)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9fd0214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.get_CanPatchEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_CanPatchEntries)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fcfe1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"get_CanPatchEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.EncryptBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::EncryptBlock)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9fd0738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"EncryptBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Deflate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"Deflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Deflate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fd9880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"Deflate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fd9998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fd99b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fd99d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fd99f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fd9a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fd9a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::ReadByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fd9ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Read)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fd9b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Flush)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9fd14f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Dispose)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9fd9b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.GetAuthCodeIfAES
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::GetAuthCodeIfAES)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9fd045c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"GetAuthCodeIfAES", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9fd9ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Write)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fd0a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get__IsStreamOwner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get__IsStreamOwner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_set__IsStreamOwner_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStreamOwner_k__BackingField = value;
}
constexpr ::System::Security::Cryptography::ICryptoTransform*& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_cryptoTransform_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cryptoTransform_;
}
constexpr ::System::Security::Cryptography::ICryptoTransform* const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_cryptoTransform_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cryptoTransform_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_set_cryptoTransform_(::System::Security::Cryptography::ICryptoTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cryptoTransform_ = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_AESAuthCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AESAuthCode;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_AESAuthCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AESAuthCode;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_set_AESAuthCode(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AESAuthCode = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_buffer_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer_;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_buffer_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_set_buffer_(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_deflater_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflater_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_deflater_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflater_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_set_deflater_(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deflater_ = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_baseOutputStream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseOutputStream_;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_baseOutputStream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseOutputStream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_set_baseOutputStream_(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseOutputStream_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_isClosed_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClosed_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_get_isClosed_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClosed_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::__cordl_internal_set_isClosed_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isClosed_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::_ctor(::System::IO::Stream*  baseOutputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseOutputStream);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::_ctor(::System::IO::Stream*  baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseOutputStream, deflater);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::_ctor(::System::IO::Stream*  baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseOutputStream, deflater, bufferSize);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Finish()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_CanPatchEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"get_CanPatchEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::EncryptBlock(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"EncryptBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Deflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"Deflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Deflate(bool  flushing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"Deflate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flushing);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::GetAuthCodeIfAES()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(),
                        {"GetAuthCodeIfAES", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream* ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::New_ctor(::System::IO::Stream*  baseOutputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(baseOutputStream));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream* ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::New_ctor(::System::IO::Stream*  baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(baseOutputStream, deflater));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream* ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::New_ctor(::System::IO::Stream*  baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater, int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*>(baseOutputStream, deflater, bufferSize));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream::DeflaterOutputStream()   {
}
