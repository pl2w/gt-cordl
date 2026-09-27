#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSequencer.hpp"
#include "Fusion/Sockets/zzzz__NetSequencer_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetSequencer.get_Sequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::NetSequencer::*)()>(&::Fusion::Sockets::NetSequencer::get_Sequence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60335b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"get_Sequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSequencer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSequencer::*)()>(&::Fusion::Sockets::NetSequencer::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60335bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSequencer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSequencer::*)(int32_t)>(&::Fusion::Sockets::NetSequencer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60335c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSequencer.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::NetSequencer::*)()>(&::Fusion::Sockets::NetSequencer::Next)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60335ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"Next", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSequencer.NextAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::NetSequencer::*)(uint64_t)>(&::Fusion::Sockets::NetSequencer::NextAfter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6033604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"NextAfter", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSequencer.Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSequencer::*)(uint64_t, uint64_t)>(&::Fusion::Sockets::NetSequencer::Distance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6033614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"Distance", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t Fusion::Sockets::NetSequencer::get_Sequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"get_Sequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetSequencer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetSequencer::_ctor(int32_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bytes);
}
inline uint64_t Fusion::Sockets::NetSequencer::Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline uint64_t Fusion::Sockets::NetSequencer::NextAfter(uint64_t  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"NextAfter", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, sequence);
}
inline int32_t Fusion::Sockets::NetSequencer::Distance(uint64_t  from, uint64_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSequencer>(),
                        {"Distance", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, from, to);
}
// Ctor Parameters [CppParam { name: "_shift", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bytes", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_mask", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sequence", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetSequencer::NetSequencer(int32_t  _shift, int32_t  _bytes, uint64_t  _mask, uint64_t  _sequence) noexcept  {
this->_shift = _shift;
this->_bytes = _bytes;
this->_mask = _mask;
this->_sequence = _sequence;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSequencer::NetSequencer()   {
}
