#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureConfigBuilder.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBuilder_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBuilder_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FeatureConfigBuilder::*)()>(&::Oculus::Interaction::PoseDetection::FeatureConfigBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa499124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::FeatureConfigBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder* Oculus::Interaction::PoseDetection::FeatureConfigBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FeatureConfigBuilder*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder::FeatureConfigBuilder()   {
}
template<typename TBuildState>
constexpr ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*& Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>::__cordl_internal_get__buildStateFn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buildStateFn;
}
template<typename TBuildState>
constexpr ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>* const& Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>::__cordl_internal_get__buildStateFn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buildStateFn;
}
template<typename TBuildState>
constexpr void Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>::__cordl_internal_set__buildStateFn(::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buildStateFn = value;
}
template<typename TBuildState>
inline void Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>::_ctor(::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*  buildStateFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buildStateFn);
}
template<typename TBuildState>
inline TBuildState Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>::get_Is()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>*>(),
                        {"get_Is", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TBuildState>(this, ___internal_method);
}
template<typename TBuildState>
inline TBuildState Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>::get_IsNot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>*>(),
                        {"get_IsNot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TBuildState>(this, ___internal_method);
}
template<typename TBuildState>
inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>* Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>::New_ctor(::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*  buildStateFn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>*>(buildStateFn));
}
// Ctor Parameters []
template<typename TBuildState>
constexpr ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>::FeatureConfigBuilder_BuildCondition_1()   {
}
template<typename TBuildState>
inline void Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TBuildState>
inline TBuildState Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>::Invoke(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<TBuildState>(this, ___internal_method, mode);
}
template<typename TBuildState>
inline ::System::IAsyncResult* Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>::BeginInvoke(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, mode, callback, object);
}
template<typename TBuildState>
inline TBuildState Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<TBuildState>(this, ___internal_method, result);
}
template<typename TBuildState>
inline ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>* Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*>(object, method));
}
// Ctor Parameters []
template<typename TBuildState>
constexpr ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate()   {
}
