#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectMeta.hpp"
#include "Fusion/zzzz__NetworkBufferSerializerInfo_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshotList_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshot_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_impl.hpp"
#include "Fusion/zzzz__NetworkObjectMetaFlags_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkBufferSerializerInfo_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshotRef_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshot_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_ListMigration_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_List_def.hpp"
#include "Fusion/zzzz__NetworkObjectNestingKey_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkTRSPData_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__Timeline_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.GetSerializers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Fusion::NetworkBufferSerializerInfo> (*)(bool)>(&::Fusion::NetworkObjectMeta::GetSerializers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fc99ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetSerializers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Serializers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Fusion::NetworkBufferSerializerInfo> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Serializers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fc9a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Serializers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Timeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Timeline* (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Timeline)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fc9a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Timeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkObjectHeader> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc9b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Header", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderFlags (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc9b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_HasMainTRSP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_HasMainTRSP)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc9b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_HasMainTRSP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_MainTRSPData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkTRSPData> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_MainTRSPData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fc9b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_MainTRSPData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Raw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Raw)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fc9b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Raw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Data)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fc9bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_BehaviourChangedTickArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_BehaviourChangedTickArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fc9c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_BehaviourChangedTickArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.GetBehaviourChangedTickArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObjectMeta::*)(::Fusion::NetworkObjectHeaderSnapshotRef)>(&::Fusion::NetworkObjectMeta::GetBehaviourChangedTickArray)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fc9d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetBehaviourChangedTickArray", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.GetMaxBehaviourChangedTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::GetMaxBehaviourChangedTick)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5fc9e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetMaxBehaviourChangedTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.GetMaxBehaviourChangedTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::NetworkObjectMeta::*)(::Fusion::NetworkObjectHeaderSnapshotRef)>(&::Fusion::NetworkObjectMeta::GetMaxBehaviourChangedTick)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fc9f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetMaxBehaviourChangedTick", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_HasSnapshots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_HasSnapshots)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fca01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_HasSnapshots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_SnapshotLatest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshotRef (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_SnapshotLatest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fca02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_SnapshotLatest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_IsStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_IsStruct)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fca034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_IsStruct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_IsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_IsObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fca040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_IsObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fca050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Id)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fca05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_NestingRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_NestingRoot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fca068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_NestingRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_NestingKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectNestingKey (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_NestingKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fca074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_NestingKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_StateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::PlayerRef> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_StateAuthority)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fca080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_StateAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_InputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::PlayerRef> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_InputAuthority)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fca08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_InputAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Shadow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshotRef (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Shadow)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fca098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Shadow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshotRef (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Render)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fca15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Render", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Previous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshotRef (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Previous)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fca1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Previous", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Migration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshotRef (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Migration)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fca238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Migration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_ChangesSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_ChangesSpan)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fca280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_ChangesSpan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.get_Changes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::get_Changes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fca318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Changes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.GetFirstShadowSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::GetFirstShadowSnapshot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fca0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetFirstShadowSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectMeta::*)(::Fusion::Simulation*, ::Fusion::Allocator*)>(&::Fusion::NetworkObjectMeta::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fca374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.GetSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::NetworkObjectMeta::*)(bool)>(&::Fusion::NetworkObjectMeta::GetSnapshot)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fca1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetSnapshot", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectMeta::*)(::Fusion::Allocator*)>(&::Fusion::NetworkObjectMeta::Release)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5fca3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"Release", {}, {::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.NextSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshotRef (::Fusion::NetworkObjectMeta::*)(::Fusion::Tick)>(&::Fusion::NetworkObjectMeta::NextSnapshot)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5fca594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"NextSnapshot", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.AddLatestSnapshotToTimeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectMeta::*)()>(&::Fusion::NetworkObjectMeta::AddLatestSnapshotToTimeline)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fca858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"AddLatestSnapshotToTimeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.FindSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::NetworkObjectMeta::*)(::Fusion::Tick)>(&::Fusion::NetworkObjectMeta::FindSnapshot)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fca924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"FindSnapshot", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.TryFindSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectMeta::*)(::Fusion::Tick, ::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>)>(&::Fusion::NetworkObjectMeta::TryFindSnapshot)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fca9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"TryFindSnapshot", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectMeta::*)(int32_t*, int16_t, int16_t, ::Fusion::NetworkObjectHeaderFlags)>(&::Fusion::NetworkObjectMeta::Init)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fcaa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"Init", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.GetBehaviourPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::Fusion::NetworkObjectMeta::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkObjectMeta::GetBehaviourPtr)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fcaac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetBehaviourPtr", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.EncodePriorityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::NetworkObjectMeta::EncodePriorityLevel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fcaae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"EncodePriorityLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.DecodePriorityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::NetworkObjectMeta::DecodePriorityLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcab4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"DecodePriorityLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.IsIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Fusion::NetworkObjectMeta::IsIdle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fcab54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"IsIdle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Fusion::NetworkObjectMeta::IsActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fcab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"IsActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.GetPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectMeta::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkObjectMeta::GetPriority)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5fcab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetPriority", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.LinkInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectMeta::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectMeta::LinkInstance)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fcadf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"LinkInstance", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectMeta.UnlinkInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectMeta::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectMeta::UnlinkInstance)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fcae88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"UnlinkInstance", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Allocator*& Fusion::NetworkObjectMeta::__cordl_internal_get__allocator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocator;
}
constexpr ::Fusion::Allocator* const& Fusion::NetworkObjectMeta::__cordl_internal_get__allocator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocator;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__allocator(::Fusion::Allocator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allocator = value;
}
constexpr int32_t*& Fusion::NetworkObjectMeta::__cordl_internal_get__changes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changes;
}
constexpr int32_t* const& Fusion::NetworkObjectMeta::__cordl_internal_get__changes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changes;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__changes(int32_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changes = value;
}
constexpr ::Fusion::Simulation*& Fusion::NetworkObjectMeta::__cordl_internal_get__simulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr ::Fusion::Simulation* const& Fusion::NetworkObjectMeta::__cordl_internal_get__simulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__simulation(::Fusion::Simulation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulation = value;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot*& Fusion::NetworkObjectMeta::__cordl_internal_get__shadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shadow;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& Fusion::NetworkObjectMeta::__cordl_internal_get__shadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shadow;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__shadow(::Fusion::NetworkObjectHeaderSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shadow = value;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot*& Fusion::NetworkObjectMeta::__cordl_internal_get__render()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____render;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& Fusion::NetworkObjectMeta::__cordl_internal_get__render() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____render;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__render(::Fusion::NetworkObjectHeaderSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____render = value;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot*& Fusion::NetworkObjectMeta::__cordl_internal_get__previous()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previous;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& Fusion::NetworkObjectMeta::__cordl_internal_get__previous() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previous;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__previous(::Fusion::NetworkObjectHeaderSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previous = value;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot*& Fusion::NetworkObjectMeta::__cordl_internal_get__migration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____migration;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& Fusion::NetworkObjectMeta::__cordl_internal_get__migration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____migration;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__migration(::Fusion::NetworkObjectHeaderSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____migration = value;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshotList& Fusion::NetworkObjectMeta::__cordl_internal_get__snapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshots;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshotList const& Fusion::NetworkObjectMeta::__cordl_internal_get__snapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshots;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__snapshots(::Fusion::NetworkObjectHeaderSnapshotList  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshots = value;
}
constexpr ::ArrayW<::Fusion::NetworkObjectHeaderSnapshot*>& Fusion::NetworkObjectMeta::__cordl_internal_get__snapshotsByIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotsByIndex;
}
constexpr ::ArrayW<::Fusion::NetworkObjectHeaderSnapshot*> const& Fusion::NetworkObjectMeta::__cordl_internal_get__snapshotsByIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotsByIndex;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__snapshotsByIndex(::ArrayW<::Fusion::NetworkObjectHeaderSnapshot*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotsByIndex = value;
}
constexpr ::System::Nullable_1<::Fusion::Tick>& Fusion::NetworkObjectMeta::__cordl_internal_get__snapshotsByIndexLatest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotsByIndexLatest;
}
constexpr ::System::Nullable_1<::Fusion::Tick> const& Fusion::NetworkObjectMeta::__cordl_internal_get__snapshotsByIndexLatest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotsByIndexLatest;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__snapshotsByIndexLatest(::System::Nullable_1<::Fusion::Tick>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotsByIndexLatest = value;
}
constexpr ::Fusion::Timeline*& Fusion::NetworkObjectMeta::__cordl_internal_get__timeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeline;
}
constexpr ::Fusion::Timeline* const& Fusion::NetworkObjectMeta::__cordl_internal_get__timeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeline;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__timeline(::Fusion::Timeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeline = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::NetworkObjectMeta::__cordl_internal_get__prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prev;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::NetworkObjectMeta::__cordl_internal_get__prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prev;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__prev(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prev = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::NetworkObjectMeta::__cordl_internal_get__next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::NetworkObjectMeta::__cordl_internal_get__next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__next(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____next = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::NetworkObjectMeta::__cordl_internal_get__prevMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevMigration;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::NetworkObjectMeta::__cordl_internal_get__prevMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevMigration;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__prevMigration(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevMigration = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::NetworkObjectMeta::__cordl_internal_get__nextMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextMigration;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::NetworkObjectMeta::__cordl_internal_get__nextMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextMigration;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__nextMigration(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextMigration = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkObjectMeta::__cordl_internal_get_ScannedTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScannedTick;
}
constexpr ::Fusion::Tick const& Fusion::NetworkObjectMeta::__cordl_internal_get_ScannedTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScannedTick;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set_ScannedTick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScannedTick = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkObjectMeta::__cordl_internal_get_ChangedTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChangedTick;
}
constexpr ::Fusion::Tick const& Fusion::NetworkObjectMeta::__cordl_internal_get_ChangedTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChangedTick;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set_ChangedTick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChangedTick = value;
}
constexpr int32_t& Fusion::NetworkObjectMeta::__cordl_internal_get_AreaOfInterestCell()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AreaOfInterestCell;
}
constexpr int32_t const& Fusion::NetworkObjectMeta::__cordl_internal_get_AreaOfInterestCell() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AreaOfInterestCell;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set_AreaOfInterestCell(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AreaOfInterestCell = value;
}
constexpr ::Fusion::NetworkObjectMetaFlags& Fusion::NetworkObjectMeta::__cordl_internal_get_LocalFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalFlags;
}
constexpr ::Fusion::NetworkObjectMetaFlags const& Fusion::NetworkObjectMeta::__cordl_internal_get_LocalFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalFlags;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set_LocalFlags(::Fusion::NetworkObjectMetaFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalFlags = value;
}
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData& Fusion::NetworkObjectMeta::__cordl_internal_get_PlayerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerData;
}
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData const& Fusion::NetworkObjectMeta::__cordl_internal_get_PlayerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerData;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set_PlayerData(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerData = value;
}
constexpr int32_t*& Fusion::NetworkObjectMeta::__cordl_internal_get__ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ptr;
}
constexpr int32_t* const& Fusion::NetworkObjectMeta::__cordl_internal_get__ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ptr;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__ptr(int32_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ptr = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::NetworkObjectMeta::__cordl_internal_get_Instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instance;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::NetworkObjectMeta::__cordl_internal_get_Instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instance;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set_Instance(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Instance = value;
}
constexpr int16_t& Fusion::NetworkObjectMeta::__cordl_internal_get_WordCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordCount;
}
constexpr int16_t const& Fusion::NetworkObjectMeta::__cordl_internal_get_WordCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordCount;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set_WordCount(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WordCount = value;
}
constexpr int16_t& Fusion::NetworkObjectMeta::__cordl_internal_get_BehaviourCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BehaviourCount;
}
constexpr int16_t const& Fusion::NetworkObjectMeta::__cordl_internal_get_BehaviourCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BehaviourCount;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set_BehaviourCount(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BehaviourCount = value;
}
constexpr ::Fusion::NetworkObjectHeaderFlags& Fusion::NetworkObjectMeta::__cordl_internal_get__flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flags;
}
constexpr ::Fusion::NetworkObjectHeaderFlags const& Fusion::NetworkObjectMeta::__cordl_internal_get__flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flags;
}
constexpr void Fusion::NetworkObjectMeta::__cordl_internal_set__flags(::Fusion::NetworkObjectHeaderFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flags = value;
}
inline void Fusion::NetworkObjectMeta::setStaticF__serializersStatic(::ArrayW<::Fusion::NetworkBufferSerializerInfo>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Fusion::NetworkBufferSerializerInfo>, "_serializersStatic", ::Fusion::NetworkObjectMeta*>(std::forward<::ArrayW<::Fusion::NetworkBufferSerializerInfo>>(value));
}
inline ::ArrayW<::Fusion::NetworkBufferSerializerInfo> Fusion::NetworkObjectMeta::getStaticF__serializersStatic()  {
return ::cordl_internals::getStaticField<::ArrayW<::Fusion::NetworkBufferSerializerInfo>, "_serializersStatic", ::Fusion::NetworkObjectMeta*>();
}
inline void Fusion::NetworkObjectMeta::setStaticF__serializersNone(::ArrayW<::Fusion::NetworkBufferSerializerInfo>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Fusion::NetworkBufferSerializerInfo>, "_serializersNone", ::Fusion::NetworkObjectMeta*>(std::forward<::ArrayW<::Fusion::NetworkBufferSerializerInfo>>(value));
}
inline ::ArrayW<::Fusion::NetworkBufferSerializerInfo> Fusion::NetworkObjectMeta::getStaticF__serializersNone()  {
return ::cordl_internals::getStaticField<::ArrayW<::Fusion::NetworkBufferSerializerInfo>, "_serializersNone", ::Fusion::NetworkObjectMeta*>();
}
inline ::ArrayW<::Fusion::NetworkBufferSerializerInfo> Fusion::NetworkObjectMeta::GetSerializers(bool  main)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetSerializers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Fusion::NetworkBufferSerializerInfo>>(nullptr, ___internal_method, main);
}
inline ::ArrayW<::Fusion::NetworkBufferSerializerInfo> Fusion::NetworkObjectMeta::get_Serializers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Serializers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Fusion::NetworkBufferSerializerInfo>>(this, ___internal_method);
}
inline ::Fusion::Timeline* Fusion::NetworkObjectMeta::get_Timeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Timeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Timeline*>(this, ___internal_method);
}
inline ::by_ref<::Fusion::NetworkObjectHeader> Fusion::NetworkObjectMeta::get_Header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkObjectHeader>>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderFlags Fusion::NetworkObjectMeta::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderFlags>(this, ___internal_method);
}
inline bool Fusion::NetworkObjectMeta::get_HasMainTRSP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_HasMainTRSP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::by_ref<::Fusion::NetworkTRSPData> Fusion::NetworkObjectMeta::get_MainTRSPData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_MainTRSPData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkTRSPData>>(this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObjectMeta::get_Raw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Raw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObjectMeta::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObjectMeta::get_BehaviourChangedTickArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_BehaviourChangedTickArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObjectMeta::GetBehaviourChangedTickArray(::Fusion::NetworkObjectHeaderSnapshotRef  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetBehaviourChangedTickArray", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(this, ___internal_method, snapshot);
}
inline ::Fusion::Tick Fusion::NetworkObjectMeta::GetMaxBehaviourChangedTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetMaxBehaviourChangedTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::NetworkObjectMeta::GetMaxBehaviourChangedTick(::Fusion::NetworkObjectHeaderSnapshotRef  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetMaxBehaviourChangedTick", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method, snapshot);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::NetworkObjectMeta::GetDataAs()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                    {"GetDataAs", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method);
}
inline bool Fusion::NetworkObjectMeta::get_HasSnapshots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_HasSnapshots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshotRef Fusion::NetworkObjectMeta::get_SnapshotLatest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_SnapshotLatest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshotRef>(this, ___internal_method);
}
inline bool Fusion::NetworkObjectMeta::get_IsStruct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_IsStruct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkObjectMeta::get_IsObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_IsObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectMeta::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(this, ___internal_method);
}
inline ::Fusion::NetworkId Fusion::NetworkObjectMeta::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method);
}
inline ::Fusion::NetworkId Fusion::NetworkObjectMeta::get_NestingRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_NestingRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectNestingKey Fusion::NetworkObjectMeta::get_NestingKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_NestingKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectNestingKey>(this, ___internal_method);
}
inline ::by_ref<::Fusion::PlayerRef> Fusion::NetworkObjectMeta::get_StateAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_StateAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::PlayerRef>>(this, ___internal_method);
}
inline ::by_ref<::Fusion::PlayerRef> Fusion::NetworkObjectMeta::get_InputAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_InputAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::PlayerRef>>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshotRef Fusion::NetworkObjectMeta::get_Shadow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Shadow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshotRef>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshotRef Fusion::NetworkObjectMeta::get_Render()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Render", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshotRef>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshotRef Fusion::NetworkObjectMeta::get_Previous()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Previous", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshotRef>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshotRef Fusion::NetworkObjectMeta::get_Migration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Migration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshotRef>(this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObjectMeta::get_ChangesSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_ChangesSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(this, ___internal_method);
}
inline int32_t* Fusion::NetworkObjectMeta::get_Changes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"get_Changes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectMeta::GetFirstShadowSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetFirstShadowSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(this, ___internal_method);
}
inline void Fusion::NetworkObjectMeta::_ctor(::Fusion::Simulation*  simulation, ::Fusion::Allocator*  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, allocator);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectMeta::GetSnapshot(bool  copyState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetSnapshot", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(this, ___internal_method, copyState);
}
inline void Fusion::NetworkObjectMeta::Release(::Fusion::Allocator*  objectAllocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"Release", {}, {::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectAllocator);
}
inline ::Fusion::NetworkObjectHeaderSnapshotRef Fusion::NetworkObjectMeta::NextSnapshot(::Fusion::Tick  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"NextSnapshot", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshotRef>(this, ___internal_method, tick);
}
inline void Fusion::NetworkObjectMeta::AddLatestSnapshotToTimeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"AddLatestSnapshotToTimeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectMeta::FindSnapshot(::Fusion::Tick  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"FindSnapshot", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(this, ___internal_method, tick);
}
inline bool Fusion::NetworkObjectMeta::TryFindSnapshot(::Fusion::Tick  tick, ::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"TryFindSnapshot", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tick, snapshot);
}
inline void Fusion::NetworkObjectMeta::Init(int32_t*  words, int16_t  wordCount, int16_t  behaviourCount, ::Fusion::NetworkObjectHeaderFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"Init", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, words, wordCount, behaviourCount, flags);
}
inline int32_t* Fusion::NetworkObjectMeta::GetBehaviourPtr(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetBehaviourPtr", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(this, ___internal_method, behaviour);
}
inline int32_t Fusion::NetworkObjectMeta::EncodePriorityLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"EncodePriorityLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, level);
}
inline int32_t Fusion::NetworkObjectMeta::DecodePriorityLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"DecodePriorityLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, level);
}
inline bool Fusion::NetworkObjectMeta::IsIdle(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"IsIdle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, level);
}
inline bool Fusion::NetworkObjectMeta::IsActive(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"IsActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, level);
}
inline int32_t Fusion::NetworkObjectMeta::GetPriority(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"GetPriority", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline void Fusion::NetworkObjectMeta::LinkInstance(::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"LinkInstance", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Fusion::NetworkObjectMeta::UnlinkInstance(::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectMeta*>(),
                        {"UnlinkInstance", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline ::Fusion::NetworkObjectMeta* Fusion::NetworkObjectMeta::New_ctor(::Fusion::Simulation*  simulation, ::Fusion::Allocator*  allocator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectMeta*>(simulation, allocator));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectMeta::NetworkObjectMeta()   {
}
