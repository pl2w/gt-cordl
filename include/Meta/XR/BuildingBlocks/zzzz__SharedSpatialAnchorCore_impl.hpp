#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore__InitSpatialAnchor_d__16_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.get_OnSpatialAnchorsShareCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSpatialAnchorsShareCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec4e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"get_OnSpatialAnchorsShareCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.set_OnSpatialAnchorsShareCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSpatialAnchorsShareCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec4e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"set_OnSpatialAnchorsShareCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.get_OnSpatialAnchorsShareToGroupCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>* (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSpatialAnchorsShareToGroupCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec4e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"get_OnSpatialAnchorsShareToGroupCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.set_OnSpatialAnchorsShareToGroupCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSpatialAnchorsShareToGroupCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec4e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"set_OnSpatialAnchorsShareToGroupCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.get_OnSharedSpatialAnchorsLoadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSharedSpatialAnchorsLoadCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec4e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"get_OnSharedSpatialAnchorsLoadCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.set_OnSharedSpatialAnchorsLoadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSharedSpatialAnchorsLoadCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec4e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"set_OnSharedSpatialAnchorsLoadCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::Start)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9ec4e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.InstantiateSpatialAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::InstantiateSpatialAnchor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9ec4fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"InstantiateSpatialAnchor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.InitSpatialAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::InitSpatialAnchor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9ec50ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"InitSpatialAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.LoadAndInstantiateAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Guid>*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadAndInstantiateAnchors)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9ec51e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                    {::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.LoadAndInstantiateAnchorsFromGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::UnityEngine::GameObject*, ::System::Guid)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadAndInstantiateAnchorsFromGroup)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9ec52c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"LoadAndInstantiateAnchorsFromGroup", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.LoadSharedSpatialAnchorsRoutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::UnityEngine::GameObject*, ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadSharedSpatialAnchorsRoutine)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9ec5398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"LoadSharedSpatialAnchorsRoutine", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.ShareSpatialAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::ShareSpatialAnchors)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9ec547c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"ShareSpatialAnchors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.ShareSpatialAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Guid)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::ShareSpatialAnchors)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9ec55e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"ShareSpatialAnchors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.OnShareCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnShareCompleted)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9ec574c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"OnShareCompleted", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.OnShareToGroupCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnShareToGroupCompleted)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9ec5920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"OnShareToGroupCompleted", {}, {::i2c::type_of<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnDestroy)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9ec5b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec5cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSpatialAnchorsShareCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSpatialAnchorsShareCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSpatialAnchorsShareCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSpatialAnchorsShareCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onSpatialAnchorsShareCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSpatialAnchorsShareCompleted = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSpatialAnchorsShareToGroupCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSpatialAnchorsShareToGroupCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>* const& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSpatialAnchorsShareToGroupCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSpatialAnchorsShareToGroupCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onSpatialAnchorsShareToGroupCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSpatialAnchorsShareToGroupCompleted = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSharedSpatialAnchorsLoadCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSharedSpatialAnchorsLoadCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSharedSpatialAnchorsLoadCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSharedSpatialAnchorsLoadCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onSharedSpatialAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSharedSpatialAnchorsLoadCompleted = value;
}
constexpr ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onShareCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onShareCompleted;
}
constexpr ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onShareCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onShareCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onShareCompleted(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onShareCompleted = value;
}
constexpr ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onShareToGroupCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onShareToGroupCompleted;
}
constexpr ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onShareToGroupCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onShareToGroupCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onShareToGroupCompleted(::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onShareToGroupCompleted = value;
}
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSpatialAnchorsShareCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"get_OnSpatialAnchorsShareCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSpatialAnchorsShareCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"set_OnSpatialAnchorsShareCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>* Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSpatialAnchorsShareToGroupCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"get_OnSpatialAnchorsShareToGroupCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSpatialAnchorsShareToGroupCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"set_OnSpatialAnchorsShareToGroupCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSharedSpatialAnchorsLoadCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"get_OnSharedSpatialAnchorsLoadCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSharedSpatialAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"set_OnSharedSpatialAnchorsLoadCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::InstantiateSpatialAnchor(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"InstantiateSpatialAnchor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, position, rotation);
}
inline ::System::Threading::Tasks::Task* Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::InitSpatialAnchor(::GlobalNamespace::OVRSpatialAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"InitSpatialAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, anchor);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadAndInstantiateAnchors(::UnityEngine::GameObject*  prefab, ::System::Collections::Generic::List_1<::System::Guid>*  uuids)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, uuids);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadAndInstantiateAnchorsFromGroup(::UnityEngine::GameObject*  prefab, ::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"LoadAndInstantiateAnchorsFromGroup", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, groupUuid);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadSharedSpatialAnchorsRoutine(::UnityEngine::GameObject*  prefab, ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"LoadSharedSpatialAnchorsRoutine", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, result);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::ShareSpatialAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*  users)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"ShareSpatialAnchors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchors, users);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::ShareSpatialAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"ShareSpatialAnchors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchors, groupUuid);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnShareCompleted(::GlobalNamespace::OVRSpatialAnchor_OperationResult  result, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"OnShareCompleted", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, anchors);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnShareToGroupCompleted(::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>  result, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"OnShareToGroupCompleted", {}, {::i2c::type_of<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, anchors);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore* Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::SharedSpatialAnchorCore()   {
}
