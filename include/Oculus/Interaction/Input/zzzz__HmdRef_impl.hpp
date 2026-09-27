#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HmdRef.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HmdRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdRef.add_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdRef::*)(::System::Action*)>(&::Oculus::Interaction::Input::HmdRef::add_WhenUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa5136f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"add_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdRef.remove_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdRef::*)(::System::Action*)>(&::Oculus::Interaction::Input::HmdRef::remove_WhenUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa5137a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"remove_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdRef.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdRef::*)()>(&::Oculus::Interaction::Input::HmdRef::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa513850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdRef.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdRef::*)()>(&::Oculus::Interaction::Input::HmdRef::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa5138b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdRef.TryGetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HmdRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::HmdRef::TryGetRootPose)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa5138bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"TryGetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdRef.InjectAllHmdRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdRef::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::Input::HmdRef::InjectAllHmdRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa513964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"InjectAllHmdRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdRef.InjectHmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdRef::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::Input::HmdRef::InjectHmd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa513968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"InjectHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdRef::*)()>(&::Oculus::Interaction::Input::HmdRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa513a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::HmdRef::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::HmdRef::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::Input::HmdRef::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::Input::HmdRef::__cordl_internal_get_Hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hmd;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::Input::HmdRef::__cordl_internal_get_Hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hmd;
}
constexpr void Oculus::Interaction::Input::HmdRef::__cordl_internal_set_Hmd(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hmd = value;
}
inline void Oculus::Interaction::Input::HmdRef::add_WhenUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"add_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::HmdRef::remove_WhenUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"remove_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::HmdRef::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HmdRef::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HmdRef::TryGetRootPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"TryGetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::Input::HmdRef::InjectAllHmdRef(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"InjectAllHmdRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline void Oculus::Interaction::Input::HmdRef::InjectHmd(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {"InjectHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline void Oculus::Interaction::Input::HmdRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HmdRef* Oculus::Interaction::Input::HmdRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HmdRef*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IHmd"
constexpr  Oculus::Interaction::Input::HmdRef::operator ::Oculus::Interaction::Input::IHmd*() noexcept {
return static_cast<::Oculus::Interaction::Input::IHmd*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IHmd"
constexpr ::Oculus::Interaction::Input::IHmd* Oculus::Interaction::Input::HmdRef::i___Oculus__Interaction__Input__IHmd() noexcept {
return static_cast<::Oculus::Interaction::Input::IHmd*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HmdRef::HmdRef()   {
}
