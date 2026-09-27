#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LLxx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LLxx_def.hpp"
#include "System/zzzz__NotImplementedException_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LLxx.AlgorithmNotImplemented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::NotImplementedException* (*)(::StringW)>(&::K4os::Compression::LZ4::Engine::LLxx::AlgorithmNotImplemented)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9cbc7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LLxx*>(),
                        {"AlgorithmNotImplemented", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LLxx.LZ4_decompress_safe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LLxx::LZ4_decompress_safe)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9cb936c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LLxx*>(),
                        {"LZ4_decompress_safe", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LLxx.LZ4_compress_fast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LLxx::LZ4_compress_fast)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9cb90e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LLxx*>(),
                        {"LZ4_compress_fast", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LLxx.LZ4_compress_HC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LLxx::LZ4_compress_HC)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9cb8f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LLxx*>(),
                        {"LZ4_compress_HC", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::NotImplementedException* K4os::Compression::LZ4::Engine::LLxx::AlgorithmNotImplemented(::StringW  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LLxx*>(),
                        {"AlgorithmNotImplemented", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::NotImplementedException*>(nullptr, ___internal_method, action);
}
inline int32_t K4os::Compression::LZ4::Engine::LLxx::LZ4_decompress_safe(uint8_t*  source, uint8_t*  target, int32_t  sourceLength, int32_t  targetLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LLxx*>(),
                        {"LZ4_decompress_safe", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, target, sourceLength, targetLength);
}
inline int32_t K4os::Compression::LZ4::Engine::LLxx::LZ4_compress_fast(uint8_t*  source, uint8_t*  target, int32_t  sourceLength, int32_t  targetLength, int32_t  acceleration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LLxx*>(),
                        {"LZ4_compress_fast", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, target, sourceLength, targetLength, acceleration);
}
inline int32_t K4os::Compression::LZ4::Engine::LLxx::LZ4_compress_HC(uint8_t*  source, uint8_t*  target, int32_t  sourceLength, int32_t  targetLength, int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LLxx*>(),
                        {"LZ4_compress_HC", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, target, sourceLength, targetLength, level);
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::Engine::LLxx::LLxx()   {
}
