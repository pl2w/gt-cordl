#pragma once
// IWYU pragma private; include "GlobalNamespace/SIScreenRegion.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIScreenRegion_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerColliderHandIndicator_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIScreenRegion.get_HasPressedButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIScreenRegion::*)()>(&::GlobalNamespace::SIScreenRegion::get_HasPressedButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"get_HasPressedButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIScreenRegion.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIScreenRegion::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SIScreenRegion::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5aed2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIScreenRegion.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIScreenRegion::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SIScreenRegion::OnTriggerExit)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5aed358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIScreenRegion.RegisterButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIScreenRegion::*)()>(&::GlobalNamespace::SIScreenRegion::RegisterButtonPress)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aed404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"RegisterButtonPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIScreenRegion.ClearPressedIndicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIScreenRegion::*)()>(&::GlobalNamespace::SIScreenRegion::ClearPressedIndicator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"ClearPressedIndicator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIScreenRegion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIScreenRegion::*)()>(&::GlobalNamespace::SIScreenRegion::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5aed45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*& GlobalNamespace::SIScreenRegion::__cordl_internal_get_handIndicators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handIndicators;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>* const& GlobalNamespace::SIScreenRegion::__cordl_internal_get_handIndicators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handIndicators;
}
constexpr void GlobalNamespace::SIScreenRegion::__cordl_internal_set_handIndicators(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handIndicators = value;
}
constexpr bool& GlobalNamespace::SIScreenRegion::__cordl_internal_get__hasPressedButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPressedButton;
}
constexpr bool const& GlobalNamespace::SIScreenRegion::__cordl_internal_get__hasPressedButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPressedButton;
}
constexpr void GlobalNamespace::SIScreenRegion::__cordl_internal_set__hasPressedButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasPressedButton = value;
}
inline bool GlobalNamespace::SIScreenRegion::get_HasPressedButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"get_HasPressedButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIScreenRegion::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SIScreenRegion::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SIScreenRegion::RegisterButtonPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"RegisterButtonPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIScreenRegion::ClearPressedIndicator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {"ClearPressedIndicator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIScreenRegion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScreenRegion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIScreenRegion* GlobalNamespace::SIScreenRegion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIScreenRegion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIScreenRegion::SIScreenRegion()   {
}
