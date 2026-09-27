#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/WorkItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__WorkItem_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::WorkItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::WorkItem::*)(int32_t, ::Pathfinding::Ionic::Zlib::CompressionLevel, ::Pathfinding::Ionic::Zlib::CompressionStrategy, int32_t)>(&::Pathfinding::Ionic::Zlib::WorkItem::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa6aa904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::WorkItem*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionStrategy>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_set_buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_compressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressed;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_compressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressed;
}
constexpr void Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_set_compressed(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressed = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_crc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_crc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr void Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_set_crc(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_ordinal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ordinal;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_ordinal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ordinal;
}
constexpr void Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_set_ordinal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ordinal = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_inputBytesAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBytesAvailable;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_inputBytesAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBytesAvailable;
}
constexpr void Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_set_inputBytesAvailable(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputBytesAvailable = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_compressedBytesAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedBytesAvailable;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_compressedBytesAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedBytesAvailable;
}
constexpr void Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_set_compressedBytesAvailable(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressedBytesAvailable = value;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec*& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_compressor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressor;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec* const& Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_get_compressor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressor;
}
constexpr void Pathfinding::Ionic::Zlib::WorkItem::__cordl_internal_set_compressor(::Pathfinding::Ionic::Zlib::ZlibCodec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressor = value;
}
inline void Pathfinding::Ionic::Zlib::WorkItem::_ctor(int32_t  size, ::Pathfinding::Ionic::Zlib::CompressionLevel  compressLevel, ::Pathfinding::Ionic::Zlib::CompressionStrategy  strategy, int32_t  ix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::WorkItem*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionStrategy>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, compressLevel, strategy, ix);
}
inline ::Pathfinding::Ionic::Zlib::WorkItem* Pathfinding::Ionic::Zlib::WorkItem::New_ctor(int32_t  size, ::Pathfinding::Ionic::Zlib::CompressionLevel  compressLevel, ::Pathfinding::Ionic::Zlib::CompressionStrategy  strategy, int32_t  ix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::WorkItem*>(size, compressLevel, strategy, ix));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::WorkItem::WorkItem()   {
}
