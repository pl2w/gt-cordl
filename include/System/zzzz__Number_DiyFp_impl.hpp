#pragma once
// IWYU pragma private; include "System/Number_DiyFp.hpp"
#include "System/zzzz__Number_DiyFp_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp.CreateAndGetBoundaries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_DiyFp (*)(double_t, ::by_ref<::GlobalNamespace::Number_DiyFp>, ::by_ref<::GlobalNamespace::Number_DiyFp>)>(&::GlobalNamespace::Number_DiyFp::CreateAndGetBoundaries)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb9a6478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"CreateAndGetBoundaries", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp.CreateAndGetBoundaries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_DiyFp (*)(float_t, ::by_ref<::GlobalNamespace::Number_DiyFp>, ::by_ref<::GlobalNamespace::Number_DiyFp>)>(&::GlobalNamespace::Number_DiyFp::CreateAndGetBoundaries)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb9a65d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"CreateAndGetBoundaries", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Number_DiyFp::*)(double_t)>(&::GlobalNamespace::Number_DiyFp::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb9a64c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Number_DiyFp::*)(float_t)>(&::GlobalNamespace::Number_DiyFp::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9a6618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Number_DiyFp::*)(uint64_t, int32_t)>(&::GlobalNamespace::Number_DiyFp::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9a668c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_DiyFp (::GlobalNamespace::Number_DiyFp::*)(::by_ref<::GlobalNamespace::Number_DiyFp>)>(&::GlobalNamespace::Number_DiyFp::Multiply)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb9a6698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"Multiply", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_DiyFp (::GlobalNamespace::Number_DiyFp::*)()>(&::GlobalNamespace::Number_DiyFp::Normalize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb9a66f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"Normalize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp.Subtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_DiyFp (::GlobalNamespace::Number_DiyFp::*)(::by_ref<::GlobalNamespace::Number_DiyFp>)>(&::GlobalNamespace::Number_DiyFp::Subtract)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9a674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"Subtract", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_DiyFp.GetBoundaries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Number_DiyFp::*)(int32_t, ::by_ref<::GlobalNamespace::Number_DiyFp>, ::by_ref<::GlobalNamespace::Number_DiyFp>)>(&::GlobalNamespace::Number_DiyFp::GetBoundaries)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9a6530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"GetBoundaries", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Number_DiyFp GlobalNamespace::Number_DiyFp::CreateAndGetBoundaries(double_t  value, ::by_ref<::GlobalNamespace::Number_DiyFp>  mMinus, ::by_ref<::GlobalNamespace::Number_DiyFp>  mPlus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"CreateAndGetBoundaries", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_DiyFp>(nullptr, ___internal_method, value, mMinus, mPlus);
}
inline ::GlobalNamespace::Number_DiyFp GlobalNamespace::Number_DiyFp::CreateAndGetBoundaries(float_t  value, ::by_ref<::GlobalNamespace::Number_DiyFp>  mMinus, ::by_ref<::GlobalNamespace::Number_DiyFp>  mPlus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"CreateAndGetBoundaries", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_DiyFp>(nullptr, ___internal_method, value, mMinus, mPlus);
}
inline void GlobalNamespace::Number_DiyFp::_ctor(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::Number_DiyFp::_ctor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::Number_DiyFp::_ctor(uint64_t  f, int32_t  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, f, e);
}
inline ::GlobalNamespace::Number_DiyFp GlobalNamespace::Number_DiyFp::Multiply(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"Multiply", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_DiyFp>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::Number_DiyFp GlobalNamespace::Number_DiyFp::Normalize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"Normalize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_DiyFp>(*this, ___internal_method);
}
inline ::GlobalNamespace::Number_DiyFp GlobalNamespace::Number_DiyFp::Subtract(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"Subtract", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_DiyFp>(*this, ___internal_method, other);
}
inline void GlobalNamespace::Number_DiyFp::GetBoundaries(int32_t  implicitBitIndex, ::by_ref<::GlobalNamespace::Number_DiyFp>  mMinus, ::by_ref<::GlobalNamespace::Number_DiyFp>  mPlus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_DiyFp>(),
                        {"GetBoundaries", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, implicitBitIndex, mMinus, mPlus);
}
// Ctor Parameters [CppParam { name: "f", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "e", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Number_DiyFp::Number_DiyFp(uint64_t  f, int32_t  e) noexcept  {
this->f = f;
this->e = e;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Number_DiyFp::Number_DiyFp()   {
}
