#pragma once
// IWYU pragma private; include "GlobalNamespace/MenagerieCritter.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_impl.hpp"
#include "GlobalNamespace/zzzz__MenagerieCritter_MenagerieCritterState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MenagerieCritter_def.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__CritterVisuals_def.hpp"
#include "GlobalNamespace/zzzz__CrittersAnim_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GlobalNamespace/zzzz__IEyeScannable_def.hpp"
#include "GlobalNamespace/zzzz__IHoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieCritter_MenagerieCritterState_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieSlot_def.hpp"
#include "GlobalNamespace/zzzz__Menagerie_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.get_CritterData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Menagerie_CritterData* (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::get_CritterData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fbaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"get_CritterData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.get_Slot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MenagerieSlot> (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::get_Slot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fbab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"get_Slot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.set_Slot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)(::GlobalNamespace::MenagerieSlot*)>(&::GlobalNamespace::MenagerieCritter::set_Slot)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56fa498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"set_Slot", {}, {::i2c::type_of<::GlobalNamespace::MenagerieSlot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56fbabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.ApplyCritterData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)(::GlobalNamespace::Menagerie_CritterData*)>(&::GlobalNamespace::MenagerieCritter::ApplyCritterData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56fa5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"ApplyCritterData", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.PlayAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)(::GlobalNamespace::CrittersAnim*, float_t)>(&::GlobalNamespace::MenagerieCritter::PlayAnimation)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x56fbbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"PlayAnimation", {}, {::i2c::type_of<::GlobalNamespace::CrittersAnim*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.UpdateAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::UpdateAnimation)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x56fbac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"UpdateAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.get_TwoHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::get_TwoHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fbcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"get_TwoHanded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::MenagerieCritter::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56fbd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnHover", {}, {::i2c::type_of<::GlobalNamespace::InteractionPoint*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::MenagerieCritter::OnGrab)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x56fbd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnGrab", {}, {::i2c::type_of<::GlobalNamespace::InteractionPoint*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MenagerieCritter::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::MenagerieCritter::OnRelease)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x56fbeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnRelease", {}, {::i2c::type_of<::GlobalNamespace::DropZone*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.ResetToTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::ResetToTransform)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x56fc0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"ResetToTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::DropItemCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56fc1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"DropItemCleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.IEyeScannable_get_scannableId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::IEyeScannable_get_scannableId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56fc1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IEyeScannable.get_scannableId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.IEyeScannable_get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::IEyeScannable_get_Position)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56fc1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IEyeScannable.get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.IEyeScannable_get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::IEyeScannable_get_Bounds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56fc204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IEyeScannable.get_Bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.IEyeScannable_get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::IEyeScannable_get_Entries)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56fc244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IEyeScannable.get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56fc554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56fc5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.BuildEyeScannerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::BuildEyeScannerData)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x56fc248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"BuildEyeScannerData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.add_OnDataChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)(::System::Action*)>(&::GlobalNamespace::MenagerieCritter::add_OnDataChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56fc670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"add_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.remove_OnDataChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)(::System::Action*)>(&::GlobalNamespace::MenagerieCritter::remove_OnDataChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56fc70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"remove_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.GetCurrentStateName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::GetCurrentStateName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56fc604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"GetCurrentStateName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56fc7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.IHoldableObject_get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::IHoldableObject_get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fc870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IHoldableObject.get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.IHoldableObject_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MenagerieCritter::*)()>(&::GlobalNamespace::MenagerieCritter::IHoldableObject_get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fc878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IHoldableObject.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieCritter.IHoldableObject_set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieCritter::*)(::StringW)>(&::GlobalNamespace::MenagerieCritter::IHoldableObject_set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fc880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IHoldableObject.set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CritterVisuals>& GlobalNamespace::MenagerieCritter::__cordl_internal_get_visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visuals;
}
constexpr ::UnityW<::GlobalNamespace::CritterVisuals> const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visuals;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_visuals(::UnityW<::GlobalNamespace::CritterVisuals>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visuals = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::MenagerieCritter::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr ::GlobalNamespace::CrittersAnim*& GlobalNamespace::MenagerieCritter::__cordl_internal_get_heldAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldAnimation;
}
constexpr ::GlobalNamespace::CrittersAnim* const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_heldAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldAnimation;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_heldAnimation(::GlobalNamespace::CrittersAnim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldAnimation = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MenagerieCritter::__cordl_internal_get_grabbedHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedHaptics;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_grabbedHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedHaptics;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_grabbedHaptics(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedHaptics = value;
}
constexpr float_t& GlobalNamespace::MenagerieCritter::__cordl_internal_get_grabbedHapticsStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedHapticsStrength;
}
constexpr float_t const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_grabbedHapticsStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedHapticsStrength;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_grabbedHapticsStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedHapticsStrength = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MenagerieCritter::__cordl_internal_get_grabbedFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_grabbedFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedFX;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_grabbedFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedFX = value;
}
constexpr ::GlobalNamespace::CrittersAnim*& GlobalNamespace::MenagerieCritter::__cordl_internal_get__currentAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAnim;
}
constexpr ::GlobalNamespace::CrittersAnim* const& GlobalNamespace::MenagerieCritter::__cordl_internal_get__currentAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAnim;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set__currentAnim(::GlobalNamespace::CrittersAnim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentAnim = value;
}
constexpr float_t& GlobalNamespace::MenagerieCritter::__cordl_internal_get__currentAnimTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAnimTime;
}
constexpr float_t const& GlobalNamespace::MenagerieCritter::__cordl_internal_get__currentAnimTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAnimTime;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set__currentAnimTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentAnimTime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MenagerieCritter::__cordl_internal_get__animRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MenagerieCritter::__cordl_internal_get__animRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animRoot;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set__animRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animRoot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MenagerieCritter::__cordl_internal_get__bodyScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MenagerieCritter::__cordl_internal_get__bodyScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyScale;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set__bodyScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyScale = value;
}
constexpr ::GlobalNamespace::MenagerieCritter_MenagerieCritterState& GlobalNamespace::MenagerieCritter::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::MenagerieCritter_MenagerieCritterState const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_currentState(::GlobalNamespace::MenagerieCritter_MenagerieCritterState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::CritterConfiguration*& GlobalNamespace::MenagerieCritter::__cordl_internal_get__critterConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critterConfiguration;
}
constexpr ::GlobalNamespace::CritterConfiguration* const& GlobalNamespace::MenagerieCritter::__cordl_internal_get__critterConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critterConfiguration;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set__critterConfiguration(::GlobalNamespace::CritterConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____critterConfiguration = value;
}
constexpr ::GlobalNamespace::Menagerie_CritterData*& GlobalNamespace::MenagerieCritter::__cordl_internal_get__critterData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critterData;
}
constexpr ::GlobalNamespace::Menagerie_CritterData* const& GlobalNamespace::MenagerieCritter::__cordl_internal_get__critterData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critterData;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set__critterData(::GlobalNamespace::Menagerie_CritterData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____critterData = value;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieSlot>& GlobalNamespace::MenagerieCritter::__cordl_internal_get__slot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slot;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieSlot> const& GlobalNamespace::MenagerieCritter::__cordl_internal_get__slot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slot;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set__slot(::UnityW<::GlobalNamespace::MenagerieSlot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*& GlobalNamespace::MenagerieCritter::__cordl_internal_get_activeGrabbers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeGrabbers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>* const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_activeGrabbers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeGrabbers;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_activeGrabbers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeGrabbers = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MenagerieCritter::__cordl_internal_get_heldBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldBy;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_heldBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldBy;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_heldBy(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldBy = value;
}
constexpr bool& GlobalNamespace::MenagerieCritter::__cordl_internal_get_isHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr bool const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_isHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_isHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeld = value;
}
constexpr bool& GlobalNamespace::MenagerieCritter::__cordl_internal_get_isHeldLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldLeftHand;
}
constexpr bool const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_isHeldLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldLeftHand;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_isHeldLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeldLeftHand = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*& GlobalNamespace::MenagerieCritter::__cordl_internal_get_OnReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleased;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>* const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_OnReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleased;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_OnReleased(::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReleased = value;
}
constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair>& GlobalNamespace::MenagerieCritter::__cordl_internal_get_eyeScanData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeScanData;
}
constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair> const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_eyeScanData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeScanData;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_eyeScanData(::ArrayW<::GlobalNamespace::KeyValueStringPair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeScanData = value;
}
constexpr ::System::Action*& GlobalNamespace::MenagerieCritter::__cordl_internal_get_OnDataChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDataChange;
}
constexpr ::System::Action* const& GlobalNamespace::MenagerieCritter::__cordl_internal_get_OnDataChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDataChange;
}
constexpr void GlobalNamespace::MenagerieCritter::__cordl_internal_set_OnDataChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDataChange = value;
}
inline ::GlobalNamespace::Menagerie_CritterData* GlobalNamespace::MenagerieCritter::get_CritterData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"get_CritterData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Menagerie_CritterData*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MenagerieSlot> GlobalNamespace::MenagerieCritter::get_Slot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"get_Slot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MenagerieSlot>>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::set_Slot(::GlobalNamespace::MenagerieSlot*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"set_Slot", {}, {::i2c::type_of<::GlobalNamespace::MenagerieSlot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenagerieCritter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::ApplyCritterData(::GlobalNamespace::Menagerie_CritterData*  critterData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"ApplyCritterData", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critterData);
}
inline void GlobalNamespace::MenagerieCritter::PlayAnimation(::GlobalNamespace::CrittersAnim*  anim, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"PlayAnimation", {}, {::i2c::type_of<::GlobalNamespace::CrittersAnim*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anim, time);
}
inline void GlobalNamespace::MenagerieCritter::UpdateAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"UpdateAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MenagerieCritter::get_TwoHanded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"get_TwoHanded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnHover", {}, {::i2c::type_of<::GlobalNamespace::InteractionPoint*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::MenagerieCritter::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnGrab", {}, {::i2c::type_of<::GlobalNamespace::InteractionPoint*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GlobalNamespace::MenagerieCritter::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnRelease", {}, {::i2c::type_of<::GlobalNamespace::DropZone*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::MenagerieCritter::ResetToTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"ResetToTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::DropItemCleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"DropItemCleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MenagerieCritter::IEyeScannable_get_scannableId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IEyeScannable.get_scannableId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MenagerieCritter::IEyeScannable_get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IEyeScannable.get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Bounds GlobalNamespace::MenagerieCritter::IEyeScannable_get_Bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IEyeScannable.get_Bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* GlobalNamespace::MenagerieCritter::IEyeScannable_get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IEyeScannable.get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* GlobalNamespace::MenagerieCritter::BuildEyeScannerData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"BuildEyeScannerData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::add_OnDataChange(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"add_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenagerieCritter::remove_OnDataChange(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"remove_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MenagerieCritter::GetCurrentStateName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"GetCurrentStateName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::MenagerieCritter::IHoldableObject_get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IHoldableObject.get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MenagerieCritter::IHoldableObject_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IHoldableObject.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MenagerieCritter::IHoldableObject_set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieCritter*>(),
                        {"IHoldableObject.set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MenagerieCritter* GlobalNamespace::MenagerieCritter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenagerieCritter*>());
}
/// @brief Convert operator to "::GlobalNamespace::IHoldableObject"
constexpr  GlobalNamespace::MenagerieCritter::operator ::GlobalNamespace::IHoldableObject*() noexcept {
return static_cast<::GlobalNamespace::IHoldableObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IHoldableObject"
constexpr ::GlobalNamespace::IHoldableObject* GlobalNamespace::MenagerieCritter::i___GlobalNamespace__IHoldableObject() noexcept {
return static_cast<::GlobalNamespace::IHoldableObject*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IEyeScannable"
constexpr  GlobalNamespace::MenagerieCritter::operator ::GlobalNamespace::IEyeScannable*() noexcept {
return static_cast<::GlobalNamespace::IEyeScannable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEyeScannable"
constexpr ::GlobalNamespace::IEyeScannable* GlobalNamespace::MenagerieCritter::i___GlobalNamespace__IEyeScannable() noexcept {
return static_cast<::GlobalNamespace::IEyeScannable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenagerieCritter::MenagerieCritter()   {
}
