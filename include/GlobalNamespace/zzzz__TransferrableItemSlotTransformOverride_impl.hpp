#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableItemSlotTransformOverride.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableItemSlotTransformOverride_def.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SlotTransformOverride_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectGripPosition_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576a3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)(bool)>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576a3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576a3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576a3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x576a3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x576a568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.AddGripPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::TransferrableObject_PositionState, ::GlobalNamespace::TransferrableObjectGripPosition*)>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::AddGripPosition)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x576a56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"AddGripPosition", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::GlobalNamespace::TransferrableObjectGripPosition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x576a78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x576a798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::SliceUpdate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x576a7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x576a8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GenerateTransformFromPositionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GenerateTransformFromPositionState)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x576a8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GenerateTransformFromPositionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GetTransformFromPositionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GetTransformFromPositionState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x576ae0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GetTransformFromPositionState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GetTransformFromPositionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::TransferrableObject_PositionState, ::GlobalNamespace::AdvancedItemState*, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GetTransformFromPositionState)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x576ae74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GetTransformFromPositionState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::GlobalNamespace::AdvancedItemState*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.GetAdvancedItemStateFromHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AdvancedItemState* (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::TransferrableObject_PositionState, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::GetAdvancedItemStateFromHand)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x576b154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GetAdvancedItemStateFromHand", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride.Edit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::Edit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x576b49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"Edit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableItemSlotTransformOverride._SliceUpdate_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::TransferrableItemSlotTransformOverride::_SliceUpdate_b__20_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x576b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"<SliceUpdate>b__20_0", {}, {::i2c::type_of<::GlobalNamespace::SlotTransformOverride*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_transformOverridesDeprecated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformOverridesDeprecated;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>* const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_transformOverridesDeprecated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformOverridesDeprecated;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set_transformOverridesDeprecated(::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformOverridesDeprecated = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_transformOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformOverrides;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>* const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_transformOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformOverrides;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set_transformOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformOverrides = value;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set_lastPosition(::GlobalNamespace::TransferrableObject_PositionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_followingTransferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followingTransferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_followingTransferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followingTransferrableObject;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set_followingTransferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followingTransferrableObject = value;
}
constexpr ::GlobalNamespace::SlotTransformOverride*& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_defaultPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPosition;
}
constexpr ::GlobalNamespace::SlotTransformOverride* const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_defaultPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPosition;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set_defaultPosition(::GlobalNamespace::SlotTransformOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_defaultTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_defaultTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTransform;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set_defaultTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
constexpr bool& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_transformFromPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformFromPosition;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_get_transformFromPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformFromPosition;
}
constexpr void GlobalNamespace::TransferrableItemSlotTransformOverride::__cordl_internal_set_transformFromPosition(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformFromPosition = value;
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::setStaticF_OnBringUpWindow(::System::Action_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::TransferrableObject>>*, "OnBringUpWindow", ::GlobalNamespace::TransferrableItemSlotTransformOverride*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::TransferrableObject>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::TransferrableObject>>* GlobalNamespace::TransferrableItemSlotTransformOverride::getStaticF_OnBringUpWindow()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::TransferrableObject>>*, "OnBringUpWindow", ::GlobalNamespace::TransferrableItemSlotTransformOverride*>();
}
inline bool GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::AddGripPosition(::GlobalNamespace::TransferrableObject_PositionState  state, ::GlobalNamespace::TransferrableObjectGripPosition*  togp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"AddGripPosition", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::GlobalNamespace::TransferrableObjectGripPosition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, togp);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::GenerateTransformFromPositionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GenerateTransformFromPositionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::TransferrableItemSlotTransformOverride::GetTransformFromPositionState(::GlobalNamespace::TransferrableObject_PositionState  currentState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GetTransformFromPositionState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, currentState);
}
inline bool GlobalNamespace::TransferrableItemSlotTransformOverride::GetTransformFromPositionState(::GlobalNamespace::TransferrableObject_PositionState  currentState, ::GlobalNamespace::AdvancedItemState*  advancedItemState, ::UnityEngine::Transform*  targetDockXf, ::by_ref<::UnityEngine::Matrix4x4>  matrix4X4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GetTransformFromPositionState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::GlobalNamespace::AdvancedItemState*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentState, advancedItemState, targetDockXf, matrix4X4);
}
inline ::GlobalNamespace::AdvancedItemState* GlobalNamespace::TransferrableItemSlotTransformOverride::GetAdvancedItemStateFromHand(::GlobalNamespace::TransferrableObject_PositionState  currentState, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"GetAdvancedItemStateFromHand", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AdvancedItemState*>(this, ___internal_method, currentState, handTransform, targetDock);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::Edit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"Edit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableItemSlotTransformOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableItemSlotTransformOverride::_SliceUpdate_b__20_0(::GlobalNamespace::SlotTransformOverride*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableItemSlotTransformOverride*>(),
                        {"<SliceUpdate>b__20_0", {}, {::i2c::type_of<::GlobalNamespace::SlotTransformOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::TransferrableItemSlotTransformOverride* GlobalNamespace::TransferrableItemSlotTransformOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableItemSlotTransformOverride*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::TransferrableItemSlotTransformOverride::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::TransferrableItemSlotTransformOverride::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::TransferrableItemSlotTransformOverride::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::TransferrableItemSlotTransformOverride::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableItemSlotTransformOverride::TransferrableItemSlotTransformOverride()   {
}
