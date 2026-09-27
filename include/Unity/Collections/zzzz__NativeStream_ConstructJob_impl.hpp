#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStream_ConstructJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeStream_impl.hpp"
#include "Unity/Collections/zzzz__NativeStream_ConstructJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeStream_ConstructJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeStream_ConstructJob::*)()>(&::GlobalNamespace::NativeStream_ConstructJob::Execute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf0700c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeStream_ConstructJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NativeStream_ConstructJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeStream_ConstructJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::NativeStream_ConstructJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::NativeStream_ConstructJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::NativeStream", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeStream_ConstructJob::NativeStream_ConstructJob(::Unity::Collections::NativeStream  Container, ::Unity::Collections::NativeArray_1<int32_t>  Length) noexcept  {
this->Container = Container;
this->Length = Length;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeStream_ConstructJob::NativeStream_ConstructJob()   {
}
