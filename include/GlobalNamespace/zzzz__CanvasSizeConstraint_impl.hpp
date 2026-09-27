#pragma once
// IWYU pragma private; include "GlobalNamespace/CanvasSizeConstraint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CanvasSizeConstraint_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CanvasSizeConstraint.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CanvasSizeConstraint::*)()>(&::GlobalNamespace::CanvasSizeConstraint::Start)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa427870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasSizeConstraint*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasSizeConstraint.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CanvasSizeConstraint::*)()>(&::GlobalNamespace::CanvasSizeConstraint::Update)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa427a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasSizeConstraint*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasSizeConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CanvasSizeConstraint::*)()>(&::GlobalNamespace::CanvasSizeConstraint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa427c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasSizeConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_horizontalAnchorA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAnchorA;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_horizontalAnchorA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAnchorA;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set_horizontalAnchorA(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalAnchorA = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_horizontalAnchorB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAnchorB;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_horizontalAnchorB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAnchorB;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set_horizontalAnchorB(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalAnchorB = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_verticalAnchorA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalAnchorA;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_verticalAnchorA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalAnchorA;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set_verticalAnchorA(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalAnchorA = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_verticalAnchorB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalAnchorB;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_verticalAnchorB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalAnchorB;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set_verticalAnchorB(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalAnchorB = value;
}
constexpr float_t& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_horizontalSizeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalSizeOffset;
}
constexpr float_t const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_horizontalSizeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalSizeOffset;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set_horizontalSizeOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalSizeOffset = value;
}
constexpr float_t& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_verticalSizeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSizeOffset;
}
constexpr float_t const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get_verticalSizeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSizeOffset;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set_verticalSizeOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalSizeOffset = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get__initialSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialSize;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get__initialSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialSize;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set__initialSize(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialSize = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get__initialRectSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialRectSize;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get__initialRectSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialRectSize;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set__initialRectSize(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialRectSize = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get__rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get__rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rectTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get__initialLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialLocalScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CanvasSizeConstraint::__cordl_internal_get__initialLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialLocalScale;
}
constexpr void GlobalNamespace::CanvasSizeConstraint::__cordl_internal_set__initialLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialLocalScale = value;
}
inline void GlobalNamespace::CanvasSizeConstraint::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasSizeConstraint*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CanvasSizeConstraint::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasSizeConstraint*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CanvasSizeConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasSizeConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CanvasSizeConstraint* GlobalNamespace::CanvasSizeConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CanvasSizeConstraint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CanvasSizeConstraint::CanvasSizeConstraint()   {
}
