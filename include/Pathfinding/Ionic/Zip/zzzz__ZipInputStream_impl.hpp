#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipInputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipInputStream_def.hpp"
#include "Pathfinding/Ionic/Crc/zzzz__CrcCalculatorStream_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.get_CodecBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::get_CodecBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69efc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                        {"get_CodecBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.SetupStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::SetupStream)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa69efc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                        {"SetupStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.get_ReadStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::get_ReadStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                        {"get_ReadStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::ZipInputStream::Read)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa69f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa69f168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa69f18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa69f1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipInputStream::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipInputStream::set_Position)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa69f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipInputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipInputStream::Flush)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa69f1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::ZipInputStream::Write)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa69f228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipInputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Pathfinding::Ionic::Zip::ZipInputStream::Seek)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa69f274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipInputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipInputStream::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipInputStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa69f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__inputStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputStream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__inputStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__inputStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputStream = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__currentEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEntry;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__currentEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEntry;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__currentEntry(::Pathfinding::Ionic::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentEntry = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__needSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needSetup;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__needSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needSetup;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__needSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____needSetup = value;
}
constexpr ::Pathfinding::Ionic::Crc::CrcCalculatorStream*& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__crcStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crcStream;
}
constexpr ::Pathfinding::Ionic::Crc::CrcCalculatorStream* const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__crcStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crcStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__crcStream(::Pathfinding::Ionic::Crc::CrcCalculatorStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crcStream = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__LeftToRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftToRead;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__LeftToRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftToRead;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__LeftToRead(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LeftToRead = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Password;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Password;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Password = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__endOfEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfEntry;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__endOfEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfEntry;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__endOfEntry(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endOfEntry = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closed;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closed;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__closed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closed = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__findRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____findRequired;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__findRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____findRequired;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__findRequired(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____findRequired = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__exceptionPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionPending;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__exceptionPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionPending;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__exceptionPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exceptionPending = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__CodecBufferSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecBufferSize_k__BackingField;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_get__CodecBufferSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecBufferSize_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipInputStream::__cordl_internal_set__CodecBufferSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CodecBufferSize_k__BackingField = value;
}
inline int32_t Pathfinding::Ionic::Zip::ZipInputStream::get_CodecBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                        {"get_CodecBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipInputStream::SetupStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                        {"SetupStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipInputStream::get_ReadStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(),
                        {"get_ReadStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipInputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline bool Pathfinding::Ionic::Zip::ZipInputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipInputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipInputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipInputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipInputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipInputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipInputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipInputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Pathfinding::Ionic::Zip::ZipInputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Pathfinding::Ionic::Zip::ZipInputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipInputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipInputStream::ZipInputStream()   {
}
