#pragma once
// IWYU pragma private; include "Oculus/Interaction/RandomSampleConsensus_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__RandomSampleConsensus_1_def.hpp"
#include "Oculus/Interaction/zzzz__RandomSampleConsensus_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TModel>
constexpr ::System::Object*& Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_get__modelSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modelSet;
}
template<typename TModel>
constexpr ::System::Object* const& Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_get__modelSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modelSet;
}
template<typename TModel>
constexpr void Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_set__modelSet(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modelSet = value;
}
template<typename TModel>
constexpr int32_t& Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_get__exclusionZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exclusionZone;
}
template<typename TModel>
constexpr int32_t const& Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_get__exclusionZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exclusionZone;
}
template<typename TModel>
constexpr void Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_set__exclusionZone(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exclusionZone = value;
}
template<typename TModel>
constexpr int32_t& Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_get__maxDataPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDataPoints;
}
template<typename TModel>
constexpr int32_t const& Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_get__maxDataPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDataPoints;
}
template<typename TModel>
constexpr void Oculus::Interaction::RandomSampleConsensus_1<TModel>::__cordl_internal_set__maxDataPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDataPoints = value;
}
template<typename TModel>
inline void Oculus::Interaction::RandomSampleConsensus_1<TModel>::_ctor(int32_t  maxDataPoints, int32_t  exclusionZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1<TModel>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxDataPoints, exclusionZone);
}
template<typename TModel>
inline TModel Oculus::Interaction::RandomSampleConsensus_1<TModel>::FindOptimalModel(::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*  modelGenerator, ::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*  modelScorer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1<TModel>*>(),
                        {"FindOptimalModel", {}, {::i2c::type_of<::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*>(), ::i2c::type_of<::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TModel>(this, ___internal_method, modelGenerator, modelScorer);
}
template<typename TModel>
inline TModel Oculus::Interaction::RandomSampleConsensus_1<TModel>::FindOptimalModel(::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*  modelGenerator, ::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*  modelScorer, int32_t  dataPointsCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1<TModel>*>(),
                        {"FindOptimalModel", {}, {::i2c::type_of<::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*>(), ::i2c::type_of<::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TModel>(this, ___internal_method, modelGenerator, modelScorer, dataPointsCount);
}
template<typename TModel>
inline ::Oculus::Interaction::RandomSampleConsensus_1<TModel>* Oculus::Interaction::RandomSampleConsensus_1<TModel>::New_ctor(int32_t  maxDataPoints, int32_t  exclusionZone)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RandomSampleConsensus_1<TModel>*>(maxDataPoints, exclusionZone));
}
// Ctor Parameters []
template<typename TModel>
constexpr ::Oculus::Interaction::RandomSampleConsensus_1<TModel>::RandomSampleConsensus_1()   {
}
template<typename TModel>
inline void Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TModel>
inline float_t Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>::Invoke(TModel  model, ::System::Object*  modelSet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, model, modelSet);
}
template<typename TModel>
inline ::System::IAsyncResult* Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>::BeginInvoke(TModel  model, ::System::Object*  modelSet, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, model, modelSet, callback, object);
}
template<typename TModel>
inline float_t Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
template<typename TModel>
inline ::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>* Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*>(object, method));
}
// Ctor Parameters []
template<typename TModel>
constexpr ::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>::RandomSampleConsensus_1_EvaluateModelScore()   {
}
template<typename TModel>
inline void Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TModel>
inline TModel Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>::Invoke(int32_t  index1, int32_t  index2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<TModel>(this, ___internal_method, index1, index2);
}
template<typename TModel>
inline ::System::IAsyncResult* Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>::BeginInvoke(int32_t  index1, int32_t  index2, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, index1, index2, callback, object);
}
template<typename TModel>
inline TModel Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<TModel>(this, ___internal_method, result);
}
template<typename TModel>
inline ::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>* Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*>(object, method));
}
// Ctor Parameters []
template<typename TModel>
constexpr ::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>::RandomSampleConsensus_1_GenerateModel()   {
}
