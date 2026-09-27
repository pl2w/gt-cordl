#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/ZlibCodec.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__DeflateManager_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateManager_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ZlibCodec::*)()>(&::Pathfinding::Ionic::Zlib::ZlibCodec::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6aaa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.InitializeInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)(bool)>(&::Pathfinding::Ionic::Zlib::ZlibCodec::InitializeInflate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6adc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.InitializeInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)(int32_t, bool)>(&::Pathfinding::Ionic::Zlib::ZlibCodec::InitializeInflate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa6af0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.Inflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)(::Pathfinding::Ionic::Zlib::FlushType)>(&::Pathfinding::Ionic::Zlib::ZlibCodec::Inflate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa6adef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"Inflate", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.EndInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)()>(&::Pathfinding::Ionic::Zlib::ZlibCodec::EndInflate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6ae4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"EndInflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.InitializeDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)(::Pathfinding::Ionic::Zlib::CompressionLevel, bool)>(&::Pathfinding::Ionic::Zlib::ZlibCodec::InitializeDeflate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6aaa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec._InternalInitializeDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)(bool)>(&::Pathfinding::Ionic::Zlib::ZlibCodec::_InternalInitializeDeflate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa6af1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"_InternalInitializeDeflate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)(::Pathfinding::Ionic::Zlib::FlushType)>(&::Pathfinding::Ionic::Zlib::ZlibCodec::Deflate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6ab838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"Deflate", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.EndDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)()>(&::Pathfinding::Ionic::Zlib::ZlibCodec::EndDeflate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6ab890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"EndDeflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.ResetDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ZlibCodec::*)()>(&::Pathfinding::Ionic::Zlib::ZlibCodec::ResetDeflate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6ac3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"ResetDeflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.flush_pending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ZlibCodec::*)()>(&::Pathfinding::Ionic::Zlib::ZlibCodec::flush_pending)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa6af298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"flush_pending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibCodec.read_buf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ZlibCodec::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::ZlibCodec::read_buf)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa6af420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"read_buf", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_InputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputBuffer;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_InputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputBuffer;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_InputBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputBuffer = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_NextIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextIn;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_NextIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextIn;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_NextIn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextIn = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_AvailableBytesIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvailableBytesIn;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_AvailableBytesIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvailableBytesIn;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_AvailableBytesIn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvailableBytesIn = value;
}
constexpr int64_t& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_TotalBytesIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesIn;
}
constexpr int64_t const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_TotalBytesIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesIn;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_TotalBytesIn(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalBytesIn = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_OutputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputBuffer;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_OutputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputBuffer;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_OutputBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutputBuffer = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_NextOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextOut;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_NextOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextOut;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_NextOut(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextOut = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_AvailableBytesOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvailableBytesOut;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_AvailableBytesOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvailableBytesOut;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_AvailableBytesOut(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvailableBytesOut = value;
}
constexpr int64_t& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_TotalBytesOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesOut;
}
constexpr int64_t const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_TotalBytesOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesOut;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_TotalBytesOut(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalBytesOut = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
constexpr ::Pathfinding::Ionic::Zlib::DeflateManager*& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_dstate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dstate;
}
constexpr ::Pathfinding::Ionic::Zlib::DeflateManager* const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_dstate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dstate;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_dstate(::Pathfinding::Ionic::Zlib::DeflateManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dstate = value;
}
constexpr ::Pathfinding::Ionic::Zlib::InflateManager*& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_istate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___istate;
}
constexpr ::Pathfinding::Ionic::Zlib::InflateManager* const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_istate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___istate;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_istate(::Pathfinding::Ionic::Zlib::InflateManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___istate = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get__Adler32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Adler32;
}
constexpr uint32_t const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get__Adler32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Adler32;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set__Adler32(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Adler32 = value;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_CompressLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompressLevel;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_CompressLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompressLevel;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_CompressLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompressLevel = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_WindowBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowBits;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_WindowBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowBits;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_WindowBits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindowBits = value;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_Strategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Strategy;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy const& Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_get_Strategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Strategy;
}
constexpr void Pathfinding::Ionic::Zlib::ZlibCodec::__cordl_internal_set_Strategy(::Pathfinding::Ionic::Zlib::CompressionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Strategy = value;
}
inline void Pathfinding::Ionic::Zlib::ZlibCodec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::InitializeInflate(bool  expectRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, expectRfc1950Header);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::InitializeInflate(int32_t  windowBits, bool  expectRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, windowBits, expectRfc1950Header);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::Inflate(::Pathfinding::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"Inflate", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::EndInflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"EndInflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::InitializeDeflate(::Pathfinding::Ionic::Zlib::CompressionLevel  level, bool  wantRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, level, wantRfc1950Header);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::_InternalInitializeDeflate(bool  wantRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"_InternalInitializeDeflate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, wantRfc1950Header);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::Deflate(::Pathfinding::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"Deflate", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::EndDeflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"EndDeflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ZlibCodec::ResetDeflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"ResetDeflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ZlibCodec::flush_pending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"flush_pending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::ZlibCodec::read_buf(::ArrayW<uint8_t>  buf, int32_t  start, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(),
                        {"read_buf", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, start, size);
}
inline ::Pathfinding::Ionic::Zlib::ZlibCodec* Pathfinding::Ionic::Zlib::ZlibCodec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::ZlibCodec*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec::ZlibCodec()   {
}
