#pragma once
// IWYU pragma private; include "Ionic/Zlib/DeflateManager.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_impl.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_impl.hpp"
#include "Ionic/Zlib/zzzz__DeflateFlavor_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Zlib/zzzz__DeflateManager_def.hpp"
#include "Ionic/Zlib/zzzz__BlockState_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Ionic/Zlib/zzzz__DeflateFlavor_def.hpp"
#include "Ionic/Zlib/zzzz__DeflateManager_def.hpp"
#include "Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Ionic/Zlib/zzzz__ZTree_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa78da7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._InitializeLazyMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::_InitializeLazyMatch)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa78dcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_InitializeLazyMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._InitializeTreeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::_InitializeTreeData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa78df20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_InitializeTreeData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._InitializeBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::_InitializeBlocks)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa78e01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_InitializeBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.pqdownheap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(::ArrayW<int16_t>, int32_t)>(&::Ionic::Zlib::DeflateManager::pqdownheap)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa78e1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"pqdownheap", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._IsSmaller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int16_t>, int32_t, int32_t, ::ArrayW<int8_t>)>(&::Ionic::Zlib::DeflateManager::_IsSmaller)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa78e394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_IsSmaller", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.scan_tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(::ArrayW<int16_t>, int32_t)>(&::Ionic::Zlib::DeflateManager::scan_tree)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa78e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"scan_tree", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.build_bl_tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::build_bl_tree)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa78e64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"build_bl_tree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.send_all_trees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(int32_t, int32_t, int32_t)>(&::Ionic::Zlib::DeflateManager::send_all_trees)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa78e7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_all_trees", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.send_tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(::ArrayW<int16_t>, int32_t)>(&::Ionic::Zlib::DeflateManager::send_tree)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa78ea14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_tree", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.put_bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::DeflateManager::put_bytes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa78ec68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"put_bytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.send_code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(int32_t, ::ArrayW<int16_t>)>(&::Ionic::Zlib::DeflateManager::send_code)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa78ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_code", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.send_bits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(int32_t, int32_t)>(&::Ionic::Zlib::DeflateManager::send_bits)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa78e8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_bits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._tr_align
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::_tr_align)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa78ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_tr_align", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._tr_tally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::DeflateManager::*)(int32_t, int32_t)>(&::Ionic::Zlib::DeflateManager::_tr_tally)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xa78eec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_tr_tally", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.send_compressed_block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(::ArrayW<int16_t>, ::ArrayW<int16_t>)>(&::Ionic::Zlib::DeflateManager::send_compressed_block)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xa78f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_compressed_block", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.set_data_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::set_data_type)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa78f4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"set_data_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.bi_flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::bi_flush)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa78edfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"bi_flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.bi_windup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::bi_windup)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa78f654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"bi_windup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.copy_block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(int32_t, int32_t, bool)>(&::Ionic::Zlib::DeflateManager::copy_block)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa78f704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"copy_block", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.flush_block_only
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(bool)>(&::Ionic::Zlib::DeflateManager::flush_block_only)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa78f81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"flush_block_only", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.DeflateNone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::BlockState (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::DeflateManager::DeflateNone)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa78fa7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"DeflateNone", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._tr_stored_block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(int32_t, int32_t, bool)>(&::Ionic::Zlib::DeflateManager::_tr_stored_block)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa78fe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_tr_stored_block", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._tr_flush_block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(int32_t, int32_t, bool)>(&::Ionic::Zlib::DeflateManager::_tr_flush_block)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa78f860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_tr_flush_block", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager._fillWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::_fillWindow)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xa78fbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_fillWindow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.DeflateFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::BlockState (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::DeflateManager::DeflateFast)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xa78ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"DeflateFast", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.DeflateSlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::BlockState (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::DeflateManager::DeflateSlow)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0xa790834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"DeflateSlow", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.longest_match
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)(int32_t)>(&::Ionic::Zlib::DeflateManager::longest_match)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0xa790374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"longest_match", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.get_WantRfc1950HeaderBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::get_WantRfc1950HeaderBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa790db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"get_WantRfc1950HeaderBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.set_WantRfc1950HeaderBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)(bool)>(&::Ionic::Zlib::DeflateManager::set_WantRfc1950HeaderBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa790db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"set_WantRfc1950HeaderBytes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::ZlibCodec*, ::Ionic::Zlib::CompressionLevel)>(&::Ionic::Zlib::DeflateManager::Initialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa790dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::ZlibCodec*, ::Ionic::Zlib::CompressionLevel, int32_t)>(&::Ionic::Zlib::DeflateManager::Initialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa790dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::ZlibCodec*, ::Ionic::Zlib::CompressionLevel, int32_t, ::Ionic::Zlib::CompressionStrategy)>(&::Ionic::Zlib::DeflateManager::Initialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa791154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::ZlibCodec*, ::Ionic::Zlib::CompressionLevel, int32_t, int32_t, ::Ionic::Zlib::CompressionStrategy)>(&::Ionic::Zlib::DeflateManager::Initialize)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xa790e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::Reset)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa7911ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::End)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa7912f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.SetDeflater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager::*)()>(&::Ionic::Zlib::DeflateManager::SetDeflater)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa78de28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"SetDeflater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.SetParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::CompressionLevel, ::Ionic::Zlib::CompressionStrategy)>(&::Ionic::Zlib::DeflateManager::SetParams)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa7914b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"SetParams", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.SetDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::DeflateManager::SetDictionary)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa7915ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::DeflateManager::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::DeflateManager::Deflate)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0xa791888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Deflate", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Ionic::Zlib::DeflateManager_CompressFunc*& Ionic::Zlib::DeflateManager::__cordl_internal_get_DeflateFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeflateFunction;
}
constexpr ::Ionic::Zlib::DeflateManager_CompressFunc* const& Ionic::Zlib::DeflateManager::__cordl_internal_get_DeflateFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeflateFunction;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_DeflateFunction(::Ionic::Zlib::DeflateManager_CompressFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeflateFunction = value;
}
constexpr ::Ionic::Zlib::ZlibCodec*& Ionic::Zlib::DeflateManager::__cordl_internal_get__codec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr ::Ionic::Zlib::ZlibCodec* const& Ionic::Zlib::DeflateManager::__cordl_internal_get__codec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set__codec(::Ionic::Zlib::ZlibCodec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codec = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_status(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
constexpr ::ArrayW<uint8_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_pending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pending;
}
constexpr ::ArrayW<uint8_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_pending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pending;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_pending(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pending = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_nextPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPending;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_nextPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPending;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_nextPending(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPending = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_pendingCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingCount;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_pendingCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingCount;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_pendingCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingCount = value;
}
constexpr int8_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_data_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data_type;
}
constexpr int8_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_data_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data_type;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_data_type(int8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data_type = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_last_flush()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last_flush;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_last_flush() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last_flush;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_last_flush(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___last_flush = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_w_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w_size;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_w_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w_size;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_w_size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___w_size = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_w_bits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w_bits;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_w_bits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w_bits;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_w_bits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___w_bits = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_w_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w_mask;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_w_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w_mask;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_w_mask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___w_mask = value;
}
constexpr ::ArrayW<uint8_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_window()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___window;
}
constexpr ::ArrayW<uint8_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_window() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___window;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_window(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___window = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_window_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___window_size;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_window_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___window_size;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_window_size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___window_size = value;
}
constexpr ::ArrayW<int16_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::ArrayW<int16_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_prev(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
constexpr ::ArrayW<int16_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr ::ArrayW<int16_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_head(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___head = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_ins_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ins_h;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_ins_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ins_h;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_ins_h(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ins_h = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_hash_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_size;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_hash_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_size;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_hash_size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash_size = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_hash_bits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_bits;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_hash_bits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_bits;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_hash_bits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash_bits = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_hash_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_mask;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_hash_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_mask;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_hash_mask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash_mask = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_hash_shift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_shift;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_hash_shift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_shift;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_hash_shift(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash_shift = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_block_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___block_start;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_block_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___block_start;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_block_start(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___block_start = value;
}
constexpr ::Ionic::Zlib::DeflateManager_Config*& Ionic::Zlib::DeflateManager::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::Ionic::Zlib::DeflateManager_Config* const& Ionic::Zlib::DeflateManager::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_config(::Ionic::Zlib::DeflateManager_Config*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_match_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match_length;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_match_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match_length;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_match_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___match_length = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_prev_match()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev_match;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_prev_match() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev_match;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_prev_match(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev_match = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_match_available()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match_available;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_match_available() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match_available;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_match_available(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___match_available = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_strstart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strstart;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_strstart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strstart;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_strstart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strstart = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_match_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match_start;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_match_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match_start;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_match_start(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___match_start = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_lookahead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookahead;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_lookahead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookahead;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_lookahead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookahead = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_prev_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev_length;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_prev_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev_length;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_prev_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev_length = value;
}
constexpr ::Ionic::Zlib::CompressionLevel& Ionic::Zlib::DeflateManager::__cordl_internal_get_compressionLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionLevel;
}
constexpr ::Ionic::Zlib::CompressionLevel const& Ionic::Zlib::DeflateManager::__cordl_internal_get_compressionLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionLevel;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_compressionLevel(::Ionic::Zlib::CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressionLevel = value;
}
constexpr ::Ionic::Zlib::CompressionStrategy& Ionic::Zlib::DeflateManager::__cordl_internal_get_compressionStrategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionStrategy;
}
constexpr ::Ionic::Zlib::CompressionStrategy const& Ionic::Zlib::DeflateManager::__cordl_internal_get_compressionStrategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionStrategy;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_compressionStrategy(::Ionic::Zlib::CompressionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressionStrategy = value;
}
constexpr ::ArrayW<int16_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_dyn_ltree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dyn_ltree;
}
constexpr ::ArrayW<int16_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_dyn_ltree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dyn_ltree;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_dyn_ltree(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dyn_ltree = value;
}
constexpr ::ArrayW<int16_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_dyn_dtree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dyn_dtree;
}
constexpr ::ArrayW<int16_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_dyn_dtree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dyn_dtree;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_dyn_dtree(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dyn_dtree = value;
}
constexpr ::ArrayW<int16_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_bl_tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bl_tree;
}
constexpr ::ArrayW<int16_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_bl_tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bl_tree;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_bl_tree(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bl_tree = value;
}
constexpr ::Ionic::Zlib::ZTree*& Ionic::Zlib::DeflateManager::__cordl_internal_get_treeLiterals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeLiterals;
}
constexpr ::Ionic::Zlib::ZTree* const& Ionic::Zlib::DeflateManager::__cordl_internal_get_treeLiterals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeLiterals;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_treeLiterals(::Ionic::Zlib::ZTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeLiterals = value;
}
constexpr ::Ionic::Zlib::ZTree*& Ionic::Zlib::DeflateManager::__cordl_internal_get_treeDistances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeDistances;
}
constexpr ::Ionic::Zlib::ZTree* const& Ionic::Zlib::DeflateManager::__cordl_internal_get_treeDistances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeDistances;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_treeDistances(::Ionic::Zlib::ZTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeDistances = value;
}
constexpr ::Ionic::Zlib::ZTree*& Ionic::Zlib::DeflateManager::__cordl_internal_get_treeBitLengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeBitLengths;
}
constexpr ::Ionic::Zlib::ZTree* const& Ionic::Zlib::DeflateManager::__cordl_internal_get_treeBitLengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeBitLengths;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_treeBitLengths(::Ionic::Zlib::ZTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeBitLengths = value;
}
constexpr ::ArrayW<int16_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_bl_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bl_count;
}
constexpr ::ArrayW<int16_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_bl_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bl_count;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_bl_count(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bl_count = value;
}
constexpr ::ArrayW<int32_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_heap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap;
}
constexpr ::ArrayW<int32_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_heap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_heap(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heap = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_heap_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap_len;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_heap_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap_len;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_heap_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heap_len = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_heap_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap_max;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_heap_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap_max;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_heap_max(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heap_max = value;
}
constexpr ::ArrayW<int8_t>& Ionic::Zlib::DeflateManager::__cordl_internal_get_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr ::ArrayW<int8_t> const& Ionic::Zlib::DeflateManager::__cordl_internal_get_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_depth(::ArrayW<int8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depth = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get__lengthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthOffset;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get__lengthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthOffset;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set__lengthOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lengthOffset = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_lit_bufsize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lit_bufsize;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_lit_bufsize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lit_bufsize;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_lit_bufsize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lit_bufsize = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_last_lit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last_lit;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_last_lit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last_lit;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_last_lit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___last_lit = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get__distanceOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceOffset;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get__distanceOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceOffset;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set__distanceOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceOffset = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_opt_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opt_len;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_opt_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opt_len;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_opt_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___opt_len = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_static_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___static_len;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_static_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___static_len;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_static_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___static_len = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_matches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matches;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_matches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matches;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_matches(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matches = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_last_eob_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last_eob_len;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_last_eob_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last_eob_len;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_last_eob_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___last_eob_len = value;
}
constexpr int16_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_bi_buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bi_buf;
}
constexpr int16_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_bi_buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bi_buf;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_bi_buf(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bi_buf = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager::__cordl_internal_get_bi_valid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bi_valid;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager::__cordl_internal_get_bi_valid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bi_valid;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_bi_valid(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bi_valid = value;
}
constexpr bool& Ionic::Zlib::DeflateManager::__cordl_internal_get_Rfc1950BytesEmitted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rfc1950BytesEmitted;
}
constexpr bool const& Ionic::Zlib::DeflateManager::__cordl_internal_get_Rfc1950BytesEmitted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rfc1950BytesEmitted;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set_Rfc1950BytesEmitted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rfc1950BytesEmitted = value;
}
constexpr bool& Ionic::Zlib::DeflateManager::__cordl_internal_get__WantRfc1950HeaderBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WantRfc1950HeaderBytes;
}
constexpr bool const& Ionic::Zlib::DeflateManager::__cordl_internal_get__WantRfc1950HeaderBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WantRfc1950HeaderBytes;
}
constexpr void Ionic::Zlib::DeflateManager::__cordl_internal_set__WantRfc1950HeaderBytes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WantRfc1950HeaderBytes = value;
}
inline void Ionic::Zlib::DeflateManager::setStaticF_MEM_LEVEL_MAX(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MEM_LEVEL_MAX", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_MEM_LEVEL_MAX()  {
return ::cordl_internals::getStaticField<int32_t, "MEM_LEVEL_MAX", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_MEM_LEVEL_DEFAULT(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MEM_LEVEL_DEFAULT", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_MEM_LEVEL_DEFAULT()  {
return ::cordl_internals::getStaticField<int32_t, "MEM_LEVEL_DEFAULT", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF__ErrorMessage(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_ErrorMessage", ::Ionic::Zlib::DeflateManager*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Ionic::Zlib::DeflateManager::getStaticF__ErrorMessage()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_ErrorMessage", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_PRESET_DICT(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "PRESET_DICT", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_PRESET_DICT()  {
return ::cordl_internals::getStaticField<int32_t, "PRESET_DICT", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_INIT_STATE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "INIT_STATE", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_INIT_STATE()  {
return ::cordl_internals::getStaticField<int32_t, "INIT_STATE", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_BUSY_STATE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BUSY_STATE", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_BUSY_STATE()  {
return ::cordl_internals::getStaticField<int32_t, "BUSY_STATE", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_FINISH_STATE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "FINISH_STATE", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_FINISH_STATE()  {
return ::cordl_internals::getStaticField<int32_t, "FINISH_STATE", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_Z_DEFLATED(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Z_DEFLATED", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_Z_DEFLATED()  {
return ::cordl_internals::getStaticField<int32_t, "Z_DEFLATED", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_STORED_BLOCK(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "STORED_BLOCK", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_STORED_BLOCK()  {
return ::cordl_internals::getStaticField<int32_t, "STORED_BLOCK", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_STATIC_TREES(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "STATIC_TREES", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_STATIC_TREES()  {
return ::cordl_internals::getStaticField<int32_t, "STATIC_TREES", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_DYN_TREES(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DYN_TREES", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_DYN_TREES()  {
return ::cordl_internals::getStaticField<int32_t, "DYN_TREES", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_Z_BINARY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Z_BINARY", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_Z_BINARY()  {
return ::cordl_internals::getStaticField<int32_t, "Z_BINARY", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_Z_ASCII(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Z_ASCII", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_Z_ASCII()  {
return ::cordl_internals::getStaticField<int32_t, "Z_ASCII", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_Z_UNKNOWN(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Z_UNKNOWN", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_Z_UNKNOWN()  {
return ::cordl_internals::getStaticField<int32_t, "Z_UNKNOWN", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_Buf_size(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Buf_size", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_Buf_size()  {
return ::cordl_internals::getStaticField<int32_t, "Buf_size", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_MIN_MATCH(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MIN_MATCH", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_MIN_MATCH()  {
return ::cordl_internals::getStaticField<int32_t, "MIN_MATCH", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_MAX_MATCH(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MAX_MATCH", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_MAX_MATCH()  {
return ::cordl_internals::getStaticField<int32_t, "MAX_MATCH", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_MIN_LOOKAHEAD(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MIN_LOOKAHEAD", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_MIN_LOOKAHEAD()  {
return ::cordl_internals::getStaticField<int32_t, "MIN_LOOKAHEAD", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_HEAP_SIZE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HEAP_SIZE", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_HEAP_SIZE()  {
return ::cordl_internals::getStaticField<int32_t, "HEAP_SIZE", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::setStaticF_END_BLOCK(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "END_BLOCK", ::Ionic::Zlib::DeflateManager*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::DeflateManager::getStaticF_END_BLOCK()  {
return ::cordl_internals::getStaticField<int32_t, "END_BLOCK", ::Ionic::Zlib::DeflateManager*>();
}
inline void Ionic::Zlib::DeflateManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::_InitializeLazyMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_InitializeLazyMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::_InitializeTreeData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_InitializeTreeData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::_InitializeBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_InitializeBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::pqdownheap(::ArrayW<int16_t>  tree, int32_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"pqdownheap", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, k);
}
inline bool Ionic::Zlib::DeflateManager::_IsSmaller(::ArrayW<int16_t>  tree, int32_t  n, int32_t  m, ::ArrayW<int8_t>  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_IsSmaller", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tree, n, m, depth);
}
inline void Ionic::Zlib::DeflateManager::scan_tree(::ArrayW<int16_t>  tree, int32_t  max_code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"scan_tree", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, max_code);
}
inline int32_t Ionic::Zlib::DeflateManager::build_bl_tree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"build_bl_tree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::send_all_trees(int32_t  lcodes, int32_t  dcodes, int32_t  blcodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_all_trees", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lcodes, dcodes, blcodes);
}
inline void Ionic::Zlib::DeflateManager::send_tree(::ArrayW<int16_t>  tree, int32_t  max_code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_tree", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, max_code);
}
inline void Ionic::Zlib::DeflateManager::put_bytes(::ArrayW<uint8_t>  p, int32_t  start, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"put_bytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, start, len);
}
inline void Ionic::Zlib::DeflateManager::send_code(int32_t  c, ::ArrayW<int16_t>  tree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_code", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, tree);
}
inline void Ionic::Zlib::DeflateManager::send_bits(int32_t  value, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_bits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, length);
}
inline void Ionic::Zlib::DeflateManager::_tr_align()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_tr_align", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Ionic::Zlib::DeflateManager::_tr_tally(int32_t  dist, int32_t  lc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_tr_tally", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dist, lc);
}
inline void Ionic::Zlib::DeflateManager::send_compressed_block(::ArrayW<int16_t>  ltree, ::ArrayW<int16_t>  dtree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"send_compressed_block", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ltree, dtree);
}
inline void Ionic::Zlib::DeflateManager::set_data_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"set_data_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::bi_flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"bi_flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::bi_windup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"bi_windup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::copy_block(int32_t  buf, int32_t  len, bool  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"copy_block", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, len, header);
}
inline void Ionic::Zlib::DeflateManager::flush_block_only(bool  eof)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"flush_block_only", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eof);
}
inline ::Ionic::Zlib::BlockState Ionic::Zlib::DeflateManager::DeflateNone(::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"DeflateNone", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::BlockState>(this, ___internal_method, flush);
}
inline void Ionic::Zlib::DeflateManager::_tr_stored_block(int32_t  buf, int32_t  stored_len, bool  eof)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_tr_stored_block", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, stored_len, eof);
}
inline void Ionic::Zlib::DeflateManager::_tr_flush_block(int32_t  buf, int32_t  stored_len, bool  eof)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_tr_flush_block", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, stored_len, eof);
}
inline void Ionic::Zlib::DeflateManager::_fillWindow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"_fillWindow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ionic::Zlib::BlockState Ionic::Zlib::DeflateManager::DeflateFast(::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"DeflateFast", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::BlockState>(this, ___internal_method, flush);
}
inline ::Ionic::Zlib::BlockState Ionic::Zlib::DeflateManager::DeflateSlow(::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"DeflateSlow", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::BlockState>(this, ___internal_method, flush);
}
inline int32_t Ionic::Zlib::DeflateManager::longest_match(int32_t  cur_match)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"longest_match", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cur_match);
}
inline bool Ionic::Zlib::DeflateManager::get_WantRfc1950HeaderBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"get_WantRfc1950HeaderBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::set_WantRfc1950HeaderBytes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"set_WantRfc1950HeaderBytes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::DeflateManager::Initialize(::Ionic::Zlib::ZlibCodec*  codec, ::Ionic::Zlib::CompressionLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, codec, level);
}
inline int32_t Ionic::Zlib::DeflateManager::Initialize(::Ionic::Zlib::ZlibCodec*  codec, ::Ionic::Zlib::CompressionLevel  level, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, codec, level, bits);
}
inline int32_t Ionic::Zlib::DeflateManager::Initialize(::Ionic::Zlib::ZlibCodec*  codec, ::Ionic::Zlib::CompressionLevel  level, int32_t  bits, ::Ionic::Zlib::CompressionStrategy  compressionStrategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, codec, level, bits, compressionStrategy);
}
inline int32_t Ionic::Zlib::DeflateManager::Initialize(::Ionic::Zlib::ZlibCodec*  codec, ::Ionic::Zlib::CompressionLevel  level, int32_t  windowBits, int32_t  memLevel, ::Ionic::Zlib::CompressionStrategy  strategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, codec, level, windowBits, memLevel, strategy);
}
inline void Ionic::Zlib::DeflateManager::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::DeflateManager::End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::DeflateManager::SetDeflater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"SetDeflater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::DeflateManager::SetParams(::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::CompressionStrategy  strategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"SetParams", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, level, strategy);
}
inline int32_t Ionic::Zlib::DeflateManager::SetDictionary(::ArrayW<uint8_t>  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dictionary);
}
inline int32_t Ionic::Zlib::DeflateManager::Deflate(::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager*>(),
                        {"Deflate", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline ::Ionic::Zlib::DeflateManager* Ionic::Zlib::DeflateManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::DeflateManager*>());
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::DeflateManager::DeflateManager()   {
}
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager_Config._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager_Config::*)(int32_t, int32_t, int32_t, int32_t, ::Ionic::Zlib::DeflateFlavor)>(&::Ionic::Zlib::DeflateManager_Config::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa792414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager_Config*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Ionic::Zlib::DeflateFlavor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager_Config.Lookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::DeflateManager_Config* (*)(::Ionic::Zlib::CompressionLevel)>(&::Ionic::Zlib::DeflateManager_Config::Lookup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa78ddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager_Config*>(),
                        {"Lookup", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_GoodLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoodLength;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_GoodLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoodLength;
}
constexpr void Ionic::Zlib::DeflateManager_Config::__cordl_internal_set_GoodLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoodLength = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_MaxLazy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLazy;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_MaxLazy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLazy;
}
constexpr void Ionic::Zlib::DeflateManager_Config::__cordl_internal_set_MaxLazy(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLazy = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_NiceLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NiceLength;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_NiceLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NiceLength;
}
constexpr void Ionic::Zlib::DeflateManager_Config::__cordl_internal_set_NiceLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NiceLength = value;
}
constexpr int32_t& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_MaxChainLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxChainLength;
}
constexpr int32_t const& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_MaxChainLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxChainLength;
}
constexpr void Ionic::Zlib::DeflateManager_Config::__cordl_internal_set_MaxChainLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxChainLength = value;
}
constexpr ::Ionic::Zlib::DeflateFlavor& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_Flavor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flavor;
}
constexpr ::Ionic::Zlib::DeflateFlavor const& Ionic::Zlib::DeflateManager_Config::__cordl_internal_get_Flavor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flavor;
}
constexpr void Ionic::Zlib::DeflateManager_Config::__cordl_internal_set_Flavor(::Ionic::Zlib::DeflateFlavor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flavor = value;
}
inline void Ionic::Zlib::DeflateManager_Config::setStaticF_Table(::ArrayW<::Ionic::Zlib::DeflateManager_Config*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Ionic::Zlib::DeflateManager_Config*>, "Table", ::Ionic::Zlib::DeflateManager_Config*>(std::forward<::ArrayW<::Ionic::Zlib::DeflateManager_Config*>>(value));
}
inline ::ArrayW<::Ionic::Zlib::DeflateManager_Config*> Ionic::Zlib::DeflateManager_Config::getStaticF_Table()  {
return ::cordl_internals::getStaticField<::ArrayW<::Ionic::Zlib::DeflateManager_Config*>, "Table", ::Ionic::Zlib::DeflateManager_Config*>();
}
inline void Ionic::Zlib::DeflateManager_Config::_ctor(int32_t  goodLength, int32_t  maxLazy, int32_t  niceLength, int32_t  maxChainLength, ::Ionic::Zlib::DeflateFlavor  flavor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager_Config*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Ionic::Zlib::DeflateFlavor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goodLength, maxLazy, niceLength, maxChainLength, flavor);
}
inline ::Ionic::Zlib::DeflateManager_Config* Ionic::Zlib::DeflateManager_Config::Lookup(::Ionic::Zlib::CompressionLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager_Config*>(),
                        {"Lookup", {}, {::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::DeflateManager_Config*>(nullptr, ___internal_method, level);
}
inline ::Ionic::Zlib::DeflateManager_Config* Ionic::Zlib::DeflateManager_Config::New_ctor(int32_t  goodLength, int32_t  maxLazy, int32_t  niceLength, int32_t  maxChainLength, ::Ionic::Zlib::DeflateFlavor  flavor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::DeflateManager_Config*>(goodLength, maxLazy, niceLength, maxChainLength, flavor));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::DeflateManager_Config::DeflateManager_Config()   {
}
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager_CompressFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::DeflateManager_CompressFunc::*)(::System::Object*, ::System::IntPtr)>(&::Ionic::Zlib::DeflateManager_CompressFunc::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa791414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager_CompressFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::BlockState (::Ionic::Zlib::DeflateManager_CompressFunc::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::DeflateManager_CompressFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa792354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager_CompressFunc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Ionic::Zlib::DeflateManager_CompressFunc::*)(::Ionic::Zlib::FlushType, ::System::AsyncCallback*, ::System::Object*)>(&::Ionic::Zlib::DeflateManager_CompressFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa792368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::DeflateManager_CompressFunc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::BlockState (::Ionic::Zlib::DeflateManager_CompressFunc::*)(::System::IAsyncResult*)>(&::Ionic::Zlib::DeflateManager_CompressFunc::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7923ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(),
                    {::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Ionic::Zlib::DeflateManager_CompressFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Ionic::Zlib::BlockState Ionic::Zlib::DeflateManager_CompressFunc::Invoke(::Ionic::Zlib::FlushType  flush)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::BlockState>(this, ___internal_method, flush);
}
inline ::System::IAsyncResult* Ionic::Zlib::DeflateManager_CompressFunc::BeginInvoke(::Ionic::Zlib::FlushType  flush, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, flush, callback, object);
}
inline ::Ionic::Zlib::BlockState Ionic::Zlib::DeflateManager_CompressFunc::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::DeflateManager_CompressFunc*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::BlockState>(this, ___internal_method, result);
}
inline ::Ionic::Zlib::DeflateManager_CompressFunc* Ionic::Zlib::DeflateManager_CompressFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::DeflateManager_CompressFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::DeflateManager_CompressFunc::DeflateManager_CompressFunc()   {
}
