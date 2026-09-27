#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/BZip2/BZip2OutputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "ICSharpCode/SharpZipLib/BZip2/zzzz__BZip2OutputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/BZip2/zzzz__BZip2OutputStream_StackElement_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__IChecksum_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa000b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x9ffe5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa000dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa000e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa000e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa000e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa000e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa000e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa000e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa000eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa000ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa000f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa000f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::ReadByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa000fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Read)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa001004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Write)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa001050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa0011b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.MakeMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::MakeMaps)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa001508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"MakeMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.WriteRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::WriteRun)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa00122c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"WriteRun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.get_BytesWritten
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_BytesWritten)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa00170c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"get_BytesWritten", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Dispose)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa001714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa001930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Initialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa000c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.InitBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::InitBlock)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa000cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"InitBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.EndBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::EndBlock)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa001594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"EndBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.EndCompression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::EndCompression)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa0018b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"EndCompression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.BsFinishedWithStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsFinishedWithStream)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa001b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsFinishedWithStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.BsW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsW)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa001a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsW", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.BsPutUChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsPutUChar)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa001950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsPutUChar", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.BsPutint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsPutint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa001a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsPutint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.BsPutIntVS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsPutIntVS)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa001b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsPutIntVS", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.SendMTFValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::SendMTFValues)> {
  constexpr static std::size_t size = 0xe20;
  constexpr static std::size_t addrs = 0xa001b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"SendMTFValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.MoveToFrontCodeAndSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::MoveToFrontCodeAndSend)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa001af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"MoveToFrontCodeAndSend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.SimpleSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int32_t, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::SimpleSort)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa003408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"SimpleSort", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Vswap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int32_t, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Vswap)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa0039f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"Vswap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.QSort3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int32_t, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::QSort3)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0xa003a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"QSort3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.MainSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::MainSort)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0xa003e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"MainSort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.RandomiseBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::RandomiseBlock)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0xa004684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"RandomiseBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.DoReversibleTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::DoReversibleTransformation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa00195c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"DoReversibleTransformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.FullGtU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)(int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::FullGtU)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa0036fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"FullGtU", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.AllocateCompressStructures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::AllocateCompressStructures)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa000b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"AllocateCompressStructures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.GenerateMTFValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::GenerateMTFValues)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa00309c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"GenerateMTFValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Panic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Panic)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa0029ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"Panic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.HbMakeCodeLengths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<char16_t>, ::ArrayW<int32_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::HbMakeCodeLengths)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0xa0029f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"HbMakeCodeLengths", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.HbAssignCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<char16_t>, int32_t, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::HbAssignCodes)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa003014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"HbAssignCodes", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream.Med3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t, uint8_t, uint8_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Med3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa003e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"Med3", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_increments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___increments;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_increments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___increments;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_increments(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___increments = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_last()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_last() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_last(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___last = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_origPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origPtr;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_origPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origPtr;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_origPtr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___origPtr = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_blockSize100k()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSize100k;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_blockSize100k() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSize100k;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_blockSize100k(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockSize100k = value;
}
constexpr bool& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_blockRandomised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockRandomised;
}
constexpr bool const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_blockRandomised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockRandomised;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_blockRandomised(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockRandomised = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_bytesOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytesOut;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_bytesOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytesOut;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_bytesOut(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bytesOut = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_bsBuff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bsBuff;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_bsBuff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bsBuff;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_bsBuff(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bsBuff = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_bsLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bsLive;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_bsLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bsLive;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_bsLive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bsLive = value;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum*& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_mCrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCrc;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_mCrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCrc;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_mCrc(::ICSharpCode::SharpZipLib::Checksum::IChecksum*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCrc = value;
}
constexpr ::ArrayW<bool>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_inUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inUse;
}
constexpr ::ArrayW<bool> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_inUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inUse;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_inUse(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inUse = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_nInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nInUse;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_nInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nInUse;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_nInUse(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nInUse = value;
}
constexpr ::ArrayW<char16_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_seqToUnseq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seqToUnseq;
}
constexpr ::ArrayW<char16_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_seqToUnseq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seqToUnseq;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_seqToUnseq(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seqToUnseq = value;
}
constexpr ::ArrayW<char16_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_unseqToSeq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unseqToSeq;
}
constexpr ::ArrayW<char16_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_unseqToSeq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unseqToSeq;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_unseqToSeq(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unseqToSeq = value;
}
constexpr ::ArrayW<char16_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr ::ArrayW<char16_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_selector(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
constexpr ::ArrayW<char16_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_selectorMtf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectorMtf;
}
constexpr ::ArrayW<char16_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_selectorMtf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectorMtf;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_selectorMtf(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectorMtf = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_block()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___block;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_block() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___block;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_block(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___block = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_quadrant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quadrant;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_quadrant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quadrant;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_quadrant(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quadrant = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_zptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zptr;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_zptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zptr;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_zptr(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zptr = value;
}
constexpr ::ArrayW<int16_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_szptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___szptr;
}
constexpr ::ArrayW<int16_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_szptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___szptr;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_szptr(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___szptr = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_ftab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ftab;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_ftab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ftab;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_ftab(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ftab = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_nMTF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nMTF;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_nMTF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nMTF;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_nMTF(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nMTF = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_mtfFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mtfFreq;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_mtfFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mtfFreq;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_mtfFreq(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mtfFreq = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_workFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workFactor;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_workFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workFactor;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_workFactor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workFactor = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_workDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workDone;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_workDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workDone;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_workDone(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workDone = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_workLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workLimit;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_workLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workLimit;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_workLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workLimit = value;
}
constexpr bool& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_firstAttempt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstAttempt;
}
constexpr bool const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_firstAttempt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstAttempt;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_firstAttempt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstAttempt = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_nBlocksRandomised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBlocksRandomised;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_nBlocksRandomised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBlocksRandomised;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_nBlocksRandomised(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nBlocksRandomised = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_currentChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChar;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_currentChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChar;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_currentChar(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentChar = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_runLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runLength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_runLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runLength;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_runLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runLength = value;
}
constexpr uint32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_blockCRC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockCRC;
}
constexpr uint32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_blockCRC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockCRC;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_blockCRC(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockCRC = value;
}
constexpr uint32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_combinedCRC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedCRC;
}
constexpr uint32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_combinedCRC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedCRC;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_combinedCRC(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combinedCRC = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_allowableBlockSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowableBlockSize;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_allowableBlockSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowableBlockSize;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_allowableBlockSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowableBlockSize = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_baseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_baseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_baseStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseStream = value;
}
constexpr bool& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_disposed_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed_;
}
constexpr bool const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get_disposed_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed_;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set_disposed_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get__IsStreamOwner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr bool const& ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_get__IsStreamOwner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::__cordl_internal_set__IsStreamOwner_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStreamOwner_k__BackingField = value;
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::_ctor(::System::IO::Stream*  stream, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, blockSize);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::MakeMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"MakeMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::WriteRun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"WriteRun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::get_BytesWritten()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"get_BytesWritten", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::InitBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"InitBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::EndBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"EndBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::EndCompression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"EndCompression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsFinishedWithStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsFinishedWithStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsW(int32_t  n, int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsW", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, v);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsPutUChar(int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsPutUChar", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsPutint(int32_t  u)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsPutint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, u);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BsPutIntVS(int32_t  numBits, int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"BsPutIntVS", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numBits, c);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::SendMTFValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"SendMTFValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::MoveToFrontCodeAndSend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"MoveToFrontCodeAndSend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::SimpleSort(int32_t  lo, int32_t  hi, int32_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"SimpleSort", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lo, hi, d);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Vswap(int32_t  p1, int32_t  p2, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"Vswap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, n);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::QSort3(int32_t  loSt, int32_t  hiSt, int32_t  dSt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"QSort3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loSt, hiSt, dSt);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::MainSort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"MainSort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::RandomiseBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"RandomiseBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::DoReversibleTransformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"DoReversibleTransformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::FullGtU(int32_t  i1, int32_t  i2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"FullGtU", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i1, i2);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::AllocateCompressStructures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"AllocateCompressStructures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::GenerateMTFValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"GenerateMTFValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Panic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"Panic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::HbMakeCodeLengths(::ArrayW<char16_t>  len, ::ArrayW<int32_t>  freq, int32_t  alphaSize, int32_t  maxLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"HbMakeCodeLengths", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, len, freq, alphaSize, maxLen);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::HbAssignCodes(::ArrayW<int32_t>  code, ::ArrayW<char16_t>  length, int32_t  minLen, int32_t  maxLen, int32_t  alphaSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"HbAssignCodes", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, length, minLen, maxLen, alphaSize);
}
inline uint8_t ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::Med3(uint8_t  a, uint8_t  b, uint8_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(),
                        {"Med3", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, a, b, c);
}
inline ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream* ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(stream));
}
inline ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream* ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::New_ctor(::System::IO::Stream*  stream, int32_t  blockSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*>(stream, blockSize));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream::BZip2OutputStream()   {
}
