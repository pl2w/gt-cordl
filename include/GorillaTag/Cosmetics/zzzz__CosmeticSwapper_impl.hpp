#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticSwapper.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwapper_SwapMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwapper_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_def.hpp"
#include "GorillaNetworking/zzzz__SubCosmeticCycleController_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwapper_CosmeticState_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwapper_SwapMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.get_CosmeticStepIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::get_CosmeticStepIndex)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d8abe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"get_CosmeticStepIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d8ac2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d8ac98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d8ad38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.SwapInCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticSwapper::SwapInCosmetic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8ade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"SwapInCosmetic", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.GetCurrentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticSwapper_SwapMode (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::GetCurrentMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"GetCurrentMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.ShouldHoldFinalStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::ShouldHoldFinalStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"ShouldHoldFinalStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.GetCurrentStepIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::CosmeticSwapper::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticSwapper::GetCurrentStepIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d8b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"GetCurrentStepIndex", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.GetNumberOfSteps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::GetNumberOfSteps)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d8b418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"GetNumberOfSteps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.TriggerSwap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticSwapper::TriggerSwap)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x5d8ade4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"TriggerSwap", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.SwapInCosmeticWithReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::CosmeticSwapper_CosmeticState> (::GorillaTag::Cosmetics::CosmeticSwapper::*)(::StringW, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticSwapper::SwapInCosmeticWithReturn)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5d8b4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"SwapInCosmeticWithReturn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.RestorePreviousCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)(::GlobalNamespace::CosmeticSwapper_CosmeticState)>(&::GorillaTag::Cosmetics::CosmeticSwapper::RestorePreviousCosmetic)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5d8bbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"RestorePreviousCosmetic", {}, {::i2c::type_of<::GlobalNamespace::CosmeticSwapper_CosmeticState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.FindItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticItem (::GorillaTag::Cosmetics::CosmeticSwapper::*)(::StringW)>(&::GorillaTag::Cosmetics::CosmeticSwapper::FindItem)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d8b9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"FindItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.GetCosmeticSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticSlots (::GorillaTag::Cosmetics::CosmeticSwapper::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, ::by_ref<bool>)>(&::GorillaTag::Cosmetics::CosmeticSwapper::GetCosmeticSlot)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d8badc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"GetCosmeticSlot", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8bd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)(bool)>(&::GorillaTag::Cosmetics::CosmeticSwapper::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8bd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::Tick)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5d8bd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.AddNewSwappedCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)(::GlobalNamespace::CosmeticSwapper_CosmeticState)>(&::GorillaTag::Cosmetics::CosmeticSwapper::AddNewSwappedCosmetic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d8b918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"AddNewSwappedCosmetic", {}, {::i2c::type_of<::GlobalNamespace::CosmeticSwapper_CosmeticState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.MarkFinalCosmeticStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::MarkFinalCosmeticStep)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d8b9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"MarkFinalCosmeticStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper.UnmarkFinalCosmeticStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::UnmarkFinalCosmeticStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"UnmarkFinalCosmeticStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticSwapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticSwapper::*)()>(&::GorillaTag::Cosmetics::CosmeticSwapper::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d8bea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_cosmeticIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_cosmeticIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticIDs;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_cosmeticIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticIDs = value;
}
constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_swapMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swapMode;
}
constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_swapMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swapMode;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_swapMode(::GlobalNamespace::CosmeticSwapper_SwapMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swapMode = value;
}
constexpr ::UnityW<::GorillaNetworking::SubCosmeticCycleController>& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_cycleController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleController;
}
constexpr ::UnityW<::GorillaNetworking::SubCosmeticCycleController> const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_cycleController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleController;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_cycleController(::UnityW<::GorillaNetworking::SubCosmeticCycleController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cycleController = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_stepTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepTimeout;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_stepTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepTimeout;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_stepTimeout(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stepTimeout = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_holdFinalStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdFinalStep;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_holdFinalStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdFinalStep;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_holdFinalStep(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdFinalStep = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_OnSwappingSequenceCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSwappingSequenceCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_OnSwappingSequenceCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSwappingSequenceCompleted;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_OnSwappingSequenceCompleted(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSwappingSequenceCompleted = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_gameModeExclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeExclusion;
}
constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_gameModeExclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeExclusion;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_gameModeExclusion(::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeExclusion = value;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_controller(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controller = value;
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>*& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_newSwappedCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newSwappedCosmetics;
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>* const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_newSwappedCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newSwappedCosmetics;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_newSwappedCosmetics(::System::Collections::Generic::Stack_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newSwappedCosmetics = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_lastCosmeticSwapTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCosmeticSwapTime;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_lastCosmeticSwapTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCosmeticSwapTime;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_lastCosmeticSwapTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCosmeticSwapTime = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_isAtFinalCosmeticStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAtFinalCosmeticStep;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get_isAtFinalCosmeticStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAtFinalCosmeticStep;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set_isAtFinalCosmeticStep(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAtFinalCosmeticStep = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticSwapper::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline int32_t GorillaTag::Cosmetics::CosmeticSwapper::get_CosmeticStepIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"get_CosmeticStepIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::SwapInCosmetic(::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"SwapInCosmetic", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrRig);
}
inline ::GlobalNamespace::CosmeticSwapper_SwapMode GorillaTag::Cosmetics::CosmeticSwapper::GetCurrentMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"GetCurrentMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticSwapper_SwapMode>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticSwapper::ShouldHoldFinalStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"ShouldHoldFinalStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GorillaTag::Cosmetics::CosmeticSwapper::GetCurrentStepIndex(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"GetCurrentStepIndex", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rig);
}
inline int32_t GorillaTag::Cosmetics::CosmeticSwapper::GetNumberOfSteps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"GetNumberOfSteps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::TriggerSwap(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"TriggerSwap", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline ::System::Nullable_1<::GlobalNamespace::CosmeticSwapper_CosmeticState> GorillaTag::Cosmetics::CosmeticSwapper::SwapInCosmeticWithReturn(::StringW  nameOrId, ::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"SwapInCosmeticWithReturn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>>(this, ___internal_method, nameOrId, rig);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::RestorePreviousCosmetic(::GlobalNamespace::CosmeticSwapper_CosmeticState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"RestorePreviousCosmetic", {}, {::i2c::type_of<::GlobalNamespace::CosmeticSwapper_CosmeticState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GorillaTag::Cosmetics::CosmeticSwapper::FindItem(::StringW  nameOrId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"FindItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticItem>(this, ___internal_method, nameOrId);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticSlots GorillaTag::Cosmetics::CosmeticSwapper::GetCosmeticSlot(::GlobalNamespace::CosmeticsController_CosmeticItem  item, ::by_ref<bool>  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"GetCosmeticSlot", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticSlots>(this, ___internal_method, item, isLeftHand);
}
inline bool GorillaTag::Cosmetics::CosmeticSwapper::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::AddNewSwappedCosmetic(::GlobalNamespace::CosmeticSwapper_CosmeticState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"AddNewSwappedCosmetic", {}, {::i2c::type_of<::GlobalNamespace::CosmeticSwapper_CosmeticState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::MarkFinalCosmeticStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"MarkFinalCosmeticStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::UnmarkFinalCosmeticStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {"UnmarkFinalCosmeticStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticSwapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticSwapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::CosmeticSwapper* GorillaTag::Cosmetics::CosmeticSwapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::CosmeticSwapper*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::CosmeticSwapper::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::CosmeticSwapper::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::CosmeticSwapper::CosmeticSwapper()   {
}
