#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionSeatedSetting.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionSeatedSetting_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__FirstPersonLocomotor_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.get_SeatedHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::get_SeatedHeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"get_SeatedHeightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.set_SeatedHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::set_SeatedHeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"set_SeatedHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa42e1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa42e224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::OnDisable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa42e394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.HandleSeatedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)(bool)>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::HandleSeatedChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa42e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"HandleSeatedChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.HandleStandingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)(bool)>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::HandleStandingChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa42e358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"HandleStandingChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.InjectAllSeatedMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)(::UnityEngine::UI::Toggle*, ::UnityEngine::UI::Toggle*, ::Oculus::Interaction::Locomotion::FirstPersonLocomotor*)>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::InjectAllSeatedMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa42e4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"InjectAllSeatedMode", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.InjectSeated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)(::UnityEngine::UI::Toggle*)>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::InjectSeated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"InjectSeated", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.InjectStanding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)(::UnityEngine::UI::Toggle*)>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::InjectStanding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"InjectStanding", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting.InjectLocomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)(::Oculus::Interaction::Locomotion::FirstPersonLocomotor*)>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::InjectLocomotor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42e4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"InjectLocomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa42e504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__seated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seated;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__seated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seated;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_set__seated(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____seated = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__standing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____standing;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__standing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____standing;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_set__standing(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____standing = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__locomotor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotor;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor> const& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__locomotor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotor;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_set__locomotor(::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locomotor = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__seatedHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seatedHeightOffset;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__seatedHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seatedHeightOffset;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_set__seatedHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____seatedHeightOffset = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline float_t Oculus::Interaction::Locomotion::LocomotionSeatedSetting::get_SeatedHeightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"get_SeatedHeightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::set_SeatedHeightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"set_SeatedHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::HandleSeatedChanged(bool  seated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"HandleSeatedChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seated);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::HandleStandingChanged(bool  standing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"HandleStandingChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standing);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::InjectAllSeatedMode(::UnityEngine::UI::Toggle*  seated, ::UnityEngine::UI::Toggle*  standing, ::Oculus::Interaction::Locomotion::FirstPersonLocomotor*  locomotor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"InjectAllSeatedMode", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seated, standing, locomotor);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::InjectSeated(::UnityEngine::UI::Toggle*  seated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"InjectSeated", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seated);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::InjectStanding(::UnityEngine::UI::Toggle*  standing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"InjectStanding", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standing);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::InjectLocomotor(::Oculus::Interaction::Locomotion::FirstPersonLocomotor*  locomotor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {"InjectLocomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotor);
}
inline void Oculus::Interaction::Locomotion::LocomotionSeatedSetting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting* Oculus::Interaction::Locomotion::LocomotionSeatedSetting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting::LocomotionSeatedSetting()   {
}
