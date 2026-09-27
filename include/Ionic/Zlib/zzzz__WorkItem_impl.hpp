#pragma once
// IWYU pragma private; include "Ionic/Zlib/WorkItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Zlib/zzzz__WorkItem_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::WorkItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::WorkItem::*)(int32_t, ::Ionic::Zlib::CompressionLevel, ::Ionic::Zlib::CompressionStrategy, int32_t)>(&::Ionic::Zlib::WorkItem::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa799378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::WorkItem*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Ionic::Zlib::WorkItem::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& Ionic::Zlib::WorkItem::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void Ionic::Zlib::WorkItem::__cordl_internal_set_buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr ::ArrayW<uint8_t>& Ionic::Zlib::WorkItem::__cordl_internal_get_compressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressed;
}
constexpr ::ArrayW<uint8_t> const& Ionic::Zlib::WorkItem::__cordl_internal_get_compressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressed;
}
constexpr void Ionic::Zlib::WorkItem::__cordl_internal_set_compressed(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressed = value;
}
constexpr int32_t& Ionic::Zlib::WorkItem::__cordl_internal_get_crc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr int32_t const& Ionic::Zlib::WorkItem::__cordl_internal_get_crc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr void Ionic::Zlib::WorkItem::__cordl_internal_set_crc(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc = value;
}
constexpr int32_t& Ionic::Zlib::WorkItem::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Ionic::Zlib::WorkItem::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Ionic::Zlib::WorkItem::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr int32_t& Ionic::Zlib::WorkItem::__cordl_internal_get_ordinal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ordinal;
}
constexpr int32_t const& Ionic::Zlib::WorkItem::__cordl_internal_get_ordinal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ordinal;
}
constexpr void Ionic::Zlib::WorkItem::__cordl_internal_set_ordinal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ordinal = value;
}
constexpr int32_t& Ionic::Zlib::WorkItem::__cordl_internal_get_inputBytesAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBytesAvailable;
}
constexpr int32_t const& Ionic::Zlib::WorkItem::__cordl_internal_get_inputBytesAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBytesAvailable;
}
constexpr void Ionic::Zlib::WorkItem::__cordl_internal_set_inputBytesAvailable(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputBytesAvailable = value;
}
constexpr int32_t& Ionic::Zlib::WorkItem::__cordl_internal_get_compressedBytesAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedBytesAvailable;
}
constexpr int32_t const& Ionic::Zlib::WorkItem::__cordl_internal_get_compressedBytesAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedBytesAvailable;
}
constexpr void Ionic::Zlib::WorkItem::__cordl_internal_set_compressedBytesAvailable(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressedBytesAvailable = value;
}
constexpr ::Ionic::Zlib::ZlibCodec*& Ionic::Zlib::WorkItem::__cordl_internal_get_compressor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressor;
}
constexpr ::Ionic::Zlib::ZlibCodec* const& Ionic::Zlib::WorkItem::__cordl_internal_get_compressor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressor;
}
constexpr void Ionic::Zlib::WorkItem::__cordl_internal_set_compressor(::Ionic::Zlib::ZlibCodec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressor = value;
}
inline void Ionic::Zlib::WorkItem::_ctor(int32_t  size, ::Ionic::Zlib::CompressionLevel  compressLevel, ::Ionic::Zlib::CompressionStrategy  strategy, int32_t  ix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::WorkItem*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, compressLevel, strategy, ix);
}
inline ::Ionic::Zlib::WorkItem* Ionic::Zlib::WorkItem::New_ctor(int32_t  size, ::Ionic::Zlib::CompressionLevel  compressLevel, ::Ionic::Zlib::CompressionStrategy  strategy, int32_t  ix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::WorkItem*>(size, compressLevel, strategy, ix));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::WorkItem::WorkItem()   {
}
