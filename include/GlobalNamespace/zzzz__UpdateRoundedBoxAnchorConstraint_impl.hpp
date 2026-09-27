#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateRoundedBoxAnchorConstraint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__UpdateRoundedBoxAnchorConstraint_def.hpp"
#include "UnityEngine/Animations/zzzz__PositionConstraint_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UpdateRoundedBoxAnchorConstraint.UpdateOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::PositionConstraint*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::UpdateRoundedBoxAnchorConstraint::UpdateOffset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa42a964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>(),
                        {"UpdateOffset", {}, {::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateRoundedBoxAnchorConstraint.UpdateAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::PositionConstraint*, ::UnityEngine::Animations::PositionConstraint*, ::UnityEngine::Animations::PositionConstraint*, ::UnityEngine::Animations::PositionConstraint*, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::UpdateRoundedBoxAnchorConstraint::UpdateAnchors)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa42a9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>(),
                        {"UpdateAnchors", {}, {::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateRoundedBoxAnchorConstraint.UpdateAnchorsMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateRoundedBoxAnchorConstraint::*)()>(&::GlobalNamespace::UpdateRoundedBoxAnchorConstraint::UpdateAnchorsMenu)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa42aa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>(),
                        {"UpdateAnchorsMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateRoundedBoxAnchorConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateRoundedBoxAnchorConstraint::*)()>(&::GlobalNamespace::UpdateRoundedBoxAnchorConstraint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42aa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint>& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__topLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topLeft;
}
constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint> const& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__topLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topLeft;
}
constexpr void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_set__topLeft(::UnityW<::UnityEngine::Animations::PositionConstraint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topLeft = value;
}
constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint>& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__topRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topRight;
}
constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint> const& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__topRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topRight;
}
constexpr void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_set__topRight(::UnityW<::UnityEngine::Animations::PositionConstraint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topRight = value;
}
constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint>& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__bottomLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomLeft;
}
constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint> const& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__bottomLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomLeft;
}
constexpr void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_set__bottomLeft(::UnityW<::UnityEngine::Animations::PositionConstraint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bottomLeft = value;
}
constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint>& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__bottomRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomRight;
}
constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint> const& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__bottomRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomRight;
}
constexpr void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_set__bottomRight(::UnityW<::UnityEngine::Animations::PositionConstraint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bottomRight = value;
}
constexpr float_t& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__interactableLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableLength;
}
constexpr float_t const& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__interactableLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableLength;
}
constexpr void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_set__interactableLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactableLength = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::__cordl_internal_set__offset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
inline void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::UpdateOffset(::UnityEngine::Animations::PositionConstraint*  constraint, ::UnityEngine::Vector2  direction, ::UnityEngine::Vector2  offset, float_t  interactableLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>(),
                        {"UpdateOffset", {}, {::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, constraint, direction, offset, interactableLength);
}
inline void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::UpdateAnchors(::UnityEngine::Animations::PositionConstraint*  topLeft, ::UnityEngine::Animations::PositionConstraint*  topRight, ::UnityEngine::Animations::PositionConstraint*  bottomLeft, ::UnityEngine::Animations::PositionConstraint*  bottomRight, ::UnityEngine::Vector2  offset, float_t  interactableLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>(),
                        {"UpdateAnchors", {}, {::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, topLeft, topRight, bottomLeft, bottomRight, offset, interactableLength);
}
inline void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::UpdateAnchorsMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>(),
                        {"UpdateAnchorsMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UpdateRoundedBoxAnchorConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UpdateRoundedBoxAnchorConstraint* GlobalNamespace::UpdateRoundedBoxAnchorConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpdateRoundedBoxAnchorConstraint::UpdateRoundedBoxAnchorConstraint()   {
}
