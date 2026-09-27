#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/Tree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__Tree_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__DeflateManager_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__StaticTree_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::Tree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::Tree::*)()>(&::Pathfinding::Ionic::Zlib::Tree::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ac560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::Tree.DistanceCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Pathfinding::Ionic::Zlib::Tree::DistanceCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa6ac84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"DistanceCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::Tree.gen_bitlen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::Tree::*)(::Pathfinding::Ionic::Zlib::DeflateManager*)>(&::Pathfinding::Ionic::Zlib::Tree::gen_bitlen)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa6ac910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"gen_bitlen", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::DeflateManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::Tree.build_tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::Tree::*)(::Pathfinding::Ionic::Zlib::DeflateManager*)>(&::Pathfinding::Ionic::Zlib::Tree::build_tree)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0xa6acc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"build_tree", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::DeflateManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::Tree.gen_codes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int16_t>, int32_t, ::ArrayW<int16_t>)>(&::Pathfinding::Ionic::Zlib::Tree::gen_codes)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa6ad108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"gen_codes", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::Tree.bi_reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::Tree::bi_reverse)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6ad2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"bi_reverse", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& Pathfinding::Ionic::Zlib::Tree::__cordl_internal_get_dyn_tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dyn_tree;
}
constexpr ::ArrayW<int16_t> const& Pathfinding::Ionic::Zlib::Tree::__cordl_internal_get_dyn_tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dyn_tree;
}
constexpr void Pathfinding::Ionic::Zlib::Tree::__cordl_internal_set_dyn_tree(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dyn_tree = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::Tree::__cordl_internal_get_max_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max_code;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::Tree::__cordl_internal_get_max_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max_code;
}
constexpr void Pathfinding::Ionic::Zlib::Tree::__cordl_internal_set_max_code(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max_code = value;
}
constexpr ::Pathfinding::Ionic::Zlib::StaticTree*& Pathfinding::Ionic::Zlib::Tree::__cordl_internal_get_staticTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticTree;
}
constexpr ::Pathfinding::Ionic::Zlib::StaticTree* const& Pathfinding::Ionic::Zlib::Tree::__cordl_internal_get_staticTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticTree;
}
constexpr void Pathfinding::Ionic::Zlib::Tree::__cordl_internal_set_staticTree(::Pathfinding::Ionic::Zlib::StaticTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticTree = value;
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF_HEAP_SIZE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HEAP_SIZE", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<int32_t>(value));
}
inline int32_t Pathfinding::Ionic::Zlib::Tree::getStaticF_HEAP_SIZE()  {
return ::cordl_internals::getStaticField<int32_t, "HEAP_SIZE", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF_ExtraLengthBits(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "ExtraLengthBits", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Ionic::Zlib::Tree::getStaticF_ExtraLengthBits()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "ExtraLengthBits", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF_ExtraDistanceBits(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "ExtraDistanceBits", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Ionic::Zlib::Tree::getStaticF_ExtraDistanceBits()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "ExtraDistanceBits", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF_extra_blbits(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "extra_blbits", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Ionic::Zlib::Tree::getStaticF_extra_blbits()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "extra_blbits", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF_bl_order(::ArrayW<int8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "bl_order", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> Pathfinding::Ionic::Zlib::Tree::getStaticF_bl_order()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "bl_order", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF__dist_code(::ArrayW<int8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "_dist_code", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> Pathfinding::Ionic::Zlib::Tree::getStaticF__dist_code()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "_dist_code", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF_LengthCode(::ArrayW<int8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "LengthCode", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> Pathfinding::Ionic::Zlib::Tree::getStaticF_LengthCode()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "LengthCode", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF_LengthBase(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "LengthBase", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Ionic::Zlib::Tree::getStaticF_LengthBase()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "LengthBase", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::setStaticF_DistanceBase(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DistanceBase", ::Pathfinding::Ionic::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Ionic::Zlib::Tree::getStaticF_DistanceBase()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DistanceBase", ::Pathfinding::Ionic::Zlib::Tree*>();
}
inline void Pathfinding::Ionic::Zlib::Tree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::Tree::DistanceCode(int32_t  dist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"DistanceCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dist);
}
inline void Pathfinding::Ionic::Zlib::Tree::gen_bitlen(::Pathfinding::Ionic::Zlib::DeflateManager*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"gen_bitlen", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::DeflateManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Pathfinding::Ionic::Zlib::Tree::build_tree(::Pathfinding::Ionic::Zlib::DeflateManager*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"build_tree", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::DeflateManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Pathfinding::Ionic::Zlib::Tree::gen_codes(::ArrayW<int16_t>  tree, int32_t  max_code, ::ArrayW<int16_t>  bl_count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"gen_codes", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tree, max_code, bl_count);
}
inline int32_t Pathfinding::Ionic::Zlib::Tree::bi_reverse(int32_t  code, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::Tree*>(),
                        {"bi_reverse", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, code, len);
}
inline ::Pathfinding::Ionic::Zlib::Tree* Pathfinding::Ionic::Zlib::Tree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::Tree*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::Tree::Tree()   {
}
