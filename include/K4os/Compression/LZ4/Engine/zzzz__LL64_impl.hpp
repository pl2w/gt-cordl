#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL64.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_cParams_t_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL64_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_HCfavor_e_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4HC_match_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_stream_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dictCtx_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dictIssue_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dict_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_earlyEnd_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_endCondition_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_limitedOutput_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_tableType_t_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_decompress_generic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, int32_t, int32_t, ::GlobalNamespace::LL_endCondition_directive, ::GlobalNamespace::LL_earlyEnd_directive, ::GlobalNamespace::LL_dict_directive, uint8_t*, uint8_t*, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_decompress_generic)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9cc3004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_decompress_generic", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_endCondition_directive>(), ::i2c::type_of<::GlobalNamespace::LL_earlyEnd_directive>(), ::i2c::type_of<::GlobalNamespace::LL_dict_directive>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_decompress_generic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, int32_t, int32_t, bool, bool, ::GlobalNamespace::LL_dict_directive, uint8_t*, uint8_t*, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_decompress_generic)> {
  constexpr static std::size_t size = 0x884;
  constexpr static std::size_t addrs = 0x9cc30e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_decompress_generic", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_dict_directive>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_decompress_safe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_decompress_safe)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cbc964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_decompress_safe", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_compress_generic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_stream_t*, uint8_t*, uint8_t*, int32_t, int32_t*, int32_t, ::GlobalNamespace::LL_limitedOutput_directive, ::GlobalNamespace::LL_tableType_t, ::GlobalNamespace::LL_dict_directive, ::GlobalNamespace::LL_dictIssue_directive, int32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_compress_generic)> {
  constexpr static std::size_t size = 0xec8;
  constexpr static std::size_t addrs = 0x9cc3968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_generic", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_stream_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<::GlobalNamespace::LL_dict_directive>(), ::i2c::type_of<::GlobalNamespace::LL_dictIssue_directive>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_compress_fast_extState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_stream_t*, uint8_t*, uint8_t*, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_compress_fast_extState)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x9cc4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_fast_extState", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_stream_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_compress_fast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_compress_fast)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cbcb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_fast", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_countPattern
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint8_t*, uint8_t*, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_countPattern)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9cc4a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_countPattern", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_InsertAndGetWiderMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, uint8_t*, uint8_t*, int32_t, bool, bool, ::GlobalNamespace::LL_dictCtx_directive, ::GlobalNamespace::LL_HCfavor_e)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_InsertAndGetWiderMatch)> {
  constexpr static std::size_t size = 0xf08;
  constexpr static std::size_t addrs = 0x9cc4b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_InsertAndGetWiderMatch", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>(), ::i2c::type_of<::GlobalNamespace::LL_HCfavor_e>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_InsertAndFindBestMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, bool, ::GlobalNamespace::LL_dictCtx_directive)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_InsertAndFindBestMatch)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9cc5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_InsertAndFindBestMatch", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_FindLongerMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LL_LZ4HC_match_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t, int32_t, ::GlobalNamespace::LL_dictCtx_directive, ::GlobalNamespace::LL_HCfavor_e)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_FindLongerMatch)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9cc5b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_FindLongerMatch", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>(), ::i2c::type_of<::GlobalNamespace::LL_HCfavor_e>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_encodeSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, uint8_t*, int32_t, uint8_t*, ::GlobalNamespace::LL_limitedOutput_directive, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_encodeSequence)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9cc5c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_encodeSequence", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_compress_hashChain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t*, int32_t, int32_t, ::GlobalNamespace::LL_limitedOutput_directive, ::GlobalNamespace::LL_dictCtx_directive)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_hashChain)> {
  constexpr static std::size_t size = 0xc8c;
  constexpr static std::size_t addrs = 0x9cc5dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_hashChain", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_compress_optimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t*, int32_t, int32_t, uint32_t, ::GlobalNamespace::LL_limitedOutput_directive, bool, ::GlobalNamespace::LL_dictCtx_directive, ::GlobalNamespace::LL_HCfavor_e)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_optimal)> {
  constexpr static std::size_t size = 0xf70;
  constexpr static std::size_t addrs = 0x9cc6a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_optimal", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>(), ::i2c::type_of<::GlobalNamespace::LL_HCfavor_e>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_compress_generic_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t*, int32_t, int32_t, ::GlobalNamespace::LL_limitedOutput_directive, ::GlobalNamespace::LL_dictCtx_directive)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_generic_internal)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9cc79c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_generic_internal", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_compress_generic_noDictCtx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t*, int32_t, int32_t, ::GlobalNamespace::LL_limitedOutput_directive)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_generic_noDictCtx)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cc7ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_generic_noDictCtx", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_compress_generic_dictCtx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t*, int32_t, int32_t, ::GlobalNamespace::LL_limitedOutput_directive)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_generic_dictCtx)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x9cc7c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_generic_dictCtx", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4HC_compress_generic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t*, int32_t, int32_t, ::GlobalNamespace::LL_limitedOutput_directive)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_generic)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9cc7e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_generic", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_compress_HC_extStateHC_fastReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_compress_HC_extStateHC_fastReset)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9cc7f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_HC_extStateHC_fastReset", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_compress_HC_extStateHC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*, uint8_t*, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_compress_HC_extStateHC)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9cc806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_HC_extStateHC", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_compress_HC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_compress_HC)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9cbccb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_HC", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_NbCommonBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_NbCommonBytes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cc8148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_NbCommonBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint8_t*, uint8_t*, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_count)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x9cc81cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_count", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_hashPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(void*, ::GlobalNamespace::LL_tableType_t)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_hashPosition)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9cc83d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_hashPosition", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_putPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, void*, ::GlobalNamespace::LL_tableType_t, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_putPosition)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9cc8470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_putPosition", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL64.LZ4_getPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*, void*, ::GlobalNamespace::LL_tableType_t, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL64::LZ4_getPosition)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9cc85a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_getPosition", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
