#pragma once
// IWYU pragma private; include "GlobalNamespace/HoverboardHandle.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HoverboardHandle_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__HoverboardVisual_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoverboardHandle.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardHandle::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::HoverboardHandle::OnHover)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5955efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(),
                    {::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardHandle.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardHandle::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::HoverboardHandle::OnGrab)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x595613c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(),
                    {::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardHandle.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardHandle::*)()>(&::GlobalNamespace::HoverboardHandle::DropItemCleanup)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5956840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(),
                    {::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardHandle.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HoverboardHandle::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::HoverboardHandle::OnRelease)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5956d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(),
                    {::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardHandle::*)()>(&::GlobalNamespace::HoverboardHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5956e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HoverboardVisual>& GlobalNamespace::HoverboardHandle::__cordl_internal_get_parentVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentVisual;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardVisual> const& GlobalNamespace::HoverboardHandle::__cordl_internal_get_parentVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentVisual;
}
constexpr void GlobalNamespace::HoverboardHandle::__cordl_internal_set_parentVisual(::UnityW<::GlobalNamespace::HoverboardVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentVisual = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::HoverboardHandle::__cordl_internal_get_defaultHoldAngleLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldAngleLeft;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::HoverboardHandle::__cordl_internal_get_defaultHoldAngleLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldAngleLeft;
}
constexpr void GlobalNamespace::HoverboardHandle::__cordl_internal_set_defaultHoldAngleLeft(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHoldAngleLeft = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::HoverboardHandle::__cordl_internal_get_defaultHoldAngleRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldAngleRight;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::HoverboardHandle::__cordl_internal_get_defaultHoldAngleRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldAngleRight;
}
constexpr void GlobalNamespace::HoverboardHandle::__cordl_internal_set_defaultHoldAngleRight(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHoldAngleRight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HoverboardHandle::__cordl_internal_get_defaultHoldPosLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldPosLeft;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HoverboardHandle::__cordl_internal_get_defaultHoldPosLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldPosLeft;
}
constexpr void GlobalNamespace::HoverboardHandle::__cordl_internal_set_defaultHoldPosLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHoldPosLeft = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HoverboardHandle::__cordl_internal_get_defaultHoldPosRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldPosRight;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HoverboardHandle::__cordl_internal_get_defaultHoldPosRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldPosRight;
}
constexpr void GlobalNamespace::HoverboardHandle::__cordl_internal_set_defaultHoldPosRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHoldPosRight = value;
}
constexpr int32_t& GlobalNamespace::HoverboardHandle::__cordl_internal_get_noHapticsUntilFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noHapticsUntilFrame;
}
constexpr int32_t const& GlobalNamespace::HoverboardHandle::__cordl_internal_get_noHapticsUntilFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noHapticsUntilFrame;
}
constexpr void GlobalNamespace::HoverboardHandle::__cordl_internal_set_noHapticsUntilFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noHapticsUntilFrame = value;
}
inline void GlobalNamespace::HoverboardHandle::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::HoverboardHandle::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::HoverboardHandle::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HoverboardHandle::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::HoverboardHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoverboardHandle* GlobalNamespace::HoverboardHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoverboardHandle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoverboardHandle::HoverboardHandle()   {
}
