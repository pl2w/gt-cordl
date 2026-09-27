#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceToggle.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceToggle_ToggleStates_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceToggle_ToggleType_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceToggle_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderTappable_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceToggle_ToggleStates_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceToggle_ToggleType_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::Awake)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5c2b318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnDestroy)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c2b710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.CanTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::CanTap)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c2b994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"CanTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)(float_t)>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnTapLocal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c2ba98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnTapLocal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.CanTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::CanTrigger)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c2bcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"CanTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnHandTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnHandTriggerEntered)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2bce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnHandTriggerEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnBodyTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)(int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnBodyTriggerEntered)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c2bd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnBodyTriggerEntered", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.ToggleStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::ToggleStateRequest)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c2bb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"ToggleStateRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.ToggleStateMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::Builder::BuilderPieceToggle::ToggleStateMaster)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c2bec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"ToggleStateMaster", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnStateChanged)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c2c048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnStateRequest)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5c2c2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceToggle::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderPieceToggle::IsStateValid)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c2c208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2c4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnPieceCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2c4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2c4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2c4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnPieceActivate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c2c4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c2c610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceToggle::*)()>(&::GorillaTagScripts::Builder::BuilderPieceToggle::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c2c7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::GlobalNamespace::BuilderPieceToggle_ToggleType& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_toggleType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleType;
}
constexpr ::GlobalNamespace::BuilderPieceToggle_ToggleType const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_toggleType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleType;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_toggleType(::GlobalNamespace::BuilderPieceToggle_ToggleType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleType = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_onlySmallMonkeTaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySmallMonkeTaps;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_onlySmallMonkeTaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySmallMonkeTaps;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_onlySmallMonkeTaps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlySmallMonkeTaps = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_handTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTriggers;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>> const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_handTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTriggers;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_handTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTriggers = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_bodyTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyTriggers;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>> const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_bodyTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyTriggers;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_bodyTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyTriggers = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_ToggledOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggledOn;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_ToggledOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggledOn;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_ToggledOn(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToggledOn = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_ToggledOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggledOff;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_ToggledOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggledOff;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_ToggledOff(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToggledOff = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::GlobalNamespace::BuilderPieceToggle_ToggleStates& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_toggleState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleState;
}
constexpr ::GlobalNamespace::BuilderPieceToggle_ToggleStates const& GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_get_toggleState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleState;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceToggle::__cordl_internal_set_toggleState(::GlobalNamespace::BuilderPieceToggle_ToggleStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleState = value;
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::BuilderPieceToggle::CanTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"CanTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnTapLocal(float_t  tapStrength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnTapLocal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength);
}
inline bool GorillaTagScripts::Builder::BuilderPieceToggle::CanTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"CanTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnHandTriggerEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnHandTriggerEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnBodyTriggerEntered(int32_t  playerNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnBodyTriggerEntered", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerNumber);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::ToggleStateRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"ToggleStateRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::ToggleStateMaster(::Photon::Realtime::Player*  instigator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"ToggleStateMaster", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instigator);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderPieceToggle::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderPieceToggle* GorillaTagScripts::Builder::BuilderPieceToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderPieceToggle*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderPieceToggle::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderPieceToggle::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderPieceToggle::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderPieceToggle::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderTappable"
constexpr  GorillaTagScripts::Builder::BuilderPieceToggle::operator ::GlobalNamespace::IBuilderTappable*() noexcept {
return static_cast<::GlobalNamespace::IBuilderTappable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderTappable"
constexpr ::GlobalNamespace::IBuilderTappable* GorillaTagScripts::Builder::BuilderPieceToggle::i___GlobalNamespace__IBuilderTappable() noexcept {
return static_cast<::GlobalNamespace::IBuilderTappable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderPieceToggle::BuilderPieceToggle()   {
}
