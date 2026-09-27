#pragma once
// IWYU pragma private; include "GlobalNamespace/PanelSetup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PanelSetup_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__BoundsClipper_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__UnionClippedPlaneSurface_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PanelSetup.UpdatePanelProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelSetup::*)()>(&::GlobalNamespace::PanelSetup::UpdatePanelProperties)> {
  constexpr static std::size_t size = 0xf88;
  constexpr static std::size_t addrs = 0xa42829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"UpdatePanelProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelSetup.CreateCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelSetup::*)(::StringW, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool, int32_t, int32_t, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::PanelSetup::CreateCollider)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0xa429598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"CreateCollider", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelSetup.SetColliderSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelSetup::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3)>(&::GlobalNamespace::PanelSetup::SetColliderSize)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa429324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"SetColliderSize", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelSetup.Vec2Sign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PanelSetup::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::PanelSetup::Vec2Sign)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa429308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"Vec2Sign", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelSetup.GetRectCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GlobalNamespace::PanelSetup::*)(::UnityEngine::Vector3, ::UnityEngine::Vector2)>(&::GlobalNamespace::PanelSetup::GetRectCorners)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa429224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"GetRectCorners", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelSetup.GetRectSides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GlobalNamespace::PanelSetup::*)(::UnityEngine::Vector3, ::UnityEngine::Vector2)>(&::GlobalNamespace::PanelSetup::GetRectSides)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa4294a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"GetRectSides", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelSetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelSetup::*)()>(&::GlobalNamespace::PanelSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4299d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PanelSetup::__cordl_internal_get_InteractableLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractableLength;
}
constexpr float_t const& GlobalNamespace::PanelSetup::__cordl_internal_get_InteractableLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractableLength;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_InteractableLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InteractableLength = value;
}
constexpr float_t& GlobalNamespace::PanelSetup::__cordl_internal_get_InteractableDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractableDepth;
}
constexpr float_t const& GlobalNamespace::PanelSetup::__cordl_internal_get_InteractableDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractableDepth;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_InteractableDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InteractableDepth = value;
}
constexpr bool& GlobalNamespace::PanelSetup::__cordl_internal_get_AddVerticalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddVerticalRotation;
}
constexpr bool const& GlobalNamespace::PanelSetup::__cordl_internal_get_AddVerticalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddVerticalRotation;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_AddVerticalRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddVerticalRotation = value;
}
constexpr bool& GlobalNamespace::PanelSetup::__cordl_internal_get_AddHorizontalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddHorizontalRotation;
}
constexpr bool const& GlobalNamespace::PanelSetup::__cordl_internal_get_AddHorizontalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddHorizontalRotation;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_AddHorizontalRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddHorizontalRotation = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::PanelSetup::__cordl_internal_get_panelTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panelTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::PanelSetup::__cordl_internal_get_panelTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panelTransform;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_panelTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panelTransform = value;
}
constexpr ::UnityW<::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface>& GlobalNamespace::PanelSetup::__cordl_internal_get_panelClippedPlaneSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panelClippedPlaneSurface;
}
constexpr ::UnityW<::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface> const& GlobalNamespace::PanelSetup::__cordl_internal_get_panelClippedPlaneSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panelClippedPlaneSurface;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_panelClippedPlaneSurface(::UnityW<::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panelClippedPlaneSurface = value;
}
constexpr ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>& GlobalNamespace::PanelSetup::__cordl_internal_get_boundsClipper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsClipper;
}
constexpr ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper> const& GlobalNamespace::PanelSetup::__cordl_internal_get_boundsClipper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsClipper;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_boundsClipper(::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundsClipper = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PanelSetup::__cordl_internal_get_topLeftCornerAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topLeftCornerAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PanelSetup::__cordl_internal_get_topLeftCornerAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topLeftCornerAnchor;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_topLeftCornerAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topLeftCornerAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PanelSetup::__cordl_internal_get_AnchorTopLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorTopLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PanelSetup::__cordl_internal_get_AnchorTopLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorTopLeft;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_AnchorTopLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnchorTopLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PanelSetup::__cordl_internal_get_AnchorTopRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorTopRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PanelSetup::__cordl_internal_get_AnchorTopRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorTopRight;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_AnchorTopRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnchorTopRight = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PanelSetup::__cordl_internal_get_AnchorBottomLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorBottomLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PanelSetup::__cordl_internal_get_AnchorBottomLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorBottomLeft;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_AnchorBottomLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnchorBottomLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PanelSetup::__cordl_internal_get_AnchorBottomRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorBottomRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PanelSetup::__cordl_internal_get_AnchorBottomRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorBottomRight;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_AnchorBottomRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnchorBottomRight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_PanelInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PanelInteractable;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_PanelInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PanelInteractable;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_PanelInteractable(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PanelInteractable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_ScalerTopLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalerTopLeft;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_ScalerTopLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalerTopLeft;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_ScalerTopLeft(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScalerTopLeft = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_ScalerTopRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalerTopRight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_ScalerTopRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalerTopRight;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_ScalerTopRight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScalerTopRight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_ScalerBottomLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalerBottomLeft;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_ScalerBottomLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalerBottomLeft;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_ScalerBottomLeft(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScalerBottomLeft = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_ScalerBottomRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalerBottomRight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_ScalerBottomRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalerBottomRight;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_ScalerBottomRight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScalerBottomRight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_RotatorVerticalTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotatorVerticalTop;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_RotatorVerticalTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotatorVerticalTop;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_RotatorVerticalTop(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotatorVerticalTop = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_RotatorVerticalBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotatorVerticalBottom;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_RotatorVerticalBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotatorVerticalBottom;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_RotatorVerticalBottom(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotatorVerticalBottom = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_RotatorHorizontalLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotatorHorizontalLeft;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_RotatorHorizontalLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotatorHorizontalLeft;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_RotatorHorizontalLeft(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotatorHorizontalLeft = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PanelSetup::__cordl_internal_get_RotatorHorizontalRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotatorHorizontalRight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PanelSetup::__cordl_internal_get_RotatorHorizontalRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotatorHorizontalRight;
}
constexpr void GlobalNamespace::PanelSetup::__cordl_internal_set_RotatorHorizontalRight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotatorHorizontalRight = value;
}
inline void GlobalNamespace::PanelSetup::UpdatePanelProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"UpdatePanelProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PanelSetup::CreateCollider(::StringW  name, ::UnityEngine::Vector2  rectSize, ::UnityEngine::Vector3  sidePosition, ::UnityEngine::Vector3  sideDirection, ::UnityEngine::Vector3  offsetDirection, bool  fullSize, int32_t  wideAxis, int32_t  normalAxis, ::UnityEngine::Transform*  anchorA, ::UnityEngine::Transform*  anchorB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"CreateCollider", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, rectSize, sidePosition, sideDirection, offsetDirection, fullSize, wideAxis, normalAxis, anchorA, anchorB);
}
inline void GlobalNamespace::PanelSetup::SetColliderSize(::UnityEngine::GameObject*  colliderGO, ::UnityEngine::Vector3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"SetColliderSize", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colliderGO, size);
}
inline ::UnityEngine::Vector2 GlobalNamespace::PanelSetup::Vec2Sign(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"Vec2Sign", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::PanelSetup::GetRectCorners(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"GetRectCorners", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, position, size);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::PanelSetup::GetRectSides(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {"GetRectSides", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, position, size);
}
inline void GlobalNamespace::PanelSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelSetup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PanelSetup* GlobalNamespace::PanelSetup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PanelSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PanelSetup::PanelSetup()   {
}
