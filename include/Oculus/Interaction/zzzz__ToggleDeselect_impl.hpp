#pragma once
// IWYU pragma private; include "Oculus/Interaction/ToggleDeselect.hpp"
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "Oculus/Interaction/zzzz__ToggleDeselect_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ToggleDeselect.get_ClearStateOnDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ToggleDeselect::*)()>(&::Oculus::Interaction::ToggleDeselect::get_ClearStateOnDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48a2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ToggleDeselect*>(),
                        {"get_ClearStateOnDrag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ToggleDeselect.set_ClearStateOnDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ToggleDeselect::*)(bool)>(&::Oculus::Interaction::ToggleDeselect::set_ClearStateOnDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48a2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ToggleDeselect*>(),
                        {"set_ClearStateOnDrag", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ToggleDeselect.OnBeginDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ToggleDeselect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Oculus::Interaction::ToggleDeselect::OnBeginDrag)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa48a2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ToggleDeselect*>(),
                        {"OnBeginDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ToggleDeselect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ToggleDeselect::*)()>(&::Oculus::Interaction::ToggleDeselect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48a404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ToggleDeselect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::ToggleDeselect::__cordl_internal_get__clearStateOnDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearStateOnDrag;
}
constexpr bool const& Oculus::Interaction::ToggleDeselect::__cordl_internal_get__clearStateOnDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearStateOnDrag;
}
constexpr void Oculus::Interaction::ToggleDeselect::__cordl_internal_set__clearStateOnDrag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clearStateOnDrag = value;
}
inline bool Oculus::Interaction::ToggleDeselect::get_ClearStateOnDrag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ToggleDeselect*>(),
                        {"get_ClearStateOnDrag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::ToggleDeselect::set_ClearStateOnDrag(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ToggleDeselect*>(),
                        {"set_ClearStateOnDrag", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ToggleDeselect::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  pointerEventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ToggleDeselect*>(),
                        {"OnBeginDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEventData);
}
inline void Oculus::Interaction::ToggleDeselect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ToggleDeselect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ToggleDeselect* Oculus::Interaction::ToggleDeselect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ToggleDeselect*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ToggleDeselect::ToggleDeselect()   {
}
