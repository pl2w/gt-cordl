#pragma once
// IWYU pragma private; include "GlobalNamespace/EvolvingCosmetic.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_AgeAwareGameObject_impl.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_SubscriptionAgeRule_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_AgeAwareGameObject_def.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_SubscriptionAgeRule_def.hpp"
#include "GlobalNamespace/zzzz__ICosmeticStateSync_def.hpp"
#include "GlobalNamespace/zzzz__VRRigReliableState_StateSyncSlots_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.get_StateValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::get_StateValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5704c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"get_StateValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.get_SelectedObjectIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::get_SelectedObjectIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5704c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"get_SelectedObjectIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.set_SelectedObjectIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)(int32_t)>(&::GlobalNamespace::EvolvingCosmetic::set_SelectedObjectIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5704ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"set_SelectedObjectIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.get_PlayfabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::get_PlayfabId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5704ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"get_PlayfabId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5704cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5704e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.UpdateDaysAccrued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::UpdateDaysAccrued)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x57053c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"UpdateDaysAccrued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.FindAgeAwareIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EvolvingCosmetic::*)(int32_t)>(&::GlobalNamespace::EvolvingCosmetic::FindAgeAwareIndex)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x570563c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"FindAgeAwareIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x57056a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.ActivateSelectedIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::ActivateSelectedIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5704ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"ActivateSelectedIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.IsSelectedIndexAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::IsSelectedIndexAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5705830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"IsSelectedIndexAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.IsIndexAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EvolvingCosmetic::*)(int32_t)>(&::GlobalNamespace::EvolvingCosmetic::IsIndexAvailable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5704d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"IsIndexAvailable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.GoBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::GoBack)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5705838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"GoBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.GoForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::GoForward)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x570587c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"GoForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.MatchStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)(::GlobalNamespace::EvolvingCosmetic*)>(&::GlobalNamespace::EvolvingCosmetic::MatchStage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57058c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"MatchStage", {}, {::i2c::type_of<::GlobalNamespace::EvolvingCosmetic*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.UnselectAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::UnselectAll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57051ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"UnselectAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.CanGoBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::CanGoBack)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5705870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"CanGoBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.CanGoForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::CanGoForward)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57058b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"CanGoForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.OnStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)(int32_t)>(&::GlobalNamespace::EvolvingCosmetic::OnStateUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5705944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"OnStateUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic.GetStateSyncSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VRRigReliableState_StateSyncSlots (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::GetStateSyncSlot)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x570525c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"GetStateSyncSlot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmetic::*)()>(&::GlobalNamespace::EvolvingCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x570597c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_ageRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ageRule;
}
constexpr ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_ageRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ageRule;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set_ageRule(::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ageRule = value;
}
constexpr ::ArrayW<::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject>& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_ageAwareGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ageAwareGameObjects;
}
constexpr ::ArrayW<::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject> const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_ageAwareGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ageAwareGameObjects;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set_ageAwareGameObjects(::ArrayW<::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ageAwareGameObjects = value;
}
constexpr int32_t& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_capDays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capDays;
}
constexpr int32_t const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_capDays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capDays;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set_capDays(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capDays = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_DispatchDaysOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DispatchDaysOnEnable;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_DispatchDaysOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DispatchDaysOnEnable;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set_DispatchDaysOnEnable(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DispatchDaysOnEnable = value;
}
constexpr int32_t& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_maxDays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDays;
}
constexpr int32_t const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_maxDays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDays;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set_maxDays(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDays = value;
}
constexpr int32_t& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_multiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplier;
}
constexpr int32_t const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_multiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplier;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set_multiplier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiplier = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_DispatchDaysOnEnableNormalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DispatchDaysOnEnableNormalized;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_DispatchDaysOnEnableNormalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DispatchDaysOnEnableNormalized;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set_DispatchDaysOnEnableNormalized(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DispatchDaysOnEnableNormalized = value;
}
constexpr int32_t& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get__SelectedObjectIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SelectedObjectIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get__SelectedObjectIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SelectedObjectIndex_k__BackingField;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set__SelectedObjectIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SelectedObjectIndex_k__BackingField = value;
}
constexpr ::System::Nullable_1<int32_t>& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get__daysAccrued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daysAccrued;
}
constexpr ::System::Nullable_1<int32_t> const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get__daysAccrued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daysAccrued;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set__daysAccrued(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____daysAccrued = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_m_parentRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_parentRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::EvolvingCosmetic::__cordl_internal_get_m_parentRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_parentRig;
}
constexpr void GlobalNamespace::EvolvingCosmetic::__cordl_internal_set_m_parentRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_parentRig = value;
}
inline int32_t GlobalNamespace::EvolvingCosmetic::get_StateValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"get_StateValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::EvolvingCosmetic::get_SelectedObjectIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"get_SelectedObjectIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::set_SelectedObjectIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"set_SelectedObjectIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::EvolvingCosmetic::get_PlayfabId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"get_PlayfabId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::UpdateDaysAccrued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"UpdateDaysAccrued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::EvolvingCosmetic::FindAgeAwareIndex(int32_t  daysAccrued)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"FindAgeAwareIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, daysAccrued);
}
inline void GlobalNamespace::EvolvingCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::ActivateSelectedIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"ActivateSelectedIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EvolvingCosmetic::IsSelectedIndexAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"IsSelectedIndexAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EvolvingCosmetic::IsIndexAvailable(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"IsIndexAvailable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void GlobalNamespace::EvolvingCosmetic::GoBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"GoBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::GoForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"GoForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::MatchStage(::GlobalNamespace::EvolvingCosmetic*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"MatchStage", {}, {::i2c::type_of<::GlobalNamespace::EvolvingCosmetic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::EvolvingCosmetic::UnselectAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"UnselectAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EvolvingCosmetic::CanGoBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"CanGoBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EvolvingCosmetic::CanGoForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"CanGoForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::OnStateUpdate(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"OnStateUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::GlobalNamespace::VRRigReliableState_StateSyncSlots GlobalNamespace::EvolvingCosmetic::GetStateSyncSlot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {"GetStateSyncSlot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRRigReliableState_StateSyncSlots>(this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EvolvingCosmetic* GlobalNamespace::EvolvingCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EvolvingCosmetic*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICosmeticStateSync"
constexpr  GlobalNamespace::EvolvingCosmetic::operator ::GlobalNamespace::ICosmeticStateSync*() noexcept {
return static_cast<::GlobalNamespace::ICosmeticStateSync*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICosmeticStateSync"
constexpr ::GlobalNamespace::ICosmeticStateSync* GlobalNamespace::EvolvingCosmetic::i___GlobalNamespace__ICosmeticStateSync() noexcept {
return static_cast<::GlobalNamespace::ICosmeticStateSync*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EvolvingCosmetic::EvolvingCosmetic()   {
}
