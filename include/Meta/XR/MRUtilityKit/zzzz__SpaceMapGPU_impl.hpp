#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SpaceMapGPU.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SpaceMapGPU_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.get_SpaceMapCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::get_SpaceMapCreatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f48934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"get_SpaceMapCreatedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.set_SpaceMapCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::UnityEngine::Events::UnityEvent*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::set_SpaceMapCreatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f4893c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"set_SpaceMapCreatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.get_SpaceMapRoomCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::get_SpaceMapRoomCreatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f48944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"get_SpaceMapRoomCreatedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.set_SpaceMapRoomCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::set_SpaceMapRoomCreatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f4894c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"set_SpaceMapRoomCreatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.get_SpaceMapUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::get_SpaceMapUpdatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f48954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"get_SpaceMapUpdatedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.set_SpaceMapUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::UnityEngine::Events::UnityEvent*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::set_SpaceMapUpdatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f4895c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"set_SpaceMapUpdatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.GetSpaceMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::GetSpaceMap)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9f48964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"GetSpaceMap", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.StartSpaceMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::GlobalNamespace::MRUK_RoomFilter)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::StartSpaceMap)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x9f48a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"StartSpaceMap", {}, {::i2c::type_of<::GlobalNamespace::MRUK_RoomFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.StartSpaceMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::StartSpaceMap)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9f48d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"StartSpaceMap", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.GetColorAtPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::GetColorAtPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9f48f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"GetColorAtPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::Awake)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9f49068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9f49200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::OnEnable)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x9f494fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::OnDisable)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x9f49818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::Update)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f49b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.StartSpaceMapInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*, ::UnityEngine::RenderTexture*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::StartSpaceMapInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f48cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"StartSpaceMapInternal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.SceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::SceneLoaded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f4a49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"SceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::IsInitialized)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9f4a4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.UpdateBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::UpdateBuffer)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x9f4a540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"UpdateBuffer", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.UpdateBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*, ::UnityEngine::RenderTexture*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::UpdateBuffer)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x9f4a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"UpdateBuffer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.DrawRoomsIntoCB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::DrawRoomsIntoCB)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x9f4a76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"DrawRoomsIntoCB", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.RunSpaceMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::UnityEngine::RenderTexture*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::RunSpaceMap)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x9f4ab40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"RunSpaceMap", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.ReceiveUpdatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveUpdatedRoom)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9f4b66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveUpdatedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.ReceiveCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveCreatedRoom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f4b7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveCreatedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.ReceiveRemovedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveRemovedRoom)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f4b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveRemovedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.UnregisterAnchorUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::UnregisterAnchorUpdates)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f4b8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"UnregisterAnchorUpdates", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.RegisterAnchorUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::RegisterAnchorUpdates)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f4b6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"RegisterAnchorUpdates", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.ReceiveAnchorUpdatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveAnchorUpdatedCallback)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9f4b9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveAnchorUpdatedCallback", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.ReceiveAnchorRemovedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveAnchorRemovedCallback)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9f4ba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveAnchorRemovedCallback", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.ReceiveAnchorCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveAnchorCreatedEvent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9f4ba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveAnchorCreatedEvent", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.CreateNewRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::CreateNewRenderTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f48ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"CreateNewRenderTexture", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.TryReleaseRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::TryReleaseRT)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f4a6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"TryReleaseRT", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.ApplyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::ApplyMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f493f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ApplyMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.InitUpdateGradientTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::InitUpdateGradientTexture)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9f492ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"InitUpdateGradientTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.InitializeOrthoCameraMatrixParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::UnityEngine::Rect)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::InitializeOrthoCameraMatrixParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f49f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"InitializeOrthoCameraMatrixParameters", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.CalculateOrthographicProjMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(float_t, float_t, float_t, float_t)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::CalculateOrthographicProjMatrix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f4bac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"CalculateOrthographicProjMatrix", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.CalculateViewMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::CalculateViewMatrix)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9f4bb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"CalculateViewMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.GetBoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::GetBoundingBox)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x9f49c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"GetBoundingBox", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU.HandleDebugPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)(::UnityEngine::Rect)>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::HandleDebugPlane)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9f4bbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"HandleDebugPlane", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMapGPU._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMapGPU::*)()>(&::Meta::XR::MRUtilityKit::SpaceMapGPU::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9f4bd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__SpaceMapCreatedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpaceMapCreatedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__SpaceMapCreatedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpaceMapCreatedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__SpaceMapCreatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpaceMapCreatedEvent_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__SpaceMapRoomCreatedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpaceMapRoomCreatedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__SpaceMapRoomCreatedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpaceMapRoomCreatedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__SpaceMapRoomCreatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpaceMapRoomCreatedEvent_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__SpaceMapUpdatedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpaceMapUpdatedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__SpaceMapUpdatedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpaceMapUpdatedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__SpaceMapUpdatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpaceMapUpdatedEvent_k__BackingField = value;
}
constexpr ::GlobalNamespace::MRUK_RoomFilter& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_CreateOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateOnStart;
}
constexpr ::GlobalNamespace::MRUK_RoomFilter const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_CreateOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateOnStart;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_CreateOnStart(::GlobalNamespace::MRUK_RoomFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateOnStart = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_TrackUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackUpdates;
}
constexpr bool const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_TrackUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackUpdates;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_TrackUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackUpdates = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_TextureDimension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextureDimension;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_TextureDimension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextureDimension;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_TextureDimension(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TextureDimension = value;
}
constexpr ::UnityEngine::Gradient*& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_MapGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapGradient;
}
constexpr ::UnityEngine::Gradient* const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_MapGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapGradient;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_MapGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MapGradient = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_gradientMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gradientMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_gradientMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gradientMaterial;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_gradientMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gradientMaterial = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_CSSpaceMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CSSpaceMap;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_CSSpaceMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CSSpaceMap;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_CSSpaceMap(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CSSpaceMap = value;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_SceneObjectLabels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneObjectLabels;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_SceneObjectLabels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneObjectLabels;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_SceneObjectLabels(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneObjectLabels = value;
}
constexpr ::UnityEngine::Color& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_InsideObjectColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InsideObjectColor;
}
constexpr ::UnityEngine::Color const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_InsideObjectColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InsideObjectColor;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_InsideObjectColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InsideObjectColor = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_CameraCaptureBorderBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraCaptureBorderBuffer;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_CameraCaptureBorderBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraCaptureBorderBuffer;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_CameraCaptureBorderBuffer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraCaptureBorderBuffer = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_CreateOutputTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateOutputTexture;
}
constexpr bool const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_CreateOutputTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateOutputTexture;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_CreateOutputTexture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateOutputTexture = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_OutputTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_OutputTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputTexture;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_OutputTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutputTexture = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_DebugPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugPlane;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_DebugPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugPlane;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_DebugPlane(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugPlane = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_ShowDebugPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDebugPlane;
}
constexpr bool const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_ShowDebugPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDebugPlane;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_ShowDebugPlane(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowDebugPlane = value;
}
constexpr ::UnityEngine::Color& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__colorFloorWall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorFloorWall;
}
constexpr ::UnityEngine::Color const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__colorFloorWall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorFloorWall;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__colorFloorWall(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorFloorWall = value;
}
constexpr ::UnityEngine::Color& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__colorSceneObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorSceneObjects;
}
constexpr ::UnityEngine::Color const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__colorSceneObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorSceneObjects;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__colorSceneObjects(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorSceneObjects = value;
}
constexpr ::UnityEngine::Color& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__colorVirtualObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorVirtualObjects;
}
constexpr ::UnityEngine::Color const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__colorVirtualObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorVirtualObjects;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__colorVirtualObjects(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorVirtualObjects = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__matFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matFloor;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__matFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matFloor;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__matFloor(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matFloor = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__matObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matObjects;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__matObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matObjects;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__matObjects(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matObjects = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__isOrthoCameraInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOrthoCameraInitialized;
}
constexpr bool const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__isOrthoCameraInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOrthoCameraInitialized;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__isOrthoCameraInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOrthoCameraInitialized = value;
}
constexpr ::UnityEngine::Matrix4x4& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__orthoCamProjectionMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orthoCamProjectionMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__orthoCamProjectionMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orthoCamProjectionMatrix;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__orthoCamProjectionMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____orthoCamProjectionMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__orthoCamViewMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orthoCamViewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__orthoCamViewMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orthoCamViewMatrix;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__orthoCamViewMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____orthoCamViewMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__orthoCamProjectionViewMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orthoCamProjectionViewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__orthoCamProjectionViewMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orthoCamProjectionViewMatrix;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__orthoCamProjectionViewMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____orthoCamProjectionViewMatrix = value;
}
constexpr ::UnityEngine::Rect& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__currentRoomBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRoomBounds;
}
constexpr ::UnityEngine::Rect const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__currentRoomBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRoomBounds;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__currentRoomBounds(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRoomBounds = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__RTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__RTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RTextures;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__RTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RTextures = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__gradientTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gradientTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__gradientTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gradientTexture;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__gradientTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gradientTexture = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__csSpaceMapKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____csSpaceMapKernel;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__csSpaceMapKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____csSpaceMapKernel;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__csSpaceMapKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____csSpaceMapKernel = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__csFillSpaceMapKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____csFillSpaceMapKernel;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__csFillSpaceMapKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____csFillSpaceMapKernel;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__csFillSpaceMapKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____csFillSpaceMapKernel = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__csPrepareSpaceMapKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____csPrepareSpaceMapKernel;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__csPrepareSpaceMapKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____csPrepareSpaceMapKernel;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__csPrepareSpaceMapKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____csPrepareSpaceMapKernel = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_RenderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get_RenderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderTexture;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set_RenderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderTexture = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::UnityW<::UnityEngine::RenderTexture>>*& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__roomTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomTextures;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::UnityW<::UnityEngine::RenderTexture>>* const& Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_get__roomTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomTextures;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMapGPU::__cordl_internal_set__roomTextures(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomTextures = value;
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_WidthID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WidthID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_WidthID()  {
return ::cordl_internals::getStaticField<int32_t, "WidthID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_HeightID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HeightID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_HeightID()  {
return ::cordl_internals::getStaticField<int32_t, "HeightID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_ColorFloorWallID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ColorFloorWallID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_ColorFloorWallID()  {
return ::cordl_internals::getStaticField<int32_t, "ColorFloorWallID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_ColorSceneObjectsID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ColorSceneObjectsID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_ColorSceneObjectsID()  {
return ::cordl_internals::getStaticField<int32_t, "ColorSceneObjectsID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_ColorVirtualObjectsID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ColorVirtualObjectsID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_ColorVirtualObjectsID()  {
return ::cordl_internals::getStaticField<int32_t, "ColorVirtualObjectsID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_StepID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "StepID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_StepID()  {
return ::cordl_internals::getStaticField<int32_t, "StepID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_SourceID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SourceID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_SourceID()  {
return ::cordl_internals::getStaticField<int32_t, "SourceID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_ResultID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ResultID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_ResultID()  {
return ::cordl_internals::getStaticField<int32_t, "ResultID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::setStaticF_SpaceMapCameraMatrixID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SpaceMapCameraMatrixID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::MRUtilityKit::SpaceMapGPU::getStaticF_SpaceMapCameraMatrixID()  {
return ::cordl_internals::getStaticField<int32_t, "SpaceMapCameraMatrixID", ::Meta::XR::MRUtilityKit::SpaceMapGPU*>();
}
inline ::UnityEngine::Events::UnityEvent* Meta::XR::MRUtilityKit::SpaceMapGPU::get_SpaceMapCreatedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"get_SpaceMapCreatedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::set_SpaceMapCreatedEvent(::UnityEngine::Events::UnityEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"set_SpaceMapCreatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* Meta::XR::MRUtilityKit::SpaceMapGPU::get_SpaceMapRoomCreatedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"get_SpaceMapRoomCreatedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::set_SpaceMapRoomCreatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"set_SpaceMapRoomCreatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent* Meta::XR::MRUtilityKit::SpaceMapGPU::get_SpaceMapUpdatedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"get_SpaceMapUpdatedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::set_SpaceMapUpdatedEvent(::UnityEngine::Events::UnityEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"set_SpaceMapUpdatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> Meta::XR::MRUtilityKit::SpaceMapGPU::GetSpaceMap(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"GetSpaceMap", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::StartSpaceMap(::GlobalNamespace::MRUK_RoomFilter  roomFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"StartSpaceMap", {}, {::i2c::type_of<::GlobalNamespace::MRUK_RoomFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomFilter);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::StartSpaceMap(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"StartSpaceMap", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline ::UnityEngine::Color Meta::XR::MRUtilityKit::SpaceMapGPU::GetColorAtPosition(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"GetColorAtPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, worldPosition);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::StartSpaceMapInternal(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"StartSpaceMapInternal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rooms, rt);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::SceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"SceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::SpaceMapGPU::IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::UpdateBuffer(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"UpdateBuffer", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::UpdateBuffer(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"UpdateBuffer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rooms, rt);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::DrawRoomsIntoCB(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"DrawRoomsIntoCB", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandBuffer, rooms);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::RunSpaceMap(::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"RunSpaceMap", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveUpdatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveUpdatedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveCreatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveCreatedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveRemovedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveRemovedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::UnregisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"UnregisterAnchorUpdates", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::RegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"RegisterAnchorUpdates", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveAnchorUpdatedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveAnchorUpdatedCallback", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveAnchorRemovedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveAnchorRemovedCallback", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::ReceiveAnchorCreatedEvent(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ReceiveAnchorCreatedEvent", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline ::UnityW<::UnityEngine::RenderTexture> Meta::XR::MRUtilityKit::SpaceMapGPU::CreateNewRenderTexture(int32_t  wh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"CreateNewRenderTexture", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, wh);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::TryReleaseRT(::UnityEngine::RenderTexture*  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"TryReleaseRT", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTexture);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::ApplyMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"ApplyMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::InitUpdateGradientTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"InitUpdateGradientTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::InitializeOrthoCameraMatrixParameters(::UnityEngine::Rect  roomBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"InitializeOrthoCameraMatrixParameters", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomBounds);
}
inline ::UnityEngine::Matrix4x4 Meta::XR::MRUtilityKit::SpaceMapGPU::CalculateOrthographicProjMatrix(float_t  size, float_t  aspect, float_t  near, float_t  far)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"CalculateOrthographicProjMatrix", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, size, aspect, near, far);
}
inline ::UnityEngine::Matrix4x4 Meta::XR::MRUtilityKit::SpaceMapGPU::CalculateViewMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"CalculateViewMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Rect Meta::XR::MRUtilityKit::SpaceMapGPU::GetBoundingBox(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"GetBoundingBox", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, rooms);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::HandleDebugPlane(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {"HandleDebugPlane", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rect);
}
inline void Meta::XR::MRUtilityKit::SpaceMapGPU::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMapGPU*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SpaceMapGPU* Meta::XR::MRUtilityKit::SpaceMapGPU::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SpaceMapGPU*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SpaceMapGPU::SpaceMapGPU()   {
}
