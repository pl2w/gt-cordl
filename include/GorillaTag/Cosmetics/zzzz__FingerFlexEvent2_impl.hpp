#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent2.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_FingerType_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_HandType_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_RangeState_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_TriggerType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_FingerType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_HandType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_RangeState_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_TriggerType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IHeldItem_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2.TryLinkToNextEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2::*)(int32_t)>(&::GorillaTag::Cosmetics::FingerFlexEvent2::TryLinkToNextEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d9713c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"TryLinkToNextEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2::Awake)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5d97208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2.CalcFlex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2::*)(bool)>(&::GorillaTag::Cosmetics::FingerFlexEvent2::CalcFlex)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x5d973f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"CalcFlex", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d97bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d97c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d97cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2::*)(bool)>(&::GorillaTag::Cosmetics::FingerFlexEvent2::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d97cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2::Tick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d97ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d97ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*> const& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_set_list(::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___list = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get_myTransferrable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTransferrable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get_myTransferrable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTransferrable;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_set_myTransferrable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myTransferrable = value;
}
constexpr ::GorillaTag::Cosmetics::IHeldItem*& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get_myHeldItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHeldItem;
}
constexpr ::GorillaTag::Cosmetics::IHeldItem* const& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get_myHeldItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHeldItem;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myHeldItem = value;
}
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2::TryLinkToNextEvent(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"TryLinkToNextEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2::CalcFlex(bool  disable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"CalcFlex", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disable);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::FingerFlexEvent2* GorillaTag::Cosmetics::FingerFlexEvent2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::FingerFlexEvent2*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::FingerFlexEvent2::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::FingerFlexEvent2::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::FingerFlexEvent2::FingerFlexEvent2()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.get_IsFlexTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_IsFlexTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d971e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_IsFlexTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.get_IsReleaseTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_IsReleaseTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d971f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_IsReleaseTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.get_RequiresHeldItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_RequiresHeldItem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d973e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_RequiresHeldItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.get_HasValidLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_HasValidLink)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d97cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_HasValidLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.get_IsLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_IsLinked)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d97bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_IsLinked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.get_ShowMainProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_ShowMainProperties)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d97d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_ShowMainProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.get_ShowFlexThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_ShowFlexThreshold)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d97d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_ShowFlexThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.get_ShowReleaseThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_ShowReleaseThreshold)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d97d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_ShowReleaseThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent.ProcessState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)(bool, float_t)>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::ProcessState)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d97a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"ProcessState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d97d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_triggerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerType;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_triggerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerType;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_triggerType(::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerType = value;
}
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_tryLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryLink;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_tryLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryLink;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_tryLink(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryLink = value;
}
constexpr int32_t& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_linkIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkIndex;
}
constexpr int32_t const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_linkIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkIndex;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_linkIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linkIndex = value;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_fingerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerType;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_fingerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerType;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_fingerType(::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerType = value;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_handType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handType;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_handType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handType;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_handType(::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handType = value;
}
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_networked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networked;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_networked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networked;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_networked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networked = value;
}
constexpr float_t& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_flexThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flexThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_flexThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flexThreshold;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_flexThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flexThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_releaseThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_releaseThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseThreshold;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_releaseThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseThreshold = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_unityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_unityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityEvent = value;
}
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_wasHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeld;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_wasHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeld;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_wasHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHeld = value;
}
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_marginError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___marginError;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_marginError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___marginError;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_marginError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___marginError = value;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_currentState(::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_lastState(::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr float_t& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_lastThresholdTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastThresholdTime;
}
constexpr float_t const& GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_get_lastThresholdTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastThresholdTime;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::__cordl_internal_set_lastThresholdTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastThresholdTime = value;
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_IsFlexTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_IsFlexTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_IsReleaseTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_IsReleaseTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_RequiresHeldItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_RequiresHeldItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_HasValidLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_HasValidLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_IsLinked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_IsLinked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_ShowMainProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_ShowMainProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_ShowFlexThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_ShowFlexThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::get_ShowReleaseThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"get_ShowReleaseThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::ProcessState(bool  leftHand, float_t  flexValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {"ProcessState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand, flexValue);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent* GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent::FingerFlexEvent2_FlexEvent()   {
}
