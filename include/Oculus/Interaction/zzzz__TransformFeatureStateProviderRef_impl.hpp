#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformFeatureStateProviderRef.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__TransformFeatureStateProviderRef_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ITransformFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.get_TransformFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* (::Oculus::Interaction::TransformFeatureStateProviderRef::*)()>(&::Oculus::Interaction::TransformFeatureStateProviderRef::get_TransformFeatureStateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa479cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"get_TransformFeatureStateProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.set_TransformFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*)>(&::Oculus::Interaction::TransformFeatureStateProviderRef::set_TransformFeatureStateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa479cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"set_TransformFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)()>(&::Oculus::Interaction::TransformFeatureStateProviderRef::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa479ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)()>(&::Oculus::Interaction::TransformFeatureStateProviderRef::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa479d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.IsStateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TransformFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, ::StringW)>(&::Oculus::Interaction::TransformFeatureStateProviderRef::IsStateActive)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa479d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"IsStateActive", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TransformFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, ::by_ref<::StringW>)>(&::Oculus::Interaction::TransformFeatureStateProviderRef::GetCurrentState)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa479df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.RegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::TransformFeatureStateProviderRef::RegisterConfig)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa479ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.UnRegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::TransformFeatureStateProviderRef::UnRegisterConfig)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa479f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.GetFeatureVectorAndWristPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, bool, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>)>(&::Oculus::Interaction::TransformFeatureStateProviderRef::GetFeatureVectorAndWristPos)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa47a014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"GetFeatureVectorAndWristPos", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.InjectAllTransformFeatureStateProviderRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*)>(&::Oculus::Interaction::TransformFeatureStateProviderRef::InjectAllTransformFeatureStateProviderRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"InjectAllTransformFeatureStateProviderRef", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef.InjectTransformFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*)>(&::Oculus::Interaction::TransformFeatureStateProviderRef::InjectTransformFeatureStateProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa47a0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"InjectTransformFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformFeatureStateProviderRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformFeatureStateProviderRef::*)()>(&::Oculus::Interaction::TransformFeatureStateProviderRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47a1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::TransformFeatureStateProviderRef::__cordl_internal_get__transformFeatureStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureStateProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::TransformFeatureStateProviderRef::__cordl_internal_get__transformFeatureStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureStateProvider;
}
constexpr void Oculus::Interaction::TransformFeatureStateProviderRef::__cordl_internal_set__transformFeatureStateProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformFeatureStateProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*& Oculus::Interaction::TransformFeatureStateProviderRef::__cordl_internal_get__TransformFeatureStateProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransformFeatureStateProvider_k__BackingField;
}
constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* const& Oculus::Interaction::TransformFeatureStateProviderRef::__cordl_internal_get__TransformFeatureStateProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransformFeatureStateProvider_k__BackingField;
}
constexpr void Oculus::Interaction::TransformFeatureStateProviderRef::__cordl_internal_set__TransformFeatureStateProvider_k__BackingField(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TransformFeatureStateProvider_k__BackingField = value;
}
inline ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* Oculus::Interaction::TransformFeatureStateProviderRef::get_TransformFeatureStateProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"get_TransformFeatureStateProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(this, ___internal_method);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::set_TransformFeatureStateProvider(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"set_TransformFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::TransformFeatureStateProviderRef::IsStateActive(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"IsStateActive", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config, feature, mode, stateId);
}
inline bool Oculus::Interaction::TransformFeatureStateProviderRef::GetCurrentState(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, ::by_ref<::StringW>  currentState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config, transformFeature, currentState);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"GetFeatureVectorAndWristPos", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config, transformFeature, isHandVector, featureVec, wristPos);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::InjectAllTransformFeatureStateProviderRef(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  transformFeatureStateProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"InjectAllTransformFeatureStateProviderRef", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformFeatureStateProvider);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::InjectTransformFeatureStateProvider(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  transformFeatureStateProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {"InjectTransformFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformFeatureStateProvider);
}
inline void Oculus::Interaction::TransformFeatureStateProviderRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformFeatureStateProviderRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TransformFeatureStateProviderRef* Oculus::Interaction::TransformFeatureStateProviderRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TransformFeatureStateProviderRef*>());
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider"
constexpr  Oculus::Interaction::TransformFeatureStateProviderRef::operator ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider"
constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* Oculus::Interaction::TransformFeatureStateProviderRef::i___Oculus__Interaction__PoseDetection__ITransformFeatureStateProvider() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformFeatureStateProviderRef::TransformFeatureStateProviderRef()   {
}
