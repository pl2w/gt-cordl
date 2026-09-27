#pragma once
// IWYU pragma private; include "Oculus/Interaction/DisableRaycaster.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__DisableRaycaster_def.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DisableRaycaster.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DisableRaycaster::*)()>(&::Oculus::Interaction::DisableRaycaster::Update)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa42ab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DisableRaycaster*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DisableRaycaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DisableRaycaster::*)()>(&::Oculus::Interaction::DisableRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42aba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DisableRaycaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::DisableRaycaster::__cordl_internal_get_minAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAlpha;
}
constexpr float_t const& Oculus::Interaction::DisableRaycaster::__cordl_internal_get_minAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAlpha;
}
constexpr void Oculus::Interaction::DisableRaycaster::__cordl_internal_set_minAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minAlpha = value;
}
constexpr ::UnityW<::UnityEngine::UI::GraphicRaycaster>& Oculus::Interaction::DisableRaycaster::__cordl_internal_get_raycaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycaster;
}
constexpr ::UnityW<::UnityEngine::UI::GraphicRaycaster> const& Oculus::Interaction::DisableRaycaster::__cordl_internal_get_raycaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycaster;
}
constexpr void Oculus::Interaction::DisableRaycaster::__cordl_internal_set_raycaster(::UnityW<::UnityEngine::UI::GraphicRaycaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycaster = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& Oculus::Interaction::DisableRaycaster::__cordl_internal_get_group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___group;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& Oculus::Interaction::DisableRaycaster::__cordl_internal_get_group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___group;
}
constexpr void Oculus::Interaction::DisableRaycaster::__cordl_internal_set_group(::UnityW<::UnityEngine::CanvasGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___group = value;
}
inline void Oculus::Interaction::DisableRaycaster::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DisableRaycaster*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DisableRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DisableRaycaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DisableRaycaster* Oculus::Interaction::DisableRaycaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DisableRaycaster*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DisableRaycaster::DisableRaycaster()   {
}
