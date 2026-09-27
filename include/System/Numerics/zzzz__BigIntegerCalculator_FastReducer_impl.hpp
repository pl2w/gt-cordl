#pragma once
// IWYU pragma private; include "System/Numerics/BigIntegerCalculator_FastReducer.hpp"
#include "System/Numerics/zzzz__BigIntegerCalculator_FastReducer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_FastReducer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigIntegerCalculator_FastReducer::*)(::ArrayW<uint32_t>)>(&::GlobalNamespace::BigIntegerCalculator_FastReducer::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa9fb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_FastReducer>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_FastReducer.Reduce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BigIntegerCalculator_FastReducer::*)(::ArrayW<uint32_t>, int32_t)>(&::GlobalNamespace::BigIntegerCalculator_FastReducer::Reduce)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa9fc2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_FastReducer>(),
                        {"Reduce", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_FastReducer.DivMul
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t)>(&::GlobalNamespace::BigIntegerCalculator_FastReducer::DivMul)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa9fc398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_FastReducer>(),
                        {"DivMul", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_FastReducer.SubMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t)>(&::GlobalNamespace::BigIntegerCalculator_FastReducer::SubMod)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa9fc4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_FastReducer>(),
                        {"SubMod", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BigIntegerCalculator_FastReducer::_ctor(::ArrayW<uint32_t>  modulus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_FastReducer>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, modulus);
}
inline int32_t GlobalNamespace::BigIntegerCalculator_FastReducer::Reduce(::ArrayW<uint32_t>  value, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_FastReducer>(),
                        {"Reduce", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value, length);
}
inline int32_t GlobalNamespace::BigIntegerCalculator_FastReducer::DivMul(::ArrayW<uint32_t>  left, int32_t  leftLength, ::ArrayW<uint32_t>  right, int32_t  rightLength, ::ArrayW<uint32_t>  bits, int32_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_FastReducer>(),
                        {"DivMul", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, left, leftLength, right, rightLength, bits, k);
}
inline int32_t GlobalNamespace::BigIntegerCalculator_FastReducer::SubMod(::ArrayW<uint32_t>  left, int32_t  leftLength, ::ArrayW<uint32_t>  right, int32_t  rightLength, ::ArrayW<uint32_t>  modulus, int32_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_FastReducer>(),
                        {"SubMod", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, left, leftLength, right, rightLength, modulus, k);
}
// Ctor Parameters [CppParam { name: "_modulus", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_mu", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_q1", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_q2", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_muLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BigIntegerCalculator_FastReducer::BigIntegerCalculator_FastReducer(::ArrayW<uint32_t>  _modulus, ::ArrayW<uint32_t>  _mu, ::ArrayW<uint32_t>  _q1, ::ArrayW<uint32_t>  _q2, int32_t  _muLength) noexcept  {
this->_modulus = _modulus;
this->_mu = _mu;
this->_q1 = _q1;
this->_q2 = _q2;
this->_muLength = _muLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BigIntegerCalculator_FastReducer::BigIntegerCalculator_FastReducer()   {
}
