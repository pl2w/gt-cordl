#pragma once
// IWYU pragma private; include "Fusion/Tick.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Tick.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::Tick::*)(int32_t)>(&::Fusion::Tick::Next)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"Next", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Tick::*)(::Fusion::Tick)>(&::Fusion::Tick::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa496c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Tick::*)(::Fusion::Tick)>(&::Fusion::Tick::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa497c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Tick::*)(::System::Object*)>(&::Fusion::Tick::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa4984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Tick>(),
                    {::i2c::class_of<::Fusion::Tick>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Tick::*)()>(&::Fusion::Tick::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa49fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Tick>(),
                    {::i2c::class_of<::Fusion::Tick>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Tick::*)()>(&::Fusion::Tick::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa4a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Tick>(),
                    {::i2c::class_of<::Fusion::Tick>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Tick, ::Fusion::Tick)>(&::Fusion::Tick::op_GreaterThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Tick, ::Fusion::Tick)>(&::Fusion::Tick::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Tick, ::Fusion::Tick)>(&::Fusion::Tick::op_LessThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Tick, ::Fusion::Tick)>(&::Fusion::Tick::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Tick, ::Fusion::Tick)>(&::Fusion::Tick::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Tick, ::Fusion::Tick)>(&::Fusion::Tick::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_Implicit___Fusion__Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (*)(int32_t)>(&::Fusion::Tick::op_Implicit___Fusion__Tick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::Tick)>(&::Fusion::Tick::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa4acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Tick)>(&::Fusion::Tick::op_Implicit_bool)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Tick::__cordl_internal_get_Raw()  {
return this->___Raw;
}
constexpr int32_t const& Fusion::Tick::__cordl_internal_get_Raw() const {
return this->___Raw;
}
constexpr void Fusion::Tick::__cordl_internal_set_Raw(int32_t  value)  {
this->___Raw = value;
}
inline ::Fusion::Tick Fusion::Tick::Next(int32_t  increment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"Next", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(*this, ___internal_method, increment);
}
inline bool Fusion::Tick::Equals(::Fusion::Tick  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Fusion::Tick::CompareTo(::Fusion::Tick  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Fusion::Tick::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Tick>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::Tick::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Tick>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::Tick::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Tick>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::Tick::op_GreaterThan(::Fusion::Tick  a, ::Fusion::Tick  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Tick::op_GreaterThanOrEqual(::Fusion::Tick  a, ::Fusion::Tick  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Tick::op_LessThan(::Fusion::Tick  a, ::Fusion::Tick  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Tick::op_LessThanOrEqual(::Fusion::Tick  a, ::Fusion::Tick  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Tick::op_Equality(::Fusion::Tick  a, ::Fusion::Tick  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Tick::op_Inequality(::Fusion::Tick  a, ::Fusion::Tick  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::Fusion::Tick Fusion::Tick::op_Implicit___Fusion__Tick(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(nullptr, ___internal_method, value);
}
inline int32_t Fusion::Tick::op_Implicit_int32_t(::Fusion::Tick  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline bool Fusion::Tick::op_Implicit_bool(::Fusion::Tick  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
/// @brief Convert operator to "::System::IComparable_1<::Fusion::Tick>"
constexpr  Fusion::Tick::operator ::System::IComparable_1<::Fusion::Tick>*()  {
return static_cast<::System::IComparable_1<::Fusion::Tick>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Fusion::Tick>"
constexpr ::System::IComparable_1<::Fusion::Tick>* Fusion::Tick::i___System__IComparable_1___Fusion__Tick_()  {
return static_cast<::System::IComparable_1<::Fusion::Tick>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Tick>"
constexpr  Fusion::Tick::operator ::System::IEquatable_1<::Fusion::Tick>*()  {
return static_cast<::System::IEquatable_1<::Fusion::Tick>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::Tick>"
constexpr ::System::IEquatable_1<::Fusion::Tick>* Fusion::Tick::i___System__IEquatable_1___Fusion__Tick_()  {
return static_cast<::System::IEquatable_1<::Fusion::Tick>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Raw", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Tick::Tick(int32_t  Raw) noexcept  {
this->Raw = Raw;
}
// Ctor Parameters []
constexpr ::Fusion::Tick::Tick()   {
}
//  Writing Method size for method: ::Fusion::Tick_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Tick_EqualityComparer::*)(::Fusion::Tick, ::Fusion::Tick)>(&::Fusion::Tick_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Tick_EqualityComparer::*)(::Fusion::Tick)>(&::Fusion::Tick_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Tick_EqualityComparer::*)()>(&::Fusion::Tick_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::Tick_EqualityComparer::Equals(::Fusion::Tick  x, ::Fusion::Tick  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::Tick_EqualityComparer::GetHashCode(::Fusion::Tick  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::Tick_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Tick_EqualityComparer* Fusion::Tick_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Tick_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>"
constexpr  Fusion::Tick_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>* Fusion::Tick_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__Tick_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Tick_EqualityComparer::Tick_EqualityComparer()   {
}
//  Writing Method size for method: ::Fusion::Tick_RelationalComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Tick_RelationalComparer::*)(::Fusion::Tick, ::Fusion::Tick)>(&::Fusion::Tick_RelationalComparer::Compare)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fa4adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_RelationalComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Tick_RelationalComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Tick_RelationalComparer::*)()>(&::Fusion::Tick_RelationalComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_RelationalComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::Tick_RelationalComparer::Compare(::Fusion::Tick  x, ::Fusion::Tick  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_RelationalComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void Fusion::Tick_RelationalComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Tick_RelationalComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Tick_RelationalComparer* Fusion::Tick_RelationalComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Tick_RelationalComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Fusion::Tick>"
constexpr  Fusion::Tick_RelationalComparer::operator ::System::Collections::Generic::IComparer_1<::Fusion::Tick>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Fusion::Tick>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Fusion::Tick>"
constexpr ::System::Collections::Generic::IComparer_1<::Fusion::Tick>* Fusion::Tick_RelationalComparer::i___System__Collections__Generic__IComparer_1___Fusion__Tick_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Fusion::Tick>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Tick_RelationalComparer::Tick_RelationalComparer()   {
}
