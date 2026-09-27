#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__Algorithm_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_HCfavor_e_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4HC_match_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4HC_optimal_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_stream_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_cParams_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dictCtx_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dictIssue_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dict_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_earlyEnd_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_endCondition_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_limitedOutput_directive_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_lz4hc_strat_e_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_repeat_state_e_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_tableType_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_variable_length_error_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_setCompressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, int32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_setCompressionLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9cbb8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_setCompressionLevel", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_initStreamHC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LL_LZ4_streamHC_t* (*)(void*, int32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_initStreamHC)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9cbb92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_initStreamHC", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_initStreamHC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LL_LZ4_streamHC_t* (*)(::GlobalNamespace::LL_LZ4_streamHC_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_initStreamHC)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cbb9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_initStreamHC", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_resetStreamHC_fast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, int32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_resetStreamHC_fast)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9cbba14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_resetStreamHC_fast", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.HASH_FUNCTION
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::K4os::Compression::LZ4::Engine::LL::HASH_FUNCTION)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cbbacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"HASH_FUNCTION", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.DELTANEXTU16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<uint16_t> (*)(uint16_t*, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL::DELTANEXTU16)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cbbae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"DELTANEXTU16", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_hashPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(void*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_hashPtr)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9cbbaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_hashPtr", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_Insert)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9cbbba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_Insert", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_setExternalDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_setExternalDict)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9cbbd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_setExternalDict", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_clearTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LL_LZ4_streamHC_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_clearTables)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cbbdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_clearTables", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_init_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LL_LZ4_streamHC_t*, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_init_internal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9cbbedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_init_internal", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_rotl32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_rotl32)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cbbf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_rotl32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_protectDictEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_protectDictEnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cbbf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_protectDictEnd", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_countBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*, uint8_t*, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_countBack)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9cbbf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_countBack", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_reverseCountPattern
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint8_t*, uint8_t*, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_reverseCountPattern)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cbc050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_reverseCountPattern", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_rotatePattern
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_rotatePattern)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9cbc15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_rotatePattern", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_literalsPrice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_literalsPrice)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9cbc1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_literalsPrice", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4HC_sequencePrice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4HC_sequencePrice)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9cbc1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_sequencePrice", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.get_Enforce32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::K4os::Compression::LZ4::Engine::LL::get_Enforce32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cbc28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"get_Enforce32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.get_Algorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::K4os::Compression::LZ4::Engine::Algorithm (*)()>(&::K4os::Compression::LZ4::Engine::LL::get_Algorithm)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9cbc2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"get_Algorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_compressBound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_compressBound)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9cbc3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_compressBound", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_hash4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, ::GlobalNamespace::LL_tableType_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_hash4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cbc3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_hash4", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_hash5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t, ::GlobalNamespace::LL_tableType_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_hash5)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9cbc3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_hash5", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_clearHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, void*, ::GlobalNamespace::LL_tableType_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_clearHash)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9cbc420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_clearHash", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_putIndexOnHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, uint32_t, void*, ::GlobalNamespace::LL_tableType_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_putIndexOnHash)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cbc450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_putIndexOnHash", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_putPositionOnHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint32_t, void*, ::GlobalNamespace::LL_tableType_t, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_putPositionOnHash)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9cbc470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_putPositionOnHash", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_getIndexOnHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, void*, ::GlobalNamespace::LL_tableType_t)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_getIndexOnHash)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9cbc4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_getIndexOnHash", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_getPositionOnHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint32_t, void*, ::GlobalNamespace::LL_tableType_t, uint8_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_getPositionOnHash)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9cbc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_getPositionOnHash", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.MIN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::K4os::Compression::LZ4::Engine::LL::MIN)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cbc4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"MIN", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.MIN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL::MIN)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cbc508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"MIN", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.MAX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::K4os::Compression::LZ4::Engine::LL::MAX)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cbc514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"MAX", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.MAX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t, int64_t)>(&::K4os::Compression::LZ4::Engine::LL::MAX)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cbc520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"MAX", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_readVLE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint8_t*, uint8_t*, bool, bool, ::GlobalNamespace::LL_variable_length_error*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_readVLE)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9cbc52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_readVLE", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_variable_length_error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Engine::LL.LZ4_initStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LL_LZ4_stream_t* (*)(::GlobalNamespace::LL_LZ4_stream_t*)>(&::K4os::Compression::LZ4::Engine::LL::LZ4_initStream)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9cbc580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_initStream", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_stream_t*>()}}
                    )));
    return ___internal_method;
  }
};
inline void K4os::Compression::LZ4::Engine::LL::setStaticF__Enforce32_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<Enforce32>k__BackingField", ::K4os::Compression::LZ4::Engine::LL*>(std::forward<bool>(value));
}
inline bool K4os::Compression::LZ4::Engine::LL::getStaticF__Enforce32_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<Enforce32>k__BackingField", ::K4os::Compression::LZ4::Engine::LL*>();
}
inline void K4os::Compression::LZ4::Engine::LL::setStaticF__inc32table(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "_inc32table", ::K4os::Compression::LZ4::Engine::LL*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> K4os::Compression::LZ4::Engine::LL::getStaticF__inc32table()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "_inc32table", ::K4os::Compression::LZ4::Engine::LL*>();
}
inline void K4os::Compression::LZ4::Engine::LL::setStaticF__dec64table(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_dec64table", ::K4os::Compression::LZ4::Engine::LL*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> K4os::Compression::LZ4::Engine::LL::getStaticF__dec64table()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_dec64table", ::K4os::Compression::LZ4::Engine::LL*>();
}
inline void K4os::Compression::LZ4::Engine::LL::setStaticF_inc32table(uint32_t*  value)  {
::cordl_internals::setStaticField<uint32_t*, "inc32table", ::K4os::Compression::LZ4::Engine::LL*>(std::forward<uint32_t*>(value));
}
inline uint32_t* K4os::Compression::LZ4::Engine::LL::getStaticF_inc32table()  {
return ::cordl_internals::getStaticField<uint32_t*, "inc32table", ::K4os::Compression::LZ4::Engine::LL*>();
}
inline void K4os::Compression::LZ4::Engine::LL::setStaticF_dec64table(int32_t*  value)  {
::cordl_internals::setStaticField<int32_t*, "dec64table", ::K4os::Compression::LZ4::Engine::LL*>(std::forward<int32_t*>(value));
}
inline int32_t* K4os::Compression::LZ4::Engine::LL::getStaticF_dec64table()  {
return ::cordl_internals::getStaticField<int32_t*, "dec64table", ::K4os::Compression::LZ4::Engine::LL*>();
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4_setCompressionLevel(::GlobalNamespace::LL_LZ4_streamHC_t*  LZ4_streamHCPtr, int32_t  compressionLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_setCompressionLevel", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, LZ4_streamHCPtr, compressionLevel);
}
inline ::GlobalNamespace::LL_LZ4_streamHC_t* K4os::Compression::LZ4::Engine::LL::LZ4_initStreamHC(void*  buffer, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_initStreamHC", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LL_LZ4_streamHC_t*>(nullptr, ___internal_method, buffer, size);
}
inline ::GlobalNamespace::LL_LZ4_streamHC_t* K4os::Compression::LZ4::Engine::LL::LZ4_initStreamHC(::GlobalNamespace::LL_LZ4_streamHC_t*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_initStreamHC", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LL_LZ4_streamHC_t*>(nullptr, ___internal_method, stream);
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4_resetStreamHC_fast(::GlobalNamespace::LL_LZ4_streamHC_t*  LZ4_streamHCPtr, int32_t  compressionLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_resetStreamHC_fast", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, LZ4_streamHCPtr, compressionLevel);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::HASH_FUNCTION(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"HASH_FUNCTION", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline ::by_ref<uint16_t> K4os::Compression::LZ4::Engine::LL::DELTANEXTU16(uint16_t*  table, uint32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"DELTANEXTU16", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<uint16_t>>(nullptr, ___internal_method, table, pos);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::LZ4HC_hashPtr(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_hashPtr", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ptr);
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4HC_Insert(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4, uint8_t*  ip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_Insert", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hc4, ip);
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4HC_setExternalDict(::GlobalNamespace::LL_LZ4_streamHC_t*  ctxPtr, uint8_t*  newBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_setExternalDict", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctxPtr, newBlock);
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4HC_clearTables(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_clearTables", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hc4);
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4HC_init_internal(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4, uint8_t*  start)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_init_internal", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_streamHC_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hc4, start);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::LZ4HC_rotl32(uint32_t  x, int32_t  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_rotl32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, r);
}
inline bool K4os::Compression::LZ4::Engine::LL::LZ4HC_protectDictEnd(uint32_t  dictLimit, uint32_t  matchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_protectDictEnd", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dictLimit, matchIndex);
}
inline int32_t K4os::Compression::LZ4::Engine::LL::LZ4HC_countBack(uint8_t*  ip, uint8_t*  match, uint8_t*  iMin, uint8_t*  mMin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_countBack", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ip, match, iMin, mMin);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::LZ4HC_reverseCountPattern(uint8_t*  ip, uint8_t*  iLow, uint32_t  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_reverseCountPattern", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ip, iLow, pattern);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::LZ4HC_rotatePattern(uint32_t  rotate, uint32_t  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_rotatePattern", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, rotate, pattern);
}
inline int32_t K4os::Compression::LZ4::Engine::LL::LZ4HC_literalsPrice(int32_t  litlen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_literalsPrice", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, litlen);
}
inline int32_t K4os::Compression::LZ4::Engine::LL::LZ4HC_sequencePrice(int32_t  litlen, int32_t  mlen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4HC_sequencePrice", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, litlen, mlen);
}
inline bool K4os::Compression::LZ4::Engine::LL::get_Enforce32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"get_Enforce32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::K4os::Compression::LZ4::Engine::Algorithm K4os::Compression::LZ4::Engine::LL::get_Algorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"get_Algorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::K4os::Compression::LZ4::Engine::Algorithm>(nullptr, ___internal_method);
}
inline int32_t K4os::Compression::LZ4::Engine::LL::LZ4_compressBound(int32_t  isize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_compressBound", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, isize);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::LZ4_hash4(uint32_t  sequence, ::GlobalNamespace::LL_tableType_t  tableType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_hash4", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, sequence, tableType);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::LZ4_hash5(uint64_t  sequence, ::GlobalNamespace::LL_tableType_t  tableType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_hash5", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, sequence, tableType);
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4_clearHash(uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_clearHash", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, h, tableBase, tableType);
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4_putIndexOnHash(uint32_t  idx, uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_putIndexOnHash", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, h, tableBase, tableType);
}
inline void K4os::Compression::LZ4::Engine::LL::LZ4_putPositionOnHash(uint8_t*  p, uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  srcBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_putPositionOnHash", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, h, tableBase, tableType, srcBase);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::LZ4_getIndexOnHash(uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_getIndexOnHash", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, h, tableBase, tableType);
}
inline uint8_t* K4os::Compression::LZ4::Engine::LL::LZ4_getPositionOnHash(uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  srcBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_getPositionOnHash", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::LL_tableType_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, h, tableBase, tableType, srcBase);
}
inline int32_t K4os::Compression::LZ4::Engine::LL::MIN(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"MIN", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::MIN(uint32_t  a, uint32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"MIN", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, a, b);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::MAX(uint32_t  a, uint32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"MAX", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, a, b);
}
inline int64_t K4os::Compression::LZ4::Engine::LL::MAX(int64_t  a, int64_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"MAX", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, a, b);
}
inline uint32_t K4os::Compression::LZ4::Engine::LL::LZ4_readVLE(uint8_t*  ip, uint8_t*  lencheck, bool  loop_check, bool  initial_check, ::GlobalNamespace::LL_variable_length_error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_readVLE", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LL_variable_length_error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ip, lencheck, loop_check, initial_check, error);
}
inline ::GlobalNamespace::LL_LZ4_stream_t* K4os::Compression::LZ4::Engine::LL::LZ4_initStream(::GlobalNamespace::LL_LZ4_stream_t*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Engine::LL*>(),
                        {"LZ4_initStream", {}, {::i2c::type_of<::GlobalNamespace::LL_LZ4_stream_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LL_LZ4_stream_t*>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::Engine::LL::LL()   {
}
