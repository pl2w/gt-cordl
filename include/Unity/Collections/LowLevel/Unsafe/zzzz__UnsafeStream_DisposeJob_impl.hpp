#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStream_DisposeJob.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_DisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnsafeStream_DisposeJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnsafeStream_DisposeJob::*)()>(&::GlobalNamespace::UnsafeStream_DisposeJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf07ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeStream_DisposeJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnsafeStream_DisposeJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeStream_DisposeJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::UnsafeStream_DisposeJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::UnsafeStream_DisposeJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnsafeStream_DisposeJob::UnsafeStream_DisposeJob(::Unity::Collections::LowLevel::Unsafe::UnsafeStream  Container) noexcept  {
this->Container = Container;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnsafeStream_DisposeJob::UnsafeStream_DisposeJob()   {
}