inline void K4os::Compression::LZ4::Engine::LL64::setStaticF_clTable(::ArrayW<::GlobalNamespace::LL_cParams_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::LL_cParams_t>, "clTable", ::K4os::Compression::LZ4::Engine::LL64*>(std::forward<::ArrayW<::GlobalNamespace::LL_cParams_t>>(value));
}
inline ::ArrayW<::GlobalNamespace::LL_cParams_t> K4os::Compression::LZ4::Engine::LL64::getStaticF_clTable()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::LL_cParams_t>, "clTable", ::K4os::Compression::LZ4::Engine::LL64*>();
}
inline void K4os::Compression::LZ4::Engine::LL64::setStaticF__DeBruijnBytePos(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "_DeBruijnBytePos", ::K4os::Compression::LZ4::Engine::LL64*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> K4os::Compression::LZ4::Engine::LL64::getStaticF__DeBruijnBytePos()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "_DeBruijnBytePos", ::K4os::Compression::LZ4::Engine::LL64*>();
}
inline void K4os::Compression::LZ4::Engine::LL64::setStaticF_DeBruijnBytePos(uint32_t*  value)  {
::cordl_internals::setStaticField<uint32_t*, "DeBruijnBytePos", ::K4os::Compression::LZ4::Engine::LL64*>(std::forward<uint32_t*>(value));
}
inline uint32_t* K4os::Compression::LZ4::Engine::LL64::getStaticF_DeBruijnBytePos()  {
return ::cordl_internals::getStaticField<uint32_t*, "DeBruijnBytePos", ::K4os::Compression::LZ4::Engine::LL64*>();
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_decompress_generic(uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  outputSize, ::GlobalNamespace::LL_endCondition_directive  endOnInput, ::GlobalNamespace::LL_earlyEnd_directive  partialDecoding, ::GlobalNamespace::LL_dict_directive  dict, uint8_t*  lowPrefix, uint8_t*  dictStart, uint32_t  dictSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_decompress_generic", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_endCondition_directive>(), ::i2c::type_of<::GlobalNamespace::LL_earlyEnd_directive>(), ::i2c::type_of<::GlobalNamespace::LL_dict_directive>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, src, dst, srcSize, outputSize, endOnInput, partialDecoding, dict, lowPrefix, dictStart, dictSize);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_decompress_generic(uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  outputSize, bool  endOnInput, bool  partialDecoding, ::GlobalNamespace::LL_dict_directive  dict, uint8_t*  lowPrefix, uint8_t*  dictStart, uint32_t  dictSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_decompress_generic", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_dict_directive>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, src, dst, srcSize, outputSize, endOnInput, partialDecoding, dict, lowPrefix, dictStart, dictSize);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_decompress_safe(uint8_t*  source, uint8_t*  dest, int32_t  compressedSize, int32_t  maxDecompressedSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_decompress_safe", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, dest, compressedSize, maxDecompressedSize);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_compress_generic(::GlobalNamespace::LL_LZ4_stream_t*  cctx, uint8_t*  source, uint8_t*  dest, int32_t  inputSize, int32_t*  inputConsumed, int32_t  maxOutputSize, ::GlobalNamespace::LL_limitedOutput_directive  outputDirective, ::GlobalNamespace::LL_tableType_t  tableType, ::GlobalNamespace::LL_dict_directive  dictDirective, ::GlobalNamespace::LL_dictIssue_directive  dictIssue, int32_t  acceleration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_generic", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_stream_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<::GlobalNamespace::LL_dict_directive>(), ::i2c::type_of<::GlobalNamespace::LL_dictIssue_directive>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cctx, source, dest, inputSize, inputConsumed, maxOutputSize, outputDirective, tableType, dictDirective, dictIssue, acceleration);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_compress_fast_extState(::GlobalNamespace::LL_LZ4_stream_t*  state, uint8_t*  source, uint8_t*  dest, int32_t  inputSize, int32_t  maxOutputSize, int32_t  acceleration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_fast_extState", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_stream_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, source, dest, inputSize, maxOutputSize, acceleration);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_compress_fast(uint8_t*  source, uint8_t*  dest, int32_t  inputSize, int32_t  maxOutputSize, int32_t  acceleration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_fast", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, dest, inputSize, maxOutputSize, acceleration);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_countPattern(uint8_t*  ip, uint8_t*  iEnd, uint32_t  pattern32)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_countPattern", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ip, iEnd, pattern32);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_InsertAndGetWiderMatch(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4, uint8_t*  ip, uint8_t*  iLowLimit, uint8_t*  iHighLimit, int32_t  longest, uint8_t*  matchpos, uint8_t*  startpos, int32_t  maxNbAttempts, bool  patternAnalysis, bool  chainSwap, ::GlobalNamespace::LL_dictCtx_directive  dict, ::GlobalNamespace::LL_HCfavor_e  favorDecSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_InsertAndGetWiderMatch", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>(), ::i2c::type_of<::GlobalNamespace::LL_HCfavor_e>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hc4, ip, iLowLimit, iHighLimit, longest, matchpos, startpos, maxNbAttempts, patternAnalysis, chainSwap, dict, favorDecSpeed);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_InsertAndFindBestMatch(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4, uint8_t*  ip, uint8_t*  iLimit, uint8_t*  matchpos, int32_t  maxNbAttempts, bool  patternAnalysis, ::GlobalNamespace::LL_dictCtx_directive  dict)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_InsertAndFindBestMatch", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hc4, ip, iLimit, matchpos, maxNbAttempts, patternAnalysis, dict);
}
inline ::GlobalNamespace::LL_LZ4HC_match_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_FindLongerMatch(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  ip, uint8_t*  iHighLimit, int32_t  minLen, int32_t  nbSearches, ::GlobalNamespace::LL_dictCtx_directive  dict, ::GlobalNamespace::LL_HCfavor_e  favorDecSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_FindLongerMatch", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>(), ::i2c::type_of<::GlobalNamespace::LL_HCfavor_e>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LL_LZ4HC_match_t>(nullptr, ___internal_method, ctx, ip, iHighLimit, minLen, nbSearches, dict, favorDecSpeed);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_encodeSequence(uint8_t*  ip, uint8_t*  op, uint8_t*  anchor, int32_t  matchLength, uint8_t*  match, ::GlobalNamespace::LL_limitedOutput_directive  limit, uint8_t*  oend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_encodeSequence", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ip, op, anchor, matchLength, match, limit, oend);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_hashChain(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  source, uint8_t*  dest, int32_t*  srcSizePtr, int32_t  maxOutputSize, int32_t  maxNbAttempts, ::GlobalNamespace::LL_limitedOutput_directive  limit, ::GlobalNamespace::LL_dictCtx_directive  dict)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_hashChain", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ctx, source, dest, srcSizePtr, maxOutputSize, maxNbAttempts, limit, dict);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_optimal(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  source, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  nbSearches, uint32_t  sufficient_len, ::GlobalNamespace::LL_limitedOutput_directive  limit, bool  fullUpdate, ::GlobalNamespace::LL_dictCtx_directive  dict, ::GlobalNamespace::LL_HCfavor_e  favorDecSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_optimal", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>(), ::i2c::type_of<::GlobalNamespace::LL_HCfavor_e>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ctx, source, dst, srcSizePtr, dstCapacity, nbSearches, sufficient_len, limit, fullUpdate, dict, favorDecSpeed);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_generic_internal(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  src, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  cLevel, ::GlobalNamespace::LL_limitedOutput_directive  limit, ::GlobalNamespace::LL_dictCtx_directive  dict)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_generic_internal", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>(), ::i2c::type_of<::GlobalNamespace::LL_dictCtx_directive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ctx, src, dst, srcSizePtr, dstCapacity, cLevel, limit, dict);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_generic_noDictCtx(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  src, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  cLevel, ::GlobalNamespace::LL_limitedOutput_directive  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_generic_noDictCtx", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ctx, src, dst, srcSizePtr, dstCapacity, cLevel, limit);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_generic_dictCtx(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  src, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  cLevel, ::GlobalNamespace::LL_limitedOutput_directive  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_generic_dictCtx", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ctx, src, dst, srcSizePtr, dstCapacity, cLevel, limit);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4HC_compress_generic(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  src, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  cLevel, ::GlobalNamespace::LL_limitedOutput_directive  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4HC_compress_generic", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LL_limitedOutput_directive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ctx, src, dst, srcSizePtr, dstCapacity, cLevel, limit);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_compress_HC_extStateHC_fastReset(::GlobalNamespace::LL_LZ4_streamHC_t*  state, uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  dstCapacity, int32_t  compressionLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_HC_extStateHC_fastReset", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, src, dst, srcSize, dstCapacity, compressionLevel);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_compress_HC_extStateHC(::GlobalNamespace::LL_LZ4_streamHC_t*  state, uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  dstCapacity, int32_t  compressionLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_HC_extStateHC", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, src, dst, srcSize, dstCapacity, compressionLevel);
}
inline int32_t K4os::Compression::LZ4::Engine::LL64::LZ4_compress_HC(uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  dstCapacity, int32_t  compressionLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_compress_HC", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, src, dst, srcSize, dstCapacity, compressionLevel);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL64::LZ4_NbCommonBytes(uint64_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_NbCommonBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, val);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL64::LZ4_count(uint8_t*  pIn, uint8_t*  pMatch, uint8_t*  pInLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_count", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pIn, pMatch, pInLimit);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL64::LZ4_hashPosition(void*  p, ::GlobalNamespace::LL_tableType_t  tableType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_hashPosition", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, p, tableType);
}
inline void K4os::Compression::LZ4::Engine::LL64::LZ4_putPosition(uint8_t*  p, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  srcBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_putPosition", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, tableBase, tableType, srcBase);
}
inline uint8_t* K4os::Compression::LZ4::Engine::LL64::LZ4_getPosition(uint8_t*  p, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  srcBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL64*>(),
                        {"LZ4_getPosition", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, p, tableBase, tableType, srcBase);
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::Engine::LL64::LL64()   {
}
