#pragma once
// IWYU pragma private; include "GlobalNamespace/SlotTransformOverride.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__SlotTransformOverride_def.hpp"
#include "GlobalNamespace/zzzz__SubGrabPoint_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectGripPosition_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlotTransformOverride.get__EdXformOffsetRepresenationOf_overrideTransformMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::XformOffset (::GlobalNamespace::SlotTransformOverride::*)()>(&::GlobalNamespace::SlotTransformOverride::get__EdXformOffsetRepresenationOf_overrideTransformMatrix)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5769de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"get__EdXformOffsetRepresenationOf_overrideTransformMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlotTransformOverride.set__EdXformOffsetRepresenationOf_overrideTransformMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlotTransformOverride::*)(::GorillaTag::XformOffset)>(&::GlobalNamespace::SlotTransformOverride::set__EdXformOffsetRepresenationOf_overrideTransformMatrix)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5769e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"set__EdXformOffsetRepresenationOf_overrideTransformMatrix", {}, {::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlotTransformOverride.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlotTransformOverride::*)(::UnityEngine::Component*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SlotTransformOverride::Initialize)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5769ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlotTransformOverride.AddLineButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlotTransformOverride::*)()>(&::GlobalNamespace::SlotTransformOverride::AddLineButton)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x576a128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"AddLineButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlotTransformOverride.AddSubGrabPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlotTransformOverride::*)(::GlobalNamespace::TransferrableObjectGripPosition*)>(&::GlobalNamespace::SlotTransformOverride::AddSubGrabPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x576a1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"AddSubGrabPoint", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObjectGripPosition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlotTransformOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlotTransformOverride::*)()>(&::GlobalNamespace::SlotTransformOverride::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x576a2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_overrideTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_overrideTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTransform;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_overrideTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideTransform = value;
}
constexpr ::StringW& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_overrideTransform_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTransform_path;
}
constexpr ::StringW const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_overrideTransform_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTransform_path;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_overrideTransform_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideTransform_path = value;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_positionState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionState;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_positionState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionState;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_positionState(::GlobalNamespace::TransferrableObject_PositionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionState = value;
}
constexpr bool& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_useAdvancedGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useAdvancedGrab;
}
constexpr bool const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_useAdvancedGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useAdvancedGrab;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_useAdvancedGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useAdvancedGrab = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_overrideTransformMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTransformMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_overrideTransformMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTransformMatrix;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_overrideTransformMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideTransformMatrix = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_advancedGrabPointAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___advancedGrabPointAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_advancedGrabPointAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___advancedGrabPointAnchor;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_advancedGrabPointAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___advancedGrabPointAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_advancedGrabPointOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___advancedGrabPointOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_advancedGrabPointOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___advancedGrabPointOrigin;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_advancedGrabPointOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___advancedGrabPointOrigin = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SubGrabPoint*>*& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_multiPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiPoints;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SubGrabPoint*>* const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_multiPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiPoints;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_multiPoints(::System::Collections::Generic::List_1<::GlobalNamespace::SubGrabPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiPoints = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_AdvOriginLocalToParentAnchorLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdvOriginLocalToParentAnchorLocal;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_AdvOriginLocalToParentAnchorLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdvOriginLocalToParentAnchorLocal;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_AdvOriginLocalToParentAnchorLocal(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdvOriginLocalToParentAnchorLocal = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_AdvAnchorLocalToAdvOriginLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdvAnchorLocalToAdvOriginLocal;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::SlotTransformOverride::__cordl_internal_get_AdvAnchorLocalToAdvOriginLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdvAnchorLocalToAdvOriginLocal;
}
constexpr void GlobalNamespace::SlotTransformOverride::__cordl_internal_set_AdvAnchorLocalToAdvOriginLocal(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdvAnchorLocalToAdvOriginLocal = value;
}
inline ::GorillaTag::XformOffset GlobalNamespace::SlotTransformOverride::get__EdXformOffsetRepresenationOf_overrideTransformMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"get__EdXformOffsetRepresenationOf_overrideTransformMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::XformOffset>(this, ___internal_method);
}
inline void GlobalNamespace::SlotTransformOverride::set__EdXformOffsetRepresenationOf_overrideTransformMatrix(::GorillaTag::XformOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"set__EdXformOffsetRepresenationOf_overrideTransformMatrix", {}, {::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SlotTransformOverride::Initialize(::UnityEngine::Component*  component, ::UnityEngine::Transform*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, anchor);
}
inline void GlobalNamespace::SlotTransformOverride::AddLineButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"AddLineButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlotTransformOverride::AddSubGrabPoint(::GlobalNamespace::TransferrableObjectGripPosition*  togp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {"AddSubGrabPoint", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObjectGripPosition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, togp);
}
inline void GlobalNamespace::SlotTransformOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlotTransformOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlotTransformOverride* GlobalNamespace::SlotTransformOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlotTransformOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlotTransformOverride::SlotTransformOverride()   {
}
