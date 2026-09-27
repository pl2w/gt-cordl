#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/BZip2/BZip2InputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "ICSharpCode/SharpZipLib/BZip2/zzzz__BZip2InputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__IChecksum_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::_ctor)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x9ffdfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffece4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffecec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ffecf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffed10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffed18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ffed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ffed3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ffed5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ffeda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ffedc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ffee14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Write)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ffee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::WriteByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ffeeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Read)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9ffeef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ffefe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::ReadByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fff008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.MakeMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::MakeMaps)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fff460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"MakeMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Initialize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ffe8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.InitBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::InitBlock)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9ffe99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"InitBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.EndBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::EndBlock)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9fffe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"EndBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Complete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fff608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.FillBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::FillBuffer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9ffff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"FillBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.BsR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BsR)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fff6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BsR", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.BsGetUChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BsGetUChar)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fff4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BsGetUChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.BsGetIntVS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BsGetIntVS)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa000068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BsGetIntVS", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.BsGetInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BsGetInt32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fff680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BsGetInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.RecvDecodingTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::RecvDecodingTables)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0xa00006c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"RecvDecodingTables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.GetAndMoveToFrontDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::GetAndMoveToFrontDecode)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x9fff740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"GetAndMoveToFrontDecode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetupBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupBlock)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9ffeb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetupRandPartA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupRandPartA)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa00085c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupRandPartA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetupNoRandPartA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupNoRandPartA)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa000a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupNoRandPartA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetupRandPartB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupRandPartB)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9fff070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupRandPartB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetupRandPartC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupRandPartC)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9fff1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupRandPartC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetupNoRandPartB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupNoRandPartB)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fff2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupNoRandPartB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetupNoRandPartC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupNoRandPartC)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9fff368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupNoRandPartC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.SetDecompressStructureSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetDecompressStructureSizes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9fff504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetDecompressStructureSizes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.CompressedStreamEOF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::CompressedStreamEOF)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa00001c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"CompressedStreamEOF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.BlockOverrun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BlockOverrun)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa000814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BlockOverrun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.BadBlockHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BadBlockHeader)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9fff638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BadBlockHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.CrcError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::CrcError)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9ffff18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"CrcError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream.HbCreateDecodeTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<char16_t>, int32_t, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::HbCreateDecodeTables)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa0005f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"HbCreateDecodeTables", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_last()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_last() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_last(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___last = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_origPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origPtr;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_origPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origPtr;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_origPtr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___origPtr = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_blockSize100k()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSize100k;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_blockSize100k() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSize100k;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_blockSize100k(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockSize100k = value;
}
constexpr bool& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_blockRandomised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockRandomised;
}
constexpr bool const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_blockRandomised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockRandomised;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_blockRandomised(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockRandomised = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_bsBuff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bsBuff;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_bsBuff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bsBuff;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_bsBuff(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bsBuff = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_bsLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bsLive;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_bsLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bsLive;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_bsLive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bsLive = value;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum*& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_mCrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCrc;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_mCrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCrc;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_mCrc(::ICSharpCode::SharpZipLib::Checksum::IChecksum*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCrc = value;
}
constexpr ::ArrayW<bool>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_inUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inUse;
}
constexpr ::ArrayW<bool> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_inUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inUse;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_inUse(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inUse = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_nInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nInUse;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_nInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nInUse;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_nInUse(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nInUse = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_seqToUnseq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seqToUnseq;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_seqToUnseq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seqToUnseq;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_seqToUnseq(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seqToUnseq = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_unseqToSeq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unseqToSeq;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_unseqToSeq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unseqToSeq;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_unseqToSeq(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unseqToSeq = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_selector(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_selectorMtf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectorMtf;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_selectorMtf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectorMtf;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_selectorMtf(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectorMtf = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_tt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tt;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_tt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tt;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_tt(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tt = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_ll8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ll8;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_ll8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ll8;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_ll8(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ll8 = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_unzftab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unzftab;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_unzftab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unzftab;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_unzftab(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unzftab = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_limit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limit;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_limit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limit;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_limit(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limit = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_baseArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseArray;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_baseArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseArray;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_baseArray(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseArray = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_perm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perm;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_perm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perm;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_perm(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perm = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_minLens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLens;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_minLens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLens;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_minLens(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minLens = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_baseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_baseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_baseStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseStream = value;
}
constexpr bool& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_streamEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamEnd;
}
constexpr bool const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_streamEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamEnd;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_streamEnd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___streamEnd = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_currentChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChar;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_currentChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChar;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_currentChar(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentChar = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_currentState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_storedBlockCRC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedBlockCRC;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_storedBlockCRC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedBlockCRC;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_storedBlockCRC(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storedBlockCRC = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_storedCombinedCRC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedCombinedCRC;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_storedCombinedCRC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedCombinedCRC;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_storedCombinedCRC(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storedCombinedCRC = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_computedBlockCRC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedBlockCRC;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_computedBlockCRC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedBlockCRC;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_computedBlockCRC(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computedBlockCRC = value;
}
constexpr uint32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_computedCombinedCRC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedCombinedCRC;
}
constexpr uint32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_computedCombinedCRC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedCombinedCRC;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_computedCombinedCRC(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computedCombinedCRC = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_chPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chPrev;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_chPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chPrev;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_chPrev(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chPrev = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_ch2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ch2;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_ch2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ch2;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_ch2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ch2 = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_tPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tPos;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_tPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tPos;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_tPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tPos = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_rNToGo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rNToGo;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_rNToGo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rNToGo;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_rNToGo(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rNToGo = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_rTPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rTPos;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_rTPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rTPos;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_rTPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rTPos = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_i2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i2;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_i2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i2;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_i2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i2 = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_j2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___j2;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_j2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___j2;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_j2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___j2 = value;
}
constexpr uint8_t& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr uint8_t const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set_z(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___z = value;
}
constexpr bool& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get__IsStreamOwner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr bool const& ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_get__IsStreamOwner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::__cordl_internal_set__IsStreamOwner_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStreamOwner_k__BackingField = value;
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::MakeMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"MakeMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::InitBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"InitBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::EndBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"EndBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::FillBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"FillBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BsR(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BsR", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, n);
}
inline char16_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BsGetUChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BsGetUChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BsGetIntVS(int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BsGetIntVS", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, numBits);
}
inline int32_t ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BsGetInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BsGetInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::RecvDecodingTables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"RecvDecodingTables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::GetAndMoveToFrontDecode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"GetAndMoveToFrontDecode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupRandPartA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupRandPartA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupNoRandPartA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupNoRandPartA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupRandPartB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupRandPartB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupRandPartC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupRandPartC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupNoRandPartB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupNoRandPartB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetupNoRandPartC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetupNoRandPartC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::SetDecompressStructureSizes(int32_t  newSize100k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"SetDecompressStructureSizes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSize100k);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::CompressedStreamEOF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"CompressedStreamEOF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BlockOverrun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BlockOverrun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BadBlockHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"BadBlockHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::CrcError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"CrcError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::HbCreateDecodeTables(::ArrayW<int32_t>  limit, ::ArrayW<int32_t>  baseArray, ::ArrayW<int32_t>  perm, ::ArrayW<char16_t>  length, int32_t  minLen, int32_t  maxLen, int32_t  alphaSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(),
                        {"HbCreateDecodeTables", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, limit, baseArray, perm, length, minLen, maxLen, alphaSize);
}
inline ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream* ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*>(stream));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream::BZip2InputStream()   {
}
