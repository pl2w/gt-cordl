#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/NetworkedWearable.hpp"
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__NetworkedWearable_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d7d7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::OnEnable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d7d96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.ToggleWearableStateBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::ToggleWearableStateBool)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5d7dc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"ToggleWearableStateBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.SetWearableStateBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)(bool)>(&::GorillaTag::Cosmetics::NetworkedWearable::SetWearableStateBool)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d7da18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"SetWearableStateBool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.ToggleLeftWearableStateBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::ToggleLeftWearableStateBool)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5d7df0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"ToggleLeftWearableStateBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.ToggleRightWearableStateBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::ToggleRightWearableStateBool)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5d7e414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"ToggleRightWearableStateBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.SetLeftWearableStateBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)(bool)>(&::GorillaTag::Cosmetics::NetworkedWearable::SetLeftWearableStateBool)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d7e188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"SetLeftWearableStateBool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.SetRightWearableStateBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)(bool)>(&::GorillaTag::Cosmetics::NetworkedWearable::SetRightWearableStateBool)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d7e690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"SetRightWearableStateBool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::OnDisable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d7e8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.OnWearableStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::OnWearableStateChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d7e164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnWearableStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.OnLeftStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::OnLeftStateChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d7e3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnLeftStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.OnRightStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::OnRightStateChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d7e66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnRightStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)(bool)>(&::GorillaTag::Cosmetics::NetworkedWearable::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GorillaTag::Cosmetics::NetworkedWearable::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::NetworkedWearable::OnSpawn)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5d7e9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d7ebc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7ebcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)(bool)>(&::GorillaTag::Cosmetics::NetworkedWearable::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7ebd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::Tick)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d7ebdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.IsCategoryValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CosmeticsController_CosmeticCategory)>(&::GorillaTag::Cosmetics::NetworkedWearable::IsCategoryValid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d7def4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"IsCategoryValid", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable.CosmeticCategoryToWearableSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VRRig_WearablePackedStateSlots (::GorillaTag::Cosmetics::NetworkedWearable::*)(::GlobalNamespace::CosmeticsController_CosmeticCategory, bool)>(&::GorillaTag::Cosmetics::NetworkedWearable::CosmeticCategoryToWearableSlot)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5d7d814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"CosmeticCategoryToWearableSlot", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::NetworkedWearable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::NetworkedWearable::*)()>(&::GorillaTag::Cosmetics::NetworkedWearable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d7ed18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_startTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTrue;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_startTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTrue;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_startTrue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTrue = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticCategory& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_assignedSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignedSlot;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticCategory const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_assignedSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignedSlot;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_assignedSlot(::GlobalNamespace::CosmeticsController_CosmeticCategory  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignedSlot = value;
}
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_isTwoHanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTwoHanded;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_isTwoHanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTwoHanded;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_isTwoHanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTwoHanded = value;
}
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_listenForChangesLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenForChangesLocal;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_listenForChangesLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenForChangesLocal;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_listenForChangesLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenForChangesLocal = value;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_wearableSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wearableSlot;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_wearableSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wearableSlot;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_wearableSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wearableSlot = value;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_leftSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftSlot;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_leftSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftSlot;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_leftSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftSlot = value;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_rightSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightSlot;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_rightSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightSlot;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_rightSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightSlot = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocal = value;
}
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_value(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_leftHandValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandValue;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_leftHandValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandValue;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_leftHandValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandValue = value;
}
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_rightHandValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandValue;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_rightHandValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandValue;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_rightHandValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandValue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnWearableStateTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWearableStateTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnWearableStateTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWearableStateTrue;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_OnWearableStateTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnWearableStateTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnWearableStateFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWearableStateFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnWearableStateFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWearableStateFalse;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_OnWearableStateFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnWearableStateFalse = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnLeftWearableStateTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLeftWearableStateTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnLeftWearableStateTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLeftWearableStateTrue;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_OnLeftWearableStateTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLeftWearableStateTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnLeftWearableStateFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLeftWearableStateFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnLeftWearableStateFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLeftWearableStateFalse;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_OnLeftWearableStateFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLeftWearableStateFalse = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnRightWearableStateTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRightWearableStateTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnRightWearableStateTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRightWearableStateTrue;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_OnRightWearableStateTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRightWearableStateTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnRightWearableStateFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRightWearableStateFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get_OnRightWearableStateFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRightWearableStateFalse;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set_OnRightWearableStateFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRightWearableStateFalse = value;
}
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
constexpr bool& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::NetworkedWearable::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GorillaTag::Cosmetics::NetworkedWearable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::ToggleWearableStateBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"ToggleWearableStateBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::SetWearableStateBool(bool  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"SetWearableStateBool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::ToggleLeftWearableStateBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"ToggleLeftWearableStateBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::ToggleRightWearableStateBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"ToggleRightWearableStateBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::SetLeftWearableStateBool(bool  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"SetLeftWearableStateBool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::SetRightWearableStateBool(bool  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"SetRightWearableStateBool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::OnWearableStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnWearableStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::OnLeftStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnLeftStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::OnRightStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnRightStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::NetworkedWearable::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag::Cosmetics::NetworkedWearable::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::NetworkedWearable::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::NetworkedWearable::IsCategoryValid(::GlobalNamespace::CosmeticsController_CosmeticCategory  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"IsCategoryValid", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, category);
}
inline ::GlobalNamespace::VRRig_WearablePackedStateSlots GorillaTag::Cosmetics::NetworkedWearable::CosmeticCategoryToWearableSlot(::GlobalNamespace::CosmeticsController_CosmeticCategory  category, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {"CosmeticCategoryToWearableSlot", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticCategory>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRRig_WearablePackedStateSlots>(this, ___internal_method, category, isLeft);
}
inline void GorillaTag::Cosmetics::NetworkedWearable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::NetworkedWearable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::NetworkedWearable* GorillaTag::Cosmetics::NetworkedWearable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::NetworkedWearable*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GorillaTag::Cosmetics::NetworkedWearable::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GorillaTag::Cosmetics::NetworkedWearable::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::NetworkedWearable::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::NetworkedWearable::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::NetworkedWearable::NetworkedWearable()   {
}
