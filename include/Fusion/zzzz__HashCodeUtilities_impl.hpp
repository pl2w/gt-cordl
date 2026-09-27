#pragma once
// IWYU pragma private; include "Fusion/HashCodeUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__HashCodeUtilities_def.hpp"
//  Writing Method size for method: ::Fusion::HashCodeUtilities.GetHashDeterministic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::Fusion::HashCodeUtilities::GetHashDeterministic)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f9e3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"GetHashDeterministic", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HashCodeUtilities.GetHashDeterministicInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t)>(&::Fusion::HashCodeUtilities::GetHashDeterministicInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f9e3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"GetHashDeterministicInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HashCodeUtilities.CombineHashCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Fusion::HashCodeUtilities::CombineHashCodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9e464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HashCodeUtilities.CombineHashCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::Fusion::HashCodeUtilities::CombineHashCodes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f9e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HashCodeUtilities.GetHashCodeDeterministic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Fusion::HashCodeUtilities::GetHashCodeDeterministic)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9e484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"GetHashCodeDeterministic", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HashCodeUtilities.GetHashCodeDeterministic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::Fusion::HashCodeUtilities::GetHashCodeDeterministic)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f9e4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"GetHashCodeDeterministic", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::HashCodeUtilities::GetHashDeterministic(::StringW  str, int32_t  initialHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"GetHashDeterministic", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, initialHash);
}
inline int32_t Fusion::HashCodeUtilities::GetHashDeterministicInternal(::StringW  str, int32_t  len, int32_t  initialHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"GetHashDeterministicInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, len, initialHash);
}
inline int32_t Fusion::HashCodeUtilities::CombineHashCodes(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline int32_t Fusion::HashCodeUtilities::CombineHashCodes(int32_t  a, int32_t  b, int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b, c);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::HashCodeUtilities::GetArrayHashCode(T*  ptr, int32_t  length, int32_t  initialHash)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                    {"GetArrayHashCode", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, length, initialHash);
}
inline int32_t Fusion::HashCodeUtilities::GetHashCodeDeterministic(::ArrayW<uint8_t>  data, int32_t  initialHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"GetHashCodeDeterministic", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, initialHash);
}
inline int32_t Fusion::HashCodeUtilities::GetHashCodeDeterministic(::StringW  data, int32_t  initialHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                        {"GetHashCodeDeterministic", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, initialHash);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::HashCodeUtilities::GetHashCodeDeterministic(T  data, int32_t  initialHash)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                    {"GetHashCodeDeterministic", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, initialHash);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::HashCodeUtilities::GetHashCodeDeterministic(T*  data, int32_t  initialHash)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::HashCodeUtilities*>(),
                    {"GetHashCodeDeterministic", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, initialHash);
}
// Ctor Parameters []
constexpr ::Fusion::HashCodeUtilities::HashCodeUtilities()   {
}
