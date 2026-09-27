#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibCodec.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_impl.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionMode_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Ionic/Zlib/zzzz__DeflateManager_def.hpp"
#include "Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Ionic/Zlib/zzzz__InflateManager_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.get_Adler32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::get_Adler32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79d94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"get_Adler32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa79ba68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibCodec::*)(::Ionic::Zlib::CompressionMode)>(&::Ionic::Zlib::ZlibCodec::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa79d954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {".ctor", {}, {::i2c::type_of<::Ionic::Zlib::CompressionMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::InitializeInflate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa79da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(bool)>(&::Ionic::Zlib::ZlibCodec::InitializeInflate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa79ba7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(int32_t)>(&::Ionic::Zlib::ZlibCodec::InitializeInflate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa79da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(int32_t, bool)>(&::Ionic::Zlib::ZlibCodec::InitializeInflate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa79da58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.Inflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::ZlibCodec::Inflate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa79be4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"Inflate", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.EndInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::EndInflate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa79c4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"EndInflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.SyncInflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::SyncInflate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa79db3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"SyncInflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::InitializeDeflate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79da38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::Ionic::Zlib::CompressionLevel)>(&::Ionic::Zlib::ZlibCodec::InitializeDeflate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa79dc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::Ionic::Zlib::CompressionLevel, bool)>(&::Ionic::Zlib::ZlibCodec::InitializeDeflate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa79ba8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::Ionic::Zlib::CompressionLevel, int32_t)>(&::Ionic::Zlib::ZlibCodec::InitializeDeflate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa79dc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.InitializeDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::Ionic::Zlib::CompressionLevel, int32_t, bool)>(&::Ionic::Zlib::ZlibCodec::InitializeDeflate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa79dc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec._InternalInitializeDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(bool)>(&::Ionic::Zlib::ZlibCodec::_InternalInitializeDeflate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa79db94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"_InternalInitializeDeflate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::ZlibCodec::Deflate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa79bea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"Deflate", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.EndDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::EndDeflate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa79c484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"EndDeflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.ResetDeflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::ResetDeflate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa79dca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"ResetDeflate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.SetDeflateParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::Ionic::Zlib::CompressionLevel, ::Ionic::Zlib::CompressionStrategy)>(&::Ionic::Zlib::ZlibCodec::SetDeflateParams)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa79dcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"SetDeflateParams", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.SetDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::ZlibCodec::SetDictionary)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa79dd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.flush_pending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibCodec::*)()>(&::Ionic::Zlib::ZlibCodec::flush_pending)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa79ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"flush_pending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibCodec.read_buf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibCodec::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::ZlibCodec::read_buf)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa79df48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"read_buf", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Ionic::Zlib::ZlibCodec::__cordl_internal_get_InputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputBuffer;
}
constexpr ::ArrayW<uint8_t> const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_InputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputBuffer;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_InputBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputBuffer = value;
}
constexpr int32_t& Ionic::Zlib::ZlibCodec::__cordl_internal_get_NextIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextIn;
}
constexpr int32_t const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_NextIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextIn;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_NextIn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextIn = value;
}
constexpr int32_t& Ionic::Zlib::ZlibCodec::__cordl_internal_get_AvailableBytesIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvailableBytesIn;
}
constexpr int32_t const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_AvailableBytesIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvailableBytesIn;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_AvailableBytesIn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvailableBytesIn = value;
}
constexpr int64_t& Ionic::Zlib::ZlibCodec::__cordl_internal_get_TotalBytesIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesIn;
}
constexpr int64_t const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_TotalBytesIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesIn;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_TotalBytesIn(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalBytesIn = value;
}
constexpr ::ArrayW<uint8_t>& Ionic::Zlib::ZlibCodec::__cordl_internal_get_OutputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputBuffer;
}
constexpr ::ArrayW<uint8_t> const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_OutputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputBuffer;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_OutputBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutputBuffer = value;
}
constexpr int32_t& Ionic::Zlib::ZlibCodec::__cordl_internal_get_NextOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextOut;
}
constexpr int32_t const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_NextOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextOut;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_NextOut(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextOut = value;
}
constexpr int32_t& Ionic::Zlib::ZlibCodec::__cordl_internal_get_AvailableBytesOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvailableBytesOut;
}
constexpr int32_t const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_AvailableBytesOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvailableBytesOut;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_AvailableBytesOut(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvailableBytesOut = value;
}
constexpr int64_t& Ionic::Zlib::ZlibCodec::__cordl_internal_get_TotalBytesOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesOut;
}
constexpr int64_t const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_TotalBytesOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesOut;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_TotalBytesOut(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalBytesOut = value;
}
constexpr ::StringW& Ionic::Zlib::ZlibCodec::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
constexpr ::Ionic::Zlib::DeflateManager*& Ionic::Zlib::ZlibCodec::__cordl_internal_get_dstate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dstate;
}
constexpr ::Ionic::Zlib::DeflateManager* const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_dstate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dstate;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_dstate(::Ionic::Zlib::DeflateManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dstate = value;
}
constexpr ::Ionic::Zlib::InflateManager*& Ionic::Zlib::ZlibCodec::__cordl_internal_get_istate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___istate;
}
constexpr ::Ionic::Zlib::InflateManager* const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_istate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___istate;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_istate(::Ionic::Zlib::InflateManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___istate = value;
}
constexpr uint32_t& Ionic::Zlib::ZlibCodec::__cordl_internal_get__Adler32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Adler32;
}
constexpr uint32_t const& Ionic::Zlib::ZlibCodec::__cordl_internal_get__Adler32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Adler32;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set__Adler32(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Adler32 = value;
}
constexpr ::Ionic::Zlib::CompressionLevel& Ionic::Zlib::ZlibCodec::__cordl_internal_get_CompressLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompressLevel;
}
constexpr ::Ionic::Zlib::CompressionLevel const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_CompressLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompressLevel;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_CompressLevel(::Ionic::Zlib::CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompressLevel = value;
}
constexpr int32_t& Ionic::Zlib::ZlibCodec::__cordl_internal_get_WindowBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowBits;
}
constexpr int32_t const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_WindowBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowBits;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_WindowBits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindowBits = value;
}
constexpr ::Ionic::Zlib::CompressionStrategy& Ionic::Zlib::ZlibCodec::__cordl_internal_get_Strategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Strategy;
}
constexpr ::Ionic::Zlib::CompressionStrategy const& Ionic::Zlib::ZlibCodec::__cordl_internal_get_Strategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Strategy;
}
constexpr void Ionic::Zlib::ZlibCodec::__cordl_internal_set_Strategy(::Ionic::Zlib::CompressionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Strategy = value;
}
inline int32_t Ionic::Zlib::ZlibCodec::get_Adler32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"get_Adler32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibCodec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibCodec::_ctor(::Ionic::Zlib::CompressionMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {".ctor", {}, {::i2c::type_of<::Ionic::Zlib::CompressionMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeInflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeInflate(bool  expectRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, expectRfc1950Header);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeInflate(int32_t  windowBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, windowBits);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeInflate(int32_t  windowBits, bool  expectRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeInflate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, windowBits, expectRfc1950Header);
}
inline int32_t Ionic::Zlib::ZlibCodec::Inflate(::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"Inflate", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline int32_t Ionic::Zlib::ZlibCodec::EndInflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"EndInflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::ZlibCodec::SyncInflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"SyncInflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeDeflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeDeflate(::Ionic::Zlib::CompressionLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, level);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeDeflate(::Ionic::Zlib::CompressionLevel  level, bool  wantRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, level, wantRfc1950Header);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeDeflate(::Ionic::Zlib::CompressionLevel  level, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, level, bits);
}
inline int32_t Ionic::Zlib::ZlibCodec::InitializeDeflate(::Ionic::Zlib::CompressionLevel  level, int32_t  bits, bool  wantRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"InitializeDeflate", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, level, bits, wantRfc1950Header);
}
inline int32_t Ionic::Zlib::ZlibCodec::_InternalInitializeDeflate(bool  wantRfc1950Header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"_InternalInitializeDeflate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, wantRfc1950Header);
}
inline int32_t Ionic::Zlib::ZlibCodec::Deflate(::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"Deflate", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline int32_t Ionic::Zlib::ZlibCodec::EndDeflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"EndDeflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibCodec::ResetDeflate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"ResetDeflate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::ZlibCodec::SetDeflateParams(::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::CompressionStrategy  strategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"SetDeflateParams", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, level, strategy);
}
inline int32_t Ionic::Zlib::ZlibCodec::SetDictionary(::ArrayW<uint8_t>  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dictionary);
}
inline void Ionic::Zlib::ZlibCodec::flush_pending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"flush_pending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::ZlibCodec::read_buf(::ArrayW<uint8_t>  buf, int32_t  start, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibCodec*>(),
                        {"read_buf", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, start, size);
}
inline ::Ionic::Zlib::ZlibCodec* Ionic::Zlib::ZlibCodec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibCodec*>());
}
inline ::Ionic::Zlib::ZlibCodec* Ionic::Zlib::ZlibCodec::New_ctor(::Ionic::Zlib::CompressionMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibCodec*>(mode));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::ZlibCodec::ZlibCodec()   {
}
