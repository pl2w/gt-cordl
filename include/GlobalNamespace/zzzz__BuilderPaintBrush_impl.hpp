#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPaintBrush.hpp"
#include "GlobalNamespace/zzzz__BuilderPaintBrush_PaintBrushState_impl.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPaintBrush_def.hpp"
#include "GlobalNamespace/zzzz__BuilderMaterialOptions_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPaintBrush_PaintBrushState_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)()>(&::GlobalNamespace::BuilderPaintBrush::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x57b1c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)()>(&::GlobalNamespace::BuilderPaintBrush::DropItemCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b1db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::BuilderPaintBrush::OnGrab)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x57b1dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::BuilderPaintBrush::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b2184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPaintBrush::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::BuilderPaintBrush::OnRelease)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x57b2188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)()>(&::GlobalNamespace::BuilderPaintBrush::LateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57b2468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.FindPieceToPaint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)()>(&::GlobalNamespace::BuilderPaintBrush::FindPieceToPaint)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0x57b24f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"FindPieceToPaint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.PaintPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)()>(&::GlobalNamespace::BuilderPaintBrush::PaintPiece)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x57b2d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"PaintPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.ClearHoveredPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)()>(&::GlobalNamespace::BuilderPaintBrush::ClearHoveredPiece)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57b2370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"ClearHoveredPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush.SetBrushMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)(int32_t)>(&::GlobalNamespace::BuilderPaintBrush::SetBrushMaterial)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x57b2f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"SetBrushMaterial", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBrush._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBrush::*)()>(&::GlobalNamespace::BuilderPaintBrush::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57b3200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_brushSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brushSurface;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_brushSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brushSurface;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_brushSurface(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brushSurface = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintVolumeHalfExtents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintVolumeHalfExtents;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintVolumeHalfExtents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintVolumeHalfExtents;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_paintVolumeHalfExtents(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintVolumeHalfExtents = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintBrushMaterialOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintBrushMaterialOptions;
}
constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintBrushMaterialOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintBrushMaterialOptions;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_paintBrushMaterialOptions(::UnityW<::GlobalNamespace::BuilderMaterialOptions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintBrushMaterialOptions = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_brushRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brushRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_brushRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brushRenderer;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_brushRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brushRenderer = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintSound;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_paintSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_brushStrokeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brushStrokeSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_brushStrokeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brushStrokeSound;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_brushStrokeSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brushStrokeSound = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_holdingHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_holdingHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingHand;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_holdingHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdingHand = value;
}
constexpr bool& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_inLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inLeftHand;
}
constexpr bool const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_inLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inLeftHand;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_inLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inLeftHand = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_handVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handVelocity;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_handVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handVelocity;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_handVelocity(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handVelocity = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_hoveredPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoveredPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_hoveredPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoveredPiece;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_hoveredPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoveredPiece = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_hoveredPieceCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoveredPieceCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_hoveredPieceCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoveredPieceCollider;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_hoveredPieceCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoveredPieceCollider = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_hitColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_hitColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitColliders;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_hitColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitColliders = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_pieceLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_pieceLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceLayers;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_pieceLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceLayers = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr float_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_positionDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionDelta;
}
constexpr float_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_positionDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionDelta;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_positionDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionDelta = value;
}
constexpr float_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_wiggleDistanceRequirement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wiggleDistanceRequirement;
}
constexpr float_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_wiggleDistanceRequirement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wiggleDistanceRequirement;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_wiggleDistanceRequirement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wiggleDistanceRequirement = value;
}
constexpr float_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_minimumWiggleFrameDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumWiggleFrameDistance;
}
constexpr float_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_minimumWiggleFrameDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumWiggleFrameDistance;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_minimumWiggleFrameDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumWiggleFrameDistance = value;
}
constexpr float_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_maximumWiggleFrameDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumWiggleFrameDistance;
}
constexpr float_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_maximumWiggleFrameDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumWiggleFrameDistance;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_maximumWiggleFrameDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumWiggleFrameDistance = value;
}
constexpr float_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_maxPaintVelocitySqrMag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPaintVelocitySqrMag;
}
constexpr float_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_maxPaintVelocitySqrMag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPaintVelocitySqrMag;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_maxPaintVelocitySqrMag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPaintVelocitySqrMag = value;
}
constexpr float_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintDelay;
}
constexpr float_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintDelay;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_paintDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintDelay = value;
}
constexpr float_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintTimeElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintTimeElapsed;
}
constexpr float_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintTimeElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintTimeElapsed;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_paintTimeElapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintTimeElapsed = value;
}
constexpr float_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintDistance;
}
constexpr float_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_paintDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintDistance;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_paintDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintDistance = value;
}
constexpr int32_t& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_materialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr int32_t const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_materialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_materialType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialType = value;
}
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_brushState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brushState;
}
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_brushState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brushState;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_brushState(::GlobalNamespace::BuilderPaintBrush_PaintBrushState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brushState = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::BuilderPaintBrush::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::BuilderPaintBrush::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
inline void GlobalNamespace::BuilderPaintBrush::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPaintBrush::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPaintBrush::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::BuilderPaintBrush::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline bool GlobalNamespace::BuilderPaintBrush::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::BuilderPaintBrush::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPaintBrush::FindPieceToPaint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"FindPieceToPaint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPaintBrush::PaintPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"PaintPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPaintBrush::ClearHoveredPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"ClearHoveredPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPaintBrush::SetBrushMaterial(int32_t  inMaterialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {"SetBrushMaterial", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inMaterialType);
}
inline void GlobalNamespace::BuilderPaintBrush::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBrush*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPaintBrush* GlobalNamespace::BuilderPaintBrush::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPaintBrush*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPaintBrush::BuilderPaintBrush()   {
}
