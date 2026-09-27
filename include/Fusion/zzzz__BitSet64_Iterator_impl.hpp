#pragma once
// IWYU pragma private; include "Fusion/BitSet64_Iterator.hpp"
#include "Fusion/zzzz__BitSet64_impl.hpp"
#include "Fusion/zzzz__BitSet64_Iterator_def.hpp"
#include "Fusion/zzzz__BitSet64_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitSet64_Iterator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitSet64_Iterator::*)(::Fusion::BitSet64)>(&::GlobalNamespace::BitSet64_Iterator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f977e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Iterator>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitSet64_Iterator.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitSet64_Iterator::*)(::by_ref<int32_t>)>(&::GlobalNamespace::BitSet64_Iterator::Next)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f97ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Iterator>(),
                        {"Next", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitSet64_Iterator::_ctor(::Fusion::BitSet64  set)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Iterator>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, set);
}
inline bool GlobalNamespace::BitSet64_Iterator::Next(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Iterator>(),
                        {"Next", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_set", ty: "::Fusion::BitSet64", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BitSet64_Iterator::BitSet64_Iterator(int32_t  _bit, ::Fusion::BitSet64  _set) noexcept  {
this->_bit = _bit;
this->_set = _set;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitSet64_Iterator::BitSet64_Iterator()   {
}
