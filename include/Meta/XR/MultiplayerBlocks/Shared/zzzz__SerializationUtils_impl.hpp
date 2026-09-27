#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/SerializationUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__SerializationUtils_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils.Compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::Compress)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9f6c224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*>(),
                        {"Compress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils.Decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::Decompress)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x9f6c4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*>(),
                        {"Decompress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::SerializeToString(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*>(),
                    {"SerializeToString", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
template<typename T>
inline T Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::DeserializeFromString(::StringW  base64)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*>(),
                    {"DeserializeFromString", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, base64);
}
inline ::ArrayW<uint8_t> Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::Compress(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*>(),
                        {"Compress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::Decompress(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*>(),
                        {"Decompress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::SerializationUtils()   {
}
