#pragma once
// IWYU pragma private; include "Oculus/Interaction/FingerFeatureStateProviderRef.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__FingerFeatureStateProviderRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFingerFeatureStateProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.get_FingerFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* (::Oculus::Interaction::FingerFeatureStateProviderRef::*)()>(&::Oculus::Interaction::FingerFeatureStateProviderRef::get_FingerFeatureStateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa479510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"get_FingerFeatureStateProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.set_FingerFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*)>(&::Oculus::Interaction::FingerFeatureStateProviderRef::set_FingerFeatureStateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa479518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"set_FingerFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerFeatureStateProviderRef::*)()>(&::Oculus::Interaction::FingerFeatureStateProviderRef::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa479520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerFeatureStateProviderRef::*)()>(&::Oculus::Interaction::FingerFeatureStateProviderRef::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa479578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FingerFeatureStateProviderRef::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ::by_ref<::StringW>)>(&::Oculus::Interaction::FingerFeatureStateProviderRef::GetCurrentState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa47957c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.IsStateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FingerFeatureStateProviderRef::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, ::StringW)>(&::Oculus::Interaction::FingerFeatureStateProviderRef::IsStateActive)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa47963c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"IsStateActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.GetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Oculus::Interaction::FingerFeatureStateProviderRef::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature)>(&::Oculus::Interaction::FingerFeatureStateProviderRef::GetFeatureValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa479710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"GetFeatureValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.InjectAllFingerFeatureStateProviderRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*)>(&::Oculus::Interaction::FingerFeatureStateProviderRef::InjectAllFingerFeatureStateProviderRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4797cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"InjectAllFingerFeatureStateProviderRef", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef.InjectFingerFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerFeatureStateProviderRef::*)(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*)>(&::Oculus::Interaction::FingerFeatureStateProviderRef::InjectFingerFeatureStateProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4797d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"InjectFingerFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerFeatureStateProviderRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerFeatureStateProviderRef::*)()>(&::Oculus::Interaction::FingerFeatureStateProviderRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4798a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::FingerFeatureStateProviderRef::__cordl_internal_get__fingerFeatureStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureStateProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::FingerFeatureStateProviderRef::__cordl_internal_get__fingerFeatureStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureStateProvider;
}
constexpr void Oculus::Interaction::FingerFeatureStateProviderRef::__cordl_internal_set__fingerFeatureStateProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerFeatureStateProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*& Oculus::Interaction::FingerFeatureStateProviderRef::__cordl_internal_get__FingerFeatureStateProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FingerFeatureStateProvider_k__BackingField;
}
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* const& Oculus::Interaction::FingerFeatureStateProviderRef::__cordl_internal_get__FingerFeatureStateProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FingerFeatureStateProvider_k__BackingField;
}
constexpr void Oculus::Interaction::FingerFeatureStateProviderRef::__cordl_internal_set__FingerFeatureStateProvider_k__BackingField(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FingerFeatureStateProvider_k__BackingField = value;
}
inline ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* Oculus::Interaction::FingerFeatureStateProviderRef::get_FingerFeatureStateProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"get_FingerFeatureStateProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerFeatureStateProviderRef::set_FingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"set_FingerFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::FingerFeatureStateProviderRef::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerFeatureStateProviderRef::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::FingerFeatureStateProviderRef::GetCurrentState(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature, ::by_ref<::StringW>  currentState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, fingerFeature, currentState);
}
inline bool Oculus::Interaction::FingerFeatureStateProviderRef::IsStateActive(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"IsStateActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, feature, mode, stateId);
}
inline ::System::Nullable_1<float_t> Oculus::Interaction::FingerFeatureStateProviderRef::GetFeatureValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"GetFeatureValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method, finger, fingerFeature);
}
inline void Oculus::Interaction::FingerFeatureStateProviderRef::InjectAllFingerFeatureStateProviderRef(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureStateProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"InjectAllFingerFeatureStateProviderRef", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerFeatureStateProvider);
}
inline void Oculus::Interaction::FingerFeatureStateProviderRef::InjectFingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureStateProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {"InjectFingerFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerFeatureStateProvider);
}
inline void Oculus::Interaction::FingerFeatureStateProviderRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerFeatureStateProviderRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::FingerFeatureStateProviderRef* Oculus::Interaction::FingerFeatureStateProviderRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::FingerFeatureStateProviderRef*>());
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider"
constexpr  Oculus::Interaction::FingerFeatureStateProviderRef::operator ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider"
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* Oculus::Interaction::FingerFeatureStateProviderRef::i___Oculus__Interaction__PoseDetection__IFingerFeatureStateProvider() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::FingerFeatureStateProviderRef::FingerFeatureStateProviderRef()   {
}
