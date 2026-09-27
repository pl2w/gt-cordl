#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionComfortVignetteSetting.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionComfortVignetteSetting_ComfortType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionComfortVignetteSetting_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionComfortVignetteSetting_ComfortType_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTunneling_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa42df54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa42df80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::OnDisable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa42e0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.InjectCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)(bool)>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectCurve)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa42e04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectCurve", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.InjectAllComfortOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType, ::UnityEngine::UI::Toggle*, ::UnityEngine::AnimationCurve*, ::Oculus::Interaction::Locomotion::LocomotionTunneling*)>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectAllComfortOption)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa42e174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectAllComfortOption", {}, {::i2c::type_of<::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType>(), ::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.InjectComfortType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType)>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectComfortType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectComfortType", {}, {::i2c::type_of<::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.InjectToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)(::UnityEngine::UI::Toggle*)>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectToggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectToggle", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.InjectCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting.InjectTunneling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)(::Oculus::Interaction::Locomotion::LocomotionTunneling*)>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectTunneling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectTunneling", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggle = value;
}
constexpr ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__comfortType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comfortType;
}
constexpr ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType const& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__comfortType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comfortType;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_set__comfortType(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comfortType = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curve = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTunneling>& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__tunneling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tunneling;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTunneling> const& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__tunneling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tunneling;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_set__tunneling(::UnityW<::Oculus::Interaction::Locomotion::LocomotionTunneling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tunneling = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectCurve(bool  inject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectCurve", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inject);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectAllComfortOption(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType  comfortType, ::UnityEngine::UI::Toggle*  toggle, ::UnityEngine::AnimationCurve*  curve, ::Oculus::Interaction::Locomotion::LocomotionTunneling*  tunneling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectAllComfortOption", {}, {::i2c::type_of<::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType>(), ::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comfortType, toggle, curve, tunneling);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectComfortType(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType  comfortType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectComfortType", {}, {::i2c::type_of<::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comfortType);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectToggle(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectToggle", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectCurve(::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::InjectTunneling(::Oculus::Interaction::Locomotion::LocomotionTunneling*  tunneling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {"InjectTunneling", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tunneling);
}
inline void Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting* Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting::LocomotionComfortVignetteSetting()   {
}
