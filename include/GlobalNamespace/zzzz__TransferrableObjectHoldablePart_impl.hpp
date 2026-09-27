#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectHoldablePart.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObjectHoldablePart::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)(bool)>(&::GlobalNamespace::TransferrableObjectHoldablePart::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x573d224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x573d290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart::Tick)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x573d2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.UpdateHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)(::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::TransferrableObjectHoldablePart::UpdateHeld)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x573d4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TransferrableObjectHoldablePart::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x573d4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TransferrableObjectHoldablePart::OnGrab)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x573d4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart::DropItemCleanup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x573d5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObjectHoldablePart::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TransferrableObjectHoldablePart::OnRelease)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x573d624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x573d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_transferrableParentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableParentObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_transferrableParentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableParentObject;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_set_transferrableParentObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableParentObject = value;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_heldBit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldBit;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_heldBit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldBit;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_set_heldBit(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldBit = value;
}
constexpr bool& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_isHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr bool const& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_isHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_set_isHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeld = value;
}
constexpr bool& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_isHeldLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldLeftHand;
}
constexpr bool const& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_isHeldLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldLeftHand;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_set_isHeldLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeldLeftHand = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_onGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrab;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_onGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrab;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_set_onGrab(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onGrab = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_onRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRelease;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_onRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRelease;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_set_onRelease(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRelease = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_onDrop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDrop;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get_onDrop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDrop;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_set_onDrop(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDrop = value;
}
constexpr bool& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GlobalNamespace::TransferrableObjectHoldablePart::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::UpdateHeld(::GlobalNamespace::VRRig*  rig, bool  isHeldLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, isHeldLeftHand);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObjectHoldablePart::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObjectHoldablePart* GlobalNamespace::TransferrableObjectHoldablePart::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObjectHoldablePart*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::TransferrableObjectHoldablePart::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::TransferrableObjectHoldablePart::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObjectHoldablePart::TransferrableObjectHoldablePart()   {
}
