#pragma once
// IWYU pragma private; include "Oculus/Interaction/JointDeltaProviderRef.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__JointDeltaProviderRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IJointDeltaProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointDeltaConfig_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.get_JointDeltaProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::IJointDeltaProvider* (::Oculus::Interaction::JointDeltaProviderRef::*)()>(&::Oculus::Interaction::JointDeltaProviderRef::get_JointDeltaProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4798a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"get_JointDeltaProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.set_JointDeltaProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JointDeltaProviderRef::*)(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*)>(&::Oculus::Interaction::JointDeltaProviderRef::set_JointDeltaProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4798b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"set_JointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JointDeltaProviderRef::*)()>(&::Oculus::Interaction::JointDeltaProviderRef::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4798b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JointDeltaProviderRef::*)()>(&::Oculus::Interaction::JointDeltaProviderRef::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa479910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.GetPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::JointDeltaProviderRef::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::JointDeltaProviderRef::GetPositionDelta)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa479914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"GetPositionDelta", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.GetRotationDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::JointDeltaProviderRef::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Quaternion>)>(&::Oculus::Interaction::JointDeltaProviderRef::GetRotationDelta)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4799cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"GetRotationDelta", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.RegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JointDeltaProviderRef::*)(::Oculus::Interaction::PoseDetection::JointDeltaConfig*)>(&::Oculus::Interaction::JointDeltaProviderRef::RegisterConfig)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa479a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.UnRegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JointDeltaProviderRef::*)(::Oculus::Interaction::PoseDetection::JointDeltaConfig*)>(&::Oculus::Interaction::JointDeltaProviderRef::UnRegisterConfig)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa479b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.InjectAllJointDeltaProviderRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JointDeltaProviderRef::*)(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*)>(&::Oculus::Interaction::JointDeltaProviderRef::InjectAllJointDeltaProviderRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa479be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"InjectAllJointDeltaProviderRef", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef.InjectJointDeltaProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JointDeltaProviderRef::*)(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*)>(&::Oculus::Interaction::JointDeltaProviderRef::InjectJointDeltaProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa479be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"InjectJointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JointDeltaProviderRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JointDeltaProviderRef::*)()>(&::Oculus::Interaction::JointDeltaProviderRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa479cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::JointDeltaProviderRef::__cordl_internal_get__jointDeltaProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::JointDeltaProviderRef::__cordl_internal_get__jointDeltaProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaProvider;
}
constexpr void Oculus::Interaction::JointDeltaProviderRef::__cordl_internal_set__jointDeltaProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointDeltaProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*& Oculus::Interaction::JointDeltaProviderRef::__cordl_internal_get__JointDeltaProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JointDeltaProvider_k__BackingField;
}
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* const& Oculus::Interaction::JointDeltaProviderRef::__cordl_internal_get__JointDeltaProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JointDeltaProvider_k__BackingField;
}
constexpr void Oculus::Interaction::JointDeltaProviderRef::__cordl_internal_set__JointDeltaProvider_k__BackingField(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JointDeltaProvider_k__BackingField = value;
}
inline ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* Oculus::Interaction::JointDeltaProviderRef::get_JointDeltaProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"get_JointDeltaProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(this, ___internal_method);
}
inline void Oculus::Interaction::JointDeltaProviderRef::set_JointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"set_JointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::JointDeltaProviderRef::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::JointDeltaProviderRef::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::JointDeltaProviderRef::GetPositionDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Vector3>  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"GetPositionDelta", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, delta);
}
inline bool Oculus::Interaction::JointDeltaProviderRef::GetRotationDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Quaternion>  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"GetRotationDelta", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, delta);
}
inline void Oculus::Interaction::JointDeltaProviderRef::RegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void Oculus::Interaction::JointDeltaProviderRef::UnRegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void Oculus::Interaction::JointDeltaProviderRef::InjectAllJointDeltaProviderRef(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"InjectAllJointDeltaProviderRef", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointDeltaProvider);
}
inline void Oculus::Interaction::JointDeltaProviderRef::InjectJointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {"InjectJointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointDeltaProvider);
}
inline void Oculus::Interaction::JointDeltaProviderRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JointDeltaProviderRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::JointDeltaProviderRef* Oculus::Interaction::JointDeltaProviderRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::JointDeltaProviderRef*>());
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IJointDeltaProvider"
constexpr  Oculus::Interaction::JointDeltaProviderRef::operator ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::IJointDeltaProvider"
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* Oculus::Interaction::JointDeltaProviderRef::i___Oculus__Interaction__PoseDetection__IJointDeltaProvider() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::JointDeltaProviderRef::JointDeltaProviderRef()   {
}
