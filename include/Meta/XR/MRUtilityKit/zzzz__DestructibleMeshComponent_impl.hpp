#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleMeshComponent.hpp"
#include "System/Collections/Generic/zzzz__IList_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_MeshSegment_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_MeshSegmentationResult_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukMesh3f_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.get_GlobalMeshMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::get_GlobalMeshMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"get_GlobalMeshMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.set_GlobalMeshMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::UnityEngine::Material*)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::set_GlobalMeshMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"set_GlobalMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.get_ReservedTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::get_ReservedTop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"get_ReservedTop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.set_ReservedTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(float_t)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::set_ReservedTop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"set_ReservedTop", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.get_ReservedBottom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::get_ReservedBottom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"get_ReservedBottom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.set_ReservedBottom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(float_t)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::set_ReservedBottom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"set_ReservedBottom", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.get_ReservedSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::get_ReservedSegment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"get_ReservedSegment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.set_ReservedSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::set_ReservedSegment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"set_ReservedSegment", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.SegmentMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<uint32_t>, ::ArrayW<::UnityEngine::Vector3>)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::SegmentMesh)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9f08cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"SegmentMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.GetDestructibleMeshSegmentsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::GetDestructibleMeshSegmentsCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f09c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"GetDestructibleMeshSegmentsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.GetDestructibleMeshSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::ArrayW<::UnityEngine::GameObject*>)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::GetDestructibleMeshSegments)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x9f09c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"GetDestructibleMeshSegments", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.DestroySegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::DestroySegment)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9f09ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"DestroySegment", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.OnSegmentationTaskCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::OnSegmentationTaskCompleted)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x9f0a2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"OnSegmentationTaskCompleted", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.ProcessSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*, uint32_t, ::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::ProcessSegments)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x9f0a75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"ProcessSegments", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.CreateDestructibleMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::CreateDestructibleMesh)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9f0a5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"CreateDestructibleMesh", {}, {::i2c::type_of<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.CreateMeshSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Vector2>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Color>, bool)>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::CreateMeshSegment)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9f0ad04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"CreateMeshSegment", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::OnDestroy)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x9f0af3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent.DebugDestructibleMeshComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::DebugDestructibleMeshComponent)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x9f0b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"DebugDestructibleMeshComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f0b424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get_OnDestructibleMeshCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDestructibleMeshCreated;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>* const& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get_OnDestructibleMeshCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDestructibleMeshCreated;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_set_OnDestructibleMeshCreated(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDestructibleMeshCreated = value;
}
constexpr ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get_OnSegmentationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSegmentationCompleted;
}
constexpr ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>* const& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get_OnSegmentationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSegmentationCompleted;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_set_OnSegmentationCompleted(::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSegmentationCompleted = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__destructibleMeshMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destructibleMeshMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__destructibleMeshMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destructibleMeshMaterial;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_set__destructibleMeshMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destructibleMeshMaterial = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__reservedTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reservedTop;
}
constexpr float_t const& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__reservedTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reservedTop;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_set__reservedTop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reservedTop = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__reservedBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reservedBottom;
}
constexpr float_t const& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__reservedBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reservedBottom;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_set__reservedBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reservedBottom = value;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__segmentationTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segmentationTask;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>* const& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__segmentationTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segmentationTask;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_set__segmentationTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____segmentationTask = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__segments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segments;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__segments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segments;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_set__segments(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____segments = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__ReservedSegment_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReservedSegment_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_get__ReservedSegment_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReservedSegment_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent::__cordl_internal_set__ReservedSegment_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReservedSegment_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Material> Meta::XR::MRUtilityKit::DestructibleMeshComponent::get_GlobalMeshMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"get_GlobalMeshMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::set_GlobalMeshMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"set_GlobalMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::XR::MRUtilityKit::DestructibleMeshComponent::get_ReservedTop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"get_ReservedTop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::set_ReservedTop(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"set_ReservedTop", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::XR::MRUtilityKit::DestructibleMeshComponent::get_ReservedBottom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"get_ReservedBottom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::set_ReservedBottom(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"set_ReservedBottom", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::DestructibleMeshComponent::get_ReservedSegment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"get_ReservedSegment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::set_ReservedSegment(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"set_ReservedSegment", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::SegmentMesh(::ArrayW<::UnityEngine::Vector3>  meshPositions, ::ArrayW<uint32_t>  meshIndices, ::ArrayW<::UnityEngine::Vector3>  segmentationPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"SegmentMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshPositions, meshIndices, segmentationPoints);
}
inline int32_t Meta::XR::MRUtilityKit::DestructibleMeshComponent::GetDestructibleMeshSegmentsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"GetDestructibleMeshSegmentsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*>)
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::GetDestructibleMeshSegments(T  segments)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                    {"GetDestructibleMeshSegments", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segments);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::GetDestructibleMeshSegments(::ArrayW<::UnityEngine::GameObject*>  segments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"GetDestructibleMeshSegments", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segments);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::DestroySegment(::UnityEngine::GameObject*  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"DestroySegment", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::OnSegmentationTaskCompleted(::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"OnSegmentationTaskCompleted", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline ::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult Meta::XR::MRUtilityKit::DestructibleMeshComponent::ProcessSegments(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*  segments, uint32_t  numSegments, ::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f  reservedSegment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"ProcessSegments", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>(this, ___internal_method, segments, numSegments, reservedSegment);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::CreateDestructibleMesh(::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"CreateDestructibleMesh", {}, {::i2c::type_of<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::DestructibleMeshComponent::CreateMeshSegment(::ArrayW<::UnityEngine::Vector3>  positions, ::ArrayW<int32_t>  indices, ::ArrayW<::UnityEngine::Vector2>  uv, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Color>  colors, bool  isReserved)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"CreateMeshSegment", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, positions, indices, uv, tangents, colors, isReserved);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::DebugDestructibleMeshComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {"DebugDestructibleMeshComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::DestructibleMeshComponent* Meta::XR::MRUtilityKit::DestructibleMeshComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::DestructibleMeshComponent::DestructibleMeshComponent()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f09c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0._SegmentMesh_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult (::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::*)()>(&::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::_SegmentMesh_b__0)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9f0b4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0*>(),
                        {"<SegmentMesh>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_meshPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_meshPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshPositions;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_set_meshPositions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshPositions = value;
}
constexpr ::ArrayW<uint32_t>& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_meshIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshIndices;
}
constexpr ::ArrayW<uint32_t> const& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_meshIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshIndices;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_set_meshIndices(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshIndices = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_segmentationPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentationPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_segmentationPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentationPoints;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_set_segmentationPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentationPoints = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_reservedMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedMin;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_reservedMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedMin;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_set_reservedMin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reservedMin = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_reservedMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedMax;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get_reservedMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedMax;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_set_reservedMax(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reservedMax = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent> const& Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::__cordl_internal_set___4__this(::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::_SegmentMesh_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0*>(),
                        {"<SegmentMesh>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0* Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0::DestructibleMeshComponent___c__DisplayClass22_0()   {
}
