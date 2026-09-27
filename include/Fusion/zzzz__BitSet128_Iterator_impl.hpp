#pragma once
// IWYU pragma private; include "Fusion/BitSet128_Iterator.hpp"
#include "Fusion/zzzz__BitSet128_impl.hpp"
#include "Fusion/zzzz__BitSet128_Iterator_def.hpp"
#include "Fusion/zzzz__BitSet128_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitSet128_Iterator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitSet128_Iterator::*)(::Fusion::BitSet128)>(&::GlobalNamespace::BitSet128_Iterator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet128_Iterator>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitSet128_Iterator.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitSet128_Iterator::*)(::by_ref<int32_t>)>(&::GlobalNamespace::BitSet128_Iterator::Next)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f986dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet128_Iterator>(),
                        {"Next", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitSet128_Iterator::_ctor(::Fusion::BitSet128  set)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet128_Iterator>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, set);
}
inline bool GlobalNamespace::BitSet128_Iterator::Next(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet128_Iterator>(),
                        {"Next", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_set", ty: "::Fusion::BitSet128", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BitSet128_Iterator::BitSet128_Iterator(int32_t  _bit, ::Fusion::BitSet128  _set) noexcept  {
this->_bit = _bit;
this->_set = _set;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitSet128_Iterator::BitSet128_Iterator()   {
}
