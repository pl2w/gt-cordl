#pragma once
// IWYU pragma private; include "GorillaTagScripts/Mole.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "GorillaTagScripts/zzzz__MoleTypes_impl.hpp"
#include "GorillaTagScripts/zzzz__Mole_MoleState_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__Mole_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaTagScripts/zzzz__MoleTypes_def.hpp"
#include "GorillaTagScripts/zzzz__Mole_MoleState_def.hpp"
#include "GorillaTagScripts/zzzz__Mole_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Mole.add_OnTapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)(::GorillaTagScripts::Mole_MoleTapEvent*)>(&::GorillaTagScripts::Mole::add_OnTapped)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b7ba7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"add_OnTapped", {}, {::i2c::type_of<::GorillaTagScripts::Mole_MoleTapEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.remove_OnTapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)(::GorillaTagScripts::Mole_MoleTapEvent*)>(&::GorillaTagScripts::Mole::remove_OnTapped)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b7bb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"remove_OnTapped", {}, {::i2c::type_of<::GorillaTagScripts::Mole_MoleTapEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.get_IsLeftSideMole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Mole::*)()>(&::GorillaTagScripts::Mole::get_IsLeftSideMole)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7bbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"get_IsLeftSideMole", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.set_IsLeftSideMole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)(bool)>(&::GorillaTagScripts::Mole::set_IsLeftSideMole)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7bbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"set_IsLeftSideMole", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)()>(&::GorillaTagScripts::Mole::Awake)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5b7bbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.InvokeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)()>(&::GorillaTagScripts::Mole::InvokeUpdate)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b7bd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.CanPickMole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Mole::*)()>(&::GorillaTagScripts::Mole::CanPickMole)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b7bf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"CanPickMole", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.ShowMole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)(float_t, int32_t)>(&::GorillaTagScripts::Mole::ShowMole)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b7bf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"ShowMole", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.HideMole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)(bool)>(&::GorillaTagScripts::Mole::HideMole)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b7bec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"HideMole", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.CanTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Mole::*)()>(&::GorillaTagScripts::Mole::CanTap)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7c128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"CanTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.CanTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Mole::*)(bool)>(&::GorillaTagScripts::Mole::CanTap)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7c13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                    {::i2c::class_of<::GorillaTagScripts::Mole*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::Mole::OnTapLocal)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5b7c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                    {::i2c::class_of<::GorillaTagScripts::Mole*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.ResetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)()>(&::GorillaTagScripts::Mole::ResetPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b7c388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"ResetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole.GetMoleTypeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::Mole::*)(bool)>(&::GorillaTagScripts::Mole::GetMoleTypeIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b7c3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"GetMoleTypeIndex", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole::*)()>(&::GorillaTagScripts::Mole::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b7c440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTagScripts::Mole::__cordl_internal_get_positionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr float_t const& GorillaTagScripts::Mole::__cordl_internal_get_positionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_positionOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionOffset = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::MoleTypes>>& GorillaTagScripts::Mole::__cordl_internal_get_moleTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moleTypes;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::MoleTypes>> const& GorillaTagScripts::Mole::__cordl_internal_get_moleTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moleTypes;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_moleTypes(::ArrayW<::UnityW<::GorillaTagScripts::MoleTypes>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moleTypes = value;
}
constexpr float_t& GorillaTagScripts::Mole::__cordl_internal_get_showMoleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMoleDuration;
}
constexpr float_t const& GorillaTagScripts::Mole::__cordl_internal_get_showMoleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMoleDuration;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_showMoleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showMoleDuration = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Mole::__cordl_internal_get_visiblePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visiblePosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Mole::__cordl_internal_get_visiblePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visiblePosition;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_visiblePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visiblePosition = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Mole::__cordl_internal_get_hiddenPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Mole::__cordl_internal_get_hiddenPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenPosition;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_hiddenPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenPosition = value;
}
constexpr float_t& GorillaTagScripts::Mole::__cordl_internal_get_currentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr float_t const& GorillaTagScripts::Mole::__cordl_internal_get_currentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_currentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTime = value;
}
constexpr float_t& GorillaTagScripts::Mole::__cordl_internal_get_animStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animStartTime;
}
constexpr float_t const& GorillaTagScripts::Mole::__cordl_internal_get_animStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animStartTime;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_animStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animStartTime = value;
}
constexpr float_t& GorillaTagScripts::Mole::__cordl_internal_get_travelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___travelTime;
}
constexpr float_t const& GorillaTagScripts::Mole::__cordl_internal_get_travelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___travelTime;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_travelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___travelTime = value;
}
constexpr float_t& GorillaTagScripts::Mole::__cordl_internal_get_normalTravelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalTravelTime;
}
constexpr float_t const& GorillaTagScripts::Mole::__cordl_internal_get_normalTravelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalTravelTime;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_normalTravelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalTravelTime = value;
}
constexpr float_t& GorillaTagScripts::Mole::__cordl_internal_get_hitTravelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitTravelTime;
}
constexpr float_t const& GorillaTagScripts::Mole::__cordl_internal_get_hitTravelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitTravelTime;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_hitTravelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitTravelTime = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::Mole::__cordl_internal_get_animCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::Mole::__cordl_internal_get_animCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animCurve;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_animCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::Mole::__cordl_internal_get_normalAnimCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalAnimCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::Mole::__cordl_internal_get_normalAnimCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalAnimCurve;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_normalAnimCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalAnimCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::Mole::__cordl_internal_get_hitAnimCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitAnimCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::Mole::__cordl_internal_get_hitAnimCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitAnimCurve;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_hitAnimCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitAnimCurve = value;
}
constexpr ::GlobalNamespace::Mole_MoleState& GorillaTagScripts::Mole::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::Mole_MoleState const& GorillaTagScripts::Mole::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_currentState(::GlobalNamespace::Mole_MoleState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Mole::__cordl_internal_get_origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Mole::__cordl_internal_get_origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_origin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___origin = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Mole::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Mole::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_target(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr int32_t& GorillaTagScripts::Mole::__cordl_internal_get_randomMolePickedIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomMolePickedIndex;
}
constexpr int32_t const& GorillaTagScripts::Mole::__cordl_internal_get_randomMolePickedIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomMolePickedIndex;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_randomMolePickedIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomMolePickedIndex = value;
}
constexpr ::GorillaTagScripts::Mole_MoleTapEvent*& GorillaTagScripts::Mole::__cordl_internal_get_OnTapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapped;
}
constexpr ::GorillaTagScripts::Mole_MoleTapEvent* const& GorillaTagScripts::Mole::__cordl_internal_get_OnTapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapped;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_OnTapped(::GorillaTagScripts::Mole_MoleTapEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTapped = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTagScripts::Mole::__cordl_internal_get_rpcCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcCooldown;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTagScripts::Mole::__cordl_internal_get_rpcCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcCooldown;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_rpcCooldown(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rpcCooldown = value;
}
constexpr int32_t& GorillaTagScripts::Mole::__cordl_internal_get_moleScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moleScore;
}
constexpr int32_t const& GorillaTagScripts::Mole::__cordl_internal_get_moleScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moleScore;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_moleScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moleScore = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::Mole::__cordl_internal_get_safeMoles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safeMoles;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::Mole::__cordl_internal_get_safeMoles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safeMoles;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_safeMoles(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___safeMoles = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::Mole::__cordl_internal_get_hazardMoles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hazardMoles;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::Mole::__cordl_internal_get_hazardMoles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hazardMoles;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set_hazardMoles(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hazardMoles = value;
}
constexpr bool& GorillaTagScripts::Mole::__cordl_internal_get__IsLeftSideMole_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLeftSideMole_k__BackingField;
}
constexpr bool const& GorillaTagScripts::Mole::__cordl_internal_get__IsLeftSideMole_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLeftSideMole_k__BackingField;
}
constexpr void GorillaTagScripts::Mole::__cordl_internal_set__IsLeftSideMole_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsLeftSideMole_k__BackingField = value;
}
inline void GorillaTagScripts::Mole::add_OnTapped(::GorillaTagScripts::Mole_MoleTapEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"add_OnTapped", {}, {::i2c::type_of<::GorillaTagScripts::Mole_MoleTapEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Mole::remove_OnTapped(::GorillaTagScripts::Mole_MoleTapEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"remove_OnTapped", {}, {::i2c::type_of<::GorillaTagScripts::Mole_MoleTapEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTagScripts::Mole::get_IsLeftSideMole()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"get_IsLeftSideMole", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Mole::set_IsLeftSideMole(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"set_IsLeftSideMole", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Mole::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Mole::InvokeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Mole::CanPickMole()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"CanPickMole", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Mole::ShowMole(float_t  _showMoleDuration, int32_t  randomMoleTypeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"ShowMole", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _showMoleDuration, randomMoleTypeIndex);
}
inline void GorillaTagScripts::Mole::HideMole(bool  isHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"HideMole", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isHit);
}
inline bool GorillaTagScripts::Mole::CanTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"CanTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::Mole::CanTap(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Mole*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isLeftHand);
}
inline void GorillaTagScripts::Mole::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Mole*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, info);
}
inline void GorillaTagScripts::Mole::ResetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"ResetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::Mole::GetMoleTypeIndex(bool  useHazardMole)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {"GetMoleTypeIndex", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, useHazardMole);
}
inline void GorillaTagScripts::Mole::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Mole* GorillaTagScripts::Mole::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Mole*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Mole::Mole()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Mole_MoleTapEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole_MoleTapEvent::*)(::System::Object*, ::System::IntPtr)>(&::GorillaTagScripts::Mole_MoleTapEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b7c504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole_MoleTapEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole_MoleTapEvent::*)(::GorillaTagScripts::MoleTypes*, ::UnityEngine::Vector3, bool, bool)>(&::GorillaTagScripts::Mole_MoleTapEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7c610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole_MoleTapEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaTagScripts::Mole_MoleTapEvent::*)(::GorillaTagScripts::MoleTypes*, ::UnityEngine::Vector3, bool, bool, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaTagScripts::Mole_MoleTapEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b7c624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Mole_MoleTapEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Mole_MoleTapEvent::*)(::System::IAsyncResult*)>(&::GorillaTagScripts::Mole_MoleTapEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b7c6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::Mole_MoleTapEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaTagScripts::Mole_MoleTapEvent::Invoke(::GorillaTagScripts::MoleTypes*  moleType, ::UnityEngine::Vector3  position, bool  isLocalTap, bool  isLeft)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moleType, position, isLocalTap, isLeft);
}
inline ::System::IAsyncResult* GorillaTagScripts::Mole_MoleTapEvent::BeginInvoke(::GorillaTagScripts::MoleTypes*  moleType, ::UnityEngine::Vector3  position, bool  isLocalTap, bool  isLeft, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, moleType, position, isLocalTap, isLeft, callback, object);
}
inline void GorillaTagScripts::Mole_MoleTapEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Mole_MoleTapEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaTagScripts::Mole_MoleTapEvent* GorillaTagScripts::Mole_MoleTapEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Mole_MoleTapEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Mole_MoleTapEvent::Mole_MoleTapEvent()   {
}
