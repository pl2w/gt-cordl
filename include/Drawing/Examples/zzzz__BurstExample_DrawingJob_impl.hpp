#pragma once
// IWYU pragma private; include "Drawing/Examples/BurstExample_DrawingJob.hpp"
#include "Drawing/zzzz__CommandBuilder_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Drawing/Examples/zzzz__BurstExample_DrawingJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstExample_DrawingJob.Colormap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BurstExample_DrawingJob::*)(float_t)>(&::GlobalNamespace::BurstExample_DrawingJob::Colormap)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55e1b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstExample_DrawingJob>(),
                        {"Colormap", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstExample_DrawingJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstExample_DrawingJob::*)(int32_t)>(&::GlobalNamespace::BurstExample_DrawingJob::Execute)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x55e1c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstExample_DrawingJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstExample_DrawingJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstExample_DrawingJob::*)()>(&::GlobalNamespace::BurstExample_DrawingJob::Execute)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55e1d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstExample_DrawingJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color GlobalNamespace::BurstExample_DrawingJob::Colormap(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstExample_DrawingJob>(),
                        {"Colormap", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method, x);
}
inline void GlobalNamespace::BurstExample_DrawingJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstExample_DrawingJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void GlobalNamespace::BurstExample_DrawingJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstExample_DrawingJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::BurstExample_DrawingJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::BurstExample_DrawingJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "offset", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "builder", ty: "::Drawing::CommandBuilder", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstExample_DrawingJob::BurstExample_DrawingJob(::Unity::Mathematics::float2  offset, ::Drawing::CommandBuilder  builder) noexcept  {
this->offset = offset;
this->builder = builder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstExample_DrawingJob::BurstExample_DrawingJob()   {
}
