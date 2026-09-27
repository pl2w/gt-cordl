#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtDisplay_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtDisplay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtDisplay::*)()>(&::Liv::Lck::GorillaTag::GtDisplay::Awake)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d22cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDisplay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtDisplay.Maximize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtDisplay::*)()>(&::Liv::Lck::GorillaTag::GtDisplay::Maximize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d22df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDisplay*>(),
                        {"Maximize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtDisplay.Minimize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtDisplay::*)()>(&::Liv::Lck::GorillaTag::GtDisplay::Minimize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d22e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDisplay*>(),
                        {"Minimize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtDisplay::*)()>(&::Liv::Lck::GorillaTag::GtDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d22ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__meshBodyTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBodyTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__meshBodyTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBodyTransform;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__meshBodyTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshBodyTransform = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__canvasTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__canvasTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasTransform;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__canvasTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvasTransform = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__initialMeshBodyPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialMeshBodyPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__initialMeshBodyPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialMeshBodyPosition;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__initialMeshBodyPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialMeshBodyPosition = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__initialMeshBodyScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialMeshBodyScale;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__initialMeshBodyScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialMeshBodyScale;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__initialMeshBodyScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialMeshBodyScale = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__initialCanvasPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialCanvasPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__initialCanvasPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialCanvasPosition;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__initialCanvasPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialCanvasPosition = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__initialCanvasScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialCanvasScale;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__initialCanvasScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialCanvasScale;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__initialCanvasScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialCanvasScale = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__targetMeshBodyPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMeshBodyPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__targetMeshBodyPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMeshBodyPosition;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__targetMeshBodyPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetMeshBodyPosition = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__targetMeshBodyScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMeshBodyScale;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__targetMeshBodyScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMeshBodyScale;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__targetMeshBodyScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetMeshBodyScale = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__targetCanvasPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetCanvasPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__targetCanvasPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetCanvasPosition;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__targetCanvasPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetCanvasPosition = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__targetCanvasScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetCanvasScale;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_get__targetCanvasScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetCanvasScale;
}
constexpr void Liv::Lck::GorillaTag::GtDisplay::__cordl_internal_set__targetCanvasScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetCanvasScale = value;
}
inline void Liv::Lck::GorillaTag::GtDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDisplay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtDisplay::Maximize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDisplay*>(),
                        {"Maximize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtDisplay::Minimize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDisplay*>(),
                        {"Minimize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtDisplay* Liv::Lck::GorillaTag::GtDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtDisplay*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtDisplay::GtDisplay()   {
}
