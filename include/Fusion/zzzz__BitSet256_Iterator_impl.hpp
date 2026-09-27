#pragma once
// IWYU pragma private; include "Fusion/BitSet256_Iterator.hpp"
#include "Fusion/zzzz__BitSet256_impl.hpp"
#include "Fusion/zzzz__BitSet256_Iterator_def.hpp"
#include "Fusion/zzzz__BitSet256_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitSet256_Iterator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitSet256_Iterator::*)(::Fusion::BitSet256)>(&::GlobalNamespace::BitSet256_Iterator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f993c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet256_Iterator>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitSet256_Iterator.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitSet256_Iterator::*)(::by_ref<int32_t>)>(&::GlobalNamespace::BitSet256_Iterator::Next)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f99b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet256_Iterator>(),
                        {"Next", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitSet256_Iterator::_ctor(::Fusion::BitSet256  set)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet256_Iterator>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, set);
}
inline bool GlobalNamespace::BitSet256_Iterator::Next(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet256_Iterator>(),
                        {"Next", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_set", ty: "::Fusion::BitSet256", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BitSet256_Iterator::BitSet256_Iterator(int32_t  _bit, ::Fusion::BitSet256  _set) noexcept  {
this->_bit = _bit;
this->_set = _set;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitSet256_Iterator::BitSet256_Iterator()   {
}
