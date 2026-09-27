#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformRecognizerActiveState.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformRecognizerActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ITransformFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureConfigList_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a97bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a97c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.get_FeatureConfigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::get_FeatureConfigs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4a97cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"get_FeatureConfigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.get_TransformConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::TransformConfig* (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::get_TransformConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a97e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"get_TransformConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4a97ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::Start)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4a988c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::OnEnable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4a98e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4a9d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.InitStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InitStateProvider)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xa4a99a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InitStateProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.GetFeatureVectorAndWristPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)(::Oculus::Interaction::PoseDetection::TransformFeature, bool, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>)>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::GetFeatureVectorAndWristPos)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4a9dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"GetFeatureVectorAndWristPos", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::get_Active)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0xa4a9ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.InjectAllTransformRecognizerActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*, ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*, ::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectAllTransformRecognizerActiveState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4aa244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectAllTransformRecognizerActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4aa29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.InjectTransformFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*)>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectTransformFeatureStateProvider)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4aa36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectTransformFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.InjectTransformFeatureList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*)>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectTransformFeatureList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4aa438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectTransformFeatureList", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState.InjectTransformConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectTransformConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4aa440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectTransformConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4aa448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__transformFeatureStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureStateProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__transformFeatureStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureStateProvider;
}
constexpr void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_set__transformFeatureStateProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformFeatureStateProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get_TransformFeatureStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformFeatureStateProvider;
}
constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* const& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get_TransformFeatureStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformFeatureStateProvider;
}
constexpr void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_set_TransformFeatureStateProvider(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransformFeatureStateProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__transformFeatureConfigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureConfigs;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList* const& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__transformFeatureConfigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureConfigs;
}
constexpr void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_set__transformFeatureConfigs(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformFeatureConfigs = value;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformConfig*& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__transformConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformConfig;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformConfig* const& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__transformConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformConfig;
}
constexpr void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_set__transformConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformConfig = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::get_FeatureConfigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"get_FeatureConfigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformConfig* Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::get_TransformConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"get_TransformConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::TransformConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InitStateProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InitStateProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformFeature  feature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"GetFeatureVectorAndWristPos", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, isHandVector, featureVec, wristPos);
}
inline bool Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectAllTransformRecognizerActiveState(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  transformFeatureStateProvider, ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*  transformFeatureList, ::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectAllTransformRecognizerActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, transformFeatureStateProvider, transformFeatureList, transformConfig);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectTransformFeatureStateProvider(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  transformFeatureStateProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectTransformFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformFeatureStateProvider);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectTransformFeatureList(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*  transformFeatureList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectTransformFeatureList", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformFeatureList);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::InjectTransformConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {"InjectTransformConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig);
}
inline void Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState* Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState::TransformRecognizerActiveState()   {
}
