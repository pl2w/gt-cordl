#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/HmdOffset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__HmdOffset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)()>(&::Oculus::Interaction::PoseDetection::HmdOffset::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa49e114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)()>(&::Oculus::Interaction::PoseDetection::HmdOffset::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa49e17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)()>(&::Oculus::Interaction::PoseDetection::HmdOffset::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa49e1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)()>(&::Oculus::Interaction::PoseDetection::HmdOffset::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa49e298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.HandleHmdUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)()>(&::Oculus::Interaction::PoseDetection::HmdOffset::HandleHmdUpdated)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0xa49e388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.InjectAllHmdOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::PoseDetection::HmdOffset::InjectAllHmdOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa49e834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectAllHmdOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.InjectHmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::PoseDetection::HmdOffset::InjectHmd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa49e838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.InjectOptionalOffsetTranslation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalOffsetTranslation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa49e908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalOffsetTranslation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.InjectOptionalOffsetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalOffsetRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa49e914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalOffsetRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.InjectOptionalDisablePitchFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)(bool)>(&::Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalDisablePitchFromSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalDisablePitchFromSource", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.InjectOptionalDisableYawFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)(bool)>(&::Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalDisableYawFromSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49e928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalDisableYawFromSource", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset.InjectOptionalDisableRollFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)(bool)>(&::Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalDisableRollFromSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalDisableRollFromSource", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::HmdOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::HmdOffset::*)()>(&::Oculus::Interaction::PoseDetection::HmdOffset::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa49e938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get_Hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hmd;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get_Hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hmd;
}
constexpr void Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_set_Hmd(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hmd = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__offsetTranslation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetTranslation;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__offsetTranslation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetTranslation;
}
constexpr void Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_set__offsetTranslation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offsetTranslation = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__offsetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetRotation;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__offsetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetRotation;
}
constexpr void Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_set__offsetRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offsetRotation = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__disablePitchFromSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disablePitchFromSource;
}
constexpr bool const& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__disablePitchFromSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disablePitchFromSource;
}
constexpr void Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_set__disablePitchFromSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disablePitchFromSource = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__disableYawFromSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableYawFromSource;
}
constexpr bool const& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__disableYawFromSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableYawFromSource;
}
constexpr void Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_set__disableYawFromSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableYawFromSource = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__disableRollFromSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableRollFromSource;
}
constexpr bool const& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__disableRollFromSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableRollFromSource;
}
constexpr void Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_set__disableRollFromSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableRollFromSource = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PoseDetection::HmdOffset::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::HandleHmdUpdated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::InjectAllHmdOffset(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectAllHmdOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::InjectHmd(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalOffsetTranslation(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalOffsetTranslation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalOffsetRotation(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalOffsetRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalDisablePitchFromSource(bool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalDisablePitchFromSource", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalDisableYawFromSource(bool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalDisableYawFromSource", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::InjectOptionalDisableRollFromSource(bool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {"InjectOptionalDisableRollFromSource", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void Oculus::Interaction::PoseDetection::HmdOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::HmdOffset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::HmdOffset* Oculus::Interaction::PoseDetection::HmdOffset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::HmdOffset*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::HmdOffset::HmdOffset()   {
}
