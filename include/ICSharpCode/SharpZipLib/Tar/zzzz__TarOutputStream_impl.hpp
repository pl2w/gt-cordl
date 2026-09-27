#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarOutputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarOutputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarBuffer_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarEntry_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff3f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ff40d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9ff3fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(::System::IO::Stream*, int32_t, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9ff40dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff4224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff4258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff4274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff4290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff42ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff42c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff42e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::Seek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff4308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff4328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::ReadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff4348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff4368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff4388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::Finish)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9ff43a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"Finish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ff4538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.get_RecordSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_RecordSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff4570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"get_RecordSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.GetRecordSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::GetRecordSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff4588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"GetRecordSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.get_IsEntryOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_IsEntryOpen)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ff43d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"get_IsEntryOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.PutNextEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(::ICSharpCode::SharpZipLib::Tar::TarEntry*)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::PutNextEntry)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9ff45a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"PutNextEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.CloseEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::CloseEntry)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9ff43e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"CloseEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ff482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::Write)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x9ff48b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarOutputStream.WriteEofBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarOutputStream::WriteEofBlock)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9ff44f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"WriteEofBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_currBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBytes;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_currBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBytes;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_currBytes(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBytes = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_assemblyBufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assemblyBufferLength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_assemblyBufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assemblyBufferLength;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_assemblyBufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assemblyBufferLength = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_isClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClosed;
}
constexpr bool const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_isClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClosed;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_isClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isClosed = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_currSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currSize;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_currSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currSize;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_currSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currSize = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_blockBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockBuffer;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_blockBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_blockBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockBuffer = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_assemblyBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assemblyBuffer;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_assemblyBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assemblyBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_assemblyBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assemblyBuffer = value;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarBuffer*& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarBuffer* const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_buffer(::ICSharpCode::SharpZipLib::Tar::TarBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_outputStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputStream;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_outputStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputStream;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_outputStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputStream = value;
}
constexpr ::System::Text::Encoding*& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_nameEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameEncoding;
}
constexpr ::System::Text::Encoding* const& ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_get_nameEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameEncoding;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarOutputStream::__cordl_internal_set_nameEncoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameEncoding = value;
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::_ctor(::System::IO::Stream*  outputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::_ctor(::System::IO::Stream*  outputStream, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, nameEncoding);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::_ctor(::System::IO::Stream*  outputStream, int32_t  blockFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, blockFactor);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::_ctor(::System::IO::Stream*  outputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, blockFactor, nameEncoding);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Tar::TarOutputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarOutputStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarOutputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::Finish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"Finish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_RecordSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"get_RecordSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarOutputStream::GetRecordSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"GetRecordSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarOutputStream::get_IsEntryOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"get_IsEntryOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::PutNextEntry(::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"PutNextEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::CloseEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"CloseEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Tar::TarOutputStream::WriteEofBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(),
                        {"WriteEofBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
inline ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* ICSharpCode::SharpZipLib::Tar::TarOutputStream::New_ctor(::System::IO::Stream*  outputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(outputStream));
}
inline ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* ICSharpCode::SharpZipLib::Tar::TarOutputStream::New_ctor(::System::IO::Stream*  outputStream, ::System::Text::Encoding*  nameEncoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(outputStream, nameEncoding));
}
/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
inline ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* ICSharpCode::SharpZipLib::Tar::TarOutputStream::New_ctor(::System::IO::Stream*  outputStream, int32_t  blockFactor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(outputStream, blockFactor));
}
inline ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* ICSharpCode::SharpZipLib::Tar::TarOutputStream::New_ctor(::System::IO::Stream*  outputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarOutputStream*>(outputStream, blockFactor, nameEncoding));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Tar::TarOutputStream::TarOutputStream()   {
}
