#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipOutputStream.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOutputStream_def.hpp"
#include "Pathfinding/Ionic/Crc/zzzz__CrcCalculatorStream_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CountingStream_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ParallelDeflateOutputStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_CodecBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_CodecBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_CodecBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zlib::CompressionStrategy (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_Strategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_Strategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_EnableZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::Zip64Option (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_EnableZip64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_EnableZip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_AlternateEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_AlternateEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_AlternateEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_AlternateEncodingUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipOption (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_AlternateEncodingUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_AlternateEncodingUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_DefaultEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_DefaultEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_DefaultEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_ParallelDeflateThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_ParallelDeflateThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_ParallelDeflateThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_ParallelDeflateMaxBufferPairs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_ParallelDeflateMaxBufferPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_ParallelDeflateMaxBufferPairs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_OutputStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_OutputStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_OutputStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::ZipOutputStream::Write)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa69f320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream._InitiateCurrentEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipOutputStream::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipOutputStream::_InitiateCurrentEntry)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa69f490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"_InitiateCurrentEntry", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa69f5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa69f630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipOutputStream::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipOutputStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa69f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipOutputStream::*)()>(&::Pathfinding::Ionic::Zip::ZipOutputStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa69f688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::ZipOutputStream::Read)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa69f68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipOutputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Pathfinding::Ionic::Zip::ZipOutputStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa69f6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipOutputStream::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipOutputStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa69f724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____password = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__outputStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputStream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__outputStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__outputStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputStream = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__currentEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEntry;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__currentEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEntry;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__currentEntry(::Pathfinding::Ionic::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentEntry = value;
}
constexpr ::Pathfinding::Ionic::Zip::Zip64Option& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__zip64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zip64;
}
constexpr ::Pathfinding::Ionic::Zip::Zip64Option const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__zip64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zip64;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__zip64(::Pathfinding::Ionic::Zip::Zip64Option  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zip64 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__entriesWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesWritten;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__entriesWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesWritten;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__entriesWritten(::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entriesWritten = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__entryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryCount;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__entryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryCount;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__entryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryCount = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipOption& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__alternateEncodingUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateEncodingUsage;
}
constexpr ::Pathfinding::Ionic::Zip::ZipOption const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__alternateEncodingUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateEncodingUsage;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__alternateEncodingUsage(::Pathfinding::Ionic::Zip::ZipOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alternateEncodingUsage = value;
}
constexpr ::System::Text::Encoding*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__alternateEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateEncoding;
}
constexpr ::System::Text::Encoding* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__alternateEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateEncoding;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__alternateEncoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alternateEncoding = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__exceptionPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionPending;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__exceptionPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionPending;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__exceptionPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exceptionPending = value;
}
constexpr ::Pathfinding::Ionic::Zip::CountingStream*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__outputCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputCounter;
}
constexpr ::Pathfinding::Ionic::Zip::CountingStream* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__outputCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputCounter;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__outputCounter(::Pathfinding::Ionic::Zip::CountingStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputCounter = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__encryptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptor;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__encryptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptor;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__encryptor(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptor = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__deflater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deflater;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__deflater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deflater;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__deflater(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deflater = value;
}
constexpr ::Pathfinding::Ionic::Crc::CrcCalculatorStream*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__entryOutputStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryOutputStream;
}
constexpr ::Pathfinding::Ionic::Crc::CrcCalculatorStream* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__entryOutputStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryOutputStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__entryOutputStream(::Pathfinding::Ionic::Crc::CrcCalculatorStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryOutputStream = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__needToWriteEntryHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needToWriteEntryHeader;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__needToWriteEntryHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needToWriteEntryHeader;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__needToWriteEntryHeader(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____needToWriteEntryHeader = value;
}
constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get_ParallelDeflater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParallelDeflater;
}
constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream* const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get_ParallelDeflater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParallelDeflater;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set_ParallelDeflater(::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParallelDeflater = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__ParallelDeflateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParallelDeflateThreshold;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__ParallelDeflateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParallelDeflateThreshold;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__ParallelDeflateThreshold(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParallelDeflateThreshold = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__maxBufferPairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferPairs;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__maxBufferPairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferPairs;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__maxBufferPairs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxBufferPairs = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__CodecBufferSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecBufferSize_k__BackingField;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__CodecBufferSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecBufferSize_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__CodecBufferSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CodecBufferSize_k__BackingField = value;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__Strategy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Strategy_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy const& Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_get__Strategy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Strategy_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipOutputStream::__cordl_internal_set__Strategy_k__BackingField(::Pathfinding::Ionic::Zlib::CompressionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Strategy_k__BackingField = value;
}
inline int32_t Pathfinding::Ionic::Zip::ZipOutputStream::get_CodecBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_CodecBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zlib::CompressionStrategy Pathfinding::Ionic::Zip::ZipOutputStream::get_Strategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_Strategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zlib::CompressionStrategy>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::Zip64Option Pathfinding::Ionic::Zip::ZipOutputStream::get_EnableZip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_EnableZip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::Zip64Option>(this, ___internal_method);
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipOutputStream::get_AlternateEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_AlternateEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipOption Pathfinding::Ionic::Zip::ZipOutputStream::get_AlternateEncodingUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_AlternateEncodingUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipOption>(this, ___internal_method);
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipOutputStream::get_DefaultEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_DefaultEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipOutputStream::get_ParallelDeflateThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_ParallelDeflateThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipOutputStream::get_ParallelDeflateMaxBufferPairs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_ParallelDeflateMaxBufferPairs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipOutputStream::get_OutputStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"get_OutputStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipOutputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Pathfinding::Ionic::Zip::ZipOutputStream::_InitiateCurrentEntry(bool  finishing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(),
                        {"_InitiateCurrentEntry", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishing);
}
inline bool Pathfinding::Ionic::Zip::ZipOutputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipOutputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipOutputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipOutputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipOutputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipOutputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipOutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipOutputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Pathfinding::Ionic::Zip::ZipOutputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Pathfinding::Ionic::Zip::ZipOutputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipOutputStream::ZipOutputStream()   {
}
