#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectGripPosition.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectGripPosition_def.hpp"
#include "GlobalNamespace/zzzz__SlotTransformOverride_def.hpp"
#include "GlobalNamespace/zzzz__SubGrabPoint_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableItemSlotTransformOverride_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectGripPosition.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectGripPosition::*)()>(&::GlobalNamespace::TransferrableObjectGripPosition::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5772c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectGripPosition*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectGripPosition.CreateSubGrabPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubGrabPoint* (::GlobalNamespace::TransferrableObjectGripPosition::*)(::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::TransferrableObjectGripPosition::CreateSubGrabPoint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x576a2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectGripPosition*>(),
                        {"CreateSubGrabPoint", {}, {::i2c::type_of<::GlobalNamespace::SlotTransformOverride*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectGripPosition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectGripPosition::*)()>(&::GlobalNamespace::TransferrableObjectGripPosition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5772d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectGripPosition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>& GlobalNamespace::TransferrableObjectGripPosition::__cordl_internal_get_parentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride> const& GlobalNamespace::TransferrableObjectGripPosition::__cordl_internal_get_parentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentObject;
}
constexpr void GlobalNamespace::TransferrableObjectGripPosition::__cordl_internal_set_parentObject(::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentObject = value;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState& GlobalNamespace::TransferrableObjectGripPosition::__cordl_internal_get_attachmentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachmentType;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState const& GlobalNamespace::TransferrableObjectGripPosition::__cordl_internal_get_attachmentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachmentType;
}
constexpr void GlobalNamespace::TransferrableObjectGripPosition::__cordl_internal_set_attachmentType(::GlobalNamespace::TransferrableObject_PositionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachmentType = value;
}
inline void GlobalNamespace::TransferrableObjectGripPosition::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectGripPosition*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubGrabPoint* GlobalNamespace::TransferrableObjectGripPosition::CreateSubGrabPoint(::GlobalNamespace::SlotTransformOverride*  overrideContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectGripPosition*>(),
                        {"CreateSubGrabPoint", {}, {::i2c::type_of<::GlobalNamespace::SlotTransformOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubGrabPoint*>(this, ___internal_method, overrideContainer);
}
inline void GlobalNamespace::TransferrableObjectGripPosition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectGripPosition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObjectGripPosition* GlobalNamespace::TransferrableObjectGripPosition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObjectGripPosition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObjectGripPosition::TransferrableObjectGripPosition()   {
}
