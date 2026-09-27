#pragma once
// IWYU pragma private; include "Ionic/Crc/CrcCalculatorStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Ionic/Crc/zzzz__CrcCalculatorStream_def.hpp"
#include "Ionic/Crc/zzzz__CRC32_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(::System::IO::Stream*)>(&::Ionic::Crc::CrcCalculatorStream::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa7a0280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(::System::IO::Stream*, bool)>(&::Ionic::Crc::CrcCalculatorStream::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7a03f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(::System::IO::Stream*, int64_t)>(&::Ionic::Crc::CrcCalculatorStream::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7a0470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(::System::IO::Stream*, int64_t, bool)>(&::Ionic::Crc::CrcCalculatorStream::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa7a04dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(::System::IO::Stream*, int64_t, bool, ::Ionic::Crc::CRC32*)>(&::Ionic::Crc::CrcCalculatorStream::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7a054c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Ionic::Crc::CRC32*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(bool, int64_t, ::System::IO::Stream*, ::Ionic::Crc::CRC32*)>(&::Ionic::Crc::CrcCalculatorStream::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa7a02f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Crc::CRC32*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.get_TotalBytesSlurped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::get_TotalBytesSlurped)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa7a05b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"get_TotalBytesSlurped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.get_Crc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::get_Crc)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa7a05d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"get_Crc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.get_LeaveOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::get_LeaveOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7a05ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"get_LeaveOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.set_LeaveOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(bool)>(&::Ionic::Crc::CrcCalculatorStream::set_LeaveOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7a05f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"set_LeaveOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Crc::CrcCalculatorStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Crc::CrcCalculatorStream::Read)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa7a05fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Crc::CrcCalculatorStream::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa7a06f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa7a0768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7a0784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa7a078c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa7a07a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::get_Length)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa7a07c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::get_Position)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa7a0854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(int64_t)>(&::Ionic::Crc::CrcCalculatorStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa7a086c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Crc::CrcCalculatorStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Ionic::Crc::CrcCalculatorStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa7a08a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)(int64_t)>(&::Ionic::Crc::CrcCalculatorStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa7a08dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7a0914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CrcCalculatorStream.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CrcCalculatorStream::*)()>(&::Ionic::Crc::CrcCalculatorStream::Close)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa7a0924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                    {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 21}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Ionic::Crc::CrcCalculatorStream::__cordl_internal_get__innerStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr ::System::IO::Stream* const& Ionic::Crc::CrcCalculatorStream::__cordl_internal_get__innerStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr void Ionic::Crc::CrcCalculatorStream::__cordl_internal_set__innerStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____innerStream = value;
}
constexpr ::Ionic::Crc::CRC32*& Ionic::Crc::CrcCalculatorStream::__cordl_internal_get__Crc32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr ::Ionic::Crc::CRC32* const& Ionic::Crc::CrcCalculatorStream::__cordl_internal_get__Crc32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr void Ionic::Crc::CrcCalculatorStream::__cordl_internal_set__Crc32(::Ionic::Crc::CRC32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Crc32 = value;
}
constexpr int64_t& Ionic::Crc::CrcCalculatorStream::__cordl_internal_get__lengthLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthLimit;
}
constexpr int64_t const& Ionic::Crc::CrcCalculatorStream::__cordl_internal_get__lengthLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthLimit;
}
constexpr void Ionic::Crc::CrcCalculatorStream::__cordl_internal_set__lengthLimit(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lengthLimit = value;
}
constexpr bool& Ionic::Crc::CrcCalculatorStream::__cordl_internal_get__leaveOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr bool const& Ionic::Crc::CrcCalculatorStream::__cordl_internal_get__leaveOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr void Ionic::Crc::CrcCalculatorStream::__cordl_internal_set__leaveOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leaveOpen = value;
}
inline void Ionic::Crc::CrcCalculatorStream::setStaticF_UnsetLengthLimit(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "UnsetLengthLimit", ::Ionic::Crc::CrcCalculatorStream*>(std::forward<int64_t>(value));
}
inline int64_t Ionic::Crc::CrcCalculatorStream::getStaticF_UnsetLengthLimit()  {
return ::cordl_internals::getStaticField<int64_t, "UnsetLengthLimit", ::Ionic::Crc::CrcCalculatorStream*>();
}
inline void Ionic::Crc::CrcCalculatorStream::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Ionic::Crc::CrcCalculatorStream::_ctor(::System::IO::Stream*  stream, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, leaveOpen);
}
inline void Ionic::Crc::CrcCalculatorStream::_ctor(::System::IO::Stream*  stream, int64_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, length);
}
inline void Ionic::Crc::CrcCalculatorStream::_ctor(::System::IO::Stream*  stream, int64_t  length, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, length, leaveOpen);
}
inline void Ionic::Crc::CrcCalculatorStream::_ctor(::System::IO::Stream*  stream, int64_t  length, bool  leaveOpen, ::Ionic::Crc::CRC32*  crc32)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Ionic::Crc::CRC32*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, length, leaveOpen, crc32);
}
inline void Ionic::Crc::CrcCalculatorStream::_ctor(bool  leaveOpen, int64_t  length, ::System::IO::Stream*  stream, ::Ionic::Crc::CRC32*  crc32)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Crc::CRC32*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leaveOpen, length, stream, crc32);
}
inline int64_t Ionic::Crc::CrcCalculatorStream::get_TotalBytesSlurped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"get_TotalBytesSlurped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Ionic::Crc::CrcCalculatorStream::get_Crc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"get_Crc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Ionic::Crc::CrcCalculatorStream::get_LeaveOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"get_LeaveOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Ionic::Crc::CrcCalculatorStream::set_LeaveOpen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"set_LeaveOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Crc::CrcCalculatorStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void Ionic::Crc::CrcCalculatorStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline bool Ionic::Crc::CrcCalculatorStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Crc::CrcCalculatorStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Crc::CrcCalculatorStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Ionic::Crc::CrcCalculatorStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Ionic::Crc::CrcCalculatorStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Crc::CrcCalculatorStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Crc::CrcCalculatorStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Ionic::Crc::CrcCalculatorStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Ionic::Crc::CrcCalculatorStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Ionic::Crc::CrcCalculatorStream::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Crc::CrcCalculatorStream::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Crc::CrcCalculatorStream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ionic::Crc::CrcCalculatorStream* Ionic::Crc::CrcCalculatorStream::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CrcCalculatorStream*>(stream));
}
inline ::Ionic::Crc::CrcCalculatorStream* Ionic::Crc::CrcCalculatorStream::New_ctor(::System::IO::Stream*  stream, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CrcCalculatorStream*>(stream, leaveOpen));
}
inline ::Ionic::Crc::CrcCalculatorStream* Ionic::Crc::CrcCalculatorStream::New_ctor(::System::IO::Stream*  stream, int64_t  length)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CrcCalculatorStream*>(stream, length));
}
inline ::Ionic::Crc::CrcCalculatorStream* Ionic::Crc::CrcCalculatorStream::New_ctor(::System::IO::Stream*  stream, int64_t  length, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CrcCalculatorStream*>(stream, length, leaveOpen));
}
inline ::Ionic::Crc::CrcCalculatorStream* Ionic::Crc::CrcCalculatorStream::New_ctor(::System::IO::Stream*  stream, int64_t  length, bool  leaveOpen, ::Ionic::Crc::CRC32*  crc32)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CrcCalculatorStream*>(stream, length, leaveOpen, crc32));
}
inline ::Ionic::Crc::CrcCalculatorStream* Ionic::Crc::CrcCalculatorStream::New_ctor(bool  leaveOpen, int64_t  length, ::System::IO::Stream*  stream, ::Ionic::Crc::CRC32*  crc32)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CrcCalculatorStream*>(leaveOpen, length, stream, crc32));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Ionic::Crc::CrcCalculatorStream::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Ionic::Crc::CrcCalculatorStream::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Ionic::Crc::CrcCalculatorStream::CrcCalculatorStream()   {
}
