#pragma once
// IWYU pragma private; include "GlobalNamespace/MouseRotationDrag.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MouseRotationDrag_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MouseRotationDrag.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseRotationDrag::*)()>(&::GlobalNamespace::MouseRotationDrag::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55eb154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouseRotationDrag*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseRotationDrag.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseRotationDrag::*)()>(&::GlobalNamespace::MouseRotationDrag::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x55eb15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouseRotationDrag*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseRotationDrag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseRotationDrag::*)()>(&::GlobalNamespace::MouseRotationDrag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55eb2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouseRotationDrag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MouseRotationDrag::__cordl_internal_get_m_currFrameHasFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currFrameHasFocus;
}
constexpr bool const& GlobalNamespace::MouseRotationDrag::__cordl_internal_get_m_currFrameHasFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currFrameHasFocus;
}
constexpr void GlobalNamespace::MouseRotationDrag::__cordl_internal_set_m_currFrameHasFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_currFrameHasFocus = value;
}
constexpr bool& GlobalNamespace::MouseRotationDrag::__cordl_internal_get_m_prevFrameHasFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFrameHasFocus;
}
constexpr bool const& GlobalNamespace::MouseRotationDrag::__cordl_internal_get_m_prevFrameHasFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFrameHasFocus;
}
constexpr void GlobalNamespace::MouseRotationDrag::__cordl_internal_set_m_prevFrameHasFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevFrameHasFocus = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MouseRotationDrag::__cordl_internal_get_m_prevMousePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevMousePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MouseRotationDrag::__cordl_internal_get_m_prevMousePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevMousePosition;
}
constexpr void GlobalNamespace::MouseRotationDrag::__cordl_internal_set_m_prevMousePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevMousePosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MouseRotationDrag::__cordl_internal_get_m_euler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_euler;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MouseRotationDrag::__cordl_internal_get_m_euler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_euler;
}
constexpr void GlobalNamespace::MouseRotationDrag::__cordl_internal_set_m_euler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_euler = value;
}
inline void GlobalNamespace::MouseRotationDrag::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouseRotationDrag*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MouseRotationDrag::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouseRotationDrag*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MouseRotationDrag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouseRotationDrag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MouseRotationDrag* GlobalNamespace::MouseRotationDrag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MouseRotationDrag*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MouseRotationDrag::MouseRotationDrag()   {
}
