#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZTree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Zlib/zzzz__ZTree_def.hpp"
#include "Ionic/Zlib/zzzz__DeflateManager_def.hpp"
#include "Ionic/Zlib/zzzz__StaticTree_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::ZTree.DistanceCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Ionic::Zlib::ZTree::DistanceCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa79edf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"DistanceCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZTree.gen_bitlen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZTree::*)(::Ionic::Zlib::DeflateManager*)>(&::Ionic::Zlib::ZTree::gen_bitlen)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa79eeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"gen_bitlen", {}, {::i2c::type_of<::Ionic::Zlib::DeflateManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZTree.build_tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZTree::*)(::Ionic::Zlib::DeflateManager*)>(&::Ionic::Zlib::ZTree::build_tree)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0xa79f220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"build_tree", {}, {::i2c::type_of<::Ionic::Zlib::DeflateManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZTree.gen_codes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int16_t>, int32_t, ::ArrayW<int16_t>)>(&::Ionic::Zlib::ZTree::gen_codes)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa79f6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"gen_codes", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZTree.bi_reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Ionic::Zlib::ZTree::bi_reverse)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa79f884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"bi_reverse", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZTree::*)()>(&::Ionic::Zlib::ZTree::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79f8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& Ionic::Zlib::ZTree::__cordl_internal_get_dyn_tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dyn_tree;
}
constexpr ::ArrayW<int16_t> const& Ionic::Zlib::ZTree::__cordl_internal_get_dyn_tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dyn_tree;
}
constexpr void Ionic::Zlib::ZTree::__cordl_internal_set_dyn_tree(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dyn_tree = value;
}
constexpr int32_t& Ionic::Zlib::ZTree::__cordl_internal_get_max_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max_code;
}
constexpr int32_t const& Ionic::Zlib::ZTree::__cordl_internal_get_max_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max_code;
}
constexpr void Ionic::Zlib::ZTree::__cordl_internal_set_max_code(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max_code = value;
}
constexpr ::Ionic::Zlib::StaticTree*& Ionic::Zlib::ZTree::__cordl_internal_get_staticTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticTree;
}
constexpr ::Ionic::Zlib::StaticTree* const& Ionic::Zlib::ZTree::__cordl_internal_get_staticTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticTree;
}
constexpr void Ionic::Zlib::ZTree::__cordl_internal_set_staticTree(::Ionic::Zlib::StaticTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticTree = value;
}
inline void Ionic::Zlib::ZTree::setStaticF_HEAP_SIZE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HEAP_SIZE", ::Ionic::Zlib::ZTree*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::ZTree::getStaticF_HEAP_SIZE()  {
return ::cordl_internals::getStaticField<int32_t, "HEAP_SIZE", ::Ionic::Zlib::ZTree*>();
}
inline void Ionic::Zlib::ZTree::setStaticF_ExtraLengthBits(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "ExtraLengthBits", ::Ionic::Zlib::ZTree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Ionic::Zlib::ZTree::getStaticF_ExtraLengthBits()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "ExtraLengthBits", ::Ionic::Zlib::ZTree*>();
}
inline void Ionic::Zlib::ZTree::setStaticF_ExtraDistanceBits(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "ExtraDistanceBits", ::Ionic::Zlib::ZTree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Ionic::Zlib::ZTree::getStaticF_ExtraDistanceBits()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "ExtraDistanceBits", ::Ionic::Zlib::ZTree*>();
}
inline void Ionic::Zlib::ZTree::setStaticF_extra_blbits(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "extra_blbits", ::Ionic::Zlib::ZTree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Ionic::Zlib::ZTree::getStaticF_extra_blbits()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "extra_blbits", ::Ionic::Zlib::ZTree*>();
}
inline void Ionic::Zlib::ZTree::setStaticF_bl_order(::ArrayW<int8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "bl_order", ::Ionic::Zlib::ZTree*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> Ionic::Zlib::ZTree::getStaticF_bl_order()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "bl_order", ::Ionic::Zlib::ZTree*>();
}
inline void Ionic::Zlib::ZTree::setStaticF__dist_code(::ArrayW<int8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "_dist_code", ::Ionic::Zlib::ZTree*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> Ionic::Zlib::ZTree::getStaticF__dist_code()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "_dist_code", ::Ionic::Zlib::ZTree*>();
}
inline void Ionic::Zlib::ZTree::setStaticF_LengthCode(::ArrayW<int8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "LengthCode", ::Ionic::Zlib::ZTree*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> Ionic::Zlib::ZTree::getStaticF_LengthCode()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "LengthCode", ::Ionic::Zlib::ZTree*>();
}
inline void Ionic::Zlib::ZTree::setStaticF_LengthBase(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "LengthBase", ::Ionic::Zlib::ZTree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Ionic::Zlib::ZTree::getStaticF_LengthBase()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "LengthBase", ::Ionic::Zlib::ZTree*>();
}
inline void Ionic::Zlib::ZTree::setStaticF_DistanceBase(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DistanceBase", ::Ionic::Zlib::ZTree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Ionic::Zlib::ZTree::getStaticF_DistanceBase()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DistanceBase", ::Ionic::Zlib::ZTree*>();
}
inline int32_t Ionic::Zlib::ZTree::DistanceCode(int32_t  dist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"DistanceCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dist);
}
inline void Ionic::Zlib::ZTree::gen_bitlen(::Ionic::Zlib::DeflateManager*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"gen_bitlen", {}, {::i2c::type_of<::Ionic::Zlib::DeflateManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Ionic::Zlib::ZTree::build_tree(::Ionic::Zlib::DeflateManager*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"build_tree", {}, {::i2c::type_of<::Ionic::Zlib::DeflateManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Ionic::Zlib::ZTree::gen_codes(::ArrayW<int16_t>  tree, int32_t  max_code, ::ArrayW<int16_t>  bl_count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"gen_codes", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tree, max_code, bl_count);
}
inline int32_t Ionic::Zlib::ZTree::bi_reverse(int32_t  code, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {"bi_reverse", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, code, len);
}
inline void Ionic::Zlib::ZTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ionic::Zlib::ZTree* Ionic::Zlib::ZTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZTree*>());
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::ZTree::ZTree()   {
}
