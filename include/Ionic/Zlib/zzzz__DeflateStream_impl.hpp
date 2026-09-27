#pragma once
// IWYU pragma private; include "Ionic/Zlib/DeflateStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Ionic/Zlib/zzzz__DeflateStream_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionMode_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibBaseStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode)>(&::Ionic::Zlib::DeflateStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa792858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, ::Ionic::Zlib::CompressionLevel)>(&::Ionic::Zlib::DeflateStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa792938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, bool)>(&::Ionic::Zlib::DeflateStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa792940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, ::Ionic::Zlib::CompressionLevel, bool)>(&::Ionic::Zlib::DeflateStream::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa792864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_FlushMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::FlushType (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_FlushMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa79294c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.set_FlushMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::DeflateStream::set_FlushMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa792964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_BufferSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa7929d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.set_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(int32_t)>(&::Ionic::Zlib::DeflateStream::set_BufferSize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa7929e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::CompressionStrategy (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_Strategy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa792b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"get_Strategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.set_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(::Ionic::Zlib::CompressionStrategy)>(&::Ionic::Zlib::DeflateStream::set_Strategy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa792b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_TotalIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_TotalIn)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa792bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_TotalOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_TotalOut)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa792bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(bool)>(&::Ionic::Zlib::DeflateStream::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa792bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_CanRead)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa792cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa792d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa792d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::Flush)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa792db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa792e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::DeflateStream::*)()>(&::Ionic::Zlib::DeflateStream::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa792e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(int64_t)>(&::Ionic::Zlib::DeflateStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa792eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::DeflateStream::Read)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa792ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::DeflateStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Ionic::Zlib::DeflateStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa792f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(int64_t)>(&::Ionic::Zlib::DeflateStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa792f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::DeflateStream::Write)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa792fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.CompressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Ionic::Zlib::DeflateStream::CompressString)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa79303c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"CompressString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.CompressBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::DeflateStream::CompressBuffer)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa7931f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"CompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.UncompressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::DeflateStream::UncompressString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7933a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"UncompressString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateStream.UncompressBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::DeflateStream::UncompressBuffer)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa793538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"UncompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Ionic::Zlib::ZlibBaseStream*& Ionic::Zlib::DeflateStream::__cordl_internal_get__baseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr ::Ionic::Zlib::ZlibBaseStream* const& Ionic::Zlib::DeflateStream::__cordl_internal_get__baseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr void Ionic::Zlib::DeflateStream::__cordl_internal_set__baseStream(::Ionic::Zlib::ZlibBaseStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseStream = value;
}
constexpr ::System::IO::Stream*& Ionic::Zlib::DeflateStream::__cordl_internal_get__innerStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr ::System::IO::Stream* const& Ionic::Zlib::DeflateStream::__cordl_internal_get__innerStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr void Ionic::Zlib::DeflateStream::__cordl_internal_set__innerStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____innerStream = value;
}
constexpr bool& Ionic::Zlib::DeflateStream::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Ionic::Zlib::DeflateStream::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Ionic::Zlib::DeflateStream::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Ionic::Zlib::DeflateStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode);
}
inline void Ionic::Zlib::DeflateStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, level);
}
inline void Ionic::Zlib::DeflateStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, leaveOpen);
}
inline void Ionic::Zlib::DeflateStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, level, leaveOpen);
}
inline ::Ionic::Zlib::FlushType Ionic::Zlib::DeflateStream::get_FlushMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::FlushType>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateStream::set_FlushMode(::Ionic::Zlib::FlushType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::DeflateStream::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateStream::set_BufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Ionic::Zlib::CompressionStrategy Ionic::Zlib::DeflateStream::get_Strategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"get_Strategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::CompressionStrategy>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateStream::set_Strategy(::Ionic::Zlib::CompressionStrategy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Ionic::Zlib::DeflateStream::get_TotalIn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::DeflateStream::get_TotalOut()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Ionic::Zlib::DeflateStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::DeflateStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::DeflateStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::DeflateStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::DeflateStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::DeflateStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Ionic::Zlib::DeflateStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Ionic::Zlib::DeflateStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Ionic::Zlib::DeflateStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::DeflateStream::CompressString(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"CompressString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::DeflateStream::CompressBuffer(::ArrayW<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"CompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, b);
}
inline ::StringW Ionic::Zlib::DeflateStream::UncompressString(::ArrayW<uint8_t>  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"UncompressString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, compressed);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::DeflateStream::UncompressBuffer(::ArrayW<uint8_t>  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateStream*>(),
                        {"UncompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, compressed);
}
inline ::Ionic::Zlib::DeflateStream* Ionic::Zlib::DeflateStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::DeflateStream*>(stream, mode));
}
inline ::Ionic::Zlib::DeflateStream* Ionic::Zlib::DeflateStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::DeflateStream*>(stream, mode, level));
}
inline ::Ionic::Zlib::DeflateStream* Ionic::Zlib::DeflateStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::DeflateStream*>(stream, mode, leaveOpen));
}
inline ::Ionic::Zlib::DeflateStream* Ionic::Zlib::DeflateStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::DeflateStream*>(stream, mode, level, leaveOpen));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::DeflateStream::DeflateStream()   {
}
