#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InflateCodes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateCodes_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateBlocks_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateCodes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::InflateCodes::*)()>(&::Pathfinding::Ionic::Zlib::InflateCodes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a7778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateCodes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateCodes.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::InflateCodes::*)(int32_t, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<int32_t>, int32_t)>(&::Pathfinding::Ionic::Zlib::InflateCodes::Init)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6a89dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateCodes*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateCodes.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::InflateCodes::*)(::Pathfinding::Ionic::Zlib::InflateBlocks*, int32_t)>(&::Pathfinding::Ionic::Zlib::InflateCodes::Process)> {
  constexpr static std::size_t size = 0xa8c;
  constexpr static std::size_t addrs = 0xa6a8a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateCodes*>(),
                        {"Process", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateCodes.InflateFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::InflateCodes::*)(int32_t, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::Pathfinding::Ionic::Zlib::InflateBlocks*, ::Pathfinding::Ionic::Zlib::ZlibCodec*)>(&::Pathfinding::Ionic::Zlib::InflateCodes::InflateFast)> {
  constexpr static std::size_t size = 0x954;
  constexpr static std::size_t addrs = 0xa6a95a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateCodes*>(),
                        {"InflateFast", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_mode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___len = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_tree(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tree = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_tree_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree_index;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_tree_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree_index;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_tree_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tree_index = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_need()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___need;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_need() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___need;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_need(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___need = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_lit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lit;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_lit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lit;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_lit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lit = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_bitsToGet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitsToGet;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_bitsToGet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitsToGet;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_bitsToGet(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitsToGet = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_dist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dist;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_dist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dist;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_dist(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dist = value;
}
constexpr uint8_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_lbits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lbits;
}
constexpr uint8_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_lbits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lbits;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_lbits(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lbits = value;
}
constexpr uint8_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_dbits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbits;
}
constexpr uint8_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_dbits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbits;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_dbits(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dbits = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_ltree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ltree;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_ltree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ltree;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_ltree(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ltree = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_ltree_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ltree_index;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_ltree_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ltree_index;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_ltree_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ltree_index = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_dtree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtree;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_dtree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtree;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_dtree(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dtree = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_dtree_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtree_index;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_get_dtree_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtree_index;
}
constexpr void Pathfinding::Ionic::Zlib::InflateCodes::__cordl_internal_set_dtree_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dtree_index = value;
}
inline void Pathfinding::Ionic::Zlib::InflateCodes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateCodes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::InflateCodes::Init(int32_t  bl, int32_t  bd, ::ArrayW<int32_t>  tl, int32_t  tl_index, ::ArrayW<int32_t>  td, int32_t  td_index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateCodes*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bl, bd, tl, tl_index, td, td_index);
}
inline int32_t Pathfinding::Ionic::Zlib::InflateCodes::Process(::Pathfinding::Ionic::Zlib::InflateBlocks*  blocks, int32_t  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateCodes*>(),
                        {"Process", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, blocks, r);
}
inline int32_t Pathfinding::Ionic::Zlib::InflateCodes::InflateFast(int32_t  bl, int32_t  bd, ::ArrayW<int32_t>  tl, int32_t  tl_index, ::ArrayW<int32_t>  td, int32_t  td_index, ::Pathfinding::Ionic::Zlib::InflateBlocks*  s, ::Pathfinding::Ionic::Zlib::ZlibCodec*  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateCodes*>(),
                        {"InflateFast", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::InflateBlocks*>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bl, bd, tl, tl_index, td, td_index, s, z);
}
inline ::Pathfinding::Ionic::Zlib::InflateCodes* Pathfinding::Ionic::Zlib::InflateCodes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::InflateCodes*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::InflateCodes::InflateCodes()   {
}
