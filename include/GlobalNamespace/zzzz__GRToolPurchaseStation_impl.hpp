#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolPurchaseStation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolPurchaseStation_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRToolPurchaseStation_ToolEntry_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.get_ActiveEntryIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::get_ActiveEntryIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c53b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"get_ActiveEntryIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)(::GlobalNamespace::GhostReactorManager*, ::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRToolPurchaseStation::Init)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58c53b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.RequestPurchaseButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)(int32_t)>(&::GlobalNamespace::GRToolPurchaseStation::RequestPurchaseButton)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58c53ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"RequestPurchaseButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.ShiftRightButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::ShiftRightButton)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58c54a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"ShiftRightButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.ShiftLeftButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::ShiftLeftButton)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58c54c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"ShiftLeftButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.ShiftRightAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::ShiftRightAuthority)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58c54e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"ShiftRightAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.ShiftLeftAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::ShiftLeftAuthority)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58c5544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"ShiftLeftAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.DebugPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::DebugPurchase)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x58c55a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"DebugPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.TryPurchaseAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolPurchaseStation::*)(::GlobalNamespace::GRPlayer*, ::by_ref<int32_t>)>(&::GlobalNamespace::GRToolPurchaseStation::TryPurchaseAuthority)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x58c58ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"TryPurchaseAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.OnSelectionUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)(int32_t)>(&::GlobalNamespace::GRToolPurchaseStation::OnSelectionUpdate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x58c5b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"OnSelectionUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.OnPurchaseSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::OnPurchaseSucceeded)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58c5848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"OnPurchaseSucceeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.OnPurchaseFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::OnPurchaseFailed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58c5cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"OnPurchaseFailed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.GetSpawnMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::GetSpawnMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c5d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.GetCurrentToolName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::GetCurrentToolName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58c5d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"GetCurrentToolName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58c5d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::Update)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x58c5e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolPurchaseStation::*)()>(&::GlobalNamespace::GRToolPurchaseStation::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58c64dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntries;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolEntries(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolEntries = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_displayTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_displayTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayTransform;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_displayTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositTransform;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_depositTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolSpawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolSpawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolSpawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolSpawnLocation;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolSpawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolSpawnLocation = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_displayItemNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayItemNameText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_displayItemNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayItemNameText;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_displayItemNameText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayItemNameText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_displayItemCostText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayItemCostText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_displayItemCostText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayItemCostText;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_displayItemCostText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayItemCostText = value;
}
constexpr float_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_nextToolAnimationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextToolAnimationTime;
}
constexpr float_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_nextToolAnimationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextToolAnimationTime;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_nextToolAnimationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextToolAnimationTime = value;
}
constexpr float_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolDepositAnimationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolDepositAnimationTime;
}
constexpr float_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolDepositAnimationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolDepositAnimationTime;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolDepositAnimationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolDepositAnimationTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryPosOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryPosOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryPosOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryPosOffset;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolEntryPosOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolEntryPosOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryRotEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryRotEuler;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryRotEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryRotEuler;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolEntryRotEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolEntryRotEuler = value;
}
constexpr float_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryRotDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryRotDegrees;
}
constexpr float_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryRotDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryRotDegrees;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolEntryRotDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolEntryRotDegrees = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitPosOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitPosOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitPosOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitPosOffset;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolExitPosOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolExitPosOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitRotEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitRotEuler;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitRotEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitRotEuler;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolExitRotEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolExitRotEuler = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryPosTimingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryPosTimingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryPosTimingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryPosTimingCurve;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolEntryPosTimingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolEntryPosTimingCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryRotTimingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryRotTimingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryRotTimingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryRotTimingCurve;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolEntryRotTimingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolEntryRotTimingCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitPosTimingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitPosTimingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitPosTimingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitPosTimingCurve;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolExitPosTimingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolExitPosTimingCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitRotTimingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitRotTimingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitRotTimingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitRotTimingCurve;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolExitRotTimingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolExitRotTimingCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolDepositTimingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolDepositTimingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolDepositTimingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolDepositTimingCurve;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolDepositTimingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolDepositTimingCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolDepositMotionCurveY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolDepositMotionCurveY;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolDepositMotionCurveY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolDepositMotionCurveY;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolDepositMotionCurveY(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolDepositMotionCurveY = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolDepositMotionCurveZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolDepositMotionCurveZ;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolDepositMotionCurveZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolDepositMotionCurveZ;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolDepositMotionCurveZ(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolDepositMotionCurveZ = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositLidTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLidTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositLidTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLidTransform;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_depositLidTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositLidTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositLidOpenEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLidOpenEuler;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositLidOpenEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLidOpenEuler;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_depositLidOpenEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositLidOpenEuler = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositLidTimingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLidTimingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositLidTimingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLidTimingCurve;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_depositLidTimingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositLidTimingCurve = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_nextItemAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextItemAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_nextItemAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextItemAudio;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_nextItemAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextItemAudio = value;
}
constexpr float_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_nextItemVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextItemVolume;
}
constexpr float_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_nextItemVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextItemVolume;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_nextItemVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextItemVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_purchaseAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_purchaseAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseAudio;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_purchaseAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseAudio = value;
}
constexpr float_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_purchaseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseVolume;
}
constexpr float_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_purchaseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseVolume;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_purchaseVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_purchaseFailedAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseFailedAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_purchaseFailedAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseFailedAudio;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_purchaseFailedAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseFailedAudio = value;
}
constexpr float_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_purchaseFailedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseFailedVolume;
}
constexpr float_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_purchaseFailedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseFailedVolume;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_purchaseFailedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseFailedVolume = value;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_idCardScanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idCardScanner;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_idCardScanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idCardScanner;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_idCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idCardScanner = value;
}
constexpr int32_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_activeEntryIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeEntryIndex;
}
constexpr int32_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_activeEntryIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeEntryIndex;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_activeEntryIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeEntryIndex = value;
}
constexpr int32_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_displayedEntryIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedEntryIndex;
}
constexpr int32_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_displayedEntryIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedEntryIndex;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_displayedEntryIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayedEntryIndex = value;
}
constexpr float_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animationStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationStartTime;
}
constexpr float_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animationStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationStartTime;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_animationStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationStartTime = value;
}
constexpr bool& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animatingDeposit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatingDeposit;
}
constexpr bool const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animatingDeposit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatingDeposit;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_animatingDeposit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatingDeposit = value;
}
constexpr bool& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animatingSwap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatingSwap;
}
constexpr bool const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animatingSwap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatingSwap;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_animatingSwap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatingSwap = value;
}
constexpr int32_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animPrevToolIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animPrevToolIndex;
}
constexpr int32_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animPrevToolIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animPrevToolIndex;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_animPrevToolIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animPrevToolIndex = value;
}
constexpr int32_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animNextToolIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNextToolIndex;
}
constexpr int32_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_animNextToolIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNextToolIndex;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_animNextToolIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animNextToolIndex = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositLidOpenRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLidOpenRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_depositLidOpenRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLidOpenRot;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_depositLidOpenRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositLidOpenRot = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolEntryRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolEntryRot;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolEntryRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolEntryRot = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_toolExitRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolExitRot;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_toolExitRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolExitRot = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_vendingCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_vendingCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingCoroutine;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_vendingCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vendingCoroutine = value;
}
constexpr bool& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_debugIgnoreToolCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugIgnoreToolCost;
}
constexpr bool const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_debugIgnoreToolCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugIgnoreToolCost;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_debugIgnoreToolCost(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugIgnoreToolCost = value;
}
constexpr int32_t& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_PurchaseStationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseStationId;
}
constexpr int32_t const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_PurchaseStationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseStationId;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_PurchaseStationId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseStationId = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_grManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_grManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRToolPurchaseStation::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRToolPurchaseStation::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
inline int32_t GlobalNamespace::GRToolPurchaseStation::get_ActiveEntryIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"get_ActiveEntryIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::Init(::GlobalNamespace::GhostReactorManager*  grManager, ::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grManager, reactor);
}
inline void GlobalNamespace::GRToolPurchaseStation::RequestPurchaseButton(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"RequestPurchaseButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::GRToolPurchaseStation::ShiftRightButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"ShiftRightButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::ShiftLeftButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"ShiftLeftButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::ShiftRightAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"ShiftRightAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::ShiftLeftAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"ShiftLeftAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::DebugPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"DebugPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolPurchaseStation::TryPurchaseAuthority(::GlobalNamespace::GRPlayer*  player, ::by_ref<int32_t>  itemCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"TryPurchaseAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, itemCost);
}
inline void GlobalNamespace::GRToolPurchaseStation::OnSelectionUpdate(int32_t  newSelectedIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"OnSelectionUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSelectedIndex);
}
inline void GlobalNamespace::GRToolPurchaseStation::OnPurchaseSucceeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"OnPurchaseSucceeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::OnPurchaseFailed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"OnPurchaseFailed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GRToolPurchaseStation::GetSpawnMarker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GRToolPurchaseStation::GetCurrentToolName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"GetCurrentToolName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolPurchaseStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolPurchaseStation* GlobalNamespace::GRToolPurchaseStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolPurchaseStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolPurchaseStation::GRToolPurchaseStation()   {
}
