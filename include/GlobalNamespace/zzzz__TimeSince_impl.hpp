#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeSince.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeSince.get_secondsElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::get_secondsElapsed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a2182c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.get_secondsElapsedFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::get_secondsElapsedFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a218e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.get_secondsElapsedInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::get_secondsElapsedInt)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a218f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.get_secondsElapsedUint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::get_secondsElapsedUint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a21920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedUint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.get_secondsElapsedLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::get_secondsElapsedLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a21940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.get_secondsElapsedSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::get_secondsElapsedSpan)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a21968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedSpan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSince::*)(::System::DateTime)>(&::GlobalNamespace::TimeSince::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a219d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSince::*)(int32_t)>(&::GlobalNamespace::TimeSince::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a219dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSince::*)(uint32_t)>(&::GlobalNamespace::TimeSince::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a21a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSince::*)(float_t)>(&::GlobalNamespace::TimeSince::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a21ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSince::*)(double_t)>(&::GlobalNamespace::TimeSince::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a21b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSince::*)(int64_t)>(&::GlobalNamespace::TimeSince::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a21be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSince::*)(::System::TimeSpan)>(&::GlobalNamespace::TimeSince::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a21c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(int32_t)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a21d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(uint32_t)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a21d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(float_t)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a21d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(double_t)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a21da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(int64_t)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a21dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(::System::TimeSpan)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a21e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a21e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(int32_t, bool)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a21ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(uint32_t, bool)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a21f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(float_t, bool)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a1a560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(double_t, bool)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a21f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(int64_t, bool)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a21fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.HasElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSince::*)(::System::TimeSpan, bool)>(&::GlobalNamespace::TimeSince::HasElapsed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a2204c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a22110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                    {::i2c::class_of<::GlobalNamespace::TimeSince>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimeSince::*)()>(&::GlobalNamespace::TimeSince::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a221c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                    {::i2c::class_of<::GlobalNamespace::TimeSince>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.Now
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSince (*)()>(&::GlobalNamespace::TimeSince::Now)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a1aa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"Now", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit_int64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::GlobalNamespace::TimeSince)>(&::GlobalNamespace::TimeSince::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a22248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit_double_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::GlobalNamespace::TimeSince)>(&::GlobalNamespace::TimeSince::op_Implicit_double_t)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a22274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::TimeSince)>(&::GlobalNamespace::TimeSince::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a215e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::TimeSince)>(&::GlobalNamespace::TimeSince::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a22288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::GlobalNamespace::TimeSince)>(&::GlobalNamespace::TimeSince::op_Implicit_uint32_t)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a222b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit___System__TimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::GlobalNamespace::TimeSince)>(&::GlobalNamespace::TimeSince::op_Implicit___System__TimeSpan)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a222d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit___GlobalNamespace__TimeSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSince (*)(int32_t)>(&::GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a222ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit___GlobalNamespace__TimeSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSince (*)(uint32_t)>(&::GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a22308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit___GlobalNamespace__TimeSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSince (*)(float_t)>(&::GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a215fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit___GlobalNamespace__TimeSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSince (*)(double_t)>(&::GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a22324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit___GlobalNamespace__TimeSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSince (*)(int64_t)>(&::GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a2233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit___GlobalNamespace__TimeSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSince (*)(::System::TimeSpan)>(&::GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a22358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSince.op_Implicit___GlobalNamespace__TimeSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSince (*)(::System::DateTime)>(&::GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a22374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t GlobalNamespace::TimeSince::get_secondsElapsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::TimeSince::get_secondsElapsedFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TimeSince::get_secondsElapsedInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t GlobalNamespace::TimeSince::get_secondsElapsedUint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedUint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline int64_t GlobalNamespace::TimeSince::get_secondsElapsedLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::System::TimeSpan GlobalNamespace::TimeSince::get_secondsElapsedSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"get_secondsElapsedSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline void GlobalNamespace::TimeSince::_ctor(::System::DateTime  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dt);
}
inline void GlobalNamespace::TimeSince::_ctor(int32_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, elapsed);
}
inline void GlobalNamespace::TimeSince::_ctor(uint32_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, elapsed);
}
inline void GlobalNamespace::TimeSince::_ctor(float_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, elapsed);
}
inline void GlobalNamespace::TimeSince::_ctor(double_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, elapsed);
}
inline void GlobalNamespace::TimeSince::_ctor(int64_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, elapsed);
}
inline void GlobalNamespace::TimeSince::_ctor(::System::TimeSpan  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, elapsed);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(int32_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(uint32_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(float_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(int64_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(::System::TimeSpan  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds);
}
inline void GlobalNamespace::TimeSince::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(int32_t  seconds, bool  resetOnElapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds, resetOnElapsed);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(uint32_t  seconds, bool  resetOnElapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds, resetOnElapsed);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(float_t  seconds, bool  resetOnElapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds, resetOnElapsed);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(double_t  seconds, bool  resetOnElapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds, resetOnElapsed);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(int64_t  seconds, bool  resetOnElapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds, resetOnElapsed);
}
inline bool GlobalNamespace::TimeSince::HasElapsed(::System::TimeSpan  seconds, bool  resetOnElapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"HasElapsed", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, seconds, resetOnElapsed);
}
inline ::StringW GlobalNamespace::TimeSince::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TimeSince>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TimeSince::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TimeSince>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::TimeSince::Now()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"Now", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSince>(nullptr, ___internal_method);
}
inline int64_t GlobalNamespace::TimeSince::op_Implicit_int64_t(::GlobalNamespace::TimeSince  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, ts);
}
inline double_t GlobalNamespace::TimeSince::op_Implicit_double_t(::GlobalNamespace::TimeSince  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, ts);
}
inline float_t GlobalNamespace::TimeSince::op_Implicit_float_t(::GlobalNamespace::TimeSince  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ts);
}
inline int32_t GlobalNamespace::TimeSince::op_Implicit_int32_t(::GlobalNamespace::TimeSince  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ts);
}
inline uint32_t GlobalNamespace::TimeSince::op_Implicit_uint32_t(::GlobalNamespace::TimeSince  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ts);
}
inline ::System::TimeSpan GlobalNamespace::TimeSince::op_Implicit___System__TimeSpan(::GlobalNamespace::TimeSince  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeSince>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, ts);
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince(int32_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSince>(nullptr, ___internal_method, elapsed);
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince(uint32_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSince>(nullptr, ___internal_method, elapsed);
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince(float_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSince>(nullptr, ___internal_method, elapsed);
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince(double_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSince>(nullptr, ___internal_method, elapsed);
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince(int64_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSince>(nullptr, ___internal_method, elapsed);
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince(::System::TimeSpan  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSince>(nullptr, ___internal_method, elapsed);
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::TimeSince::op_Implicit___GlobalNamespace__TimeSince(::System::DateTime  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSince>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSince>(nullptr, ___internal_method, dt);
}
// Ctor Parameters [CppParam { name: "_dt", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeSince::TimeSince(::System::DateTime  _dt) noexcept  {
this->_dt = _dt;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSince::TimeSince()   {
}
