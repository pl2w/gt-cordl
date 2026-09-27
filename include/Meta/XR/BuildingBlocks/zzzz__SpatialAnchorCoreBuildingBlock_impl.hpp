#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__SaveAsync_d__23_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__WaitForInit_d__22_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_OnAnchorCreateCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorCreateCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec77c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_OnAnchorCreateCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_OnAnchorCreateCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorCreateCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec77cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_OnAnchorCreateCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_OnAnchorsLoadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorsLoadCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec77d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_OnAnchorsLoadCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_OnAnchorsLoadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorsLoadCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec77dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_OnAnchorsLoadCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_OnAnchorsEraseAllCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorsEraseAllCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec77e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_OnAnchorsEraseAllCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_OnAnchorsEraseAllCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorsEraseAllCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec77ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_OnAnchorsEraseAllCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_OnAnchorEraseCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorEraseCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec77f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_OnAnchorEraseCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_OnAnchorEraseCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorEraseCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec77fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_OnAnchorEraseCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpatialAnchor_OperationResult (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec7804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec780c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.InstantiateSpatialAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::InstantiateSpatialAnchor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9ec4be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"InstantiateSpatialAnchor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.InitSpatialAnchorAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::InitSpatialAnchorAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ec7814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"InitSpatialAnchorAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.WaitForInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::WaitForInit)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ec6058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"WaitForInit", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.SaveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::SaveAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9ec614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"SaveAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.LoadAndInstantiateAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Guid>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::LoadAndInstantiateAnchors)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9ec78d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                    {::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.EraseAllAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAllAnchors)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ec7a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"EraseAllAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.EraseAnchorByUuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::System::Guid)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorByUuid)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9ec7bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"EraseAnchorByUuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.LoadAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::LoadAnchorsAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9ec79b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"LoadAnchorsAsync", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.EraseAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorsAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9ec7b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"EraseAnchorsAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.EraseAnchorByUuidAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorByUuidAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9ec7c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"EraseAnchorByUuidAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.GetFirstInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> (*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::GetFirstInstance)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9ec3f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"GetFirstInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec5cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorCreateCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorCreateCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorCreateCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorCreateCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__onAnchorCreateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAnchorCreateCompleted = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorsLoadCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorsLoadCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorsLoadCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorsLoadCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__onAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAnchorsLoadCompleted = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorsEraseAllCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorsEraseAllCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorsEraseAllCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorsEraseAllCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__onAnchorsEraseAllCompleted(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAnchorsEraseAllCompleted = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorEraseCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorEraseCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorEraseCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorEraseCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__onAnchorEraseCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAnchorEraseCompleted = value;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__Result_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Result_k__BackingField;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult const& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__Result_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Result_k__BackingField;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__Result_k__BackingField(::GlobalNamespace::OVRSpatialAnchor_OperationResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Result_k__BackingField = value;
}
inline ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorCreateCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_OnAnchorCreateCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorCreateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_OnAnchorCreateCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorsLoadCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_OnAnchorsLoadCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_OnAnchorsLoadCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorsEraseAllCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_OnAnchorsEraseAllCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorsEraseAllCompleted(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_OnAnchorsEraseAllCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorEraseCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_OnAnchorEraseCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorEraseCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_OnAnchorEraseCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpatialAnchor_OperationResult Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpatialAnchor_OperationResult>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_Result(::GlobalNamespace::OVRSpatialAnchor_OperationResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::InstantiateSpatialAnchor(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"InstantiateSpatialAnchor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, position, rotation);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::InitSpatialAnchorAsync(::GlobalNamespace::OVRSpatialAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"InitSpatialAnchorAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline ::System::Threading::Tasks::Task* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::WaitForInit(::GlobalNamespace::OVRSpatialAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"WaitForInit", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, anchor);
}
inline ::System::Threading::Tasks::Task* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::SaveAsync(::GlobalNamespace::OVRSpatialAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"SaveAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, anchor);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::LoadAndInstantiateAnchors(::UnityEngine::GameObject*  prefab, ::System::Collections::Generic::List_1<::System::Guid>*  uuids)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, uuids);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAllAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"EraseAllAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorByUuid(::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"EraseAnchorByUuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uuid);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::LoadAnchorsAsync(::UnityEngine::GameObject*  prefab, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"LoadAnchorsAsync", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, uuids);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorsAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"EraseAnchorsAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorByUuidAsync(::GlobalNamespace::OVRSpatialAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"EraseAnchorByUuidAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, anchor);
}
inline ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::GetFirstInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {"GetFirstInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>>(nullptr, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::SpatialAnchorCoreBuildingBlock()   {
}
