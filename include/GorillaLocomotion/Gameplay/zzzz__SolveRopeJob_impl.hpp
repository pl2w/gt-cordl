#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/SolveRopeJob.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__BurstRopeNode_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__SolveRopeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SolveRopeJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SolveRopeJob::*)()>(&::GorillaLocomotion::Gameplay::SolveRopeJob::Execute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ce9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SolveRopeJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SolveRopeJob.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SolveRopeJob::*)()>(&::GorillaLocomotion::Gameplay::SolveRopeJob::Simulate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ce9150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SolveRopeJob>(),
                        {"Simulate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SolveRopeJob.ApplyConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SolveRopeJob::*)()>(&::GorillaLocomotion::Gameplay::SolveRopeJob::ApplyConstraint)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5ce91d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SolveRopeJob>(),
                        {"ApplyConstraint", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaLocomotion::Gameplay::SolveRopeJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SolveRopeJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::SolveRopeJob::Simulate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SolveRopeJob>(),
                        {"Simulate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::SolveRopeJob::ApplyConstraint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SolveRopeJob>(),
                        {"ApplyConstraint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GorillaLocomotion::Gameplay::SolveRopeJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GorillaLocomotion::Gameplay::SolveRopeJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "fixedDeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nodes", ty: "::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gravity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rootPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nodeDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaLocomotion::Gameplay::SolveRopeJob::SolveRopeJob(float_t  fixedDeltaTime, ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>  nodes, ::UnityEngine::Vector3  gravity, ::UnityEngine::Vector3  rootPos, float_t  nodeDistance) noexcept  {
this->fixedDeltaTime = fixedDeltaTime;
this->nodes = nodes;
this->gravity = gravity;
this->rootPos = rootPos;
this->nodeDistance = nodeDistance;
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::SolveRopeJob::SolveRopeJob()   {
}
