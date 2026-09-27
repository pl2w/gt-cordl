#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceBallista.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceBallista_BallistaState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceBallista_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceBallista_BallistaState_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceBallista_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::Awake)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5c23354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c23554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnHandTriggerPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnHandTriggerPressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c2362c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnHandTriggerPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.UpdateStateMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::UpdateStateMaster)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x5c2367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"UpdateStateMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.ResetFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::ResetFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c23e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"ResetFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.UpdatePlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::UpdatePlayerPosition)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5c23fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"UpdatePlayerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.GetPlayerBodyCenterPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::Builder::BuilderPieceBallista::*)(::UnityEngine::Transform*, float_t)>(&::GorillaTagScripts::Builder::BuilderPieceBallista::GetPlayerBodyCenterPosition)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c23e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"GetPlayerBodyCenterPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5c244c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnTriggerExit)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5c2476c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnPieceCreate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c249e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c24a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c24a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnPieceActivate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5c24b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5c24d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnStateRequest)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c24f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceBallista::OnStateChanged)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x5c25124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceBallista::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderPieceBallista::IsStateValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c25114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c25830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.UpdatePredictionLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::UpdatePredictionLine)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5c25908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"UpdatePredictionLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista.DebugDrawTrajectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Builder::BuilderPieceBallista::*)(float_t)>(&::GorillaTagScripts::Builder::BuilderPieceBallista::DebugDrawTrajectory)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c257b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"DebugDrawTrajectory", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c25b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_triggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_triggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggers;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_triggers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_disableWhileLaunching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhileLaunching;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_disableWhileLaunching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhileLaunching;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_disableWhileLaunching(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhileLaunching = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_handTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTrigger;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_handTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTrigger;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_handTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTrigger = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_autoLaunch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoLaunch;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_autoLaunch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoLaunch;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_autoLaunch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoLaunch = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_autoLaunchDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoLaunchDelay;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_autoLaunchDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoLaunchDelay;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_autoLaunchDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoLaunchDelay = value;
}
constexpr double_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_enteredTriggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enteredTriggerTime;
}
constexpr double_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_enteredTriggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enteredTriggerTime;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_enteredTriggerTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enteredTriggerTime = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchStart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchStart;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchStart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchStart = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchEnd;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchEnd(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchEnd = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchBone;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchBone = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadSFX;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_loadSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadSFX = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSFX;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchSFX = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_cockSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cockSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_cockSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cockSFX;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_cockSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cockSFX = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchParticles;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchParticles = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_hasLaunchParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLaunchParticles;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_hasLaunchParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLaunchParticles;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_hasLaunchParticles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLaunchParticles = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_reloadDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadDelay;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_reloadDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadDelay;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_reloadDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reloadDelay = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadTime;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadTime;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_loadTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadTime = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_slipOverrideDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slipOverrideDuration;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_slipOverrideDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slipOverrideDuration;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_slipOverrideDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slipOverrideDuration = value;
}
constexpr double_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchedTime;
}
constexpr double_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchedTime;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchedTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchedTime = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerMagnetismStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMagnetismStrength;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerMagnetismStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMagnetismStrength;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_playerMagnetismStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMagnetismStrength = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSpeed;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchSpeed = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitch = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_debugDrawTrajectoryOnLaunch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawTrajectoryOnLaunch;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_debugDrawTrajectoryOnLaunch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawTrajectoryOnLaunch;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_debugDrawTrajectoryOnLaunch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawTrajectoryOnLaunch = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadTriggerHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadTriggerHash;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadTriggerHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadTriggerHash;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_loadTriggerHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadTriggerHash = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_fireTriggerHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireTriggerHash;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_fireTriggerHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireTriggerHash;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_fireTriggerHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireTriggerHash = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_pitchParamHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchParamHash;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_pitchParamHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchParamHash;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_pitchParamHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchParamHash = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_idleStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleStateHash;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_idleStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleStateHash;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_idleStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleStateHash = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadStateHash;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadStateHash;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_loadStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadStateHash = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_fireStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireStateHash;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_fireStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireStateHash;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_fireStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireStateHash = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerInTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInTrigger;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerInTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInTrigger;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_playerInTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerInTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerRigInTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRigInTrigger;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerRigInTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRigInTrigger;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_playerRigInTrigger(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRigInTrigger = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerLaunched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLaunched;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerLaunched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLaunched;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_playerLaunched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLaunched = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerReadyToFireDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReadyToFireDist;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerReadyToFireDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReadyToFireDist;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_playerReadyToFireDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerReadyToFireDist = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_prepareForLaunchDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prepareForLaunchDistance;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_prepareForLaunchDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prepareForLaunchDistance;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_prepareForLaunchDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prepareForLaunchDistance = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchDirection;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchDirection;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchDirection = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchRampDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchRampDistance;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchRampDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchRampDistance;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchRampDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchRampDistance = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerPullInRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPullInRate;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerPullInRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPullInRate;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_playerPullInRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPullInRate = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_appliedAnimatorPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appliedAnimatorPitch;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_appliedAnimatorPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appliedAnimatorPitch;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_appliedAnimatorPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appliedAnimatorPitch = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchBigMonkes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchBigMonkes;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_launchBigMonkes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchBigMonkes;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_launchBigMonkes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchBigMonkes = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerBodyOffsetFromHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerBodyOffsetFromHead;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_playerBodyOffsetFromHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerBodyOffsetFromHead;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_playerBodyOffsetFromHead(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerBodyOffsetFromHead = value;
}
constexpr double_t& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadCompleteTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadCompleteTime;
}
constexpr double_t const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_loadCompleteTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadCompleteTime;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_loadCompleteTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadCompleteTime = value;
}
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_ballistaState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballistaState;
}
constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_ballistaState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballistaState;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_ballistaState(::GlobalNamespace::BuilderPieceBallista_BallistaState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballistaState = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_predictionLinePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictionLinePoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_get_predictionLinePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictionLinePoints;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista::__cordl_internal_set_predictionLinePoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predictionLinePoints = value;
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnHandTriggerPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnHandTriggerPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::UpdateStateMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"UpdateStateMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::ResetFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"ResetFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::UpdatePlayerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"UpdatePlayerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTagScripts::Builder::BuilderPieceBallista::GetPlayerBodyCenterPosition(::UnityEngine::Transform*  headTransform, float_t  playerScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"GetPlayerBodyCenterPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, headTransform, playerScale);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderPieceBallista::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::UpdatePredictionLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"UpdatePredictionLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Builder::BuilderPieceBallista::DebugDrawTrajectory(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {"DebugDrawTrajectory", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, duration);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderPieceBallista* GorillaTagScripts::Builder::BuilderPieceBallista::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderPieceBallista*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderPieceBallista::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderPieceBallista::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderPieceBallista::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderPieceBallista::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderPieceBallista::BuilderPieceBallista()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::*)(int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c25b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c25d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c25d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c25ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c25ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::*)()>(&::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c25ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderPieceBallista>& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderPieceBallista> const& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::BuilderPieceBallista>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65* GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65::BuilderPieceBallista__DebugDrawTrajectory_d__65()   {
}
