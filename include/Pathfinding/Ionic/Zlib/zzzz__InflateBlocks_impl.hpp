#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InflateBlocks.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateBlocks_InflateBlockMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateBlocks_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InfTree_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateBlocks_InflateBlockMode_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateCodes_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateBlocks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::InflateBlocks::*)(::Pathfinding::Ionic::Zlib::ZlibCodec*, ::System::Object*, int32_t)>(&::Pathfinding::Ionic::Zlib::InflateBlocks::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa6a75e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateBlocks.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::Ionic::Zlib::InflateBlocks::*)()>(&::Pathfinding::Ionic::Zlib::InflateBlocks::Reset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa6a7780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateBlocks.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::InflateBlocks::*)(int32_t)>(&::Pathfinding::Ionic::Zlib::InflateBlocks::Process)> {
  constexpr static std::size_t size = 0xf80;
  constexpr static std::size_t addrs = 0xa6a78bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {"Process", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateBlocks.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::InflateBlocks::*)()>(&::Pathfinding::Ionic::Zlib::InflateBlocks::Free)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa6a94d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {"Free", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateBlocks.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::InflateBlocks::*)(int32_t)>(&::Pathfinding::Ionic::Zlib::InflateBlocks::Flush)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa6a883c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {"Flush", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::InflateBlocks_InflateBlockMode& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::InflateBlocks_InflateBlockMode const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_mode(::GlobalNamespace::InflateBlocks_InflateBlockMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_left()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___left;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_left() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___left;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_left(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___left = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_table(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___table = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_blens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blens;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_blens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blens;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_blens(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blens = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_bb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bb;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_bb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bb;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_bb(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bb = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_tb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tb;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_tb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tb;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_tb(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tb = value;
}
constexpr ::Pathfinding::Ionic::Zlib::InflateCodes*& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_codes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codes;
}
constexpr ::Pathfinding::Ionic::Zlib::InflateCodes* const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_codes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codes;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_codes(::Pathfinding::Ionic::Zlib::InflateCodes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___codes = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_last()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_last() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_last(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___last = value;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec*& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get__codec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec* const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get__codec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set__codec(::Pathfinding::Ionic::Zlib::ZlibCodec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codec = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_bitk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitk;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_bitk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitk;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_bitk(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitk = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_bitb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitb;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_bitb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitb;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_bitb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitb = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_hufts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hufts;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_hufts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hufts;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_hufts(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hufts = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_window()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___window;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_window() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___window;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_window(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___window = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_end(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_readAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readAt;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_readAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readAt;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_readAt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readAt = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_writeAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeAt;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_writeAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeAt;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_writeAt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writeAt = value;
}
constexpr ::System::Object*& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_checkfn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkfn;
}
constexpr ::System::Object* const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_checkfn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkfn;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_checkfn(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkfn = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_check()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___check;
}
constexpr uint32_t const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_check() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___check;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_check(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___check = value;
}
constexpr ::Pathfinding::Ionic::Zlib::InfTree*& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_inftree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inftree;
}
constexpr ::Pathfinding::Ionic::Zlib::InfTree* const& Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_get_inftree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inftree;
}
constexpr void Pathfinding::Ionic::Zlib::InflateBlocks::__cordl_internal_set_inftree(::Pathfinding::Ionic::Zlib::InfTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inftree = value;
}
inline void Pathfinding::Ionic::Zlib::InflateBlocks::setStaticF_border(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "border", ::Pathfinding::Ionic::Zlib::InflateBlocks*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Ionic::Zlib::InflateBlocks::getStaticF_border()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "border", ::Pathfinding::Ionic::Zlib::InflateBlocks*>();
}
inline void Pathfinding::Ionic::Zlib::InflateBlocks::_ctor(::Pathfinding::Ionic::Zlib::ZlibCodec*  codec, ::System::Object*  checkfn, int32_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codec, checkfn, w);
}
inline uint32_t Pathfinding::Ionic::Zlib::InflateBlocks::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::InflateBlocks::Process(int32_t  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {"Process", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void Pathfinding::Ionic::Zlib::InflateBlocks::Free()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {"Free", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::InflateBlocks::Flush(int32_t  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(),
                        {"Flush", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline ::Pathfinding::Ionic::Zlib::InflateBlocks* Pathfinding::Ionic::Zlib::InflateBlocks::New_ctor(::Pathfinding::Ionic::Zlib::ZlibCodec*  codec, ::System::Object*  checkfn, int32_t  w)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::InflateBlocks*>(codec, checkfn, w));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlocks()   {
}
