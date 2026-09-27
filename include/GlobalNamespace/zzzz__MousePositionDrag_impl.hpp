#pragma once
// IWYU pragma private; include "GlobalNamespace/MousePositionDrag.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MousePositionDrag_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MousePositionDrag.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MousePositionDrag::*)()>(&::GlobalNamespace::MousePositionDrag::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55eb018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MousePositionDrag*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MousePositionDrag.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MousePositionDrag::*)()>(&::GlobalNamespace::MousePositionDrag::Update)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x55eb020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MousePositionDrag*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MousePositionDrag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MousePositionDrag::*)()>(&::GlobalNamespace::MousePositionDrag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55eb14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MousePositionDrag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MousePositionDrag::__cordl_internal_get_m_currFrameHasFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currFrameHasFocus;
}
constexpr bool const& GlobalNamespace::MousePositionDrag::__cordl_internal_get_m_currFrameHasFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currFrameHasFocus;
}
constexpr void GlobalNamespace::MousePositionDrag::__cordl_internal_set_m_currFrameHasFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_currFrameHasFocus = value;
}
constexpr bool& GlobalNamespace::MousePositionDrag::__cordl_internal_get_m_prevFrameHasFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFrameHasFocus;
}
constexpr bool const& GlobalNamespace::MousePositionDrag::__cordl_internal_get_m_prevFrameHasFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFrameHasFocus;
}
constexpr void GlobalNamespace::MousePositionDrag::__cordl_internal_set_m_prevFrameHasFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevFrameHasFocus = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MousePositionDrag::__cordl_internal_get_m_prevMousePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevMousePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MousePositionDrag::__cordl_internal_get_m_prevMousePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevMousePosition;
}
constexpr void GlobalNamespace::MousePositionDrag::__cordl_internal_set_m_prevMousePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevMousePosition = value;
}
inline void GlobalNamespace::MousePositionDrag::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MousePositionDrag*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MousePositionDrag::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MousePositionDrag*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MousePositionDrag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MousePositionDrag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MousePositionDrag* GlobalNamespace::MousePositionDrag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MousePositionDrag*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MousePositionDrag::MousePositionDrag()   {
}
