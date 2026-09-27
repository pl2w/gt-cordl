#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_StartingMapConfig_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPlacementStyle_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_SnapParams_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_TableState_impl.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__BoxCollider_impl.hpp"
#include "UnityEngine/zzzz__ColliderHit_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__OverlapSphereCommand_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "GlobalNamespace/zzzz__BuilderAction_def.hpp"
#include "GlobalNamespace/zzzz__BuilderConveyor_def.hpp"
#include "GlobalNamespace/zzzz__BuilderDispenserShelf_def.hpp"
#include "GlobalNamespace/zzzz__BuilderDropZone_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiecePrivatePlot_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_State_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceMeter_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceQuantity_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceType_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResources_def.hpp"
#include "GlobalNamespace/zzzz__BuilderShelf_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTag/zzzz__SimpleAABB_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderConveyorManager_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachGridPlane_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderOptionButton_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPieceData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPool_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacement_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderRecycler_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableNetworking_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_BoxCheckParams_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_BuilderCommandType_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_BuilderCommand_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_DroppedPieceData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_DroppedPieceState_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_SnapOverlapKey_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_SnapParams_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_TableState_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8b090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool)>(&::GorillaTagScripts::BuilderTable::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8b098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.get_gridSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::get_gridSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b8b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"get_gridSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderAction)>(&::GorillaTagScripts::BuilderTable::ExecuteAction)> {
  constexpr static std::size_t size = 0x1750;
  constexpr static std::size_t addrs = 0x5b8b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteAction", {}, {::i2c::type_of<::GlobalNamespace::BuilderAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AreStatesCompatibleForOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BuilderPiece_State, ::GlobalNamespace::BuilderPiece_State, ::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::AreStatesCompatibleForOverlap)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b8d124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AreStatesCompatibleForOverlap", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.get_CurrentSaveSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::get_CurrentSaveSlot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8d2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"get_CurrentSaveSlot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.set_CurrentSaveSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::set_CurrentSaveSlot)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b8d2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"set_CurrentSaveSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::Awake)> {
  constexpr static std::size_t size = 0x908;
  constexpr static std::size_t addrs = 0x5b8d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8e80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryGetBuilderTableForZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GTZone, ::by_ref<::GorillaTagScripts::BuilderTable*>)>(&::GorillaTagScripts::BuilderTable::TryGetBuilderTableForZone)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b8e878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryGetBuilderTableForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderTable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetupMonkeBlocksRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::SetupMonkeBlocksRoom)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x5b8dc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetupMonkeBlocksRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetupResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::SetupResources)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x5b8e3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetupResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::Start)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5b8eaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b8f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::OnDestroy)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5b8f1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.HandleOnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::HandleOnZoneChanged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8ef44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HandleOnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.InitIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::InitIfNeeded)> {
  constexpr static std::size_t size = 0x9e8;
  constexpr static std::size_t addrs = 0x5b8f5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetIsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool)>(&::GorillaTagScripts::BuilderTable::SetIsDirty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8d0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetIsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::FixedUpdate)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5b8ffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b903bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RunUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::RunUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b903c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RunUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddQueuedCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::AddQueuedCommand)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b91490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddQueuedCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ClearQueuedCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ClearQueuedCommands)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b91590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearQueuedCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetNumQueuedCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::GetNumQueuedCommands)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b916ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetNumQueuedCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddRollbackAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderAction)>(&::GorillaTagScripts::BuilderTable::AddRollbackAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b91738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddRollbackAction", {}, {::i2c::type_of<::GlobalNamespace::BuilderAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemoveRollBackActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::RemoveRollBackActions)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b9162c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveRollBackActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemoveRollBackActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::RemoveRollBackActions)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b91820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveRollBackActions", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.HasRollBackActionsForCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::HasRollBackActionsForCommand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b918f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasRollBackActionsForCommand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddRollForwardCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::AddRollForwardCommand)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b919a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddRollForwardCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemoveRollForwardCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::RemoveRollForwardCommands)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b9167c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveRollForwardCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemoveRollForwardCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::RemoveRollForwardCommands)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b91aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveRollForwardCommands", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.HasRollForwardCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::HasRollForwardCommand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b91b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasRollForwardCommand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ShouldRollbackBufferCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ShouldRollbackBufferCommand)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b91c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShouldRollbackBufferCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddRollbackBufferedCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::AddRollbackBufferedCommand)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b91ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddRollbackBufferedCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteRollBackActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ExecuteRollBackActions)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b91dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteRollBackActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteRollbackBufferedCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ExecuteRollbackBufferedCommands)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5b91ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteRollbackBufferedCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteRollForwardCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ExecuteRollForwardCommands)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5b921f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteRollForwardCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UpdateRollForwardCommandData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::UpdateRollForwardCommandData)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5b92558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UpdateRollForwardCommandData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryRollbackAndReExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::TryRollbackAndReExecute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b927f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryRollbackAndReExecute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RollbackFailedCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::RollbackFailedCommand)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b9289c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RollbackFailedCommand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetTableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderTable_TableState (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::GetTableState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b928e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetTableState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetTableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_TableState)>(&::GorillaTagScripts::BuilderTable::SetTableState)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b928ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetTableState", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_TableState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetPendingMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW)>(&::GorillaTagScripts::BuilderTable::SetPendingMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b93034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetPendingMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetPendingMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::GetPendingMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b93044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetPendingMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetCurrentMapID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::GetCurrentMapID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b9304c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetCurrentMapID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.LoadSharedMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::BuilderTable::LoadSharedMap)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b93064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"LoadSharedMap", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool)>(&::GorillaTagScripts::BuilderTable::SetInRoom)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b8ed88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetInRoom", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.IsLocalPlayerInBuilderZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::BuilderTable::IsLocalPlayerInBuilderZone)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b935e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"IsLocalPlayerInBuilderZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.IsInBuilderZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::IsInBuilderZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b9372c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"IsInBuilderZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetInBuilderZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool)>(&::GorillaTagScripts::BuilderTable::SetInBuilderZone)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b8f438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetInBuilderZone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ShowPieces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool)>(&::GorillaTagScripts::BuilderTable::ShowPieces)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b93734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShowPieces", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UpdateTableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::UpdateTableState)> {
  constexpr static std::size_t size = 0xc7c;
  constexpr static std::size_t addrs = 0x5b90484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UpdateTableState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RouteNewCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand, bool)>(&::GorillaTagScripts::BuilderTable::RouteNewCommand)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b95790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RouteNewCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteBuildCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecuteBuildCommand)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5b92014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteBuildCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ClearTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ClearTable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ClearTableInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ClearTableInternal)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0x5b97970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearTableInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ClearBuiltInPlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ClearBuiltInPlots)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5b9832c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearBuiltInPlots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnDeserializeUpdatePlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::OnDeserializeUpdatePlots)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b98508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnDeserializeUpdatePlots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.BuildPiecesOnShelves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::BuildPiecesOnShelves)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b98638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildPiecesOnShelves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnFinishedInitialTableBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::OnFinishedInitialTableBuild)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b987c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnFinishedInitialTableBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CreatePieceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::CreatePieceId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b989c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreatePieceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ResetConveyors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ResetConveyors)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b92efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ResetConveyors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestCreateConveyorPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::RequestCreateConveyorPiece)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b989f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestCreateConveyorPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestCreateDispenserShelfPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::RequestCreateDispenserShelfPiece)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b98b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestCreateDispenserShelfPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CreateConveyorPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::CreateConveyorPiece)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b98cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateConveyorPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CreateDispenserShelfPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::CreateDispenserShelfPiece)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5b98eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateDispenserShelfPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestShelfSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, bool)>(&::GorillaTagScripts::BuilderTable::RequestShelfSelection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b990a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestShelfSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.VerifySetSelections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::VerifySetSelections)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5b990cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"VerifySetSelections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateShelfSelectionParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, bool, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::ValidateShelfSelectionParams)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b99314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateShelfSelectionParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetConveyorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::SetConveyorSelection)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b996f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetConveyorSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetDispenserSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::SetDispenserSelection)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b997bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetDispenserSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ChangeSetSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, bool)>(&::GorillaTagScripts::BuilderTable::ChangeSetSelection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b99884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ChangeSetSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteSetSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecuteSetSelection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b97564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteSetSelection", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateFunctionalPieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, uint8_t, ::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::BuilderTable::ValidateFunctionalPieceState)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5b99984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateFunctionalPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnFunctionalStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::BuilderTable::OnFunctionalStateRequest)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b99be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnFunctionalStateRequest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetFunctionalPieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::BuilderTable::SetFunctionalPieceState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b99d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetFunctionalPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteSetFunctionalPieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecuteSetFunctionalPieceState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b974b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteSetFunctionalPieceState", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RegisterFunctionalPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::IBuilderPieceFunctional*)>(&::GorillaTagScripts::BuilderTable::RegisterFunctionalPiece)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b99d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RegisterFunctionalPiece", {}, {::i2c::type_of<::GlobalNamespace::IBuilderPieceFunctional*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UnregisterFunctionalPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::IBuilderPieceFunctional*)>(&::GorillaTagScripts::BuilderTable::UnregisterFunctionalPiece)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b99e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UnregisterFunctionalPiece", {}, {::i2c::type_of<::GlobalNamespace::IBuilderPieceFunctional*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RegisterFunctionalPieceFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::IBuilderPieceFunctional*)>(&::GorillaTagScripts::BuilderTable::RegisterFunctionalPieceFixedUpdate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b99f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RegisterFunctionalPieceFixedUpdate", {}, {::i2c::type_of<::GlobalNamespace::IBuilderPieceFunctional*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UnregisterFunctionalPieceFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::IBuilderPieceFunctional*)>(&::GorillaTagScripts::BuilderTable::UnregisterFunctionalPieceFixedUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b99fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UnregisterFunctionalPieceFixedUpdate", {}, {::i2c::type_of<::GlobalNamespace::IBuilderPieceFunctional*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestCreatePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t)>(&::GorillaTagScripts::BuilderTable::RequestCreatePiece)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9a038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestCreatePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CreatePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::GlobalNamespace::BuilderPiece_State, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::CreatePiece)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b9a03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreatePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestRecyclePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, bool, int32_t)>(&::GorillaTagScripts::BuilderTable::RequestRecyclePiece)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b9a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestRecyclePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RecyclePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, int32_t, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::RecyclePiece)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b9a198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RecyclePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ShouldExecuteCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ShouldExecuteCommand)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b95878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShouldExecuteCommand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ShouldQueueCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ShouldQueueCommand)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b9588c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShouldQueueCommand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ShouldDiscardCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ShouldDiscardCommand)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b958a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShouldDiscardCommand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DoesChainContainPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::DoesChainContainPiece)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b9a244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DoesChainContainPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DoesChainContainChain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::DoesChainContainChain)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b9a378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DoesChainContainChain", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.IsPlayerHandNearAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::NetPlayer*, ::UnityEngine::Vector3, bool, bool, float_t)>(&::GorillaTagScripts::BuilderTable::IsPlayerHandNearAction)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5b994c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"IsPlayerHandNearAction", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidatePlacePieceParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, int8_t, int8_t, uint8_t, int32_t, int32_t, int32_t, ::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::BuilderTable::ValidatePlacePieceParams)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x5b9a48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidatePlacePieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidatePlacePieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, int8_t, int8_t, uint8_t, int32_t, int32_t, int32_t, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::ValidatePlacePieceState)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b9ac38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidatePlacePieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecutePieceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecutePieceCreated)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5b958c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceCreated", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecutePieceRecycled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecutePieceRecycled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b96b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceRecycled", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateCreatePieceParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::GlobalNamespace::BuilderPiece_State, int32_t)>(&::GorillaTagScripts::BuilderTable::ValidateCreatePieceParams)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b9ada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateCreatePieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateDeserializedRootPieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, ::GlobalNamespace::BuilderPiece_State, int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaTagScripts::BuilderTable::ValidateDeserializedRootPieceState)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5b9b6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateDeserializedRootPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateDeserializedChildPieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, ::GlobalNamespace::BuilderPiece_State)>(&::GorillaTagScripts::BuilderTable::ValidateDeserializedChildPieceState)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5b9b9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateDeserializedChildPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidatePieceWorldTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaTagScripts::BuilderTable::ValidatePieceWorldTransform)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5b9a9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidatePieceWorldTransform", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidatePositionInArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::UnityEngine::Vector3)>(&::GorillaTagScripts::BuilderTable::ValidatePositionInArea)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b9bb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidatePositionInArea", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CreatePieceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::BuilderPiece_State, int32_t, int32_t, ::GorillaTagScripts::BuilderTable*)>(&::GorillaTagScripts::BuilderTable::CreatePieceInternal)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5b9ae6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreatePieceInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RecyclePieceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, bool, bool, int32_t)>(&::GorillaTagScripts::BuilderTable::RecyclePieceInternal)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x5b9b08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RecyclePieceInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetPiecePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::GetPiecePrefab)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b9b660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetPiecePrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateAttachPieceParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::ValidateAttachPieceParams)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5b9bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateAttachPieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AttachPieceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::AttachPieceInternal)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5b9bfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AttachPieceInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AttachPieceToActorInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, bool)>(&::GorillaTagScripts::BuilderTable::AttachPieceToActorInternal)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x5b9c24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AttachPieceToActorInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestPlacePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*, int8_t, int8_t, uint8_t, ::GlobalNamespace::BuilderPiece*, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::RequestPlacePiece)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9c8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestPlacePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PlacePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, int32_t, int8_t, int8_t, uint8_t, int32_t, int32_t, int32_t, ::GlobalNamespace::NetPlayer*, int32_t, bool)>(&::GorillaTagScripts::BuilderTable::PlacePiece)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b9c90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PlacePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PiecePlacedInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, int32_t, int8_t, int8_t, uint8_t, int32_t, int32_t, int32_t, ::GlobalNamespace::NetPlayer*, int32_t, bool)>(&::GorillaTagScripts::BuilderTable::PiecePlacedInternal)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b9c938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PiecePlacedInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecutePiecePlacedWithActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecutePiecePlacedWithActions)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5b95b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePiecePlacedWithActions", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateGrabPieceParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::BuilderTable::ValidateGrabPieceParams)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5b9cad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateGrabPieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateGrabPieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::ValidateGrabPieceState)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b9ce5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateGrabPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.IsLocationWithinSharedBuildArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::UnityEngine::Vector3)>(&::GorillaTagScripts::BuilderTable::IsLocationWithinSharedBuildArea)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b9cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"IsLocationWithinSharedBuildArea", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.NoBlocksCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::NoBlocksCheck)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x5b9d078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"NoBlocksCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestGrabPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaTagScripts::BuilderTable::RequestGrabPiece)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b9d530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestGrabPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GrabPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::NetPlayer*, bool)>(&::GorillaTagScripts::BuilderTable::GrabPiece)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9d55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GrabPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PieceGrabbedInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::NetPlayer*, bool)>(&::GorillaTagScripts::BuilderTable::PieceGrabbedInternal)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b9d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PieceGrabbedInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecutePieceGrabbedWithActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecutePieceGrabbedWithActions)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x5b95ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceGrabbedWithActions", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateDropPieceParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::BuilderTable::ValidateDropPieceParams)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x5b9d70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateDropPieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateDropPieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::ValidateDropPieceState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b9dd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateDropPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestDropPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTagScripts::BuilderTable::RequestDropPiece)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b9de04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestDropPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DropPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*, bool)>(&::GorillaTagScripts::BuilderTable::DropPiece)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b9de54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DropPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PieceDroppedInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*, bool)>(&::GorillaTagScripts::BuilderTable::PieceDroppedInternal)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b9de78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PieceDroppedInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecutePieceDroppedWithActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecutePieceDroppedWithActions)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5b96758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceDroppedWithActions", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecutePieceRepelled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecutePieceRepelled)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5b97580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceRepelled", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CleanUpDroppedPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::CleanUpDroppedPiece)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5b95514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CleanUpDroppedPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FreezeDroppedPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::FreezeDroppedPiece)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b9e20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FreezeDroppedPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddPieceToDropList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::AddPieceToDropList)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b9e324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddPieceToDropList", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FindFirstSleepingPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::FindFirstSleepingPiece)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5b9e03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FindFirstSleepingPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemovePieceFromDropList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::RemovePieceFromDropList)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b9e450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemovePieceFromDropList", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UpdateDroppedPieces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(float_t)>(&::GorillaTagScripts::BuilderTable::UpdateDroppedPieces)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x5b91100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UpdateDroppedPieces", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SetLocalPlayerOwnsPlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool)>(&::GorillaTagScripts::BuilderTable::SetLocalPlayerOwnsPlot)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b98494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetLocalPlayerOwnsPlot", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PlotClaimed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::PlotClaimed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9e4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PlotClaimed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteClaimPlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecuteClaimPlot)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b96b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteClaimPlot", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::PlayerLeftRoom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b9e548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PlayerLeftRoom", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecutePlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecutePlayerLeftRoom)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b9738c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PlotFreed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::PlotFreed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9e74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PlotFreed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteFreePlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecuteFreePlot)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b96d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteFreePlot", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FreePlotInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::FreePlotInternal)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b9e5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FreePlotInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DoesPlayerOwnPlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::DoesPlayerOwnPlot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b9e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DoesPlayerOwnPlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestPaintPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::RequestPaintPiece)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b9e828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestPaintPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PaintPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::Photon::Realtime::Player*, bool)>(&::GorillaTagScripts::BuilderTable::PaintPiece)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PaintPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PaintPieceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::Photon::Realtime::Player*, bool)>(&::GorillaTagScripts::BuilderTable::PaintPieceInternal)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b9e844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PaintPieceInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecutePiecePainted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecutePiecePainted)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b96ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePiecePainted", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CreateArmShelvesForPlayersInBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::CreateArmShelvesForPlayersInBuilder)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5b987ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateArmShelvesForPlayersInBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemoveArmShelfForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::RemoveArmShelfForPlayer)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5b93210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveArmShelfForPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DropAllPiecesForPlayerLeaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::DropAllPiecesForPlayerLeaving)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b9eb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DropAllPiecesForPlayerLeaving", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RecycleAllPiecesForPlayerLeaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::RecycleAllPiecesForPlayerLeaving)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b9ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RecycleAllPiecesForPlayerLeaving", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DropPieceForPlayerLeavingInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, int32_t)>(&::GorillaTagScripts::BuilderTable::DropPieceForPlayerLeavingInternal)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b9e95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DropPieceForPlayerLeavingInternal", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RecyclePieceForPlayerLeavingInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, int32_t)>(&::GorillaTagScripts::BuilderTable::RecyclePieceForPlayerLeavingInternal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b9ed2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RecyclePieceForPlayerLeavingInternal", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DetachPieceForPlayerLeavingInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, int32_t)>(&::GorillaTagScripts::BuilderTable::DetachPieceForPlayerLeavingInternal)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b9ede4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DetachPieceForPlayerLeavingInternal", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CreateArmShelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, int32_t, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTable::CreateArmShelf)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b9efa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateArmShelf", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ExecuteArmShelfCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderTable_BuilderCommand)>(&::GorillaTagScripts::BuilderTable::ExecuteArmShelfCreated)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x5b96d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteArmShelfCreated", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ClearLocalArmShelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ClearLocalArmShelf)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5b9f0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearLocalArmShelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PieceEnteredDropZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t)>(&::GorillaTagScripts::BuilderTable::PieceEnteredDropZone)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5b9f294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PieceEnteredDropZone", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ValidateRepelPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::ValidateRepelPiece)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b9f55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateRepelPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RepelPieceTowardTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::RepelPieceTowardTable)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x5b9f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RepelPieceTowardTable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::GetPiece)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5b8c800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetPiece", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::AddPiece)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b9bc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemovePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::RemovePiece)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b982a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemovePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::CreateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8ffa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DestroyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::DestroyData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DestroyData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddPieceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::AddPieceData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8ffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddPieceData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UpdatePieceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::UpdatePieceData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9fd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UpdatePieceData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemovePieceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::RemovePieceData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9fd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemovePieceData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddGridPlaneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::BuilderAttachGridPlane*)>(&::GorillaTagScripts::BuilderTable::AddGridPlaneData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b9fd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddGridPlaneData", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemoveGridPlaneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::BuilderAttachGridPlane*)>(&::GorillaTagScripts::BuilderTable::RemoveGridPlaneData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9fd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveGridPlaneData", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddPrivatePlotData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiecePrivatePlot*)>(&::GorillaTagScripts::BuilderTable::AddPrivatePlotData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b9fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddPrivatePlotData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiecePrivatePlot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RemovePrivatePlotData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiecePrivatePlot*)>(&::GorillaTagScripts::BuilderTable::RemovePrivatePlotData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemovePrivatePlotData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiecePrivatePlot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnButtonFreeRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderTable::OnButtonFreeRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b9fd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnButtonFreeRotation", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnButtonFreePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderTable::OnButtonFreePosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b9fd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnButtonFreePosition", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnButtonSaveLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderTable::OnButtonSaveLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9fdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnButtonSaveLayout", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnButtonClearLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderTable::OnButtonClearLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9fdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnButtonClearLayout", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryPlaceGridPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, ::GorillaTagScripts::BuilderAttachGridPlane*, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>)>(&::GorillaTagScripts::BuilderTable::TryPlaceGridPlane)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5b9fdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlaceGridPlane", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryPlaceGridPlaneOnGridPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, ::GorillaTagScripts::BuilderAttachGridPlane*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GorillaTagScripts::BuilderAttachGridPlane*, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>, ::by_ref<bool>)>(&::GorillaTagScripts::BuilderTable::TryPlaceGridPlaneOnGridPlane)> {
  constexpr static std::size_t size = 0xb24;
  constexpr static std::size_t addrs = 0x5b9ff54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlaceGridPlaneOnGridPlane", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.Rotate90
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::GorillaTagScripts::BuilderTable::*)(::UnityEngine::Vector2Int, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::Rotate90)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ba0c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Rotate90", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.Rotate270
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::GorillaTagScripts::BuilderTable::*)(::UnityEngine::Vector2Int, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::Rotate270)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ba0c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Rotate270", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.Rotate180
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::GorillaTagScripts::BuilderTable::*)(::UnityEngine::Vector2Int, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::Rotate180)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ba0c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Rotate180", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ShareSameRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::BuilderAttachGridPlane*, ::GorillaTagScripts::BuilderAttachGridPlane*)>(&::GorillaTagScripts::BuilderTable::ShareSameRoot)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ba0c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShareSameRoot", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ShareSameRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::ShareSameRoot)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5ba0a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShareSameRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryPlacePieceOnTableNoDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(bool, ::GlobalNamespace::BuilderPiece*, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>)>(&::GorillaTagScripts::BuilderTable::TryPlacePieceOnTableNoDrop)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ba0d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlacePieceOnTableNoDrop", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryPlacePieceOnTableNoDropJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*)>(&::GorillaTagScripts::BuilderTable::TryPlacePieceOnTableNoDropJobs)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x5ba114c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlacePieceOnTableNoDropJobs", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CalcAllPotentialPlacements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>, ::GorillaTagScripts::BuilderPotentialPlacement, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*)>(&::GorillaTagScripts::BuilderTable::CalcAllPotentialPlacements)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5b8cb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CalcAllPotentialPlacements", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::GorillaTagScripts::BuilderPotentialPlacement>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CanPiecesPotentiallySnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::CanPiecesPotentiallySnap)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ba196c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CanPiecesPotentiallySnap", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CanPiecesPotentiallyOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece_State, ::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::CanPiecesPotentiallyOverlap)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5b8c9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CanPiecesPotentiallyOverlap", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryDropPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool, ::GlobalNamespace::BuilderPiece*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTagScripts::BuilderTable::TryDropPiece)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ba1ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryDropPiece", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryPlacePieceGridPlanesOnTableInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*, int32_t, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>)>(&::GorillaTagScripts::BuilderTable::TryPlacePieceGridPlanesOnTableInternal)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5ba0e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlacePieceGridPlanesOnTableInternal", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryPlaceRandomlyOnTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::TryPlaceRandomlyOnTable)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5ba1c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlaceRandomlyOnTable", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UseResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::UseResources)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b9fb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UseResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UseResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderResourceQuantity)>(&::GorillaTagScripts::BuilderTable::UseResource)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ba20b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UseResource", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::AddResources)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b9fc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.AddResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderResourceQuantity)>(&::GorillaTagScripts::BuilderTable::AddResource)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ba210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddResource", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.HasEnoughUnreservedResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderResources*)>(&::GorillaTagScripts::BuilderTable::HasEnoughUnreservedResources)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ba2164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasEnoughUnreservedResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.HasEnoughUnreservedResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderResourceQuantity)>(&::GorillaTagScripts::BuilderTable::HasEnoughUnreservedResource)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ba2248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasEnoughUnreservedResource", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.HasEnoughResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderTable::HasEnoughResources)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ba22d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasEnoughResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.HasEnoughResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderResourceQuantity)>(&::GorillaTagScripts::BuilderTable::HasEnoughResource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ba23c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasEnoughResource", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetAvailableResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)(::GlobalNamespace::BuilderResourceType)>(&::GorillaTagScripts::BuilderTable::GetAvailableResources)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ba2434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetAvailableResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnAvailableResourcesChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::OnAvailableResourcesChange)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5b8e94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnAvailableResourcesChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetPrivateResourceLimitForType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::GetPrivateResourceLimitForType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ba2498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetPrivateResourceLimitForType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.WriteVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::System::IO::BinaryWriter*, ::UnityEngine::Vector3)>(&::GorillaTagScripts::BuilderTable::WriteVector3)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ba24c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"WriteVector3", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.WriteQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::System::IO::BinaryWriter*, ::UnityEngine::Quaternion)>(&::GorillaTagScripts::BuilderTable::WriteQuaternion)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ba2530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"WriteQuaternion", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ReadVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::BuilderTable::*)(::System::IO::BinaryReader*)>(&::GorillaTagScripts::BuilderTable::ReadVector3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ba25bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ReadVector3", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ReadQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GorillaTagScripts::BuilderTable::*)(::System::IO::BinaryReader*)>(&::GorillaTagScripts::BuilderTable::ReadQuaternion)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ba262c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ReadQuaternion", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PackPiecePlacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t, int8_t, int8_t)>(&::GorillaTagScripts::BuilderTable::PackPiecePlacement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ba26c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PackPiecePlacement", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UnpackPiecePlacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<uint8_t>, ::by_ref<int8_t>, ::by_ref<int8_t>)>(&::GorillaTagScripts::BuilderTable::UnpackPiecePlacement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b9bfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UnpackPiecePlacement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<int8_t>>(), ::i2c::type_of<::by_ref<int8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.PackSnapInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GorillaTagScripts::BuilderTable::*)(int32_t, int32_t, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::GorillaTagScripts::BuilderTable::PackSnapInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ba26e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PackSnapInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.UnpackSnapInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int64_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::UnityEngine::Vector2Int>, ::by_ref<::UnityEngine::Vector2Int>)>(&::GorillaTagScripts::BuilderTable::UnpackSnapInfo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ba2774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UnpackSnapInfo", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnTitleDataUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW)>(&::GorillaTagScripts::BuilderTable::OnTitleDataUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ba27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnTitleDataUpdate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FetchSharedBlocksStartingMapConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::FetchSharedBlocksStartingMapConfig)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b8f084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FetchSharedBlocksStartingMapConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnGetStartingMapConfigSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW)>(&::GorillaTagScripts::BuilderTable::OnGetStartingMapConfigSuccess)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x5ba27fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnGetStartingMapConfigSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnGetStartingMapConfigFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::BuilderTable::OnGetStartingMapConfigFail)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ba2d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnGetStartingMapConfigFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ResetStartingMapConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ResetStartingMapConfig)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ba2cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ResetStartingMapConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.RequestTableConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::RequestTableConfiguration)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b8efb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestTableConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnGetTableConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW)>(&::GorillaTagScripts::BuilderTable::OnGetTableConfiguration)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ba2ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnGetTableConfiguration", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ParseTableConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW)>(&::GorillaTagScripts::BuilderTable::ParseTableConfiguration)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5ba2fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ParseTableConfiguration", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DumpTableConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::DumpTableConfig)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5ba32e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DumpTableConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetSaveDataTimeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::GetSaveDataTimeKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ba3660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetSaveDataTimeKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetSaveDataKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::GetSaveDataKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ba3710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetSaveDataKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FindAndLoadSharedBlocksMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW)>(&::GorillaTagScripts::BuilderTable::FindAndLoadSharedBlocksMap)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ba37a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FindAndLoadSharedBlocksMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.GetSharedBlocksMapID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::GetSharedBlocksMapID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ba3864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetSharedBlocksMapID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FoundSharedBlocksMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::BuilderTable::FoundSharedBlocksMap)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ba388c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FoundSharedBlocksMap", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.BuildInitialTableForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::BuildInitialTableForPlayer)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5b92adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildInitialTableForPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnFetchPrivateScanComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, bool)>(&::GorillaTagScripts::BuilderTable::OnFetchPrivateScanComplete)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5ba3aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnFetchPrivateScanComplete", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.BuildSelectedSharedMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::BuildSelectedSharedMap)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b92d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildSelectedSharedMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FindStartingMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::FindStartingMap)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5ba5010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FindStartingMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FoundStartingMapList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool)>(&::GorillaTagScripts::BuilderTable::FoundStartingMapList)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5ba54d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FoundStartingMapList", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.ChooseMapFromList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::ChooseMapFromList)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ba535c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ChooseMapFromList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FoundTopMapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::BuilderTable::FoundTopMapData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ba56ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FoundTopMapData", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.FoundDefaultSharedBlocksMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(bool, ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::BuilderTable::FoundDefaultSharedBlocksMap)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ba52cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FoundDefaultSharedBlocksMap", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryBuildingSharedBlocksMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW)>(&::GorillaTagScripts::BuilderTable::TryBuildingSharedBlocksMap)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ba4eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryBuildingSharedBlocksMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.CheckForNoBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::CheckForNoBlocks)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ba5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CheckForNoBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.TryBuildingFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::TryBuildingFromTitleData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ba39d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryBuildingFromTitleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnGetTitleDataBuildComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW)>(&::GorillaTagScripts::BuilderTable::OnGetTitleDataBuildComplete)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ba57f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnGetTitleDataBuildComplete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SaveTableForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::StringW, ::StringW)>(&::GorillaTagScripts::BuilderTable::SaveTableForPlayer)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5ba5934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SaveTableForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnSaveScanSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t)>(&::GorillaTagScripts::BuilderTable::OnSaveScanSuccess)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ba6b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnSaveScanSuccess", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.OnSaveScanFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(int32_t, ::StringW)>(&::GorillaTagScripts::BuilderTable::OnSaveScanFailure)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5ba6cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnSaveScanFailure", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.WriteTableToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::WriteTableToJson)> {
  constexpr static std::size_t size = 0xf00;
  constexpr static std::size_t addrs = 0x5ba5c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"WriteTableToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.BuildOverlapKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderTable_SnapOverlapKey (*)(int32_t, int32_t, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTable::BuildOverlapKey)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ba6e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildOverlapKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.BuildTableFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable::*)(::StringW, bool)>(&::GorillaTagScripts::BuilderTable::BuildTableFromJson)> {
  constexpr static std::size_t size = 0x12b8;
  constexpr static std::size_t addrs = 0x5ba3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildTableFromJson", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.SerializeTableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTable::*)(::ArrayW<uint8_t>, int32_t)>(&::GorillaTagScripts::BuilderTable::SerializeTableState)> {
  constexpr static std::size_t size = 0x1a4c;
  constexpr static std::size_t addrs = 0x5ba6e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SerializeTableState", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable.DeserializeTableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)(::ArrayW<uint8_t>, int32_t)>(&::GorillaTagScripts::BuilderTable::DeserializeTableState)> {
  constexpr static std::size_t size = 0x1cac;
  constexpr static std::size_t addrs = 0x5b93868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DeserializeTableState", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable::*)()>(&::GorillaTagScripts::BuilderTable::_ctor)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x5ba88a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_acceptableSqrDistFromCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceptableSqrDistFromCenter;
}
constexpr float_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_acceptableSqrDistFromCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceptableSqrDistFromCenter;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_acceptableSqrDistFromCenter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceptableSqrDistFromCenter = value;
}
constexpr float_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_pieceScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceScale;
}
constexpr float_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_pieceScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceScale;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_pieceScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceScale = value;
}
constexpr ::GlobalNamespace::GTZone& GorillaTagScripts::BuilderTable::__cordl_internal_get_tableZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableZone;
}
constexpr ::GlobalNamespace::GTZone const& GorillaTagScripts::BuilderTable::__cordl_internal_get_tableZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableZone;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_tableZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableZone = value;
}
constexpr ::StringW& GorillaTagScripts::BuilderTable::__cordl_internal_get_SharedMapConfigTitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedMapConfigTitleDataKey;
}
constexpr ::StringW const& GorillaTagScripts::BuilderTable::__cordl_internal_get_SharedMapConfigTitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedMapConfigTitleDataKey;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_SharedMapConfigTitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedMapConfigTitleDataKey = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTableNetworking>& GorillaTagScripts::BuilderTable::__cordl_internal_get_builderNetworking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderNetworking;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTableNetworking> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_builderNetworking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderNetworking;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_builderNetworking(::UnityW<::GorillaTagScripts::BuilderTableNetworking>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderNetworking = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderRenderer>& GorillaTagScripts::BuilderTable::__cordl_internal_get_builderRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderRenderer;
}
constexpr ::UnityW<::GlobalNamespace::BuilderRenderer> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_builderRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderRenderer;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_builderRenderer(::UnityW<::GlobalNamespace::BuilderRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderRenderer = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderPool>& GorillaTagScripts::BuilderTable::__cordl_internal_get_builderPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderPool;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderPool> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_builderPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderPool;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_builderPool(::UnityW<::GorillaTagScripts::BuilderPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderPool = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::BuilderTable::__cordl_internal_get_tableCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_tableCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableCenter;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_tableCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableCenter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::BuilderTable::__cordl_internal_get_roomCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_roomCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomCenter;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_roomCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomCenter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::BuilderTable::__cordl_internal_get_worldCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_worldCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldCenter;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_worldCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldCenter = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::BuilderTable::__cordl_internal_get_noBlocksArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noBlocksArea;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_noBlocksArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noBlocksArea;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_noBlocksArea(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noBlocksArea = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_builtInPieceRoots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtInPieceRoots;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_builtInPieceRoots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtInPieceRoots;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_builtInPieceRoots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builtInPieceRoots = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>& GorillaTagScripts::BuilderTable::__cordl_internal_get_linkedTerminal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedTerminal;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_linkedTerminal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedTerminal;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_linkedTerminal(::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linkedTerminal = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_isTableMutable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTableMutable;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_isTableMutable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTableMutable;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_isTableMutable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTableMutable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::BuilderTable::__cordl_internal_get_shelvesRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelvesRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_shelvesRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelvesRoot;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_shelvesRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelvesRoot = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::BuilderTable::__cordl_internal_get_dropZoneRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropZoneRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_dropZoneRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropZoneRoot;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_dropZoneRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropZoneRoot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_recyclerRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerRoot;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_recyclerRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerRoot;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_recyclerRoot(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recyclerRoot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_allShelvesRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allShelvesRoot;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_allShelvesRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allShelvesRoot;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_allShelvesRoot(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allShelvesRoot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_conveyors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_conveyors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyors;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_conveyors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conveyors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_dispenserShelves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserShelves;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_dispenserShelves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserShelves;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_dispenserShelves(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenserShelves = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>& GorillaTagScripts::BuilderTable::__cordl_internal_get_conveyorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorManager;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_conveyorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorManager;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_conveyorManager(::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conveyorManager = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_resourceMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceMeters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_resourceMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceMeters;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_resourceMeters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceMeters = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::BuilderTable::__cordl_internal_get_sharedBuildArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedBuildArea;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_sharedBuildArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedBuildArea;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_sharedBuildArea(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedBuildArea = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::BoxCollider>>& GorillaTagScripts::BuilderTable::__cordl_internal_get_sharedBuildAreas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedBuildAreas;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::BoxCollider>> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_sharedBuildAreas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedBuildAreas;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_sharedBuildAreas(::ArrayW<::UnityW<::UnityEngine::BoxCollider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedBuildAreas = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::BuilderTable::__cordl_internal_get_armShelfPieceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armShelfPieceType;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_armShelfPieceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armShelfPieceType;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_armShelfPieceType(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armShelfPieceType = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_recyclers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_recyclers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclers;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_recyclers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recyclers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDropZone>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_dropZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDropZone>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_dropZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropZones;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_dropZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDropZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropZones = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_shelfSliceUpdateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfSliceUpdateIndex;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_shelfSliceUpdateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfSliceUpdateIndex;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_shelfSliceUpdateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfSliceUpdateIndex = value;
}
constexpr float_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_defaultTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTint;
}
constexpr float_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_defaultTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTint;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_defaultTint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultTint = value;
}
constexpr float_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_droppedTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___droppedTint;
}
constexpr float_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_droppedTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___droppedTint;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_droppedTint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___droppedTint = value;
}
constexpr float_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_grabbedTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedTint;
}
constexpr float_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_grabbedTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedTint;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_grabbedTint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedTint = value;
}
constexpr float_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_shelfTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfTint;
}
constexpr float_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_shelfTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfTint;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_shelfTint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfTint = value;
}
constexpr float_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_potentialGrabTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialGrabTint;
}
constexpr float_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_potentialGrabTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialGrabTint;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_potentialGrabTint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialGrabTint = value;
}
constexpr float_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_paintingTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintingTint;
}
constexpr float_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_paintingTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintingTint;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_paintingTint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintingTint = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BoxCheckParams>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_noBlocksAreas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noBlocksAreas;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BoxCheckParams>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_noBlocksAreas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noBlocksAreas;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_noBlocksAreas(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BoxCheckParams>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noBlocksAreas = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GorillaTagScripts::BuilderTable::__cordl_internal_get_noBlocksCheckResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noBlocksCheckResults;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_noBlocksCheckResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noBlocksCheckResults;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_noBlocksCheckResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noBlocksCheckResults = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTagScripts::BuilderTable::__cordl_internal_get_allPiecesMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPiecesMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTagScripts::BuilderTable::__cordl_internal_get_allPiecesMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPiecesMask;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_allPiecesMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allPiecesMask = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_useSnapRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSnapRotation;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_useSnapRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSnapRotation;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_useSnapRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSnapRotation = value;
}
constexpr ::GorillaTagScripts::BuilderPlacementStyle& GorillaTagScripts::BuilderTable::__cordl_internal_get_usePlacementStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePlacementStyle;
}
constexpr ::GorillaTagScripts::BuilderPlacementStyle const& GorillaTagScripts::BuilderTable::__cordl_internal_get_usePlacementStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePlacementStyle;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_usePlacementStyle(::GorillaTagScripts::BuilderPlacementStyle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usePlacementStyle = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderTable::__cordl_internal_get_buttonSnapRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonSnapRotation;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_buttonSnapRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonSnapRotation;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_buttonSnapRotation(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonSnapRotation = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderTable::__cordl_internal_get_buttonSnapPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonSnapPosition;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_buttonSnapPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonSnapPosition;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_buttonSnapPosition(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonSnapPosition = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderTable::__cordl_internal_get_buttonSaveLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonSaveLayout;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_buttonSaveLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonSaveLayout;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_buttonSaveLayout(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonSaveLayout = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderTable::__cordl_internal_get_buttonClearLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonClearLayout;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_buttonClearLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonClearLayout;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_buttonClearLayout(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonClearLayout = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_baseGridPlanes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseGridPlanes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_baseGridPlanes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseGridPlanes;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_baseGridPlanes(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseGridPlanes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_basePieces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___basePieces;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_basePieces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___basePieces;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_basePieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___basePieces = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_allPrivatePlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPrivatePlots;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_allPrivatePlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPrivatePlots;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_allPrivatePlots(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allPrivatePlots = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_nextPieceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPieceId;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_nextPieceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPieceId;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_nextPieceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPieceId = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_buildPieceSpawns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildPieceSpawns;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_buildPieceSpawns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildPieceSpawns;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_buildPieceSpawns(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buildPieceSpawns = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_shelves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelves;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_shelves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelves;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_shelves(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelves = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_pieces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieces;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_pieces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieces;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_pieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieces = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_pieceIDToIndexCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceIDToIndexCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_pieceIDToIndexCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceIDToIndexCache;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_pieceIDToIndexCache(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceIDToIndexCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_plotOwners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotOwners;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_plotOwners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotOwners;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_plotOwners(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plotOwners = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_doesLocalPlayerOwnPlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doesLocalPlayerOwnPlot;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_doesLocalPlayerOwnPlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doesLocalPlayerOwnPlot;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_doesLocalPlayerOwnPlot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doesLocalPlayerOwnPlot = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_playerToArmShelfLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerToArmShelfLeft;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_playerToArmShelfLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerToArmShelfLeft;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_playerToArmShelfLeft(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerToArmShelfLeft = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_playerToArmShelfRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerToArmShelfRight;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_playerToArmShelfRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerToArmShelfRight;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_playerToArmShelfRight(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerToArmShelfRight = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_builderPiecesVisited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderPiecesVisited;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_builderPiecesVisited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderPiecesVisited;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_builderPiecesVisited(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderPiecesVisited = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResources>& GorillaTagScripts::BuilderTable::__cordl_internal_get_totalResources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalResources;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResources> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_totalResources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalResources;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_totalResources(::UnityW<::GlobalNamespace::BuilderResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalResources = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResources>& GorillaTagScripts::BuilderTable::__cordl_internal_get_totalReservedResources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalReservedResources;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResources> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_totalReservedResources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalReservedResources;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_totalReservedResources(::UnityW<::GlobalNamespace::BuilderResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalReservedResources = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResources>& GorillaTagScripts::BuilderTable::__cordl_internal_get_resourcesPerPrivatePlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcesPerPrivatePlot;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResources> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_resourcesPerPrivatePlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcesPerPrivatePlot;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_resourcesPerPrivatePlot(::UnityW<::GlobalNamespace::BuilderResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourcesPerPrivatePlot = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::BuilderTable::__cordl_internal_get_maxResources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxResources;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_maxResources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxResources;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_maxResources(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxResources = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::BuilderTable::__cordl_internal_get_plotMaxResources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotMaxResources;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_plotMaxResources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotMaxResources;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_plotMaxResources(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plotMaxResources = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::BuilderTable::__cordl_internal_get_usedResources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedResources;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_usedResources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedResources;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_usedResources(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedResources = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::BuilderTable::__cordl_internal_get_reservedResources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedResources;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_reservedResources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedResources;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_reservedResources(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reservedResources = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_playersInBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInBuilder;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_playersInBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInBuilder;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_playersInBuilder(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInBuilder = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_activeFunctionalComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeFunctionalComponents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_activeFunctionalComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeFunctionalComponents;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_activeFunctionalComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeFunctionalComponents = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_funcComponentsToRegister()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funcComponentsToRegister;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_funcComponentsToRegister() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funcComponentsToRegister;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_funcComponentsToRegister(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___funcComponentsToRegister = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_funcComponentsToUnregister()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funcComponentsToUnregister;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_funcComponentsToUnregister() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funcComponentsToUnregister;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_funcComponentsToUnregister(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___funcComponentsToUnregister = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_fixedUpdateFunctionalComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedUpdateFunctionalComponents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_fixedUpdateFunctionalComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedUpdateFunctionalComponents;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_fixedUpdateFunctionalComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedUpdateFunctionalComponents = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_funcComponentsToRegisterFixed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funcComponentsToRegisterFixed;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_funcComponentsToRegisterFixed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funcComponentsToRegisterFixed;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_funcComponentsToRegisterFixed(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___funcComponentsToRegisterFixed = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_funcComponentsToUnregisterFixed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funcComponentsToUnregisterFixed;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_funcComponentsToUnregisterFixed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funcComponentsToUnregisterFixed;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_funcComponentsToUnregisterFixed(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___funcComponentsToUnregisterFixed = value;
}
constexpr ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>& GorillaTagScripts::BuilderTable::__cordl_internal_get_gridPlaneData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridPlaneData;
}
constexpr ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_gridPlaneData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridPlaneData;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_gridPlaneData(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridPlaneData = value;
}
constexpr ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>& GorillaTagScripts::BuilderTable::__cordl_internal_get_checkGridPlaneData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkGridPlaneData;
}
constexpr ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_checkGridPlaneData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkGridPlaneData;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_checkGridPlaneData(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkGridPlaneData = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>& GorillaTagScripts::BuilderTable::__cordl_internal_get_nearbyPiecesResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearbyPiecesResults;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_nearbyPiecesResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearbyPiecesResults;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_nearbyPiecesResults(::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearbyPiecesResults = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>& GorillaTagScripts::BuilderTable::__cordl_internal_get_nearbyPiecesCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearbyPiecesCommands;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_nearbyPiecesCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearbyPiecesCommands;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_nearbyPiecesCommands(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearbyPiecesCommands = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_allPotentialPlacements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPotentialPlacements;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_allPotentialPlacements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPotentialPlacements;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_allPotentialPlacements(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allPotentialPlacements = value;
}
constexpr ::GlobalNamespace::BuilderTable_TableState& GorillaTagScripts::BuilderTable::__cordl_internal_get_tableState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableState;
}
constexpr ::GlobalNamespace::BuilderTable_TableState const& GorillaTagScripts::BuilderTable::__cordl_internal_get_tableState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableState;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_tableState(::GlobalNamespace::BuilderTable_TableState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableState = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_inRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inRoom;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_inRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inRoom;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_inRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inRoom = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_inBuilderZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inBuilderZone;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_inBuilderZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inBuilderZone;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_inBuilderZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inBuilderZone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_droppedPieces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___droppedPieces;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_droppedPieces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___droppedPieces;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_droppedPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___droppedPieces = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_DroppedPieceData>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_droppedPieceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___droppedPieceData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_DroppedPieceData>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_droppedPieceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___droppedPieceData;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_droppedPieceData(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_DroppedPieceData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___droppedPieceData = value;
}
constexpr ::ArrayW<::System::Collections::Generic::HashSet_1<int32_t>*>& GorillaTagScripts::BuilderTable::__cordl_internal_get_repelledPieceRoots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelledPieceRoots;
}
constexpr ::ArrayW<::System::Collections::Generic::HashSet_1<int32_t>*> const& GorillaTagScripts::BuilderTable::__cordl_internal_get_repelledPieceRoots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelledPieceRoots;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_repelledPieceRoots(::ArrayW<::System::Collections::Generic::HashSet_1<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repelledPieceRoots = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_repelHistoryLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelHistoryLength;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_repelHistoryLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelHistoryLength;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_repelHistoryLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repelHistoryLength = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_repelHistoryIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelHistoryIndex;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_repelHistoryIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelHistoryIndex;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_repelHistoryIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repelHistoryIndex = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_hasRequestedConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRequestedConfig;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_hasRequestedConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRequestedConfig;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_hasRequestedConfig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasRequestedConfig = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_isDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_isDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_isDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDirty = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_saveInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveInProgress;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_saveInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveInProgress;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_saveInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveInProgress = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_currentSaveSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSaveSlot;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_currentSaveSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSaveSlot;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_currentSaveSlot(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSaveSlot = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnSaveTimeUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveTimeUpdated;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnSaveTimeUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveTimeUpdated;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnSaveTimeUpdated(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSaveTimeUpdated = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnSaveDirtyChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveDirtyChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnSaveDirtyChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveDirtyChanged;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnSaveDirtyChanged(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSaveDirtyChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnSaveSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveSuccess;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnSaveSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveSuccess;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnSaveSuccess(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSaveSuccess = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnSaveFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveFailure;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnSaveFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveFailure;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnSaveFailure(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSaveFailure = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnTableConfigurationUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTableConfigurationUpdated;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnTableConfigurationUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTableConfigurationUpdated;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnTableConfigurationUpdated(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTableConfigurationUpdated = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnLocalPlayerClaimedPlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLocalPlayerClaimedPlot;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnLocalPlayerClaimedPlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLocalPlayerClaimedPlot;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnLocalPlayerClaimedPlot(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLocalPlayerClaimedPlot = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnMapCleared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMapCleared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnMapCleared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMapCleared;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnMapCleared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMapCleared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnMapLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMapLoaded;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnMapLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMapLoaded;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnMapLoaded(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMapLoaded = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnMapLoadFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMapLoadFailed;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_OnMapLoadFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMapLoadFailed;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_OnMapLoadFailed(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMapLoadFailed = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_queuedBuildCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedBuildCommands;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_queuedBuildCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedBuildCommands;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_queuedBuildCommands(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedBuildCommands = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderAction>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_rollBackActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollBackActions;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderAction>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_rollBackActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollBackActions;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_rollBackActions(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderAction>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollBackActions = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_rollBackBufferedCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollBackBufferedCommands;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_rollBackBufferedCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollBackBufferedCommands;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_rollBackBufferedCommands(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollBackBufferedCommands = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_rollForwardCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollForwardCommands;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_rollForwardCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollForwardCommands;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_rollForwardCommands(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollForwardCommands = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_isSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSetup;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_isSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSetup;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_isSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSetup = value;
}
constexpr ::GlobalNamespace::BuilderTable_SnapParams& GorillaTagScripts::BuilderTable::__cordl_internal_get_pushAndEaseParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushAndEaseParams;
}
constexpr ::GlobalNamespace::BuilderTable_SnapParams const& GorillaTagScripts::BuilderTable::__cordl_internal_get_pushAndEaseParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushAndEaseParams;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_pushAndEaseParams(::GlobalNamespace::BuilderTable_SnapParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pushAndEaseParams = value;
}
constexpr ::GlobalNamespace::BuilderTable_SnapParams& GorillaTagScripts::BuilderTable::__cordl_internal_get_overlapParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapParams;
}
constexpr ::GlobalNamespace::BuilderTable_SnapParams const& GorillaTagScripts::BuilderTable::__cordl_internal_get_overlapParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapParams;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_overlapParams(::GlobalNamespace::BuilderTable_SnapParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapParams = value;
}
constexpr ::GlobalNamespace::BuilderTable_SnapParams& GorillaTagScripts::BuilderTable::__cordl_internal_get_currSnapParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currSnapParams;
}
constexpr ::GlobalNamespace::BuilderTable_SnapParams const& GorillaTagScripts::BuilderTable::__cordl_internal_get_currSnapParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currSnapParams;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_currSnapParams(::GlobalNamespace::BuilderTable_SnapParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currSnapParams = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_maxPlacementChildDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlacementChildDepth;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_maxPlacementChildDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlacementChildDepth;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_maxPlacementChildDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPlacementChildDepth = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::SimpleAABB>>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_m_areaBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_areaBounds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::SimpleAABB>>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_m_areaBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_areaBounds;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_m_areaBounds(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::SimpleAABB>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_areaBounds = value;
}
constexpr ::GorillaTagScripts::BuilderTableData*& GorillaTagScripts::BuilderTable::__cordl_internal_get_tableData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableData;
}
constexpr ::GorillaTagScripts::BuilderTableData* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_tableData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableData;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_tableData(::GorillaTagScripts::BuilderTableData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableData = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_fetchConfigurationAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchConfigurationAttempts;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_fetchConfigurationAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchConfigurationAttempts;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_fetchConfigurationAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchConfigurationAttempts = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_maxRetries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetries;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_maxRetries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetries;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_maxRetries(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRetries = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& GorillaTagScripts::BuilderTable::__cordl_internal_get_sharedBlocksMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedBlocksMap;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_sharedBlocksMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedBlocksMap;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_sharedBlocksMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedBlocksMap = value;
}
constexpr ::StringW& GorillaTagScripts::BuilderTable::__cordl_internal_get_pendingMapID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingMapID;
}
constexpr ::StringW const& GorillaTagScripts::BuilderTable::__cordl_internal_get_pendingMapID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingMapID;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_pendingMapID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingMapID = value;
}
constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig& GorillaTagScripts::BuilderTable::__cordl_internal_get_startingMapConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapConfig;
}
constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig const& GorillaTagScripts::BuilderTable::__cordl_internal_get_startingMapConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapConfig;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_startingMapConfig(::GlobalNamespace::SharedBlocksManager_StartingMapConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingMapConfig = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*& GorillaTagScripts::BuilderTable::__cordl_internal_get_startingMapList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapList;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_startingMapList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapList;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_startingMapList(::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingMapList = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& GorillaTagScripts::BuilderTable::__cordl_internal_get_startingMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMap;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& GorillaTagScripts::BuilderTable::__cordl_internal_get_startingMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMap;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_startingMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingMap = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_hasStartingMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasStartingMap;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_hasStartingMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasStartingMap;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_hasStartingMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasStartingMap = value;
}
constexpr double_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_startingMapCacheTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapCacheTime;
}
constexpr double_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_startingMapCacheTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapCacheTime;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_startingMapCacheTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingMapCacheTime = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_getStartingMapInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getStartingMapInProgress;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_getStartingMapInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getStartingMapInProgress;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_getStartingMapInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getStartingMapInProgress = value;
}
constexpr bool& GorillaTagScripts::BuilderTable::__cordl_internal_get_hasCachedTopMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCachedTopMaps;
}
constexpr bool const& GorillaTagScripts::BuilderTable::__cordl_internal_get_hasCachedTopMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCachedTopMaps;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_hasCachedTopMaps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCachedTopMaps = value;
}
constexpr double_t& GorillaTagScripts::BuilderTable::__cordl_internal_get_lastGetTopMapsTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGetTopMapsTime;
}
constexpr double_t const& GorillaTagScripts::BuilderTable::__cordl_internal_get_lastGetTopMapsTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGetTopMapsTime;
}
constexpr void GorillaTagScripts::BuilderTable::__cordl_internal_set_lastGetTopMapsTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGetTopMapsTime = value;
}
inline void GorillaTagScripts::BuilderTable::setStaticF_MAX_DROP_VELOCITY(float_t  value)  {
::cordl_internals::setStaticField<float_t, "MAX_DROP_VELOCITY", ::GorillaTagScripts::BuilderTable*>(std::forward<float_t>(value));
}
inline float_t GorillaTagScripts::BuilderTable::getStaticF_MAX_DROP_VELOCITY()  {
return ::cordl_internals::getStaticField<float_t, "MAX_DROP_VELOCITY", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_MAX_DROP_ANG_VELOCITY(float_t  value)  {
::cordl_internals::setStaticField<float_t, "MAX_DROP_ANG_VELOCITY", ::GorillaTagScripts::BuilderTable*>(std::forward<float_t>(value));
}
inline float_t GorillaTagScripts::BuilderTable::getStaticF_MAX_DROP_ANG_VELOCITY()  {
return ::cordl_internals::getStaticField<float_t, "MAX_DROP_ANG_VELOCITY", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_DROP_ZONE_REPEL(float_t  value)  {
::cordl_internals::setStaticField<float_t, "DROP_ZONE_REPEL", ::GorillaTagScripts::BuilderTable*>(std::forward<float_t>(value));
}
inline float_t GorillaTagScripts::BuilderTable::getStaticF_DROP_ZONE_REPEL()  {
return ::cordl_internals::getStaticField<float_t, "DROP_ZONE_REPEL", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_placedLayer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "placedLayer", ::GorillaTagScripts::BuilderTable*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::BuilderTable::getStaticF_placedLayer()  {
return ::cordl_internals::getStaticField<int32_t, "placedLayer", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_heldLayer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "heldLayer", ::GorillaTagScripts::BuilderTable*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::BuilderTable::getStaticF_heldLayer()  {
return ::cordl_internals::getStaticField<int32_t, "heldLayer", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_heldLayerLocal(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "heldLayerLocal", ::GorillaTagScripts::BuilderTable*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::BuilderTable::getStaticF_heldLayerLocal()  {
return ::cordl_internals::getStaticField<int32_t, "heldLayerLocal", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_droppedLayer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "droppedLayer", ::GorillaTagScripts::BuilderTable*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::BuilderTable::getStaticF_droppedLayer()  {
return ::cordl_internals::getStaticField<int32_t, "droppedLayer", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_SHELF_SLICE_BUCKETS(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SHELF_SLICE_BUCKETS", ::GorillaTagScripts::BuilderTable*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::BuilderTable::getStaticF_SHELF_SLICE_BUCKETS()  {
return ::cordl_internals::getStaticField<int32_t, "SHELF_SLICE_BUCKETS", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempPieceSet(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "tempPieceSet", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>* GorillaTagScripts::BuilderTable::getStaticF_tempPieceSet()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "tempPieceSet", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_DROPPED_PIECE_LIMIT(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DROPPED_PIECE_LIMIT", ::GorillaTagScripts::BuilderTable*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::BuilderTable::getStaticF_DROPPED_PIECE_LIMIT()  {
return ::cordl_internals::getStaticField<int32_t, "DROPPED_PIECE_LIMIT", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_nextUpdateOverride(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "nextUpdateOverride", ::GorillaTagScripts::BuilderTable*>(std::forward<::StringW>(value));
}
inline ::StringW GorillaTagScripts::BuilderTable::getStaticF_nextUpdateOverride()  {
return ::cordl_internals::getStaticField<::StringW, "nextUpdateOverride", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_zoneToInstance(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GorillaTagScripts::BuilderTable>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GorillaTagScripts::BuilderTable>>*, "zoneToInstance", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GorillaTagScripts::BuilderTable>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GorillaTagScripts::BuilderTable>>* GorillaTagScripts::BuilderTable::getStaticF_zoneToInstance()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GorillaTagScripts::BuilderTable>>*, "zoneToInstance", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "tempPieces", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* GorillaTagScripts::BuilderTable::getStaticF_tempPieces()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "tempPieces", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempConveyors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*, "tempConveyors", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>* GorillaTagScripts::BuilderTable::getStaticF_tempConveyors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*, "tempConveyors", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempDispensers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*, "tempDispensers", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>* GorillaTagScripts::BuilderTable::getStaticF_tempDispensers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*, "tempDispensers", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempRecyclers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*, "tempRecyclers", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>* GorillaTagScripts::BuilderTable::getStaticF_tempRecyclers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*, "tempRecyclers", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempRollForwardCommands(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*, "tempRollForwardCommands", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>* GorillaTagScripts::BuilderTable::getStaticF_tempRollForwardCommands()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*, "tempRollForwardCommands", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempDeletePieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "tempDeletePieces", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* GorillaTagScripts::BuilderTable::getStaticF_tempDeletePieces()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "tempDeletePieces", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_personalBuildKey(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "personalBuildKey", ::GorillaTagScripts::BuilderTable*>(std::forward<::StringW>(value));
}
inline ::StringW GorillaTagScripts::BuilderTable::getStaticF_personalBuildKey()  {
return ::cordl_internals::getStaticField<::StringW, "personalBuildKey", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempDuplicateOverlaps(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BuilderTable_SnapOverlapKey>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BuilderTable_SnapOverlapKey>*, "tempDuplicateOverlaps", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BuilderTable_SnapOverlapKey>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BuilderTable_SnapOverlapKey>* GorillaTagScripts::BuilderTable::getStaticF_tempDuplicateOverlaps()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BuilderTable_SnapOverlapKey>*, "tempDuplicateOverlaps", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_childPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "childPieces", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* GorillaTagScripts::BuilderTable::getStaticF_childPieces()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "childPieces", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_rootPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "rootPieces", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* GorillaTagScripts::BuilderTable::getStaticF_rootPieces()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "rootPieces", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_overlapPieces(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "overlapPieces", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTagScripts::BuilderTable::getStaticF_overlapPieces()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "overlapPieces", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_overlapOtherPieces(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "overlapOtherPieces", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTagScripts::BuilderTable::getStaticF_overlapOtherPieces()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "overlapOtherPieces", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_overlapPacked(::System::Collections::Generic::List_1<int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int64_t>*, "overlapPacked", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int64_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int64_t>* GorillaTagScripts::BuilderTable::getStaticF_overlapPacked()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int64_t>*, "overlapPacked", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_mapIDBuffer(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "mapIDBuffer", ::GorillaTagScripts::BuilderTable*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> GorillaTagScripts::BuilderTable::getStaticF_mapIDBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "mapIDBuffer", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_snapOverlapSanity(::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*, "snapOverlapSanity", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>* GorillaTagScripts::BuilderTable::getStaticF_snapOverlapSanity()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*, "snapOverlapSanity", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempPeiceIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempPeiceIds", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTagScripts::BuilderTable::getStaticF_tempPeiceIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempPeiceIds", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempParentPeiceIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempParentPeiceIds", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTagScripts::BuilderTable::getStaticF_tempParentPeiceIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempParentPeiceIds", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempAttachIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempAttachIndexes", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTagScripts::BuilderTable::getStaticF_tempAttachIndexes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempAttachIndexes", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempParentAttachIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempParentAttachIndexes", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTagScripts::BuilderTable::getStaticF_tempParentAttachIndexes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempParentAttachIndexes", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempParentActorNumbers(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempParentActorNumbers", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTagScripts::BuilderTable::getStaticF_tempParentActorNumbers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempParentActorNumbers", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempInLeftHand(::System::Collections::Generic::List_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<bool>*, "tempInLeftHand", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<bool>*>(value));
}
inline ::System::Collections::Generic::List_1<bool>* GorillaTagScripts::BuilderTable::getStaticF_tempInLeftHand()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<bool>*, "tempInLeftHand", ::GorillaTagScripts::BuilderTable*>();
}
inline void GorillaTagScripts::BuilderTable::setStaticF_tempPiecePlacement(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempPiecePlacement", ::GorillaTagScripts::BuilderTable*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTagScripts::BuilderTable::getStaticF_tempPiecePlacement()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "tempPiecePlacement", ::GorillaTagScripts::BuilderTable*>();
}
inline bool GorillaTagScripts::BuilderTable::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GorillaTagScripts::BuilderTable::get_gridSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"get_gridSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::ExecuteAction(::GlobalNamespace::BuilderAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteAction", {}, {::i2c::type_of<::GlobalNamespace::BuilderAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline bool GorillaTagScripts::BuilderTable::AreStatesCompatibleForOverlap(::GlobalNamespace::BuilderPiece_State  stateA, ::GlobalNamespace::BuilderPiece_State  stateB, ::GlobalNamespace::BuilderPiece*  rootA, ::GlobalNamespace::BuilderPiece*  rootB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AreStatesCompatibleForOverlap", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stateA, stateB, rootA, rootB);
}
inline int32_t GorillaTagScripts::BuilderTable::get_CurrentSaveSlot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"get_CurrentSaveSlot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::set_CurrentSaveSlot(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"set_CurrentSaveSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::BuilderTable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTable::TryGetBuilderTableForZone(::GlobalNamespace::GTZone  zone, ::by_ref<::GorillaTagScripts::BuilderTable*>  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryGetBuilderTableForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderTable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, zone, table);
}
inline void GorillaTagScripts::BuilderTable::SetupMonkeBlocksRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetupMonkeBlocksRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::SetupResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetupResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::HandleOnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HandleOnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::InitIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::SetIsDirty(bool  dirty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetIsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dirty);
}
inline void GorillaTagScripts::BuilderTable::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RunUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RunUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::AddQueuedCommand(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddQueuedCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::ClearQueuedCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearQueuedCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::BuilderTable::GetNumQueuedCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetNumQueuedCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::AddRollbackAction(::GlobalNamespace::BuilderAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddRollbackAction", {}, {::i2c::type_of<::GlobalNamespace::BuilderAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void GorillaTagScripts::BuilderTable::RemoveRollBackActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveRollBackActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RemoveRollBackActions(int32_t  localCommandId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveRollBackActions", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId);
}
inline bool GorillaTagScripts::BuilderTable::HasRollBackActionsForCommand(int32_t  localCommandId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasRollBackActionsForCommand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localCommandId);
}
inline void GorillaTagScripts::BuilderTable::AddRollForwardCommand(::GlobalNamespace::BuilderTable_BuilderCommand  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddRollForwardCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline void GorillaTagScripts::BuilderTable::RemoveRollForwardCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveRollForwardCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RemoveRollForwardCommands(int32_t  localCommandId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveRollForwardCommands", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId);
}
inline bool GorillaTagScripts::BuilderTable::HasRollForwardCommand(int32_t  localCommandId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasRollForwardCommand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localCommandId);
}
inline bool GorillaTagScripts::BuilderTable::ShouldRollbackBufferCommand(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShouldRollbackBufferCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::AddRollbackBufferedCommand(::GlobalNamespace::BuilderTable_BuilderCommand  bufferedCmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddRollbackBufferedCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferedCmd);
}
inline void GorillaTagScripts::BuilderTable::ExecuteRollBackActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteRollBackActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::ExecuteRollbackBufferedCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteRollbackBufferedCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::ExecuteRollForwardCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteRollForwardCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::UpdateRollForwardCommandData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UpdateRollForwardCommandData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTable::TryRollbackAndReExecute(int32_t  localCommandId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryRollbackAndReExecute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localCommandId);
}
inline void GorillaTagScripts::BuilderTable::RollbackFailedCommand(int32_t  localCommandId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RollbackFailedCommand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId);
}
inline ::GlobalNamespace::BuilderTable_TableState GorillaTagScripts::BuilderTable::GetTableState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetTableState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderTable_TableState>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::SetTableState(::GlobalNamespace::BuilderTable_TableState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetTableState", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_TableState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTagScripts::BuilderTable::SetPendingMap(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetPendingMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline ::StringW GorillaTagScripts::BuilderTable::GetPendingMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetPendingMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::BuilderTable::GetCurrentMapID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetCurrentMapID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::LoadSharedMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"LoadSharedMap", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void GorillaTagScripts::BuilderTable::SetInRoom(bool  inRoom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetInRoom", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inRoom);
}
inline bool GorillaTagScripts::BuilderTable::IsLocalPlayerInBuilderZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"IsLocalPlayerInBuilderZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTable::IsInBuilderZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"IsInBuilderZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::SetInBuilderZone(bool  inBuilderZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetInBuilderZone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBuilderZone);
}
inline void GorillaTagScripts::BuilderTable::ShowPieces(bool  show)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShowPieces", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show);
}
inline void GorillaTagScripts::BuilderTable::UpdateTableState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UpdateTableState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RouteNewCommand(::GlobalNamespace::BuilderTable_BuilderCommand  cmd, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RouteNewCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, force);
}
inline void GorillaTagScripts::BuilderTable::ExecuteBuildCommand(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteBuildCommand", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::ClearTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::ClearTableInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearTableInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::ClearBuiltInPlots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearBuiltInPlots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnDeserializeUpdatePlots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnDeserializeUpdatePlots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::BuildPiecesOnShelves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildPiecesOnShelves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnFinishedInitialTableBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnFinishedInitialTableBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::BuilderTable::CreatePieceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreatePieceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::ResetConveyors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ResetConveyors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RequestCreateConveyorPiece(int32_t  newPieceType, int32_t  materialType, int32_t  shelfID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestCreateConveyorPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPieceType, materialType, shelfID);
}
inline void GorillaTagScripts::BuilderTable::RequestCreateDispenserShelfPiece(int32_t  pieceType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, int32_t  shelfID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestCreateDispenserShelfPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, position, rotation, materialType, shelfID);
}
inline void GorillaTagScripts::BuilderTable::CreateConveyorPiece(int32_t  pieceType, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, int32_t  shelfID, int32_t  sendTimestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateConveyorPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId, position, rotation, materialType, shelfID, sendTimestamp);
}
inline void GorillaTagScripts::BuilderTable::CreateDispenserShelfPiece(int32_t  pieceType, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, int32_t  shelfID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateDispenserShelfPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId, position, rotation, materialType, shelfID);
}
inline void GorillaTagScripts::BuilderTable::RequestShelfSelection(int32_t  shelfId, int32_t  groupID, bool  isConveyor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestShelfSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelfId, groupID, isConveyor);
}
inline void GorillaTagScripts::BuilderTable::VerifySetSelections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"VerifySetSelections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTable::ValidateShelfSelectionParams(int32_t  shelfId, int32_t  displayGroupID, bool  isConveyor, ::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateShelfSelectionParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shelfId, displayGroupID, isConveyor, player);
}
inline void GorillaTagScripts::BuilderTable::SetConveyorSelection(int32_t  conveyorId, int32_t  setId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetConveyorSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conveyorId, setId);
}
inline void GorillaTagScripts::BuilderTable::SetDispenserSelection(int32_t  conveyorId, int32_t  setId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetDispenserSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conveyorId, setId);
}
inline void GorillaTagScripts::BuilderTable::ChangeSetSelection(int32_t  shelfID, int32_t  setID, bool  isConveyor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ChangeSetSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelfID, setID, isConveyor);
}
inline void GorillaTagScripts::BuilderTable::ExecuteSetSelection(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteSetSelection", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool GorillaTagScripts::BuilderTable::ValidateFunctionalPieceState(int32_t  pieceID, uint8_t  state, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateFunctionalPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceID, state, player);
}
inline void GorillaTagScripts::BuilderTable::OnFunctionalStateRequest(int32_t  pieceID, uint8_t  state, ::GlobalNamespace::NetPlayer*  player, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnFunctionalStateRequest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceID, state, player, timeStamp);
}
inline void GorillaTagScripts::BuilderTable::SetFunctionalPieceState(int32_t  pieceID, uint8_t  state, ::GlobalNamespace::NetPlayer*  player, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetFunctionalPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceID, state, player, timeStamp);
}
inline void GorillaTagScripts::BuilderTable::ExecuteSetFunctionalPieceState(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteSetFunctionalPieceState", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::RegisterFunctionalPiece(::GlobalNamespace::IBuilderPieceFunctional*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RegisterFunctionalPiece", {}, {::i2c::type_of<::GlobalNamespace::IBuilderPieceFunctional*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void GorillaTagScripts::BuilderTable::UnregisterFunctionalPiece(::GlobalNamespace::IBuilderPieceFunctional*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UnregisterFunctionalPiece", {}, {::i2c::type_of<::GlobalNamespace::IBuilderPieceFunctional*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void GorillaTagScripts::BuilderTable::RegisterFunctionalPieceFixedUpdate(::GlobalNamespace::IBuilderPieceFunctional*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RegisterFunctionalPieceFixedUpdate", {}, {::i2c::type_of<::GlobalNamespace::IBuilderPieceFunctional*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void GorillaTagScripts::BuilderTable::UnregisterFunctionalPieceFixedUpdate(::GlobalNamespace::IBuilderPieceFunctional*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UnregisterFunctionalPieceFixedUpdate", {}, {::i2c::type_of<::GlobalNamespace::IBuilderPieceFunctional*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void GorillaTagScripts::BuilderTable::RequestCreatePiece(int32_t  newPieceType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestCreatePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPieceType, position, rotation, materialType);
}
inline void GorillaTagScripts::BuilderTable::CreatePiece(int32_t  pieceType, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, ::GlobalNamespace::BuilderPiece_State  state, ::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreatePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId, position, rotation, materialType, state, player);
}
inline void GorillaTagScripts::BuilderTable::RequestRecyclePiece(::GlobalNamespace::BuilderPiece*  piece, bool  playFX, int32_t  recyclerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestRecyclePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, playFX, recyclerID);
}
inline void GorillaTagScripts::BuilderTable::RecyclePiece(int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  playFX, int32_t  recyclerID, ::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RecyclePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, position, rotation, playFX, recyclerID, player);
}
inline bool GorillaTagScripts::BuilderTable::ShouldExecuteCommand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShouldExecuteCommand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTable::ShouldQueueCommand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShouldQueueCommand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTable::ShouldDiscardCommand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShouldDiscardCommand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTable::DoesChainContainPiece(::GlobalNamespace::BuilderPiece*  targetPiece, ::GlobalNamespace::BuilderPiece*  firstInChain, ::GlobalNamespace::BuilderPiece*  nextInChain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DoesChainContainPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetPiece, firstInChain, nextInChain);
}
inline bool GorillaTagScripts::BuilderTable::DoesChainContainChain(::GlobalNamespace::BuilderPiece*  chainARoot, ::GlobalNamespace::BuilderPiece*  chainBAttachPiece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DoesChainContainChain", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, chainARoot, chainBAttachPiece);
}
inline bool GorillaTagScripts::BuilderTable::IsPlayerHandNearAction(::GlobalNamespace::NetPlayer*  player, ::UnityEngine::Vector3  worldPosition, bool  isLeftHand, bool  checkBothHands, float_t  acceptableRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"IsPlayerHandNearAction", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, worldPosition, isLeftHand, checkBothHands, acceptableRadius);
}
inline bool GorillaTagScripts::BuilderTable::ValidatePlacePieceParams(int32_t  pieceId, int32_t  attachPieceId, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::GlobalNamespace::NetPlayer*  placedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidatePlacePieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, attachPieceId, bumpOffsetX, bumpOffsetZ, twist, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer);
}
inline bool GorillaTagScripts::BuilderTable::ValidatePlacePieceState(int32_t  pieceId, int32_t  attachPieceId, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::Photon::Realtime::Player*  placedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidatePlacePieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, attachPieceId, bumpOffsetX, bumpOffsetZ, twist, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer);
}
inline void GorillaTagScripts::BuilderTable::ExecutePieceCreated(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceCreated", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::ExecutePieceRecycled(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceRecycled", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool GorillaTagScripts::BuilderTable::ValidateCreatePieceParams(int32_t  newPieceType, int32_t  newPieceId, ::GlobalNamespace::BuilderPiece_State  state, int32_t  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateCreatePieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newPieceType, newPieceId, state, materialType);
}
inline bool GorillaTagScripts::BuilderTable::ValidateDeserializedRootPieceState(int32_t  pieceId, ::GlobalNamespace::BuilderPiece_State  state, int32_t  shelfOwner, int32_t  heldByActor, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateDeserializedRootPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, state, shelfOwner, heldByActor, localPosition, localRotation);
}
inline bool GorillaTagScripts::BuilderTable::ValidateDeserializedChildPieceState(int32_t  pieceId, ::GlobalNamespace::BuilderPiece_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateDeserializedChildPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, state);
}
inline bool GorillaTagScripts::BuilderTable::ValidatePieceWorldTransform(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidatePieceWorldTransform", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, rotation);
}
inline bool GorillaTagScripts::BuilderTable::ValidatePositionInArea(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidatePositionInArea", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GorillaTagScripts::BuilderTable::CreatePieceInternal(int32_t  newPieceType, int32_t  newPieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::GlobalNamespace::BuilderPiece_State  state, int32_t  materialType, int32_t  activateTimeStamp, ::GorillaTagScripts::BuilderTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreatePieceInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method, newPieceType, newPieceId, position, rotation, state, materialType, activateTimeStamp, table);
}
inline void GorillaTagScripts::BuilderTable::RecyclePieceInternal(int32_t  pieceId, bool  ignoreHaptics, bool  playFX, int32_t  recyclerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RecyclePieceInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, ignoreHaptics, playFX, recyclerId);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GorillaTagScripts::BuilderTable::GetPiecePrefab(int32_t  pieceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetPiecePrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method, pieceType);
}
inline bool GorillaTagScripts::BuilderTable::ValidateAttachPieceParams(int32_t  pieceId, int32_t  attachIndex, int32_t  parentId, int32_t  parentAttachIndex, int32_t  piecePlacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateAttachPieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, attachIndex, parentId, parentAttachIndex, piecePlacement);
}
inline void GorillaTagScripts::BuilderTable::AttachPieceInternal(int32_t  pieceId, int32_t  attachIndex, int32_t  parentId, int32_t  parentAttachIndex, int32_t  placement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AttachPieceInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, attachIndex, parentId, parentAttachIndex, placement);
}
inline void GorillaTagScripts::BuilderTable::AttachPieceToActorInternal(int32_t  pieceId, int32_t  actorNumber, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AttachPieceToActorInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, actorNumber, isLeftHand);
}
inline void GorillaTagScripts::BuilderTable::RequestPlacePiece(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderPiece*  attachPiece, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, ::GlobalNamespace::BuilderPiece*  parentPiece, int32_t  attachIndex, int32_t  parentAttachIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestPlacePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, attachPiece, bumpOffsetX, bumpOffsetZ, twist, parentPiece, attachIndex, parentAttachIndex);
}
inline void GorillaTagScripts::BuilderTable::PlacePiece(int32_t  localCommandId, int32_t  pieceId, int32_t  attachPieceId, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::GlobalNamespace::NetPlayer*  placedByPlayer, int32_t  timeStamp, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PlacePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, attachPieceId, bumpOffsetX, bumpOffsetZ, twist, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer, timeStamp, force);
}
inline void GorillaTagScripts::BuilderTable::PiecePlacedInternal(int32_t  localCommandId, int32_t  pieceId, int32_t  attachPieceId, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::GlobalNamespace::NetPlayer*  placedByPlayer, int32_t  timeStamp, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PiecePlacedInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, attachPieceId, bumpOffsetX, bumpOffsetZ, twist, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer, timeStamp, force);
}
inline void GorillaTagScripts::BuilderTable::ExecutePiecePlacedWithActions(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePiecePlacedWithActions", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool GorillaTagScripts::BuilderTable::ValidateGrabPieceParams(int32_t  pieceId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateGrabPieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
}
inline bool GorillaTagScripts::BuilderTable::ValidateGrabPieceState(int32_t  pieceId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::Photon::Realtime::Player*  grabbedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateGrabPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
}
inline bool GorillaTagScripts::BuilderTable::IsLocationWithinSharedBuildArea(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"IsLocationWithinSharedBuildArea", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPosition);
}
inline bool GorillaTagScripts::BuilderTable::NoBlocksCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"NoBlocksCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RequestGrabPiece(::GlobalNamespace::BuilderPiece*  piece, bool  isLefHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestGrabPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, isLefHand, localPosition, localRotation);
}
inline void GorillaTagScripts::BuilderTable::GrabPiece(int32_t  localCommandId, int32_t  pieceId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GrabPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, isLeftHand, localPosition, localRotation, grabbedByPlayer, force);
}
inline void GorillaTagScripts::BuilderTable::PieceGrabbedInternal(int32_t  localCommandId, int32_t  pieceId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PieceGrabbedInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, isLeftHand, localPosition, localRotation, grabbedByPlayer, force);
}
inline void GorillaTagScripts::BuilderTable::ExecutePieceGrabbedWithActions(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceGrabbedWithActions", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool GorillaTagScripts::BuilderTable::ValidateDropPieceParams(int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  droppedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateDropPieceParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer);
}
inline bool GorillaTagScripts::BuilderTable::ValidateDropPieceState(int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  droppedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateDropPieceState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer);
}
inline void GorillaTagScripts::BuilderTable::RequestDropPiece(::GlobalNamespace::BuilderPiece*  piece, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestDropPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, position, rotation, velocity, angVelocity);
}
inline void GorillaTagScripts::BuilderTable::DropPiece(int32_t  localCommandId, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  droppedByPlayer, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DropPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer, force);
}
inline void GorillaTagScripts::BuilderTable::PieceDroppedInternal(int32_t  localCommandId, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  droppedByPlayer, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PieceDroppedInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer, force);
}
inline void GorillaTagScripts::BuilderTable::ExecutePieceDroppedWithActions(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceDroppedWithActions", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::ExecutePieceRepelled(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePieceRepelled", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::CleanUpDroppedPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CleanUpDroppedPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::FreezeDroppedPiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FreezeDroppedPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::AddPieceToDropList(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddPieceToDropList", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GorillaTagScripts::BuilderTable::FindFirstSleepingPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FindFirstSleepingPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RemovePieceFromDropList(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemovePieceFromDropList", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::UpdateDroppedPieces(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UpdateDroppedPieces", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GorillaTagScripts::BuilderTable::SetLocalPlayerOwnsPlot(bool  ownsPlot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SetLocalPlayerOwnsPlot", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownsPlot);
}
inline void GorillaTagScripts::BuilderTable::PlotClaimed(int32_t  plotPieceId, ::Photon::Realtime::Player*  claimingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PlotClaimed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plotPieceId, claimingPlayer);
}
inline void GorillaTagScripts::BuilderTable::ExecuteClaimPlot(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteClaimPlot", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::PlayerLeftRoom(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PlayerLeftRoom", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber);
}
inline void GorillaTagScripts::BuilderTable::ExecutePlayerLeftRoom(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::PlotFreed(int32_t  plotPieceId, ::Photon::Realtime::Player*  claimingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PlotFreed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plotPieceId, claimingPlayer);
}
inline void GorillaTagScripts::BuilderTable::ExecuteFreePlot(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteFreePlot", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::FreePlotInternal(int32_t  plotPieceId, int32_t  requestingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FreePlotInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plotPieceId, requestingPlayer);
}
inline bool GorillaTagScripts::BuilderTable::DoesPlayerOwnPlot(int32_t  actorNum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DoesPlayerOwnPlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNum);
}
inline void GorillaTagScripts::BuilderTable::RequestPaintPiece(int32_t  pieceId, int32_t  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestPaintPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, materialType);
}
inline void GorillaTagScripts::BuilderTable::PaintPiece(int32_t  pieceId, int32_t  materialType, ::Photon::Realtime::Player*  paintingPlayer, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PaintPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, materialType, paintingPlayer, force);
}
inline void GorillaTagScripts::BuilderTable::PaintPieceInternal(int32_t  pieceId, int32_t  materialType, ::Photon::Realtime::Player*  paintingPlayer, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PaintPieceInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, materialType, paintingPlayer, force);
}
inline void GorillaTagScripts::BuilderTable::ExecutePiecePainted(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecutePiecePainted", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::CreateArmShelvesForPlayersInBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateArmShelvesForPlayersInBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RemoveArmShelfForPlayer(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveArmShelfForPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTagScripts::BuilderTable::DropAllPiecesForPlayerLeaving(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DropAllPiecesForPlayerLeaving", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber);
}
inline void GorillaTagScripts::BuilderTable::RecycleAllPiecesForPlayerLeaving(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RecycleAllPiecesForPlayerLeaving", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber);
}
inline void GorillaTagScripts::BuilderTable::DropPieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece*  piece, int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DropPieceForPlayerLeavingInternal", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, playerActorNumber);
}
inline void GorillaTagScripts::BuilderTable::RecyclePieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece*  piece, int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RecyclePieceForPlayerLeavingInternal", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, playerActorNumber);
}
inline void GorillaTagScripts::BuilderTable::DetachPieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece*  piece, int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DetachPieceForPlayerLeavingInternal", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, playerActorNumber);
}
inline void GorillaTagScripts::BuilderTable::CreateArmShelf(int32_t  pieceIdLeft, int32_t  pieceIdRight, int32_t  pieceType, ::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateArmShelf", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceIdLeft, pieceIdRight, pieceType, player);
}
inline void GorillaTagScripts::BuilderTable::ExecuteArmShelfCreated(::GlobalNamespace::BuilderTable_BuilderCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ExecuteArmShelfCreated", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_BuilderCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GorillaTagScripts::BuilderTable::ClearLocalArmShelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ClearLocalArmShelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::PieceEnteredDropZone(int32_t  pieceId, ::UnityEngine::Vector3  worldPos, ::UnityEngine::Quaternion  worldRot, int32_t  dropZoneId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PieceEnteredDropZone", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, worldPos, worldRot, dropZoneId);
}
inline bool GorillaTagScripts::BuilderTable::ValidateRepelPiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ValidateRepelPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::RepelPieceTowardTable(int32_t  pieceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RepelPieceTowardTable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceID);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GorillaTagScripts::BuilderTable::GetPiece(int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetPiece", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method, pieceId);
}
inline void GorillaTagScripts::BuilderTable::AddPiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::RemovePiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemovePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::CreateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CreateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::DestroyData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DestroyData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::BuilderTable::AddPieceData(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddPieceData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::UpdatePieceData(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UpdatePieceData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::RemovePieceData(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemovePieceData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline int32_t GorillaTagScripts::BuilderTable::AddGridPlaneData(::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddGridPlaneData", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, gridPlane);
}
inline void GorillaTagScripts::BuilderTable::RemoveGridPlaneData(::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemoveGridPlaneData", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gridPlane);
}
inline int32_t GorillaTagScripts::BuilderTable::AddPrivatePlotData(::GlobalNamespace::BuilderPiecePrivatePlot*  plot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddPrivatePlotData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiecePrivatePlot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, plot);
}
inline void GorillaTagScripts::BuilderTable::RemovePrivatePlotData(::GlobalNamespace::BuilderPiecePrivatePlot*  plot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RemovePrivatePlotData", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiecePrivatePlot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plot);
}
inline void GorillaTagScripts::BuilderTable::OnButtonFreeRotation(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnButtonFreeRotation", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::BuilderTable::OnButtonFreePosition(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnButtonFreePosition", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::BuilderTable::OnButtonSaveLayout(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnButtonSaveLayout", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::BuilderTable::OnButtonClearLayout(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnButtonClearLayout", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline bool GorillaTagScripts::BuilderTable::TryPlaceGridPlane(::GlobalNamespace::BuilderPiece*  piece, ::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanes, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlaceGridPlane", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, piece, gridPlane, checkGridPlanes, potentialPlacement);
}
inline bool GorillaTagScripts::BuilderTable::TryPlaceGridPlaneOnGridPlane(::GlobalNamespace::BuilderPiece*  piece, ::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane, ::UnityEngine::Vector3  gridPlanePos, ::UnityEngine::Quaternion  gridPlaneRot, ::GorillaTagScripts::BuilderAttachGridPlane*  checkGridPlane, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement, ::by_ref<bool>  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlaceGridPlaneOnGridPlane", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, piece, gridPlane, gridPlanePos, gridPlaneRot, checkGridPlane, potentialPlacement, success);
}
inline ::UnityEngine::Vector2Int GorillaTagScripts::BuilderTable::Rotate90(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Rotate90", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, v, offsetX, offsetY);
}
inline ::UnityEngine::Vector2Int GorillaTagScripts::BuilderTable::Rotate270(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Rotate270", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, v, offsetX, offsetY);
}
inline ::UnityEngine::Vector2Int GorillaTagScripts::BuilderTable::Rotate180(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"Rotate180", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, v, offsetX, offsetY);
}
inline bool GorillaTagScripts::BuilderTable::ShareSameRoot(::GorillaTagScripts::BuilderAttachGridPlane*  plane, ::GorillaTagScripts::BuilderAttachGridPlane*  otherPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShareSameRoot", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, plane, otherPlane);
}
inline bool GorillaTagScripts::BuilderTable::ShareSameRoot(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderPiece*  otherPiece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ShareSameRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, piece, otherPiece);
}
inline bool GorillaTagScripts::BuilderTable::TryPlacePieceOnTableNoDrop(bool  leftHand, ::GlobalNamespace::BuilderPiece*  testPiece, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanesMale, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanesFemale, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlacePieceOnTableNoDrop", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftHand, testPiece, checkGridPlanesMale, checkGridPlanesFemale, potentialPlacement);
}
inline bool GorillaTagScripts::BuilderTable::TryPlacePieceOnTableNoDropJobs(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlaneData, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>  pieceData, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlaneData, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>  checkPieceData, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  allPlacements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlacePieceOnTableNoDropJobs", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gridPlaneData, pieceData, checkGridPlaneData, checkPieceData, potentialPlacement, allPlacements);
}
inline bool GorillaTagScripts::BuilderTable::CalcAllPotentialPlacements(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlaneData, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlaneData, ::GorillaTagScripts::BuilderPotentialPlacement  potentialPlacement, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  allPlacements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CalcAllPotentialPlacements", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::GorillaTagScripts::BuilderPotentialPlacement>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gridPlaneData, checkGridPlaneData, potentialPlacement, allPlacements);
}
inline bool GorillaTagScripts::BuilderTable::CanPiecesPotentiallySnap(::GlobalNamespace::BuilderPiece*  pieceInHand, ::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CanPiecesPotentiallySnap", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceInHand, piece);
}
inline bool GorillaTagScripts::BuilderTable::CanPiecesPotentiallyOverlap(::GlobalNamespace::BuilderPiece*  pieceInHand, ::GlobalNamespace::BuilderPiece*  rootWhenPlaced, ::GlobalNamespace::BuilderPiece_State  stateWhenPlaced, ::GlobalNamespace::BuilderPiece*  otherPiece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CanPiecesPotentiallyOverlap", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceInHand, rootWhenPlaced, stateWhenPlaced, otherPiece);
}
inline void GorillaTagScripts::BuilderTable::TryDropPiece(bool  leftHand, ::GlobalNamespace::BuilderPiece*  testPiece, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryDropPiece", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand, testPiece, velocity, angVelocity);
}
inline bool GorillaTagScripts::BuilderTable::TryPlacePieceGridPlanesOnTableInternal(::GlobalNamespace::BuilderPiece*  testPiece, int32_t  recurse, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanesMale, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanesFemale, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlacePieceGridPlanesOnTableInternal", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, testPiece, recurse, checkGridPlanesMale, checkGridPlanesFemale, potentialPlacement);
}
inline void GorillaTagScripts::BuilderTable::TryPlaceRandomlyOnTable(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryPlaceRandomlyOnTable", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::UseResources(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UseResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::UseResource(::GlobalNamespace::BuilderResourceQuantity  quantity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UseResource", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quantity);
}
inline void GorillaTagScripts::BuilderTable::AddResources(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderTable::AddResource(::GlobalNamespace::BuilderResourceQuantity  quantity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"AddResource", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quantity);
}
inline bool GorillaTagScripts::BuilderTable::HasEnoughUnreservedResources(::GlobalNamespace::BuilderResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasEnoughUnreservedResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, resources);
}
inline bool GorillaTagScripts::BuilderTable::HasEnoughUnreservedResource(::GlobalNamespace::BuilderResourceQuantity  quantity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasEnoughUnreservedResource", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, quantity);
}
inline bool GorillaTagScripts::BuilderTable::HasEnoughResources(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasEnoughResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, piece);
}
inline bool GorillaTagScripts::BuilderTable::HasEnoughResource(::GlobalNamespace::BuilderResourceQuantity  quantity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"HasEnoughResource", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, quantity);
}
inline int32_t GorillaTagScripts::BuilderTable::GetAvailableResources(::GlobalNamespace::BuilderResourceType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetAvailableResources", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void GorillaTagScripts::BuilderTable::OnAvailableResourcesChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnAvailableResourcesChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::BuilderTable::GetPrivateResourceLimitForType(int32_t  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetPrivateResourceLimitForType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void GorillaTagScripts::BuilderTable::WriteVector3(::System::IO::BinaryWriter*  writer, ::UnityEngine::Vector3  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"WriteVector3", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, data);
}
inline void GorillaTagScripts::BuilderTable::WriteQuaternion(::System::IO::BinaryWriter*  writer, ::UnityEngine::Quaternion  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"WriteQuaternion", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, data);
}
inline ::UnityEngine::Vector3 GorillaTagScripts::BuilderTable::ReadVector3(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ReadVector3", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, reader);
}
inline ::UnityEngine::Quaternion GorillaTagScripts::BuilderTable::ReadQuaternion(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ReadQuaternion", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, reader);
}
inline int32_t GorillaTagScripts::BuilderTable::PackPiecePlacement(uint8_t  twist, int8_t  xOffset, int8_t  zOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PackPiecePlacement", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, twist, xOffset, zOffset);
}
inline void GorillaTagScripts::BuilderTable::UnpackPiecePlacement(int32_t  packed, ::by_ref<uint8_t>  twist, ::by_ref<int8_t>  xOffset, ::by_ref<int8_t>  zOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UnpackPiecePlacement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<int8_t>>(), ::i2c::type_of<::by_ref<int8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, packed, twist, xOffset, zOffset);
}
inline int64_t GorillaTagScripts::BuilderTable::PackSnapInfo(int32_t  attachGridIndex, int32_t  otherAttachGridIndex, ::UnityEngine::Vector2Int  min, ::UnityEngine::Vector2Int  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"PackSnapInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, attachGridIndex, otherAttachGridIndex, min, max);
}
inline void GorillaTagScripts::BuilderTable::UnpackSnapInfo(int64_t  packed, ::by_ref<int32_t>  attachGridIndex, ::by_ref<int32_t>  otherAttachGridIndex, ::by_ref<::UnityEngine::Vector2Int>  min, ::by_ref<::UnityEngine::Vector2Int>  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"UnpackSnapInfo", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packed, attachGridIndex, otherAttachGridIndex, min, max);
}
inline void GorillaTagScripts::BuilderTable::OnTitleDataUpdate(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnTitleDataUpdate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void GorillaTagScripts::BuilderTable::FetchSharedBlocksStartingMapConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FetchSharedBlocksStartingMapConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnGetStartingMapConfigSuccess(::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnGetStartingMapConfigSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaTagScripts::BuilderTable::OnGetStartingMapConfigFail(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnGetStartingMapConfigFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaTagScripts::BuilderTable::ResetStartingMapConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ResetStartingMapConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::RequestTableConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"RequestTableConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnGetTableConfiguration(::StringW  configString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnGetTableConfiguration", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configString);
}
inline void GorillaTagScripts::BuilderTable::ParseTableConfiguration(::StringW  dataRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ParseTableConfiguration", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataRecord);
}
inline void GorillaTagScripts::BuilderTable::DumpTableConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DumpTableConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::BuilderTable::GetSaveDataTimeKey(int32_t  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetSaveDataTimeKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, slot);
}
inline ::StringW GorillaTagScripts::BuilderTable::GetSaveDataKey(int32_t  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetSaveDataKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, slot);
}
inline void GorillaTagScripts::BuilderTable::FindAndLoadSharedBlocksMap(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FindAndLoadSharedBlocksMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline ::StringW GorillaTagScripts::BuilderTable::GetSharedBlocksMapID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"GetSharedBlocksMapID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::FoundSharedBlocksMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FoundSharedBlocksMap", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void GorillaTagScripts::BuilderTable::BuildInitialTableForPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildInitialTableForPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnFetchPrivateScanComplete(int32_t  slot, bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnFetchPrivateScanComplete", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot, success);
}
inline void GorillaTagScripts::BuilderTable::BuildSelectedSharedMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildSelectedSharedMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::FindStartingMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FindStartingMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::FoundStartingMapList(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FoundStartingMapList", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GorillaTagScripts::BuilderTable::ChooseMapFromList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"ChooseMapFromList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::FoundTopMapData(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FoundTopMapData", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void GorillaTagScripts::BuilderTable::FoundDefaultSharedBlocksMap(bool  success, ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"FoundDefaultSharedBlocksMap", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, map);
}
inline void GorillaTagScripts::BuilderTable::TryBuildingSharedBlocksMap(::StringW  mapData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryBuildingSharedBlocksMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapData);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::BuilderTable::CheckForNoBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"CheckForNoBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::TryBuildingFromTitleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"TryBuildingFromTitleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable::OnGetTitleDataBuildComplete(::StringW  titleDataBuild)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnGetTitleDataBuildComplete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, titleDataBuild);
}
inline void GorillaTagScripts::BuilderTable::SaveTableForPlayer(::StringW  busyStr, ::StringW  blocksErrStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SaveTableForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, busyStr, blocksErrStr);
}
inline void GorillaTagScripts::BuilderTable::OnSaveScanSuccess(int32_t  scan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnSaveScanSuccess", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scan);
}
inline void GorillaTagScripts::BuilderTable::OnSaveScanFailure(int32_t  scan, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"OnSaveScanFailure", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scan, message);
}
inline ::StringW GorillaTagScripts::BuilderTable::WriteTableToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"WriteTableToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderTable_SnapOverlapKey GorillaTagScripts::BuilderTable::BuildOverlapKey(int32_t  pieceId, int32_t  otherPieceId, int32_t  attachGridIndex, int32_t  otherAttachGridIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildOverlapKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderTable_SnapOverlapKey>(nullptr, ___internal_method, pieceId, otherPieceId, attachGridIndex, otherAttachGridIndex);
}
inline bool GorillaTagScripts::BuilderTable::BuildTableFromJson(::StringW  tableJson, bool  fromTitleData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"BuildTableFromJson", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tableJson, fromTitleData);
}
inline int32_t GorillaTagScripts::BuilderTable::SerializeTableState(::ArrayW<uint8_t>  bytes, int32_t  maxBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"SerializeTableState", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, maxBytes);
}
inline void GorillaTagScripts::BuilderTable::DeserializeTableState(::ArrayW<uint8_t>  bytes, int32_t  numBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {"DeserializeTableState", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, numBytes);
}
inline void GorillaTagScripts::BuilderTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTable* GorillaTagScripts::BuilderTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTable*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTagScripts::BuilderTable::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTagScripts::BuilderTable::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTable::BuilderTable()   {
}
constexpr ::GlobalNamespace::GTZone  GorillaTagScripts::BuilderTable::BUILDER_ZONE{static_cast<int32_t>(0x12)};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::*)(int32_t)>(&::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ba9730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::*)()>(&::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ba9758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::*)()>(&::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::MoveNext)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ba975c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::*)()>(&::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::*)()>(&::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ba9cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::*)()>(&::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392* GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392::BuilderTable__CheckForNoBlocks_d__392()   {
}
//  Writing Method size for method: ::GorillaTagScripts::BuilderTable_BuildPieceSpawn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTable_BuildPieceSpawn::*)()>(&::GorillaTagScripts::BuilderTable_BuildPieceSpawn::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ba95d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::BuilderTable_BuildPieceSpawn::__cordl_internal_get_buildPiecePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildPiecePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::BuilderTable_BuildPieceSpawn::__cordl_internal_get_buildPiecePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildPiecePrefab;
}
constexpr void GorillaTagScripts::BuilderTable_BuildPieceSpawn::__cordl_internal_set_buildPiecePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buildPiecePrefab = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTable_BuildPieceSpawn::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& GorillaTagScripts::BuilderTable_BuildPieceSpawn::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void GorillaTagScripts::BuilderTable_BuildPieceSpawn::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
inline void GorillaTagScripts::BuilderTable_BuildPieceSpawn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTable_BuildPieceSpawn* GorillaTagScripts::BuilderTable_BuildPieceSpawn::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTable_BuildPieceSpawn::BuilderTable_BuildPieceSpawn()   {
}
