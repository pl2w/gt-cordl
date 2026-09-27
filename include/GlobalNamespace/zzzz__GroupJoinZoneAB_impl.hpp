#pragma once
// IWYU pragma private; include "GlobalNamespace/GroupJoinZoneAB.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneA_impl.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneB_impl.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.op_BitwiseAnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GroupJoinZoneAB (*)(::GlobalNamespace::GroupJoinZoneAB, ::GlobalNamespace::GroupJoinZoneAB)>(&::GlobalNamespace::GroupJoinZoneAB::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580c304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>(), ::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.op_BitwiseOr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GroupJoinZoneAB (*)(::GlobalNamespace::GroupJoinZoneAB, ::GlobalNamespace::GroupJoinZoneAB)>(&::GlobalNamespace::GroupJoinZoneAB::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580c30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_BitwiseOr", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>(), ::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.op_OnesComplement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GroupJoinZoneAB (*)(::GlobalNamespace::GroupJoinZoneAB)>(&::GlobalNamespace::GroupJoinZoneAB::op_OnesComplement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580c314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_OnesComplement", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GroupJoinZoneAB, ::GlobalNamespace::GroupJoinZoneAB)>(&::GlobalNamespace::GroupJoinZoneAB::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x580c31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>(), ::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GroupJoinZoneAB, ::GlobalNamespace::GroupJoinZoneAB)>(&::GlobalNamespace::GroupJoinZoneAB::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x580c328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>(), ::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.HasAnyFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GroupJoinZoneAB::*)(::GlobalNamespace::GroupJoinZoneAB)>(&::GlobalNamespace::GroupJoinZoneAB::HasAnyFlag)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x580c334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"HasAnyFlag", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GroupJoinZoneAB::*)(::System::Object*)>(&::GlobalNamespace::GroupJoinZoneAB::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x580c35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                    {::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GroupJoinZoneAB::*)()>(&::GlobalNamespace::GroupJoinZoneAB::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x580c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                    {::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.op_Implicit___GlobalNamespace__GroupJoinZoneAB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GroupJoinZoneAB (*)(int32_t)>(&::GlobalNamespace::GroupJoinZoneAB::op_Implicit___GlobalNamespace__GroupJoinZoneAB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580c414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinZoneAB.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GroupJoinZoneAB::*)()>(&::GlobalNamespace::GroupJoinZoneAB::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x580c41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                    {::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::GroupJoinZoneAB GlobalNamespace::GroupJoinZoneAB::op_BitwiseAnd(::GlobalNamespace::GroupJoinZoneAB  one, ::GlobalNamespace::GroupJoinZoneAB  two)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>(), ::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GroupJoinZoneAB>(nullptr, ___internal_method, one, two);
}
inline ::GlobalNamespace::GroupJoinZoneAB GlobalNamespace::GroupJoinZoneAB::op_BitwiseOr(::GlobalNamespace::GroupJoinZoneAB  one, ::GlobalNamespace::GroupJoinZoneAB  two)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_BitwiseOr", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>(), ::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GroupJoinZoneAB>(nullptr, ___internal_method, one, two);
}
inline ::GlobalNamespace::GroupJoinZoneAB GlobalNamespace::GroupJoinZoneAB::op_OnesComplement(::GlobalNamespace::GroupJoinZoneAB  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_OnesComplement", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GroupJoinZoneAB>(nullptr, ___internal_method, z);
}
inline bool GlobalNamespace::GroupJoinZoneAB::op_Equality(::GlobalNamespace::GroupJoinZoneAB  one, ::GlobalNamespace::GroupJoinZoneAB  two)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>(), ::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, one, two);
}
inline bool GlobalNamespace::GroupJoinZoneAB::op_Inequality(::GlobalNamespace::GroupJoinZoneAB  one, ::GlobalNamespace::GroupJoinZoneAB  two)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>(), ::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, one, two);
}
inline bool GlobalNamespace::GroupJoinZoneAB::HasAnyFlag(::GlobalNamespace::GroupJoinZoneAB  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"HasAnyFlag", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::GroupJoinZoneAB::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::GroupJoinZoneAB::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::GroupJoinZoneAB GlobalNamespace::GroupJoinZoneAB::op_Implicit___GlobalNamespace__GroupJoinZoneAB(int32_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GroupJoinZoneAB>(nullptr, ___internal_method, d);
}
inline ::StringW GlobalNamespace::GroupJoinZoneAB::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GroupJoinZoneAB>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "a", ty: "::GlobalNamespace::GroupJoinZoneA", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "b", ty: "::GlobalNamespace::GroupJoinZoneB", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GroupJoinZoneAB::GroupJoinZoneAB(::GlobalNamespace::GroupJoinZoneA  a, ::GlobalNamespace::GroupJoinZoneB  b) noexcept  {
this->a = a;
this->b = b;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GroupJoinZoneAB::GroupJoinZoneAB()   {
}
