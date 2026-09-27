#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureStateCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateCollection_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateProvider_2_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateCollection_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformJointData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection.RegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformJointData*, ::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::RegisterConfig)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa4a6b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformJointData*>(), ::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection.UnRegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::UnRegisterConfig)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4a6e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection.GetStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::GetStateProvider)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4a6e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"GetStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection.SetConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::*)(int32_t, ::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::SetConfig)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa4a6ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"SetConfig", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection.GetConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::TransformConfig* (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::*)(int32_t)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::GetConfig)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4a6f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"GetConfig", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection.UpdateFeatureStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::*)(int32_t, bool)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::UpdateFeatureStates)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa4a6fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"UpdateFeatureStates", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4a7164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>*& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::__cordl_internal_get__idToTransformStateInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idToTransformStateInfo;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>* const& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::__cordl_internal_get__idToTransformStateInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idToTransformStateInfo;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::__cordl_internal_set__idToTransformStateInfo(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idToTransformStateInfo = value;
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig, ::Oculus::Interaction::PoseDetection::TransformJointData*  jointData, ::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformJointData*>(), ::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig, jointData, timeProvider);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig);
}
inline ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::GetStateProvider(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"GetStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>(this, ___internal_method, transformConfig);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::SetConfig(int32_t  configId, ::Oculus::Interaction::PoseDetection::TransformConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"SetConfig", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configId, config);
}
inline ::Oculus::Interaction::PoseDetection::TransformConfig* Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::GetConfig(int32_t  configId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"GetConfig", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::TransformConfig*>(this, ___internal_method, configId);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::UpdateFeatureStates(int32_t  lastUpdatedFrameId, bool  disableProactiveEvaluation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {"UpdateFeatureStates", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastUpdatedFrameId, disableProactiveEvaluation);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection* Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::TransformFeatureStateCollection()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a6dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0._RegisterConfig_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::*)(::Oculus::Interaction::PoseDetection::TransformFeature)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::_RegisterConfig_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4a7264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0*>(),
                        {"<RegisterConfig>b__0", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::PoseDetection::TransformJointData*& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::__cordl_internal_get_jointData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointData;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformJointData* const& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::__cordl_internal_get_jointData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointData;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::__cordl_internal_set_jointData(::Oculus::Interaction::PoseDetection::TransformJointData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jointData = value;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformConfig*& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::__cordl_internal_get_transformConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformConfig;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformConfig* const& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::__cordl_internal_get_transformConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformConfig;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::__cordl_internal_set_transformConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformConfig = value;
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::_RegisterConfig_b__0(::Oculus::Interaction::PoseDetection::TransformFeature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0*>(),
                        {"<RegisterConfig>b__0", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method, feature);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0* Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0::TransformFeatureStateCollection___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a7254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c._RegisterConfig_b__2_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::*)(::Oculus::Interaction::PoseDetection::TransformFeature)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::_RegisterConfig_b__2_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a725c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>(),
                        {"<RegisterConfig>b__2_1", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::setStaticF___9(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*, "<>9", ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>(std::forward<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>(value));
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c* Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*, "<>9", ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>();
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::setStaticF___9__2_1(::System::Func_2<::Oculus::Interaction::PoseDetection::TransformFeature,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::PoseDetection::TransformFeature,int32_t>*, "<>9__2_1", ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>(std::forward<::System::Func_2<::Oculus::Interaction::PoseDetection::TransformFeature,int32_t>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::PoseDetection::TransformFeature,int32_t>* Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::getStaticF___9__2_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::PoseDetection::TransformFeature,int32_t>*, "<>9__2_1", ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>();
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::_RegisterConfig_b__2_1(::Oculus::Interaction::PoseDetection::TransformFeature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>(),
                        {"<RegisterConfig>b__2_1", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c* Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c::TransformFeatureStateCollection___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4a6dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::PoseDetection::TransformConfig*& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::__cordl_internal_get_Config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformConfig* const& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::__cordl_internal_get_Config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::__cordl_internal_set_Config(::Oculus::Interaction::PoseDetection::TransformConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Config = value;
}
constexpr ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::__cordl_internal_get_StateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateProvider;
}
constexpr ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* const& Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::__cordl_internal_get_StateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateProvider;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::__cordl_internal_set_StateProvider(::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StateProvider = value;
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::_ctor(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig, ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*  stateProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig, stateProvider);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo* Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::New_ctor(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig, ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*  stateProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>(transformConfig, stateProvider));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo::TransformFeatureStateCollection_TransformStateInfo()   {
}
