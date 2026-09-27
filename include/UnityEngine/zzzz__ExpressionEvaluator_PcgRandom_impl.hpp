#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator_PcgRandom.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_PcgRandom_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExpressionEvaluator_PcgRandom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExpressionEvaluator_PcgRandom::*)(uint64_t, uint64_t)>(&::GlobalNamespace::ExpressionEvaluator_PcgRandom::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb573ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExpressionEvaluator_PcgRandom.GetUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::ExpressionEvaluator_PcgRandom::*)()>(&::GlobalNamespace::ExpressionEvaluator_PcgRandom::GetUInt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb573514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {"GetUInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExpressionEvaluator_PcgRandom.RotateRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::GlobalNamespace::ExpressionEvaluator_PcgRandom::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb573cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {"RotateRight", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExpressionEvaluator_PcgRandom.XshRr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::GlobalNamespace::ExpressionEvaluator_PcgRandom::XshRr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb573ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {"XshRr", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExpressionEvaluator_PcgRandom.Step
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExpressionEvaluator_PcgRandom::*)()>(&::GlobalNamespace::ExpressionEvaluator_PcgRandom::Step)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb573cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {"Step", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ExpressionEvaluator_PcgRandom::_ctor(uint64_t  state, uint64_t  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, sequence);
}
inline uint32_t GlobalNamespace::ExpressionEvaluator_PcgRandom::GetUInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {"GetUInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t GlobalNamespace::ExpressionEvaluator_PcgRandom::RotateRight(uint32_t  v, int32_t  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {"RotateRight", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, v, rot);
}
inline uint32_t GlobalNamespace::ExpressionEvaluator_PcgRandom::XshRr(uint64_t  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {"XshRr", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, s);
}
inline void GlobalNamespace::ExpressionEvaluator_PcgRandom::Step()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(),
                        {"Step", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "increment", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ExpressionEvaluator_PcgRandom::ExpressionEvaluator_PcgRandom(uint64_t  increment, uint64_t  state) noexcept  {
this->increment = increment;
this->state = state;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExpressionEvaluator_PcgRandom::ExpressionEvaluator_PcgRandom()   {
}
