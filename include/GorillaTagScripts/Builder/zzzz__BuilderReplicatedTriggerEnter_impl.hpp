#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderReplicatedTriggerEnter.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderReplicatedTriggerEnter_FunctionalState_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderReplicatedTriggerEnter_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderReplicatedTriggerEnter_FunctionalState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::Awake)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5c2f248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnDestroy)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c2f56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.PlayTriggerEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::PlayTriggerEffects)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5c2f6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"PlayTriggerEffects", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnHandTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnHandTriggerEntered)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c2fbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnHandTriggerEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnBodyTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)(int32_t)>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnBodyTriggerEntered)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c2fc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnBodyTriggerEntered", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.CanTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::CanTrigger)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c2fc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"CanTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPieceCreate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c2fde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2fdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2fdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPieceActivate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c2fdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c2ff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnStateChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c30114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnStateRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c30198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::IsStateValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c30188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c302b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::*)()>(&::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c303b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_triggerCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCooldown;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_triggerCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCooldown;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_triggerCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerCooldown = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_handTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTriggers;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>> const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_handTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTriggers;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_handTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTriggers = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_bodyTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyTriggers;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>> const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_bodyTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyTriggers;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_bodyTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyTriggers = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_animationOnTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationOnTrigger;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_animationOnTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationOnTrigger;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_animationOnTrigger(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationOnTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_activateSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_activateSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateSoundBank;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_activateSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activateSoundBank = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_knockbackOnTriggerEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackOnTriggerEnter;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_knockbackOnTriggerEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackOnTriggerEnter;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_knockbackOnTriggerEnter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackOnTriggerEnter = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_knockbackVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackVelocity;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_knockbackVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackVelocity;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_knockbackVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackVelocity = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_knockbackDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackDirection;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_knockbackDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackDirection;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_knockbackDirection(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackDirection = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_isPieceActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPieceActive;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_isPieceActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPieceActive;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_isPieceActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPieceActive = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_lastTriggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggerTime;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_lastTriggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggerTime;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_lastTriggerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTriggerTime = value;
}
constexpr ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_currentState(::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_OnTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTriggered;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_get_OnTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTriggered;
}
constexpr void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::__cordl_internal_set_OnTriggered(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTriggered = value;
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::PlayTriggerEffects(::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"PlayTriggerEffects", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnHandTriggerEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnHandTriggerEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnBodyTriggerEntered(int32_t  playerNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnBodyTriggerEntered", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerNumber);
}
inline bool GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::CanTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"CanTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter* GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter::BuilderReplicatedTriggerEnter()   {
}
