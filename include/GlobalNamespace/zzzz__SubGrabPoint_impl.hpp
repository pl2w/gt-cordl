#pragma once
// IWYU pragma private; include "GlobalNamespace/SubGrabPoint.hpp"
#include "GlobalNamespace/zzzz__LimitAxis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SubGrabPoint_def.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_def.hpp"
#include "GlobalNamespace/zzzz__SlotTransformOverride_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.GetTransformation_GripPointLocalToAdvOriginLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::SubGrabPoint::*)(::GlobalNamespace::AdvancedItemState_PreData*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubGrabPoint::GetTransformation_GripPointLocalToAdvOriginLocal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5767efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.GetRotationRelativeToObjectAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::SubGrabPoint::*)(::GlobalNamespace::AdvancedItemState*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubGrabPoint::GetRotationRelativeToObjectAnchor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5767f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.GetGrabPositionRelativeToGrabPointOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SubGrabPoint::*)(::GlobalNamespace::AdvancedItemState*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubGrabPoint::GetGrabPositionRelativeToGrabPointOrigin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5767f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.InitializePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SubGrabPoint::InitializePoints)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5767f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.GetPositionOnObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SubGrabPoint::*)(::UnityEngine::Transform*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubGrabPoint::GetPositionOnObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57682b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                        {"GetPositionOnObject", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::SlotTransformOverride*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.GetTransformFromPositionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::SubGrabPoint::*)(::GlobalNamespace::AdvancedItemState*, ::GlobalNamespace::SlotTransformOverride*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SubGrabPoint::GetTransformFromPositionState)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x57682d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.GetAdvancedItemStateFromHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AdvancedItemState* (::GlobalNamespace::SubGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubGrabPoint::GetAdvancedItemStateFromHand)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x5768634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                        {"GetAdvancedItemStateFromHand", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::SlotTransformOverride*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.GetPreData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AdvancedItemState_PreData* (::GlobalNamespace::SubGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubGrabPoint::GetPreData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5768cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint.EvaluateScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SubGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SubGrabPoint::EvaluateScore)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5768d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubGrabPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubGrabPoint::*)()>(&::GlobalNamespace::SubGrabPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5768fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripPoint;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_gripPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripPoint = value;
}
constexpr ::GlobalNamespace::LimitAxis& GlobalNamespace::SubGrabPoint::__cordl_internal_get_limitAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitAxis;
}
constexpr ::GlobalNamespace::LimitAxis const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_limitAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitAxis;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_limitAxis(::GlobalNamespace::LimitAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitAxis = value;
}
constexpr bool& GlobalNamespace::SubGrabPoint::__cordl_internal_get_allowReverseGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowReverseGrip;
}
constexpr bool const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_allowReverseGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowReverseGrip;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_allowReverseGrip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowReverseGrip = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripPoint_AdvOriginLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripPoint_AdvOriginLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripPoint_AdvOriginLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripPoint_AdvOriginLocal;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_gripPoint_AdvOriginLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripPoint_AdvOriginLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripPointOffset_AdvOriginLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripPointOffset_AdvOriginLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripPointOffset_AdvOriginLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripPointOffset_AdvOriginLocal;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_gripPointOffset_AdvOriginLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripPointOffset_AdvOriginLocal = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripRotation_AdvOriginLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripRotation_AdvOriginLocal;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripRotation_AdvOriginLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripRotation_AdvOriginLocal;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_gripRotation_AdvOriginLocal(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripRotation_AdvOriginLocal = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SubGrabPoint::__cordl_internal_get_advAnchor_ParentAnchorLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___advAnchor_ParentAnchorLocal;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_advAnchor_ParentAnchorLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___advAnchor_ParentAnchorLocal;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_advAnchor_ParentAnchorLocal(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___advAnchor_ParentAnchorLocal = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripRotation_ParentAnchorLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripRotation_ParentAnchorLocal;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripRotation_ParentAnchorLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripRotation_ParentAnchorLocal;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_gripRotation_ParentAnchorLocal(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripRotation_ParentAnchorLocal = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripPointLocalToAdvOriginLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripPointLocalToAdvOriginLocal;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::SubGrabPoint::__cordl_internal_get_gripPointLocalToAdvOriginLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripPointLocalToAdvOriginLocal;
}
constexpr void GlobalNamespace::SubGrabPoint::__cordl_internal_set_gripPointLocalToAdvOriginLocal(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripPointLocalToAdvOriginLocal = value;
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::SubGrabPoint::GetTransformation_GripPointLocalToAdvOriginLocal(::GlobalNamespace::AdvancedItemState_PreData*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, advancedItemState, slotTransformOverride);
}
inline ::UnityEngine::Quaternion GlobalNamespace::SubGrabPoint::GetRotationRelativeToObjectAnchor(::GlobalNamespace::AdvancedItemState*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, advancedItemState, slotTransformOverride);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SubGrabPoint::GetGrabPositionRelativeToGrabPointOrigin(::GlobalNamespace::AdvancedItemState*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, advancedItemState, slotTransformOverride);
}
inline void GlobalNamespace::SubGrabPoint::InitializePoints(::UnityEngine::Transform*  anchor, ::UnityEngine::Transform*  grabPointAnchor, ::UnityEngine::Transform*  advancedGrabPointOrigin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, grabPointAnchor, advancedGrabPointOrigin);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SubGrabPoint::GetPositionOnObject(::UnityEngine::Transform*  transferableObject, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                        {"GetPositionOnObject", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::SlotTransformOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, transferableObject, slotTransformOverride);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::SubGrabPoint::GetTransformFromPositionState(::GlobalNamespace::AdvancedItemState*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride, ::UnityEngine::Transform*  targetDockXf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, advancedItemState, slotTransformOverride, targetDockXf);
}
inline ::GlobalNamespace::AdvancedItemState* GlobalNamespace::SubGrabPoint::GetAdvancedItemStateFromHand(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                        {"GetAdvancedItemStateFromHand", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::SlotTransformOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AdvancedItemState*>(this, ___internal_method, objectTransform, handTransform, targetDock, slotTransformOverride);
}
inline ::GlobalNamespace::AdvancedItemState_PreData* GlobalNamespace::SubGrabPoint::GetPreData(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AdvancedItemState_PreData*>(this, ___internal_method, objectTransform, handTransform, targetDock, slotTransformOverride);
}
inline float_t GlobalNamespace::SubGrabPoint::EvaluateScore(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, objectTransform, handTransform, targetDock);
}
inline void GlobalNamespace::SubGrabPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubGrabPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubGrabPoint* GlobalNamespace::SubGrabPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubGrabPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubGrabPoint::SubGrabPoint()   {
}
