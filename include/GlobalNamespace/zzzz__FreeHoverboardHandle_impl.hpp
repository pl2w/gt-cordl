#pragma once
// IWYU pragma private; include "GlobalNamespace/FreeHoverboardHandle.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FreeHoverboardHandle_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__FreeHoverboardInstance_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardHandle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardHandle::*)()>(&::GlobalNamespace::FreeHoverboardHandle::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59531c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardHandle.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardHandle::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::FreeHoverboardHandle::OnHover)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5953234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(),
                    {::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardHandle.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardHandle::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::FreeHoverboardHandle::OnGrab)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x5953474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(),
                    {::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardHandle.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardHandle::*)()>(&::GlobalNamespace::FreeHoverboardHandle::DropItemCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5953b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(),
                    {::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardHandle.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FreeHoverboardHandle::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::FreeHoverboardHandle::OnRelease)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5953b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(),
                    {::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardHandle::*)()>(&::GlobalNamespace::FreeHoverboardHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5953b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FreeHoverboardInstance>& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_parentFreeBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentFreeBoard;
}
constexpr ::UnityW<::GlobalNamespace::FreeHoverboardInstance> const& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_parentFreeBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentFreeBoard;
}
constexpr void GlobalNamespace::FreeHoverboardHandle::__cordl_internal_set_parentFreeBoard(::UnityW<::GlobalNamespace::FreeHoverboardInstance>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentFreeBoard = value;
}
constexpr bool& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_hasParentBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasParentBoard;
}
constexpr bool const& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_hasParentBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasParentBoard;
}
constexpr void GlobalNamespace::FreeHoverboardHandle::__cordl_internal_set_hasParentBoard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasParentBoard = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_defaultHoldPosLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldPosLeft;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_defaultHoldPosLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldPosLeft;
}
constexpr void GlobalNamespace::FreeHoverboardHandle::__cordl_internal_set_defaultHoldPosLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHoldPosLeft = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_defaultHoldPosRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldPosRight;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_defaultHoldPosRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldPosRight;
}
constexpr void GlobalNamespace::FreeHoverboardHandle::__cordl_internal_set_defaultHoldPosRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHoldPosRight = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_defaultHoldAngleLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldAngleLeft;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_defaultHoldAngleLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldAngleLeft;
}
constexpr void GlobalNamespace::FreeHoverboardHandle::__cordl_internal_set_defaultHoldAngleLeft(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHoldAngleLeft = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_defaultHoldAngleRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldAngleRight;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_defaultHoldAngleRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHoldAngleRight;
}
constexpr void GlobalNamespace::FreeHoverboardHandle::__cordl_internal_set_defaultHoldAngleRight(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHoldAngleRight = value;
}
constexpr int32_t& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_noHapticsUntilFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noHapticsUntilFrame;
}
constexpr int32_t const& GlobalNamespace::FreeHoverboardHandle::__cordl_internal_get_noHapticsUntilFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noHapticsUntilFrame;
}
constexpr void GlobalNamespace::FreeHoverboardHandle::__cordl_internal_set_noHapticsUntilFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noHapticsUntilFrame = value;
}
inline void GlobalNamespace::FreeHoverboardHandle::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FreeHoverboardHandle::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::FreeHoverboardHandle::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::FreeHoverboardHandle::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FreeHoverboardHandle::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::FreeHoverboardHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FreeHoverboardHandle* GlobalNamespace::FreeHoverboardHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FreeHoverboardHandle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FreeHoverboardHandle::FreeHoverboardHandle()   {
}
