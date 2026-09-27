#pragma once
// IWYU pragma private; include "Modio/Extensions/TaskExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Extensions/zzzz__TaskExtensions_def.hpp"
#include "Modio/Extensions/zzzz__TaskExtensions__ForgetTaskSafely_d__0_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::Modio::Extensions::TaskExtensions.ForgetTaskSafely
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::Modio::Extensions::TaskExtensions::ForgetTaskSafely)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa054cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Extensions::TaskExtensions*>(),
                        {"ForgetTaskSafely", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Extensions::TaskExtensions::ForgetTaskSafely(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Extensions::TaskExtensions*>(),
                        {"ForgetTaskSafely", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
// Ctor Parameters []
constexpr ::Modio::Extensions::TaskExtensions::TaskExtensions()   {
}
