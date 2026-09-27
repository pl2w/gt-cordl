#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtDroneModeTabletUIAppearance.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtDroneModeTabletUIAppearance_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtDisplay_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance.get_IsDroneModeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::*)()>(&::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::get_IsDroneModeActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d22ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>(),
                        {"get_IsDroneModeActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance.set_IsDroneModeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::*)(bool)>(&::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::set_IsDroneModeActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d22ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>(),
                        {"set_IsDroneModeActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance.EvaluateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::*)(bool)>(&::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::EvaluateMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d22ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>(),
                        {"EvaluateMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::*)()>(&::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d22f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__selectorsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectorsGroup;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__selectorsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectorsGroup;
}
constexpr void Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_set__selectorsGroup(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectorsGroup = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__orientationButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orientationButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__orientationButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orientationButton;
}
constexpr void Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_set__orientationButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____orientationButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__settingsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsGroup;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__settingsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsGroup;
}
constexpr void Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_set__settingsGroup(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsGroup = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDisplay>& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__display()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____display;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDisplay> const& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__display() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____display;
}
constexpr void Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_set__display(::UnityW<::Liv::Lck::GorillaTag::GtDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____display = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__isDroneModeActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDroneModeActive;
}
constexpr bool const& Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_get__isDroneModeActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDroneModeActive;
}
constexpr void Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::__cordl_internal_set__isDroneModeActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDroneModeActive = value;
}
inline bool Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::get_IsDroneModeActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>(),
                        {"get_IsDroneModeActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::set_IsDroneModeActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>(),
                        {"set_IsDroneModeActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::EvaluateMode(bool  isDroneMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>(),
                        {"EvaluateMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDroneMode);
}
inline void Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance* Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance::GtDroneModeTabletUIAppearance()   {
}
