#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/Float3TweenJob.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__Float3TweenJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__ITweenJob_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob.get_jobData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3> (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::get_jobData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4ddcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"get_jobData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob.set_jobData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::set_jobData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ddcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"set_jobData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::Execute)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb4ddcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::Lerp)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb4dde68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"Lerp", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob.IsNearlyEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::IsNearlyEqual)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4ddee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"IsNearlyEqual", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::get_jobData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"get_jobData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3>>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"set_jobData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::Lerp(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"Lerp", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, from, to, t);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::IsNearlyEqual(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob>(),
                        {"IsNearlyEqual", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, from, to);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float3>"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float3>*()  {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float3>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float3>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Jobs__ITweenJob_1___Unity__Mathematics__float3_()  {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_jobData_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::Float3TweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3>  _jobData_k__BackingField) noexcept  {
this->_jobData_k__BackingField = _jobData_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float3TweenJob::Float3TweenJob()   {
}
