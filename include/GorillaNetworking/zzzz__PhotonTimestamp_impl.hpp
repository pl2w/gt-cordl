#pragma once
// IWYU pragma private; include "GorillaNetworking/PhotonTimestamp.hpp"
#include "GorillaNetworking/zzzz__PhotonTimestamp_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonTimestamp::*)(double_t)>(&::GorillaNetworking::PhotonTimestamp::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c95f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.get_Now
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::PhotonTimestamp (*)()>(&::GorillaNetworking::PhotonTimestamp::get_Now)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c95ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"get_Now", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::GorillaNetworking::PhotonTimestamp::Normalize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c95fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"Normalize", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::GorillaNetworking::PhotonTimestamp, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::Delta)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c96068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"Delta", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.SecondsUntil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GorillaNetworking::PhotonTimestamp::*)(::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::SecondsUntil)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c960a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"SecondsUntil", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.SecondsSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GorillaNetworking::PhotonTimestamp::*)(::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::SecondsSince)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c960ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"SecondsSince", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.AddSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::PhotonTimestamp (::GorillaNetworking::PhotonTimestamp::*)(double_t)>(&::GorillaNetworking::PhotonTimestamp::AddSeconds)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c96130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"AddSeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::PhotonTimestamp (*)(::GorillaNetworking::PhotonTimestamp, double_t)>(&::GorillaNetworking::PhotonTimestamp::op_Addition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c96168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Addition", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::PhotonTimestamp (*)(::GorillaNetworking::PhotonTimestamp, double_t)>(&::GorillaNetworking::PhotonTimestamp::op_Subtraction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c9619c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::GorillaNetworking::PhotonTimestamp, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::op_Subtraction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c961d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaNetworking::PhotonTimestamp, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::op_LessThan)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c96210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaNetworking::PhotonTimestamp, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::op_GreaterThan)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c96258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaNetworking::PhotonTimestamp, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c962a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaNetworking::PhotonTimestamp, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c962e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaNetworking::PhotonTimestamp, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c96330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Equality", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaNetworking::PhotonTimestamp, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c9633c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::PhotonTimestamp::*)(::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::CompareTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c96348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"CompareTo", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PhotonTimestamp::*)(::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::PhotonTimestamp::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c96398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"Equals", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PhotonTimestamp::*)(::System::Object*)>(&::GorillaNetworking::PhotonTimestamp::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c963a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                    {::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::PhotonTimestamp::*)()>(&::GorillaNetworking::PhotonTimestamp::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c96420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                    {::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonTimestamp.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PhotonTimestamp::*)()>(&::GorillaNetworking::PhotonTimestamp::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c96440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                    {::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GorillaNetworking::PhotonTimestamp::_ctor(double_t  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, raw);
}
inline ::GorillaNetworking::PhotonTimestamp GorillaNetworking::PhotonTimestamp::get_Now()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"get_Now", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::PhotonTimestamp>(nullptr, ___internal_method);
}
inline double_t GorillaNetworking::PhotonTimestamp::Normalize(double_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"Normalize", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, v);
}
inline double_t GorillaNetworking::PhotonTimestamp::Delta(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"Delta", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a, b);
}
inline double_t GorillaNetworking::PhotonTimestamp::SecondsUntil(::GorillaNetworking::PhotonTimestamp  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"SecondsUntil", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, other);
}
inline double_t GorillaNetworking::PhotonTimestamp::SecondsSince(::GorillaNetworking::PhotonTimestamp  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"SecondsSince", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, other);
}
inline ::GorillaNetworking::PhotonTimestamp GorillaNetworking::PhotonTimestamp::AddSeconds(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"AddSeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::PhotonTimestamp>(*this, ___internal_method, seconds);
}
inline ::GorillaNetworking::PhotonTimestamp GorillaNetworking::PhotonTimestamp::op_Addition(::GorillaNetworking::PhotonTimestamp  t, double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Addition", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::PhotonTimestamp>(nullptr, ___internal_method, t, seconds);
}
inline ::GorillaNetworking::PhotonTimestamp GorillaNetworking::PhotonTimestamp::op_Subtraction(::GorillaNetworking::PhotonTimestamp  t, double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::PhotonTimestamp>(nullptr, ___internal_method, t, seconds);
}
inline double_t GorillaNetworking::PhotonTimestamp::op_Subtraction(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a, b);
}
inline bool GorillaNetworking::PhotonTimestamp::op_LessThan(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GorillaNetworking::PhotonTimestamp::op_GreaterThan(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GorillaNetworking::PhotonTimestamp::op_LessThanOrEqual(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GorillaNetworking::PhotonTimestamp::op_GreaterThanOrEqual(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GorillaNetworking::PhotonTimestamp::op_Equality(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Equality", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GorillaNetworking::PhotonTimestamp::op_Inequality(::GorillaNetworking::PhotonTimestamp  a, ::GorillaNetworking::PhotonTimestamp  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t GorillaNetworking::PhotonTimestamp::CompareTo(::GorillaNetworking::PhotonTimestamp  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"CompareTo", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool GorillaNetworking::PhotonTimestamp::Equals(::GorillaNetworking::PhotonTimestamp  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(),
                        {"Equals", {}, {::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GorillaNetworking::PhotonTimestamp::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GorillaNetworking::PhotonTimestamp::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GorillaNetworking::PhotonTimestamp::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::PhotonTimestamp>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>"
constexpr  GorillaNetworking::PhotonTimestamp::operator ::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>*()  {
return static_cast<::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>"
constexpr ::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>* GorillaNetworking::PhotonTimestamp::i___System__IEquatable_1___GorillaNetworking__PhotonTimestamp_()  {
return static_cast<::System::IEquatable_1<::GorillaNetworking::PhotonTimestamp>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>"
constexpr  GorillaNetworking::PhotonTimestamp::operator ::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>*()  {
return static_cast<::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>"
constexpr ::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>* GorillaNetworking::PhotonTimestamp::i___System__IComparable_1___GorillaNetworking__PhotonTimestamp_()  {
return static_cast<::System::IComparable_1<::GorillaNetworking::PhotonTimestamp>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaNetworking::PhotonTimestamp::PhotonTimestamp(double_t  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PhotonTimestamp::PhotonTimestamp()   {
}
