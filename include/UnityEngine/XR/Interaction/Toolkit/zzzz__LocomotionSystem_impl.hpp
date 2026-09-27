#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/LocomotionSystem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionSystem_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__RequestResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRRig_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.get_timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb419844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_timeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.set_timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb41984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"set_timeout", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.get_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::XR::CoreUtils::XROrigin> (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb419854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.set_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::Unity::XR::CoreUtils::XROrigin*)>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb41985c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"set_xrOrigin", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.get_busy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_busy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb419864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_busy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.get_xrRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig> (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4198c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_xrRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.set_xrRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::XRRig*)>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrRig)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4198cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"set_xrRig", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.get_Busy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_Busy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4198d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_Busy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Awake)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb4198d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb419a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.RequestExclusiveOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::RequestResult (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::RequestExclusiveOperation)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb419b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"RequestExclusiveOperation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.ResetExclusivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::ResetExclusivity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb419b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"ResetExclusivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem.FinishExclusiveOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::RequestResult (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::FinishExclusiveOperation)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb419c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"FinishExclusiveOperation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb419d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>& UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_get_m_CurrentExclusiveProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentExclusiveProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider> const& UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_get_m_CurrentExclusiveProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentExclusiveProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_set_m_CurrentExclusiveProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentExclusiveProvider = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_get_m_TimeMadeExclusive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeMadeExclusive;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_get_m_TimeMadeExclusive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeMadeExclusive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_set_m_TimeMadeExclusive(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeMadeExclusive = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_get_m_Timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Timeout;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_get_m_Timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Timeout;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_set_m_Timeout(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Timeout = value;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_get_m_XROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_get_m_XROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::__cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XROrigin = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_timeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_timeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_timeout(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"set_timeout", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::XR::CoreUtils::XROrigin>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrOrigin(::Unity::XR::CoreUtils::XROrigin*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"set_xrOrigin", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_busy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_busy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig> UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_xrRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrRig(::UnityEngine::XR::Interaction::Toolkit::XRRig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"set_xrRig", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_Busy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"get_Busy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::RequestResult UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::RequestExclusiveOperation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"RequestExclusiveOperation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::RequestResult>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::ResetExclusivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"ResetExclusivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::RequestResult UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::FinishExclusiveOperation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {"FinishExclusiveOperation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::RequestResult>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::LocomotionSystem()   {
}
