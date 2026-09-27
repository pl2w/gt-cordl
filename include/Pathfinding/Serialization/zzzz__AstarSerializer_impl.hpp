#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/AstarSerializer.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "Pathfinding/zzzz__NavGraph_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Serialization/zzzz__AstarSerializer_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipFile_def.hpp"
#include "Pathfinding/Serialization/zzzz__AstarSerializer_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphMeta_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/Serialization/zzzz__SerializeSettings_def.hpp"
#include "Pathfinding/zzzz__AstarData_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.GetStringBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)()>(&::Pathfinding::Serialization::AstarSerializer::GetStringBuilder)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ecdc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetStringBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)(::Pathfinding::AstarData*, ::UnityEngine::GameObject*)>(&::Pathfinding::Serialization::AstarSerializer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ecdc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::AstarData*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)(::Pathfinding::AstarData*, ::Pathfinding::Serialization::SerializeSettings*, ::UnityEngine::GameObject*)>(&::Pathfinding::Serialization::AstarSerializer::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ecdd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::AstarData*>(), ::i2c::type_of<::Pathfinding::Serialization::SerializeSettings*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SetGraphIndexOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)(int32_t)>(&::Pathfinding::Serialization::AstarSerializer::SetGraphIndexOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ecddec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SetGraphIndexOffset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.AddChecksum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)(::ArrayW<uint8_t>)>(&::Pathfinding::Serialization::AstarSerializer::AddChecksum)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ecddf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"AddChecksum", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)(::StringW, ::ArrayW<uint8_t>)>(&::Pathfinding::Serialization::AstarSerializer::AddEntry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ecde1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"AddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.GetChecksum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::GetChecksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ecde34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetChecksum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.OpenSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::OpenSerialize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ecde3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"OpenSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.CloseSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::CloseSerialize)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5ecdf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"CloseSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SerializeGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)(::ArrayW<::Pathfinding::NavGraph*>)>(&::Pathfinding::Serialization::AstarSerializer::SerializeGraphs)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5ece7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeGraphs", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SerializeMeta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::SerializeMeta)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5ece36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeMeta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Serialization::AstarSerializer::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::Serialization::AstarSerializer::Serialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ece9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SerializeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::SerializeNodes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eceaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.GetMaxNodeIndexInAllGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::Pathfinding::NavGraph*>)>(&::Pathfinding::Serialization::AstarSerializer::GetMaxNodeIndexInAllGraphs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5eceaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetMaxNodeIndexInAllGraphs", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SerializeNodeIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<::Pathfinding::NavGraph*>)>(&::Pathfinding::Serialization::AstarSerializer::SerializeNodeIndices)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5ecec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeNodeIndices", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SerializeGraphExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Pathfinding::NavGraph*)>(&::Pathfinding::Serialization::AstarSerializer::SerializeGraphExtraInfo)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5eceeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeGraphExtraInfo", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SerializeGraphNodeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Pathfinding::NavGraph*)>(&::Pathfinding::Serialization::AstarSerializer::SerializeGraphNodeReferences)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ecf020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeGraphNodeReferences", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SerializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::SerializeExtraInfo)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5ecf1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeExtraInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SerializeNodeLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::SerializeNodeLinks)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ecf480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeNodeLinks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.GetEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (::Pathfinding::Serialization::AstarSerializer::*)(::StringW)>(&::Pathfinding::Serialization::AstarSerializer::GetEntry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ecf584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.ContainsEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Serialization::AstarSerializer::*)(::StringW)>(&::Pathfinding::Serialization::AstarSerializer::ContainsEntry)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ecf59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"ContainsEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.OpenDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Serialization::AstarSerializer::*)(::ArrayW<uint8_t>)>(&::Pathfinding::Serialization::AstarSerializer::OpenDeserialize)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5ecf5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"OpenDeserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.FullyDefinedVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)(::System::Version*)>(&::Pathfinding::Serialization::AstarSerializer::FullyDefinedVersion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ed0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"FullyDefinedVersion", {}, {::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.CloseDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::CloseDeserialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ed0110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"CloseDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::Serialization::AstarSerializer::*)(int32_t, int32_t, ::ArrayW<::System::Type*>)>(&::Pathfinding::Serialization::AstarSerializer::DeserializeGraph)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5ed016c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeGraph", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Pathfinding::NavGraph*> (::Pathfinding::Serialization::AstarSerializer::*)(::ArrayW<::System::Type*>)>(&::Pathfinding::Serialization::AstarSerializer::DeserializeGraphs)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5ed0a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeGraphs", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Serialization::AstarSerializer::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::Serialization::AstarSerializer::DeserializeExtraInfo)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5ed0c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeExtraInfo", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.AnyDestroyedNodesInGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::AnyDestroyedNodesInGraphs)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5ed0e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"AnyDestroyedNodesInGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeNodeReferenceMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Pathfinding::GraphNode*> (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::DeserializeNodeReferenceMap)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x5ed0f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeNodeReferenceMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeNodeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)(::Pathfinding::NavGraph*, ::ArrayW<::Pathfinding::GraphNode*>)>(&::Pathfinding::Serialization::AstarSerializer::DeserializeNodeReferences)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5ed1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeNodeReferences", {}, {::i2c::type_of<::Pathfinding::NavGraph*>(), ::i2c::type_of<::ArrayW<::Pathfinding::GraphNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::DeserializeExtraInfo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ed16a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeExtraInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeNodeLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)(::ArrayW<::Pathfinding::GraphNode*>)>(&::Pathfinding::Serialization::AstarSerializer::DeserializeNodeLinks)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ed17d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeNodeLinks", {}, {::i2c::type_of<::ArrayW<::Pathfinding::GraphNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.PostDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::PostDeserialization)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ed18ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"PostDeserialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeEditorSettingsCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer::*)()>(&::Pathfinding::Serialization::AstarSerializer::DeserializeEditorSettingsCompatibility)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5ed1a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeEditorSettingsCompatibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.GetBinaryReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::BinaryReader* (*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Serialization::AstarSerializer::GetBinaryReader)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ed09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetBinaryReader", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Serialization::AstarSerializer::GetString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ed0824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetString", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeMeta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Serialization::GraphMeta* (::Pathfinding::Serialization::AstarSerializer::*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Serialization::AstarSerializer::DeserializeMeta)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ecfad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeMeta", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.DeserializeBinaryMeta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Serialization::GraphMeta* (::Pathfinding::Serialization::AstarSerializer::*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Serialization::AstarSerializer::DeserializeBinaryMeta)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5ecfbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeBinaryMeta", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.SaveToFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::Pathfinding::Serialization::AstarSerializer::SaveToFile)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ed1c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SaveToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer.LoadFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Pathfinding::Serialization::AstarSerializer::LoadFromFile)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5ed1d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"LoadFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::AstarData*& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::Pathfinding::AstarData* const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_data(::Pathfinding::AstarData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipFile*& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_zip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zip;
}
constexpr ::Pathfinding::Ionic::Zip::ZipFile* const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_zip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zip;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_zip(::Pathfinding::Ionic::Zip::ZipFile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zip = value;
}
constexpr ::System::IO::MemoryStream*& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_zipStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipStream;
}
constexpr ::System::IO::MemoryStream* const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_zipStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipStream;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_zipStream(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zipStream = value;
}
constexpr ::Pathfinding::Serialization::GraphMeta*& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_meta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meta;
}
constexpr ::Pathfinding::Serialization::GraphMeta* const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_meta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meta;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_meta(::Pathfinding::Serialization::GraphMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meta = value;
}
constexpr ::Pathfinding::Serialization::SerializeSettings*& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::Pathfinding::Serialization::SerializeSettings* const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_settings(::Pathfinding::Serialization::SerializeSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_contextRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contextRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_contextRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contextRoot;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_contextRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contextRoot = value;
}
constexpr ::ArrayW<::Pathfinding::NavGraph*>& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_graphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphs;
}
constexpr ::ArrayW<::Pathfinding::NavGraph*> const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_graphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphs;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_graphs(::ArrayW<::Pathfinding::NavGraph*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::NavGraph*,int32_t>*& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_graphIndexInZip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndexInZip;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::NavGraph*,int32_t>* const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_graphIndexInZip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndexInZip;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_graphIndexInZip(::System::Collections::Generic::Dictionary_2<::Pathfinding::NavGraph*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphIndexInZip = value;
}
constexpr int32_t& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_graphIndexOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndexOffset;
}
constexpr int32_t const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_graphIndexOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndexOffset;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_graphIndexOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphIndexOffset = value;
}
constexpr uint32_t& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_checksum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checksum;
}
constexpr uint32_t const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_checksum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checksum;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_checksum(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checksum = value;
}
constexpr ::System::Text::UTF8Encoding*& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr ::System::Text::UTF8Encoding* const& Pathfinding::Serialization::AstarSerializer::__cordl_internal_get_encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr void Pathfinding::Serialization::AstarSerializer::__cordl_internal_set_encoding(::System::Text::UTF8Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoding = value;
}
inline void Pathfinding::Serialization::AstarSerializer::setStaticF__stringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "_stringBuilder", ::Pathfinding::Serialization::AstarSerializer*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* Pathfinding::Serialization::AstarSerializer::getStaticF__stringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "_stringBuilder", ::Pathfinding::Serialization::AstarSerializer*>();
}
inline void Pathfinding::Serialization::AstarSerializer::setStaticF_V3_8_3(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "V3_8_3", ::Pathfinding::Serialization::AstarSerializer*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* Pathfinding::Serialization::AstarSerializer::getStaticF_V3_8_3()  {
return ::cordl_internals::getStaticField<::System::Version*, "V3_8_3", ::Pathfinding::Serialization::AstarSerializer*>();
}
inline void Pathfinding::Serialization::AstarSerializer::setStaticF_V3_9_0(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "V3_9_0", ::Pathfinding::Serialization::AstarSerializer*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* Pathfinding::Serialization::AstarSerializer::getStaticF_V3_9_0()  {
return ::cordl_internals::getStaticField<::System::Version*, "V3_9_0", ::Pathfinding::Serialization::AstarSerializer*>();
}
inline void Pathfinding::Serialization::AstarSerializer::setStaticF_V4_1_0(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "V4_1_0", ::Pathfinding::Serialization::AstarSerializer*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* Pathfinding::Serialization::AstarSerializer::getStaticF_V4_1_0()  {
return ::cordl_internals::getStaticField<::System::Version*, "V4_1_0", ::Pathfinding::Serialization::AstarSerializer*>();
}
inline ::System::Text::StringBuilder* Pathfinding::Serialization::AstarSerializer::GetStringBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetStringBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer::_ctor(::Pathfinding::AstarData*  data, ::UnityEngine::GameObject*  contextRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::AstarData*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, contextRoot);
}
inline void Pathfinding::Serialization::AstarSerializer::_ctor(::Pathfinding::AstarData*  data, ::Pathfinding::Serialization::SerializeSettings*  settings, ::UnityEngine::GameObject*  contextRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::AstarData*>(), ::i2c::type_of<::Pathfinding::Serialization::SerializeSettings*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, settings, contextRoot);
}
inline void Pathfinding::Serialization::AstarSerializer::SetGraphIndexOffset(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SetGraphIndexOffset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void Pathfinding::Serialization::AstarSerializer::AddChecksum(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"AddChecksum", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Pathfinding::Serialization::AstarSerializer::AddEntry(::StringW  name, ::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"AddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, bytes);
}
inline uint32_t Pathfinding::Serialization::AstarSerializer::GetChecksum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetChecksum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer::OpenSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"OpenSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Pathfinding::Serialization::AstarSerializer::CloseSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"CloseSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer::SerializeGraphs(::ArrayW<::Pathfinding::NavGraph*>  _graphs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeGraphs", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _graphs);
}
inline ::ArrayW<uint8_t> Pathfinding::Serialization::AstarSerializer::SerializeMeta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeMeta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Pathfinding::Serialization::AstarSerializer::Serialize(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, graph);
}
inline void Pathfinding::Serialization::AstarSerializer::SerializeNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Serialization::AstarSerializer::GetMaxNodeIndexInAllGraphs(::ArrayW<::Pathfinding::NavGraph*>  graphs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetMaxNodeIndexInAllGraphs", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, graphs);
}
inline ::ArrayW<uint8_t> Pathfinding::Serialization::AstarSerializer::SerializeNodeIndices(::ArrayW<::Pathfinding::NavGraph*>  graphs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeNodeIndices", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, graphs);
}
inline ::ArrayW<uint8_t> Pathfinding::Serialization::AstarSerializer::SerializeGraphExtraInfo(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeGraphExtraInfo", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, graph);
}
inline ::ArrayW<uint8_t> Pathfinding::Serialization::AstarSerializer::SerializeGraphNodeReferences(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeGraphNodeReferences", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, graph);
}
inline void Pathfinding::Serialization::AstarSerializer::SerializeExtraInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeExtraInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Pathfinding::Serialization::AstarSerializer::SerializeNodeLinks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SerializeNodeLinks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Serialization::AstarSerializer::GetEntry(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(this, ___internal_method, name);
}
inline bool Pathfinding::Serialization::AstarSerializer::ContainsEntry(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"ContainsEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool Pathfinding::Serialization::AstarSerializer::OpenDeserialize(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"OpenDeserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytes);
}
inline ::System::Version* Pathfinding::Serialization::AstarSerializer::FullyDefinedVersion(::System::Version*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"FullyDefinedVersion", {}, {::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method, v);
}
inline void Pathfinding::Serialization::AstarSerializer::CloseDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"CloseDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavGraph* Pathfinding::Serialization::AstarSerializer::DeserializeGraph(int32_t  zipIndex, int32_t  graphIndex, ::ArrayW<::System::Type*>  availableGraphTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeGraph", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method, zipIndex, graphIndex, availableGraphTypes);
}
inline ::ArrayW<::Pathfinding::NavGraph*> Pathfinding::Serialization::AstarSerializer::DeserializeGraphs(::ArrayW<::System::Type*>  availableGraphTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeGraphs", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Pathfinding::NavGraph*>>(this, ___internal_method, availableGraphTypes);
}
inline bool Pathfinding::Serialization::AstarSerializer::DeserializeExtraInfo(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeExtraInfo", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graph);
}
inline bool Pathfinding::Serialization::AstarSerializer::AnyDestroyedNodesInGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"AnyDestroyedNodesInGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::Pathfinding::GraphNode*> Pathfinding::Serialization::AstarSerializer::DeserializeNodeReferenceMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeNodeReferenceMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Pathfinding::GraphNode*>>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer::DeserializeNodeReferences(::Pathfinding::NavGraph*  graph, ::ArrayW<::Pathfinding::GraphNode*>  int2Node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeNodeReferences", {}, {::i2c::type_of<::Pathfinding::NavGraph*>(), ::i2c::type_of<::ArrayW<::Pathfinding::GraphNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, int2Node);
}
inline void Pathfinding::Serialization::AstarSerializer::DeserializeExtraInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeExtraInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer::DeserializeNodeLinks(::ArrayW<::Pathfinding::GraphNode*>  int2Node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeNodeLinks", {}, {::i2c::type_of<::ArrayW<::Pathfinding::GraphNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, int2Node);
}
inline void Pathfinding::Serialization::AstarSerializer::PostDeserialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"PostDeserialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer::DeserializeEditorSettingsCompatibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeEditorSettingsCompatibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::BinaryReader* Pathfinding::Serialization::AstarSerializer::GetBinaryReader(::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetBinaryReader", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::BinaryReader*>(nullptr, ___internal_method, entry);
}
inline ::StringW Pathfinding::Serialization::AstarSerializer::GetString(::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"GetString", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, entry);
}
inline ::Pathfinding::Serialization::GraphMeta* Pathfinding::Serialization::AstarSerializer::DeserializeMeta(::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeMeta", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Serialization::GraphMeta*>(this, ___internal_method, entry);
}
inline ::Pathfinding::Serialization::GraphMeta* Pathfinding::Serialization::AstarSerializer::DeserializeBinaryMeta(::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"DeserializeBinaryMeta", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Serialization::GraphMeta*>(this, ___internal_method, entry);
}
inline void Pathfinding::Serialization::AstarSerializer::SaveToFile(::StringW  path, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"SaveToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, data);
}
inline ::ArrayW<uint8_t> Pathfinding::Serialization::AstarSerializer::LoadFromFile(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer*>(),
                        {"LoadFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, path);
}
inline ::Pathfinding::Serialization::AstarSerializer* Pathfinding::Serialization::AstarSerializer::New_ctor(::Pathfinding::AstarData*  data, ::UnityEngine::GameObject*  contextRoot)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::AstarSerializer*>(data, contextRoot));
}
inline ::Pathfinding::Serialization::AstarSerializer* Pathfinding::Serialization::AstarSerializer::New_ctor(::Pathfinding::AstarData*  data, ::Pathfinding::Serialization::SerializeSettings*  settings, ::UnityEngine::GameObject*  contextRoot)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::AstarSerializer*>(data, settings, contextRoot));
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::AstarSerializer::AstarSerializer()   {
}
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::*)()>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed16a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0._DeserializeNodeReferences_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::_DeserializeNodeReferences_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ed2304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0*>(),
                        {"<DeserializeNodeReferences>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Serialization::GraphSerializationContext*& Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::__cordl_internal_get_ctx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx;
}
constexpr ::Pathfinding::Serialization::GraphSerializationContext* const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::__cordl_internal_get_ctx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::__cordl_internal_set_ctx(::Pathfinding::Serialization::GraphSerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ctx = value;
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::_DeserializeNodeReferences_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0*>(),
                        {"<DeserializeNodeReferences>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0* Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass46_0::AstarSerializer___c__DisplayClass46_0()   {
}
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::*)()>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed1428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0._DeserializeNodeReferenceMap_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::_DeserializeNodeReferenceMap_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ed2280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0*>(),
                        {"<DeserializeNodeReferenceMap>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::BinaryReader*& Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::System::IO::BinaryReader* const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_set_reader(::System::IO::BinaryReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*>& Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_get_int2Node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___int2Node;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*> const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_get_int2Node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___int2Node;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_set_int2Node(::ArrayW<::Pathfinding::GraphNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___int2Node = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::__cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::_DeserializeNodeReferenceMap_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0*>(),
                        {"<DeserializeNodeReferenceMap>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0* Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass45_0::AstarSerializer___c__DisplayClass45_0()   {
}
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::*)()>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed0f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0._AnyDestroyedNodesInGraphs_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::_AnyDestroyedNodesInGraphs_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ed2250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0*>(),
                        {"<AnyDestroyedNodesInGraphs>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr bool const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::__cordl_internal_set_result(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::__cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::_AnyDestroyedNodesInGraphs_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0*>(),
                        {"<AnyDestroyedNodesInGraphs>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0* Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass44_0::AstarSerializer___c__DisplayClass44_0()   {
}
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::*)()>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ecf1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0._SerializeGraphNodeReferences_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::_SerializeGraphNodeReferences_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ed2228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0*>(),
                        {"<SerializeGraphNodeReferences>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Serialization::GraphSerializationContext*& Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::__cordl_internal_get_ctx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx;
}
constexpr ::Pathfinding::Serialization::GraphSerializationContext* const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::__cordl_internal_get_ctx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::__cordl_internal_set_ctx(::Pathfinding::Serialization::GraphSerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ctx = value;
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::_SerializeGraphNodeReferences_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0*>(),
                        {"<SerializeGraphNodeReferences>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0* Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass33_0::AstarSerializer___c__DisplayClass33_0()   {
}
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::*)()>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eceea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0._SerializeNodeIndices_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::_SerializeNodeIndices_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ed2170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0*>(),
                        {"<SerializeNodeIndices>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_get_maxNodeIndex2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNodeIndex2;
}
constexpr int32_t const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_get_maxNodeIndex2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNodeIndex2;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_set_maxNodeIndex2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNodeIndex2 = value;
}
constexpr ::System::IO::BinaryWriter*& Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_get_writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
constexpr ::System::IO::BinaryWriter* const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_get_writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_set_writer(::System::IO::BinaryWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writer = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::__cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::_SerializeNodeIndices_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0*>(),
                        {"<SerializeNodeIndices>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0* Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass31_0::AstarSerializer___c__DisplayClass31_0()   {
}
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::*)()>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ecec28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0._GetMaxNodeIndexInAllGraphs_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::_GetMaxNodeIndexInAllGraphs_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ed207c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0*>(),
                        {"<GetMaxNodeIndexInAllGraphs>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::__cordl_internal_get_maxIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxIndex;
}
constexpr int32_t const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::__cordl_internal_get_maxIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxIndex;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::__cordl_internal_set_maxIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxIndex = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::__cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::_GetMaxNodeIndexInAllGraphs_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0*>(),
                        {"<GetMaxNodeIndexInAllGraphs>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0* Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::AstarSerializer___c__DisplayClass30_0::AstarSerializer___c__DisplayClass30_0()   {
}
