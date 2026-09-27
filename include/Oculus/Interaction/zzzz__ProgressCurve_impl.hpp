#pragma once
// IWYU pragma private; include "Oculus/Interaction/ProgressCurve.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.get_AnimationCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::ProgressCurve::*)()>(&::Oculus::Interaction::ProgressCurve::get_AnimationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"get_AnimationCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.set_AnimationCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::ProgressCurve::set_AnimationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48ccf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"set_AnimationCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.get_AnimationLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ProgressCurve::*)()>(&::Oculus::Interaction::ProgressCurve::get_AnimationLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48cd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"get_AnimationLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.set_AnimationLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)(float_t)>(&::Oculus::Interaction::ProgressCurve::set_AnimationLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48cd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"set_AnimationLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.get_TimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<float_t>* (::Oculus::Interaction::ProgressCurve::*)()>(&::Oculus::Interaction::ProgressCurve::get_TimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"get_TimeProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.set_TimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::ProgressCurve::set_TimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48cd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"set_TimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::ProgressCurve::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)()>(&::Oculus::Interaction::ProgressCurve::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa48cd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)(::UnityEngine::AnimationCurve*, float_t)>(&::Oculus::Interaction::ProgressCurve::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa48ce54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::ProgressCurve::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa48cf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::ProgressCurve::Copy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa48d07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"Copy", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)()>(&::Oculus::Interaction::ProgressCurve::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa48d0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ProgressCurve::*)()>(&::Oculus::Interaction::ProgressCurve::Progress)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa48d0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"Progress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.ProgressIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ProgressCurve::*)(float_t)>(&::Oculus::Interaction::ProgressCurve::ProgressIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa48d1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"ProgressIn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.ProgressTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ProgressCurve::*)()>(&::Oculus::Interaction::ProgressCurve::ProgressTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa48d15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"ProgressTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve::*)()>(&::Oculus::Interaction::ProgressCurve::End)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa48d21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"End", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::ProgressCurve::__cordl_internal_get__animationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::ProgressCurve::__cordl_internal_get__animationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationCurve;
}
constexpr void Oculus::Interaction::ProgressCurve::__cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationCurve = value;
}
constexpr float_t& Oculus::Interaction::ProgressCurve::__cordl_internal_get__animationLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationLength;
}
constexpr float_t const& Oculus::Interaction::ProgressCurve::__cordl_internal_get__animationLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationLength;
}
constexpr void Oculus::Interaction::ProgressCurve::__cordl_internal_set__animationLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationLength = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::ProgressCurve::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::ProgressCurve::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::ProgressCurve::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr float_t& Oculus::Interaction::ProgressCurve::__cordl_internal_get__animationStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStartTime;
}
constexpr float_t const& Oculus::Interaction::ProgressCurve::__cordl_internal_get__animationStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStartTime;
}
constexpr void Oculus::Interaction::ProgressCurve::__cordl_internal_set__animationStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationStartTime = value;
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::ProgressCurve::get_AnimationCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"get_AnimationCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::ProgressCurve::set_AnimationCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"set_AnimationCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::ProgressCurve::get_AnimationLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"get_AnimationLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::ProgressCurve::set_AnimationLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"set_AnimationLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_1<float_t>* Oculus::Interaction::ProgressCurve::get_TimeProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"get_TimeProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<float_t>*>(this, ___internal_method);
}
inline void Oculus::Interaction::ProgressCurve::set_TimeProvider(::System::Func_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"set_TimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ProgressCurve::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::ProgressCurve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ProgressCurve::_ctor(::UnityEngine::AnimationCurve*  animationCurve, float_t  animationLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animationCurve, animationLength);
}
inline void Oculus::Interaction::ProgressCurve::_ctor(::Oculus::Interaction::ProgressCurve*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Oculus::Interaction::ProgressCurve::Copy(::Oculus::Interaction::ProgressCurve*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"Copy", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Oculus::Interaction::ProgressCurve::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ProgressCurve::Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ProgressCurve::ProgressIn(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"ProgressIn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, time);
}
inline float_t Oculus::Interaction::ProgressCurve::ProgressTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"ProgressTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::ProgressCurve::End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve*>(),
                        {"End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ProgressCurve* Oculus::Interaction::ProgressCurve::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ProgressCurve*>());
}
inline ::Oculus::Interaction::ProgressCurve* Oculus::Interaction::ProgressCurve::New_ctor(::UnityEngine::AnimationCurve*  animationCurve, float_t  animationLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ProgressCurve*>(animationCurve, animationLength));
}
inline ::Oculus::Interaction::ProgressCurve* Oculus::Interaction::ProgressCurve::New_ctor(::Oculus::Interaction::ProgressCurve*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ProgressCurve*>(other));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::ProgressCurve::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::ProgressCurve::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ProgressCurve::ProgressCurve()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ProgressCurve___c::*)()>(&::Oculus::Interaction::ProgressCurve___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48d2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve___c.__ctor_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ProgressCurve___c::*)()>(&::Oculus::Interaction::ProgressCurve___c::__ctor_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48d2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve___c*>(),
                        {"<.ctor>b__14_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve___c.__ctor_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ProgressCurve___c::*)()>(&::Oculus::Interaction::ProgressCurve___c::__ctor_b__15_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48d2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve___c*>(),
                        {"<.ctor>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ProgressCurve___c.__ctor_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ProgressCurve___c::*)()>(&::Oculus::Interaction::ProgressCurve___c::__ctor_b__16_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48d2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve___c*>(),
                        {"<.ctor>b__16_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::ProgressCurve___c::setStaticF___9(::Oculus::Interaction::ProgressCurve___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::ProgressCurve___c*, "<>9", ::Oculus::Interaction::ProgressCurve___c*>(std::forward<::Oculus::Interaction::ProgressCurve___c*>(value));
}
inline ::Oculus::Interaction::ProgressCurve___c* Oculus::Interaction::ProgressCurve___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::ProgressCurve___c*, "<>9", ::Oculus::Interaction::ProgressCurve___c*>();
}
inline void Oculus::Interaction::ProgressCurve___c::setStaticF___9__14_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__14_0", ::Oculus::Interaction::ProgressCurve___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::ProgressCurve___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__14_0", ::Oculus::Interaction::ProgressCurve___c*>();
}
inline void Oculus::Interaction::ProgressCurve___c::setStaticF___9__15_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__15_0", ::Oculus::Interaction::ProgressCurve___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::ProgressCurve___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__15_0", ::Oculus::Interaction::ProgressCurve___c*>();
}
inline void Oculus::Interaction::ProgressCurve___c::setStaticF___9__16_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__16_0", ::Oculus::Interaction::ProgressCurve___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::ProgressCurve___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__16_0", ::Oculus::Interaction::ProgressCurve___c*>();
}
inline void Oculus::Interaction::ProgressCurve___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ProgressCurve___c::__ctor_b__14_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve___c*>(),
                        {"<.ctor>b__14_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ProgressCurve___c::__ctor_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve___c*>(),
                        {"<.ctor>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ProgressCurve___c::__ctor_b__16_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ProgressCurve___c*>(),
                        {"<.ctor>b__16_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::ProgressCurve___c* Oculus::Interaction::ProgressCurve___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ProgressCurve___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ProgressCurve___c::ProgressCurve___c()   {
}
