#pragma once
// IWYU pragma private; include "GlobalNamespace/LuaHashing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LuaHashing_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LuaHashing.ByteHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t)>(&::GlobalNamespace::LuaHashing::ByteHash)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a91804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuaHashing*>(),
                        {"ByteHash", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuaHashing.ByteHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*)>(&::GlobalNamespace::LuaHashing::ByteHash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a925b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuaHashing*>(),
                        {"ByteHash", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuaHashing.ByteHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::LuaHashing::ByteHash)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a92ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuaHashing*>(),
                        {"ByteHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuaHashing.ByteHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::LuaHashing::ByteHash)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a92d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuaHashing*>(),
                        {"ByteHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::LuaHashing::ByteHash(uint8_t*  bytes, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuaHashing*>(),
                        {"ByteHash", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes, len);
}
inline int32_t GlobalNamespace::LuaHashing::ByteHash(uint8_t*  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuaHashing*>(),
                        {"ByteHash", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes);
}
inline int32_t GlobalNamespace::LuaHashing::ByteHash(::StringW  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuaHashing*>(),
                        {"ByteHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes);
}
inline int32_t GlobalNamespace::LuaHashing::ByteHash(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuaHashing*>(),
                        {"ByteHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LuaHashing::LuaHashing()   {
}
