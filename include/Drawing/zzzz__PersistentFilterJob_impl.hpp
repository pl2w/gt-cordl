#pragma once
// IWYU pragma private; include "Drawing/PersistentFilterJob.hpp"
#include "Drawing/zzzz__PersistentFilterJob_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Drawing::PersistentFilterJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::PersistentFilterJob::*)()>(&::Drawing::PersistentFilterJob::Execute)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x55dab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::PersistentFilterJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::PersistentFilterJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::PersistentFilterJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Drawing::PersistentFilterJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Drawing::PersistentFilterJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::PersistentFilterJob::PersistentFilterJob(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, float_t  time) noexcept  {
this->buffer = buffer;
this->time = time;
}
// Ctor Parameters []
constexpr ::Drawing::PersistentFilterJob::PersistentFilterJob()   {
}
