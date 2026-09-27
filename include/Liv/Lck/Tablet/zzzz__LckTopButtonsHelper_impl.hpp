#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckTopButtonsHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsHelper_def.hpp"
#include "Liv/Lck/Tablet/zzzz__ILckTopButtons_def.hpp"
#include "Liv/Lck/UI/zzzz__LckToggle_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsHelper.HideButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsHelper::*)()>(&::Liv::Lck::Tablet::LckTopButtonsHelper::HideButtons)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9d5ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsHelper*>(),
                        {"HideButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsHelper.ShowButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsHelper::*)()>(&::Liv::Lck::Tablet::LckTopButtonsHelper::ShowButtons)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d5edd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsHelper*>(),
                        {"ShowButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsHelper.SetCameraPageVisualsManually
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsHelper::*)()>(&::Liv::Lck::Tablet::LckTopButtonsHelper::SetCameraPageVisualsManually)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d5ee04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsHelper*>(),
                        {"SetCameraPageVisualsManually", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsHelper::*)()>(&::Liv::Lck::Tablet::LckTopButtonsHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5ee38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_get__cameraToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraToggle;
}
constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_get__cameraToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraToggle;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_set__cameraToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraToggle = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_get__streamToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamToggle;
}
constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_get__streamToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamToggle;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_set__streamToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamToggle = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_get__echoToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoToggle;
}
constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_get__echoToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoToggle;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsHelper::__cordl_internal_set__echoToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoToggle = value;
}
inline void Liv::Lck::Tablet::LckTopButtonsHelper::HideButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsHelper*>(),
                        {"HideButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsHelper::ShowButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsHelper*>(),
                        {"ShowButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsHelper::SetCameraPageVisualsManually()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsHelper*>(),
                        {"SetCameraPageVisualsManually", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LckTopButtonsHelper* Liv::Lck::Tablet::LckTopButtonsHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckTopButtonsHelper*>());
}
/// @brief Convert operator to "::Liv::Lck::Tablet::ILckTopButtons"
constexpr  Liv::Lck::Tablet::LckTopButtonsHelper::operator ::Liv::Lck::Tablet::ILckTopButtons*() noexcept {
return static_cast<::Liv::Lck::Tablet::ILckTopButtons*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Tablet::ILckTopButtons"
constexpr ::Liv::Lck::Tablet::ILckTopButtons* Liv::Lck::Tablet::LckTopButtonsHelper::i___Liv__Lck__Tablet__ILckTopButtons() noexcept {
return static_cast<::Liv::Lck::Tablet::ILckTopButtons*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckTopButtonsHelper::LckTopButtonsHelper()   {
}
