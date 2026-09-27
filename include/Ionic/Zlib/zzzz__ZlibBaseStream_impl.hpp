#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibBaseStream.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_impl.hpp"
#include "Ionic/Zlib/zzzz__CompressionMode_impl.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_impl.hpp"
#include "Ionic/Zlib/zzzz__FlushType_impl.hpp"
#include "Ionic/Zlib/zzzz__ZlibBaseStream_StreamMode_impl.hpp"
#include "Ionic/Zlib/zzzz__ZlibStreamFlavor_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Ionic/Zlib/zzzz__ZlibBaseStream_def.hpp"
#include "Ionic/Crc/zzzz__CRC32_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionMode_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibBaseStream_StreamMode_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibStreamFlavor_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get_Crc32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get_Crc32)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa79b7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"get_Crc32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibBaseStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, ::Ionic::Zlib::CompressionLevel, ::Ionic::Zlib::ZlibStreamFlavor, bool)>(&::Ionic::Zlib::ZlibBaseStream::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa79b7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::ZlibStreamFlavor>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get__wantCompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get__wantCompress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa79b980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"get__wantCompress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get_z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::ZlibCodec* (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get_z)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa79b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"get_z", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get_workingBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get_workingBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa79ba9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"get_workingBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibBaseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::ZlibBaseStream::Write)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa79bb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::finish)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0xa79befc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"finish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.end
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::end)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa79c434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"end", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::Close)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa79c570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa79c638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ZlibBaseStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Ionic::Zlib::ZlibBaseStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79c658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibBaseStream::*)(int64_t)>(&::Ionic::Zlib::ZlibBaseStream::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa79c690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.ReadZeroTerminatedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::ReadZeroTerminatedString)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa79c6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"ReadZeroTerminatedString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream._ReadAndValidateGzipHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::_ReadAndValidateGzipHeader)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xa79c89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"_ReadAndValidateGzipHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibBaseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::ZlibBaseStream::Read)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xa79cba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa79cff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa79d00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa79d028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa79d044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ZlibBaseStream::*)()>(&::Ionic::Zlib::ZlibBaseStream::get_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibBaseStream::*)(int64_t)>(&::Ionic::Zlib::ZlibBaseStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79d098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.CompressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::IO::Stream*)>(&::Ionic::Zlib::ZlibBaseStream::CompressString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa79d0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"CompressString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.CompressBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Ionic::Zlib::ZlibBaseStream::CompressBuffer)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa79d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"CompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.UncompressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Ionic::Zlib::ZlibBaseStream::UncompressString)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xa79d368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"UncompressString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibBaseStream.UncompressBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Ionic::Zlib::ZlibBaseStream::UncompressBuffer)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa79d68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"UncompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Ionic::Zlib::ZlibCodec*& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____z;
}
constexpr ::Ionic::Zlib::ZlibCodec* const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____z;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__z(::Ionic::Zlib::ZlibCodec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____z = value;
}
constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__streamMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamMode;
}
constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__streamMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamMode;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__streamMode(::GlobalNamespace::ZlibBaseStream_StreamMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamMode = value;
}
constexpr ::Ionic::Zlib::FlushType& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__flushMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flushMode;
}
constexpr ::Ionic::Zlib::FlushType const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__flushMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flushMode;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__flushMode(::Ionic::Zlib::FlushType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flushMode = value;
}
constexpr ::Ionic::Zlib::ZlibStreamFlavor& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__flavor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flavor;
}
constexpr ::Ionic::Zlib::ZlibStreamFlavor const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__flavor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flavor;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__flavor(::Ionic::Zlib::ZlibStreamFlavor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flavor = value;
}
constexpr ::Ionic::Zlib::CompressionMode& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__compressionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressionMode;
}
constexpr ::Ionic::Zlib::CompressionMode const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__compressionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressionMode;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__compressionMode(::Ionic::Zlib::CompressionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressionMode = value;
}
constexpr ::Ionic::Zlib::CompressionLevel& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____level;
}
constexpr ::Ionic::Zlib::CompressionLevel const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____level;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__level(::Ionic::Zlib::CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____level = value;
}
constexpr bool& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__leaveOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr bool const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__leaveOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__leaveOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leaveOpen = value;
}
constexpr ::ArrayW<uint8_t>& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__workingBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workingBuffer;
}
constexpr ::ArrayW<uint8_t> const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__workingBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workingBuffer;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__workingBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____workingBuffer = value;
}
constexpr int32_t& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr int32_t const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferSize = value;
}
constexpr ::ArrayW<uint8_t>& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__buf1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buf1;
}
constexpr ::ArrayW<uint8_t> const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__buf1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buf1;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__buf1(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buf1 = value;
}
constexpr ::System::IO::Stream*& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stream = value;
}
constexpr ::Ionic::Zlib::CompressionStrategy& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get_Strategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Strategy;
}
constexpr ::Ionic::Zlib::CompressionStrategy const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get_Strategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Strategy;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set_Strategy(::Ionic::Zlib::CompressionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Strategy = value;
}
constexpr ::Ionic::Crc::CRC32*& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get_crc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr ::Ionic::Crc::CRC32* const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get_crc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set_crc(::Ionic::Crc::CRC32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc = value;
}
constexpr ::StringW& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__GzipFileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GzipFileName;
}
constexpr ::StringW const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__GzipFileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GzipFileName;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__GzipFileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GzipFileName = value;
}
constexpr ::StringW& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__GzipComment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GzipComment;
}
constexpr ::StringW const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__GzipComment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GzipComment;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__GzipComment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GzipComment = value;
}
constexpr ::System::DateTime& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__GzipMtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GzipMtime;
}
constexpr ::System::DateTime const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__GzipMtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GzipMtime;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__GzipMtime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GzipMtime = value;
}
constexpr int32_t& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__gzipHeaderByteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gzipHeaderByteCount;
}
constexpr int32_t const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get__gzipHeaderByteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gzipHeaderByteCount;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set__gzipHeaderByteCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gzipHeaderByteCount = value;
}
constexpr bool& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get_nomoreinput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nomoreinput;
}
constexpr bool const& Ionic::Zlib::ZlibBaseStream::__cordl_internal_get_nomoreinput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nomoreinput;
}
constexpr void Ionic::Zlib::ZlibBaseStream::__cordl_internal_set_nomoreinput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nomoreinput = value;
}
inline int32_t Ionic::Zlib::ZlibBaseStream::get_Crc32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"get_Crc32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibBaseStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  compressionMode, ::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::ZlibStreamFlavor  flavor, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::ZlibStreamFlavor>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, compressionMode, level, flavor, leaveOpen);
}
inline bool Ionic::Zlib::ZlibBaseStream::get__wantCompress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"get__wantCompress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Ionic::Zlib::ZlibCodec* Ionic::Zlib::ZlibBaseStream::get_z()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"get_z", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::ZlibCodec*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::ZlibBaseStream::get_workingBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"get_workingBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibBaseStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Ionic::Zlib::ZlibBaseStream::finish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"finish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibBaseStream::end()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"end", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibBaseStream::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibBaseStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ZlibBaseStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Ionic::Zlib::ZlibBaseStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Ionic::Zlib::ZlibBaseStream::ReadZeroTerminatedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"ReadZeroTerminatedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::ZlibBaseStream::_ReadAndValidateGzipHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"_ReadAndValidateGzipHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::ZlibBaseStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline bool Ionic::Zlib::ZlibBaseStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::ZlibBaseStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::ZlibBaseStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ZlibBaseStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ZlibBaseStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibBaseStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Ionic::Zlib::ZlibBaseStream::CompressString(::StringW  s, ::System::IO::Stream*  compressor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"CompressString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, compressor);
}
inline void Ionic::Zlib::ZlibBaseStream::CompressBuffer(::ArrayW<uint8_t>  b, ::System::IO::Stream*  compressor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"CompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, b, compressor);
}
inline ::StringW Ionic::Zlib::ZlibBaseStream::UncompressString(::ArrayW<uint8_t>  compressed, ::System::IO::Stream*  decompressor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"UncompressString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, compressed, decompressor);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::ZlibBaseStream::UncompressBuffer(::ArrayW<uint8_t>  compressed, ::System::IO::Stream*  decompressor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibBaseStream*>(),
                        {"UncompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, compressed, decompressor);
}
inline ::Ionic::Zlib::ZlibBaseStream* Ionic::Zlib::ZlibBaseStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  compressionMode, ::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::ZlibStreamFlavor  flavor, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibBaseStream*>(stream, compressionMode, level, flavor, leaveOpen));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::ZlibBaseStream::ZlibBaseStream()   {
}
