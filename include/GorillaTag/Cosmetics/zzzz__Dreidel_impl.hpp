#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/Dreidel.hpp"
#include "CjLib/zzzz__FloatSpring_impl.hpp"
#include "CjLib/zzzz__Vector3Spring_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Side_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_State_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Variation_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Side_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_State_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Variation_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.TrySetIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::TrySetIdle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d8d288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"TrySetIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.TryCheckForSurfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::TryCheckForSurfaces)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d8d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"TryCheckForSurfaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.Spin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::Spin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8d904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"Spin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.TryGetSpinStartData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::Dreidel::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<::GlobalNamespace::Dreidel_Side>, ::by_ref<::GlobalNamespace::Dreidel_Variation>, ::by_ref<double_t>)>(&::GorillaTag::Cosmetics::Dreidel::TryGetSpinStartData)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5d8daf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"TryGetSpinStartData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Dreidel_Side>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Dreidel_Variation>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.SetSpinStartData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, bool, ::GlobalNamespace::Dreidel_Side, ::GlobalNamespace::Dreidel_Variation, double_t)>(&::GorillaTag::Cosmetics::Dreidel::SetSpinStartData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d8dc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"SetSpinStartData", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Dreidel_Side>(), ::i2c::type_of<::GlobalNamespace::Dreidel_Variation>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::LateUpdate)> {
  constexpr static std::size_t size = 0xf04;
  constexpr static std::size_t addrs = 0x5d8dcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.StartIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::StartIdle)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5d8d2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"StartIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.StartFindingSurfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::StartFindingSurfaces)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5d8d5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"StartFindingSurfaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.StartSpin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::StartSpin)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5d8d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"StartSpin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.StartFall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::StartFall)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5d8f248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"StartFall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.GetGroundContactPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::GetGroundContactPoint)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d8ed3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"GetGroundContactPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.GetTiltVectorsForSideWithPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)(::GlobalNamespace::Dreidel_Side, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::GorillaTag::Cosmetics::Dreidel::GetTiltVectorsForSideWithPrev)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d8f47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"GetTiltVectorsForSideWithPrev", {}, {::i2c::type_of<::GlobalNamespace::Dreidel_Side>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.GetTiltVectorsForSideWithNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)(::GlobalNamespace::Dreidel_Side, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::GorillaTag::Cosmetics::Dreidel::GetTiltVectorsForSideWithNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d8f53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"GetTiltVectorsForSideWithNext", {}, {::i2c::type_of<::GlobalNamespace::Dreidel_Side>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.AlignToSurfacePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::AlignToSurfacePlane)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d8ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"AlignToSurfacePlane", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel.UpdateSpinTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::UpdateSpinTransform)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5d8ee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"UpdateSpinTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Dreidel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Dreidel::*)()>(&::GorillaTag::Cosmetics::Dreidel::_ctor)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5d8f600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinTransform;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinTransform = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_dreidelCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreidelCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_dreidelCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreidelCollider;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_dreidelCollider(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreidelCollider = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinLoopAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinLoopAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinLoopAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinLoopAudio;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinLoopAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinLoopAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_fallSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_fallSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallSound;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_fallSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_gimelConfettiSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gimelConfettiSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_gimelConfettiSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gimelConfettiSound;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_gimelConfettiSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gimelConfettiSound = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_gimelConfetti()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gimelConfetti;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_gimelConfetti() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gimelConfetti;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_gimelConfetti(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gimelConfetti = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_centerOfMassOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_centerOfMassOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassOffset;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_centerOfMassOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerOfMassOffset = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_bottomPointOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomPointOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_bottomPointOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomPointOffset;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_bottomPointOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomPointOffset = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_bodyRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyRect;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_bodyRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyRect;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_bodyRect(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyRect = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_confettiHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confettiHeight;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_confettiHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confettiHeight;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_confettiHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confettiHeight = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfaceCheckDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceCheckDistance;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfaceCheckDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceCheckDistance;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_surfaceCheckDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceCheckDistance = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfaceUprightThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceUprightThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfaceUprightThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceUprightThreshold;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_surfaceUprightThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceUprightThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfaceDreidelAngleThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceDreidelAngleThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfaceDreidelAngleThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceDreidelAngleThreshold;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_surfaceDreidelAngleThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceDreidelAngleThreshold = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfaceLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceLayers;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfaceLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceLayers;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_surfaceLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceLayers = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeedStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedStart;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeedStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedStart;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinSpeedStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinSpeedStart = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeedEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedEnd;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeedEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedEnd;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinSpeedEnd(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinSpeedEnd = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinTime;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinTime;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinTime = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinTimeRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinTimeRange;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinTimeRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinTimeRange;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinTimeRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinTimeRange = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinWobbleFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinWobbleFrequency;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinWobbleFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinWobbleFrequency;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinWobbleFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinWobbleFrequency = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinWobbleAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinWobbleAmplitude;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinWobbleAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinWobbleAmplitude;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinWobbleAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinWobbleAmplitude = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinWobbleAmplitudeEndMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinWobbleAmplitudeEndMin;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinWobbleAmplitudeEndMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinWobbleAmplitudeEndMin;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinWobbleAmplitudeEndMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinWobbleAmplitudeEndMin = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltFrontBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltFrontBack;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltFrontBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltFrontBack;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tiltFrontBack(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltFrontBack = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltLeftRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltLeftRight;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltLeftRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltLeftRight;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tiltLeftRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltLeftRight = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_groundTrackingDampingRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundTrackingDampingRatio;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_groundTrackingDampingRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundTrackingDampingRatio;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_groundTrackingDampingRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundTrackingDampingRatio = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_groundTrackingFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundTrackingFrequency;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_groundTrackingFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundTrackingFrequency;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_groundTrackingFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundTrackingFrequency = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathMoveSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathMoveSpeed;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_pathMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathMoveSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathStartTurnRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathStartTurnRate;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathStartTurnRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathStartTurnRate;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_pathStartTurnRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathStartTurnRate = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathEndTurnRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathEndTurnRate;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathEndTurnRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathEndTurnRate;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_pathEndTurnRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathEndTurnRate = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathTurnRateSinOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathTurnRateSinOffset;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathTurnRateSinOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathTurnRateSinOffset;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_pathTurnRateSinOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathTurnRateSinOffset = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeedStopRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedStopRate;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeedStopRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedStopRate;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinSpeedStopRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinSpeedStopRate = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tumbleFallDampingRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tumbleFallDampingRatio;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tumbleFallDampingRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tumbleFallDampingRatio;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tumbleFallDampingRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tumbleFallDampingRatio = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tumbleFallFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tumbleFallFrequency;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tumbleFallFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tumbleFallFrequency;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tumbleFallFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tumbleFallFrequency = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tumbleFallFrontBackDampingRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tumbleFallFrontBackDampingRatio;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tumbleFallFrontBackDampingRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tumbleFallFrontBackDampingRatio;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tumbleFallFrontBackDampingRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tumbleFallFrontBackDampingRatio = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tumbleFallFrontBackFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tumbleFallFrontBackFrequency;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tumbleFallFrontBackFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tumbleFallFrontBackFrequency;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tumbleFallFrontBackFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tumbleFallFrontBackFrequency = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_smoothFallDampingRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothFallDampingRatio;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_smoothFallDampingRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothFallDampingRatio;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_smoothFallDampingRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothFallDampingRatio = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_smoothFallFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothFallFrequency;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_smoothFallFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothFallFrequency;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_smoothFallFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothFallFrequency = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_slowTurnDampingRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowTurnDampingRatio;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_slowTurnDampingRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowTurnDampingRatio;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_slowTurnDampingRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowTurnDampingRatio = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_slowTurnFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowTurnFrequency;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_slowTurnFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowTurnFrequency;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_slowTurnFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowTurnFrequency = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_bounceFallSwitchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceFallSwitchTime;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_bounceFallSwitchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceFallSwitchTime;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_bounceFallSwitchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceFallSwitchTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_slowTurnSwitchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowTurnSwitchTime;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_slowTurnSwitchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowTurnSwitchTime;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_slowTurnSwitchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowTurnSwitchTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_respawnTimeAfterLanding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTimeAfterLanding;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_respawnTimeAfterLanding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTimeAfterLanding;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_respawnTimeAfterLanding(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnTimeAfterLanding = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_fallTimeTumble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallTimeTumble;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_fallTimeTumble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallTimeTumble;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_fallTimeTumble(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallTimeTumble = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_fallTimeSlowTurn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallTimeSlowTurn;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_fallTimeSlowTurn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallTimeSlowTurn;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_fallTimeSlowTurn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallTimeSlowTurn = value;
}
constexpr ::GlobalNamespace::Dreidel_State& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::Dreidel_State const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_state(::GlobalNamespace::Dreidel_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr double_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr double_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_stateStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeed;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinAngle;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinAngle;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinAngle = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinAxis;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinAxis;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinAxis = value;
}
constexpr bool& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_canStartSpin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canStartSpin;
}
constexpr bool const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_canStartSpin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canStartSpin;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_canStartSpin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canStartSpin = value;
}
constexpr double_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinStartTime;
}
constexpr double_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinStartTime;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinStartTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltWobble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltWobble;
}
constexpr float_t const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltWobble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltWobble;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tiltWobble(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltWobble = value;
}
constexpr bool& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_falseTargetReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falseTargetReached;
}
constexpr bool const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_falseTargetReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falseTargetReached;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_falseTargetReached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falseTargetReached = value;
}
constexpr bool& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_hasLanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLanded;
}
constexpr bool const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_hasLanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLanded;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_hasLanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLanded = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathOffset;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_pathOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathOffset = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathDir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathDir;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_pathDir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathDir;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_pathDir(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathDir = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfacePlanePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfacePlanePoint;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfacePlanePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfacePlanePoint;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_surfacePlanePoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfacePlanePoint = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfacePlaneNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfacePlaneNormal;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_surfacePlaneNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfacePlaneNormal;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_surfacePlaneNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfacePlaneNormal = value;
}
constexpr ::CjLib::FloatSpring& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltFrontBackSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltFrontBackSpring;
}
constexpr ::CjLib::FloatSpring const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltFrontBackSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltFrontBackSpring;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tiltFrontBackSpring(::CjLib::FloatSpring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltFrontBackSpring = value;
}
constexpr ::CjLib::FloatSpring& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltLeftRightSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltLeftRightSpring;
}
constexpr ::CjLib::FloatSpring const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_tiltLeftRightSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltLeftRightSpring;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_tiltLeftRightSpring(::CjLib::FloatSpring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltLeftRightSpring = value;
}
constexpr ::CjLib::FloatSpring& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeedSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedSpring;
}
constexpr ::CjLib::FloatSpring const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinSpeedSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedSpring;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinSpeedSpring(::CjLib::FloatSpring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinSpeedSpring = value;
}
constexpr ::CjLib::Vector3Spring& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_groundPointSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundPointSpring;
}
constexpr ::CjLib::Vector3Spring const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_groundPointSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundPointSpring;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_groundPointSpring(::CjLib::Vector3Spring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundPointSpring = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingTiltValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTiltValues;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingTiltValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTiltValues;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_landingTiltValues(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingTiltValues = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingTiltLeadingTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTiltLeadingTarget;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingTiltLeadingTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTiltLeadingTarget;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_landingTiltLeadingTarget(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingTiltLeadingTarget = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingTiltTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTiltTarget;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingTiltTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTiltTarget;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_landingTiltTarget(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingTiltTarget = value;
}
constexpr ::GlobalNamespace::Dreidel_Side& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingSide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingSide;
}
constexpr ::GlobalNamespace::Dreidel_Side const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingSide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingSide;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_landingSide(::GlobalNamespace::Dreidel_Side  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingSide = value;
}
constexpr ::GlobalNamespace::Dreidel_Variation& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingVariation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingVariation;
}
constexpr ::GlobalNamespace::Dreidel_Variation const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_landingVariation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingVariation;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_landingVariation(::GlobalNamespace::Dreidel_Variation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingVariation = value;
}
constexpr bool& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinCounterClockwise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinCounterClockwise;
}
constexpr bool const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_spinCounterClockwise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinCounterClockwise;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_spinCounterClockwise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinCounterClockwise = value;
}
constexpr bool& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_debugDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr bool const& GorillaTag::Cosmetics::Dreidel::__cordl_internal_get_debugDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr void GorillaTag::Cosmetics::Dreidel::__cordl_internal_set_debugDraw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDraw = value;
}
inline bool GorillaTag::Cosmetics::Dreidel::TrySetIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"TrySetIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::Dreidel::TryCheckForSurfaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"TryCheckForSurfaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Dreidel::Spin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"Spin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::Dreidel::TryGetSpinStartData(::by_ref<::UnityEngine::Vector3>  surfacePoint, ::by_ref<::UnityEngine::Vector3>  surfaceNormal, ::by_ref<float_t>  randomDuration, ::by_ref<::GlobalNamespace::Dreidel_Side>  randomSide, ::by_ref<::GlobalNamespace::Dreidel_Variation>  randomVariation, ::by_ref<double_t>  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"TryGetSpinStartData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Dreidel_Side>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Dreidel_Variation>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, surfacePoint, surfaceNormal, randomDuration, randomSide, randomVariation, startTime);
}
inline void GorillaTag::Cosmetics::Dreidel::SetSpinStartData(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  duration, bool  counterClockwise, ::GlobalNamespace::Dreidel_Side  side, ::GlobalNamespace::Dreidel_Variation  variation, double_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"SetSpinStartData", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Dreidel_Side>(), ::i2c::type_of<::GlobalNamespace::Dreidel_Variation>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surfacePoint, surfaceNormal, duration, counterClockwise, side, variation, startTime);
}
inline void GorillaTag::Cosmetics::Dreidel::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Dreidel::StartIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"StartIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Dreidel::StartFindingSurfaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"StartFindingSurfaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Dreidel::StartSpin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"StartSpin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Dreidel::StartFall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"StartFall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Cosmetics::Dreidel::GetGroundContactPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"GetGroundContactPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Dreidel::GetTiltVectorsForSideWithPrev(::GlobalNamespace::Dreidel_Side  side, ::by_ref<::UnityEngine::Vector2>  sideTilt, ::by_ref<::UnityEngine::Vector2>  prevSideTilt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"GetTiltVectorsForSideWithPrev", {}, {::i2c::type_of<::GlobalNamespace::Dreidel_Side>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, side, sideTilt, prevSideTilt);
}
inline void GorillaTag::Cosmetics::Dreidel::GetTiltVectorsForSideWithNext(::GlobalNamespace::Dreidel_Side  side, ::by_ref<::UnityEngine::Vector2>  sideTilt, ::by_ref<::UnityEngine::Vector2>  nextSideTilt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"GetTiltVectorsForSideWithNext", {}, {::i2c::type_of<::GlobalNamespace::Dreidel_Side>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, side, sideTilt, nextSideTilt);
}
inline void GorillaTag::Cosmetics::Dreidel::AlignToSurfacePlane()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"AlignToSurfacePlane", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Dreidel::UpdateSpinTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {"UpdateSpinTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Dreidel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Dreidel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::Dreidel* GorillaTag::Cosmetics::Dreidel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::Dreidel*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::Dreidel::Dreidel()   {
}
