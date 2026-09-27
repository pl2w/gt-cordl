#pragma once
// IWYU pragma private; include "Unity/Collections/CollectionHelper_DummyJob.hpp"
#include "Unity/Collections/zzzz__CollectionHelper_DummyJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CollectionHelper_DummyJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollectionHelper_DummyJob::*)()>(&::GlobalNamespace::CollectionHelper_DummyJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf03c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollectionHelper_DummyJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CollectionHelper_DummyJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollectionHelper_DummyJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::CollectionHelper_DummyJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::CollectionHelper_DummyJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollectionHelper_DummyJob::CollectionHelper_DummyJob()   {
}
