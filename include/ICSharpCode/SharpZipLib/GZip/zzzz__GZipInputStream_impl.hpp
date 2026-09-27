#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipInputStream.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__InflaterInputStream_impl.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipInputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__Crc32_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipInputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::GZip::GZipInputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff5e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipInputStream::*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::GZip::GZipInputStream::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9ff6560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipInputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::GZip::GZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::GZip::GZipInputStream::Read)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9ff65dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipInputStream.GetFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::GZip::GZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipInputStream::GetFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff746c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {"GetFilename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipInputStream.ReadHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::GZip::GZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipInputStream::ReadHeader)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x9ff6830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {"ReadHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipInputStream.ReadFooter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipInputStream::ReadFooter)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x9ff71c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {"ReadFooter", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32*& ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_get_crc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32* const& ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_get_crc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr void ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_set_crc(::ICSharpCode::SharpZipLib::Checksum::Crc32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc = value;
}
constexpr bool& ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_get_readGZIPHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readGZIPHeader;
}
constexpr bool const& ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_get_readGZIPHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readGZIPHeader;
}
constexpr void ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_set_readGZIPHeader(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readGZIPHeader = value;
}
constexpr bool& ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_get_completedLastBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedLastBlock;
}
constexpr bool const& ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_get_completedLastBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedLastBlock;
}
constexpr void ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_set_completedLastBlock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completedLastBlock = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_get_fileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_get_fileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr void ICSharpCode::SharpZipLib::GZip::GZipInputStream::__cordl_internal_set_fileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileName = value;
}
inline void ICSharpCode::SharpZipLib::GZip::GZipInputStream::_ctor(::System::IO::Stream*  baseInputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInputStream);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipInputStream::_ctor(::System::IO::Stream*  baseInputStream, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInputStream, size);
}
inline int32_t ICSharpCode::SharpZipLib::GZip::GZipInputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline ::StringW ICSharpCode::SharpZipLib::GZip::GZipInputStream::GetFilename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {"GetFilename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::GZip::GZipInputStream::ReadHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {"ReadHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipInputStream::ReadFooter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(),
                        {"ReadFooter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::GZip::GZipInputStream* ICSharpCode::SharpZipLib::GZip::GZipInputStream::New_ctor(::System::IO::Stream*  baseInputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(baseInputStream));
}
inline ::ICSharpCode::SharpZipLib::GZip::GZipInputStream* ICSharpCode::SharpZipLib::GZip::GZipInputStream::New_ctor(::System::IO::Stream*  baseInputStream, int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::GZip::GZipInputStream*>(baseInputStream, size));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipInputStream::GZipInputStream()   {
}
