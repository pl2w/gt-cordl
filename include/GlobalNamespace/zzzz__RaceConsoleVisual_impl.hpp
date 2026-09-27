#pragma once
// IWYU pragma private; include "GlobalNamespace/RaceConsoleVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RaceConsoleVisual_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RaceConsoleVisual.ShowRaceInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceConsoleVisual::*)(int32_t)>(&::GlobalNamespace::RaceConsoleVisual::ShowRaceInProgress)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x568e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceConsoleVisual*>(),
                        {"ShowRaceInProgress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceConsoleVisual.ShowCanStartRace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceConsoleVisual::*)()>(&::GlobalNamespace::RaceConsoleVisual::ShowCanStartRace)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x568eb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceConsoleVisual*>(),
                        {"ShowCanStartRace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceConsoleVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceConsoleVisual::*)()>(&::GlobalNamespace::RaceConsoleVisual::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568ec8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceConsoleVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_button1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button1;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_button1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button1;
}
constexpr void GlobalNamespace::RaceConsoleVisual::__cordl_internal_set_button1(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button1 = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_button3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button3;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_button3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button3;
}
constexpr void GlobalNamespace::RaceConsoleVisual::__cordl_internal_set_button3(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button3 = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_button5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button5;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_button5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button5;
}
constexpr void GlobalNamespace::RaceConsoleVisual::__cordl_internal_set_button5(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button5 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_buttonPressedOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressedOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_buttonPressedOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressedOffset;
}
constexpr void GlobalNamespace::RaceConsoleVisual::__cordl_internal_set_buttonPressedOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonPressedOffset = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_pressableButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressableButton;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_pressableButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressableButton;
}
constexpr void GlobalNamespace::RaceConsoleVisual::__cordl_internal_set_pressableButton(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressableButton = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_selectedButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedButton;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_selectedButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedButton;
}
constexpr void GlobalNamespace::RaceConsoleVisual::__cordl_internal_set_selectedButton(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedButton = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_inactiveButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveButton;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::RaceConsoleVisual::__cordl_internal_get_inactiveButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveButton;
}
constexpr void GlobalNamespace::RaceConsoleVisual::__cordl_internal_set_inactiveButton(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inactiveButton = value;
}
inline void GlobalNamespace::RaceConsoleVisual::ShowRaceInProgress(int32_t  laps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceConsoleVisual*>(),
                        {"ShowRaceInProgress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, laps);
}
inline void GlobalNamespace::RaceConsoleVisual::ShowCanStartRace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceConsoleVisual*>(),
                        {"ShowCanStartRace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceConsoleVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceConsoleVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RaceConsoleVisual* GlobalNamespace::RaceConsoleVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RaceConsoleVisual*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RaceConsoleVisual::RaceConsoleVisual()   {
}
