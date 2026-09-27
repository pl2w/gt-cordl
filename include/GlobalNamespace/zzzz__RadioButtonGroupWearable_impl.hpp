#pragma once
// IWYU pragma private; include "GlobalNamespace/RadioButtonGroupWearable.hpp"
#include "GlobalNamespace/zzzz__GTBitOps_BitWriteInfo_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RadioButtonGroupWearable_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565a574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)(bool)>(&::GlobalNamespace::RadioButtonGroupWearable::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565a57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565a584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::RadioButtonGroupWearable::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565a58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::Start)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x565a594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x565a6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::GetCurrentState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x565a7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"GetCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x565a80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.SharedRefreshState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::SharedRefreshState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x565a6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"SharedRefreshState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.OnPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)(::GlobalNamespace::GorillaPressableButton*)>(&::GlobalNamespace::RadioButtonGroupWearable::OnPress)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x565a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"OnPress", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::RadioButtonGroupWearable::OnSpawn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x565a928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioButtonGroupWearable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioButtonGroupWearable::*)()>(&::GlobalNamespace::RadioButtonGroupWearable::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x565a92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_AllowSelectNone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowSelectNone;
}
constexpr bool const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_AllowSelectNone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowSelectNone;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set_AllowSelectNone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowSelectNone = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttons = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_OnSelectionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSelectionChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_OnSelectionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSelectionChanged;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set_OnSelectionChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSelectionChanged = value;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_assignedSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignedSlot;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_assignedSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignedSlot;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set_assignedSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignedSlot = value;
}
constexpr int32_t& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_lastReportedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReportedState;
}
constexpr int32_t const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_lastReportedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReportedState;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set_lastReportedState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastReportedState = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_stateBitsWriteInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateBitsWriteInfo;
}
constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get_stateBitsWriteInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateBitsWriteInfo;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set_stateBitsWriteInfo(::GlobalNamespace::GTBitOps_BitWriteInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateBitsWriteInfo = value;
}
constexpr bool& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::RadioButtonGroupWearable::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::RadioButtonGroupWearable::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RadioButtonGroupWearable::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::RadioButtonGroupWearable::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::RadioButtonGroupWearable::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RadioButtonGroupWearable::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioButtonGroupWearable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RadioButtonGroupWearable::GetCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"GetCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RadioButtonGroupWearable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioButtonGroupWearable::SharedRefreshState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"SharedRefreshState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioButtonGroupWearable::OnPress(::GlobalNamespace::GorillaPressableButton*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"OnPress", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button);
}
inline void GlobalNamespace::RadioButtonGroupWearable::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::RadioButtonGroupWearable::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioButtonGroupWearable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioButtonGroupWearable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RadioButtonGroupWearable* GlobalNamespace::RadioButtonGroupWearable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RadioButtonGroupWearable*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::RadioButtonGroupWearable::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::RadioButtonGroupWearable::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadioButtonGroupWearable::RadioButtonGroupWearable()   {
}
