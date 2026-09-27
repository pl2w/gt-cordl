#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderShootingGallery.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderShootingGallery_FunctionalState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderShootingGallery_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileHitNotifier_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderShootingGallery_FunctionalState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::Awake)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c31428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c31620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnWheelHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnWheelHit)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c316f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnWheelHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnCowboyHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnCowboyHit)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c317ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnCowboyHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.CowboyHitEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::CowboyHitEffects)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c318e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyHitEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.WheelHitEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::WheelHitEffects)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c319d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"WheelHitEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnPieceCreate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c31ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c31c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c31c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnPieceActivate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c31c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c31d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnStateChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c31e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderShootingGallery::OnStateRequest)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c31f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderShootingGallery::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderShootingGallery::IsStateValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c31efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c32030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.FunctionalPieceFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::FunctionalPieceFixedUpdate)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c32138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"FunctionalPieceFixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.NetworkTimeMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::NetworkTimeMs)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c32418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"NetworkTimeMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.CowboyCycleLengthMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::CowboyCycleLengthMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c324bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyCycleLengthMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.WheelCycleLengthMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::WheelCycleLengthMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c324e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"WheelCycleLengthMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.CowboyPlatformTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::CowboyPlatformTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c32514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyPlatformTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.WheelPlatformTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::WheelPlatformTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c32568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"WheelPlatformTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.CowboyCycleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::CowboyCycleCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c325bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyCycleCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.CowboyCycleCompletionPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::CowboyCycleCompletionPercent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c322e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyCycleCompletionPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.WheelCycleCompletionPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::WheelCycleCompletionPercent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c323a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"WheelCycleCompletionPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery.IsEvenCycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::IsEvenCycle)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c32358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"IsEvenCycle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderShootingGallery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderShootingGallery::*)()>(&::GorillaTagScripts::Builder::BuilderShootingGallery::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c325fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelTransform;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_wheelTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyTransform;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelHitNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelHitNotifier;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelHitNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelHitNotifier;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_wheelHitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelHitNotifier = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyHitNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyHitNotifier;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyHitNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyHitNotifier;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyHitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyHitNotifier = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelHitSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelHitSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelHitSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelHitSound;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_wheelHitSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelHitSound = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelHitAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelHitAnimation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelHitAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelHitAnimation;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_wheelHitAnimation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelHitAnimation = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyHitSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyHitSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyHitSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyHitSound;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyHitSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyHitSound = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyHitAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyHitAnimation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyHitAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyHitAnimation;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyHitAnimation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyHitAnimation = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_hitCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldown;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_hitCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldown;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_hitCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitCooldown = value;
}
constexpr double_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_lastHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr double_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_lastHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_lastHitTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitTime = value;
}
constexpr ::GlobalNamespace::BuilderShootingGallery_FunctionalState& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::BuilderShootingGallery_FunctionalState const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_currentState(::GlobalNamespace::BuilderShootingGallery_FunctionalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_activated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activated;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_activated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activated;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_activated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activated = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyVelocity;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyVelocity;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyVelocity = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyStart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyStart;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyStart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyStart = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyEnd;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyEnd(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyEnd = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyCurve;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyCurve = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelVelocity;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelVelocity;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_wheelVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelVelocity = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyInitLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyInitLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyInitLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyInitLocalRotation;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyInitLocalRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyInitLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyInitLocalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyInitLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyInitLocalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyInitLocalPos;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyInitLocalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyInitLocalPos = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelInitLocalRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelInitLocalRot;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelInitLocalRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelInitLocalRot;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_wheelInitLocalRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelInitLocalRot = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyCycleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyCycleDuration;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_cowboyCycleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cowboyCycleDuration;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_cowboyCycleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cowboyCycleDuration = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelCycleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelCycleDuration;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_wheelCycleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelCycleDuration;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_wheelCycleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelCycleDuration = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distance = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_currT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currT;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_currT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currT;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_currT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currT = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_currForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currForward;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_currForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currForward;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_currForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currForward = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_dtSinceServerUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtSinceServerUpdate;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_dtSinceServerUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtSinceServerUpdate;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_dtSinceServerUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dtSinceServerUpdate = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_lastServerTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerTimeStamp;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_lastServerTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerTimeStamp;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_lastServerTimeStamp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastServerTimeStamp = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_rotateStartAmt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateStartAmt;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_rotateStartAmt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateStartAmt;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_rotateStartAmt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateStartAmt = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_rotateAmt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAmt;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_get_rotateAmt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAmt;
}
constexpr void GorillaTagScripts::Builder::BuilderShootingGallery::__cordl_internal_set_rotateAmt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateAmt = value;
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnWheelHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnWheelHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnCowboyHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnCowboyHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::CowboyHitEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyHitEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::WheelHitEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"WheelHitEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderShootingGallery::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::FunctionalPieceFixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"FunctionalPieceFixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t GorillaTagScripts::Builder::BuilderShootingGallery::NetworkTimeMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"NetworkTimeMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GorillaTagScripts::Builder::BuilderShootingGallery::CowboyCycleLengthMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyCycleLengthMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GorillaTagScripts::Builder::BuilderShootingGallery::WheelCycleLengthMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"WheelCycleLengthMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline double_t GorillaTagScripts::Builder::BuilderShootingGallery::CowboyPlatformTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyPlatformTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GorillaTagScripts::Builder::BuilderShootingGallery::WheelPlatformTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"WheelPlatformTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::Builder::BuilderShootingGallery::CowboyCycleCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyCycleCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GorillaTagScripts::Builder::BuilderShootingGallery::CowboyCycleCompletionPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"CowboyCycleCompletionPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaTagScripts::Builder::BuilderShootingGallery::WheelCycleCompletionPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"WheelCycleCompletionPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::BuilderShootingGallery::IsEvenCycle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {"IsEvenCycle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderShootingGallery::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderShootingGallery*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderShootingGallery* GorillaTagScripts::Builder::BuilderShootingGallery::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderShootingGallery*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderShootingGallery::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderShootingGallery::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderShootingGallery::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderShootingGallery::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderShootingGallery::BuilderShootingGallery()   {
}
