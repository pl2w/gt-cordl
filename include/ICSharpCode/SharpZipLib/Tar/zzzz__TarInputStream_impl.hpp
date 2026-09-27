#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarInputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarInputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarBuffer_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarInputStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ff2d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ff2e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9ff2e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(::System::IO::Stream*, int32_t, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9ff2d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff2ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff2f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff2f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff2f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff2f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff2f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff2f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff2f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff2fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff303c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::Write)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff3088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::WriteByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff30d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9ff3120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::Read)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9ff31b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff3494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.SetEntryFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::SetEntryFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff34b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"SetEntryFactory", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_RecordSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_RecordSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff34b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"get_RecordSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.GetRecordSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::GetRecordSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff34d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"GetRecordSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_Available)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ff34e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"get_Available", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::Skip)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9ff34f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"Skip", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.get_IsMarkSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::get_IsMarkSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff3598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"get_IsMarkSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.Mark
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::Mark)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ff35a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"Mark", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ff35a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.GetNextEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::GetNextEntry)> {
  constexpr static std::size_t size = 0x830;
  constexpr static std::size_t addrs = 0x9ff35a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"GetNextEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.CopyEntryContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::CopyEntryContents)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9ff3e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"CopyEntryContents", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream.SkipToNextEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream::SkipToNextEntry)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ff3dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"SkipToNextEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_hasHitEOF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasHitEOF;
}
constexpr bool const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_hasHitEOF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasHitEOF;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_hasHitEOF(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasHitEOF = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_entrySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entrySize;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_entrySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entrySize;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_entrySize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entrySize = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_entryOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryOffset;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_entryOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryOffset;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_entryOffset(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryOffset = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_readBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readBuffer;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_readBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_readBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readBuffer = value;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarBuffer*& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_tarBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tarBuffer;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarBuffer* const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_tarBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tarBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_tarBuffer(::ICSharpCode::SharpZipLib::Tar::TarBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tarBuffer = value;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarEntry*& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_currentEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEntry;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarEntry* const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_currentEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEntry;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_currentEntry(::ICSharpCode::SharpZipLib::Tar::TarEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentEntry = value;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_entryFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryFactory;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory* const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_entryFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryFactory;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_entryFactory(::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryFactory = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_inputStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputStream;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_inputStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputStream;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_inputStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputStream = value;
}
constexpr ::System::Text::Encoding*& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr ::System::Text::Encoding* const& ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_get_encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream::__cordl_internal_set_encoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoding = value;
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::_ctor(::System::IO::Stream*  inputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::_ctor(::System::IO::Stream*  inputStream, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream, nameEncoding);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::_ctor(::System::IO::Stream*  inputStream, int32_t  blockFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream, blockFactor);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::_ctor(::System::IO::Stream*  inputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream, blockFactor, nameEncoding);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarInputStream::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarInputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarInputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarInputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Tar::TarInputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Tar::TarInputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Tar::TarInputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarInputStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarInputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::SetEntryFactory(::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*  factory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"SetEntryFactory", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factory);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarInputStream::get_RecordSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"get_RecordSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarInputStream::GetRecordSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"GetRecordSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Tar::TarInputStream::get_Available()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"get_Available", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::Skip(int64_t  skipCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"Skip", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipCount);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarInputStream::get_IsMarkSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"get_IsMarkSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::Mark(int32_t  markLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"Mark", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markLimit);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarInputStream::GetNextEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"GetNextEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::CopyEntryContents(::System::IO::Stream*  outputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"CopyEntryContents", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream::SkipToNextEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(),
                        {"SkipToNextEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream* ICSharpCode::SharpZipLib::Tar::TarInputStream::New_ctor(::System::IO::Stream*  inputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(inputStream));
}
inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream* ICSharpCode::SharpZipLib::Tar::TarInputStream::New_ctor(::System::IO::Stream*  inputStream, ::System::Text::Encoding*  nameEncoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(inputStream, nameEncoding));
}
/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream* ICSharpCode::SharpZipLib::Tar::TarInputStream::New_ctor(::System::IO::Stream*  inputStream, int32_t  blockFactor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(inputStream, blockFactor));
}
inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream* ICSharpCode::SharpZipLib::Tar::TarInputStream::New_ctor(::System::IO::Stream*  inputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarInputStream*>(inputStream, blockFactor, nameEncoding));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream::TarInputStream()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff3ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::*)(::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ff3ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter.CreateEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::CreateEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff3f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {"CreateEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter.CreateEntryFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::CreateEntryFromFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff3f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {"CreateEntryFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter.CreateEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::CreateEntry)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9ff3f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {"CreateEntry", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Text::Encoding*& ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::__cordl_internal_get_nameEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameEncoding;
}
constexpr ::System::Text::Encoding* const& ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::__cordl_internal_get_nameEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameEncoding;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::__cordl_internal_set_nameEncoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameEncoding = value;
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::_ctor(::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameEncoding);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::CreateEntry(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {"CreateEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(this, ___internal_method, name);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::CreateEntryFromFile(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {"CreateEntryFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(this, ___internal_method, fileName);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::CreateEntry(::ArrayW<uint8_t>  headerBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(),
                        {"CreateEntry", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(this, ___internal_method, headerBuffer);
}
/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter* ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>());
}
inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter* ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::New_ctor(::System::Text::Encoding*  nameEncoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*>(nameEncoding));
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory"
constexpr  ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::operator ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory"
constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory* ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::i___ICSharpCode__SharpZipLib__Tar__TarInputStream_IEntryFactory() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter::TarInputStream_EntryFactoryAdapter()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory.CreateEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::CreateEntry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory.CreateEntryFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::CreateEntryFromFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory.CreateEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::CreateEntry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::CreateEntry(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(this, ___internal_method, name);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::CreateEntryFromFile(::StringW  fileName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(this, ___internal_method, fileName);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory::CreateEntry(::ArrayW<uint8_t>  headerBuffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(this, ___internal_method, headerBuffer);
}
