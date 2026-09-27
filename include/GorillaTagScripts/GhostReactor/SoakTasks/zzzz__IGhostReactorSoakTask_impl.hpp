#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/SoakTasks/IGhostReactorSoakTask.hpp"
#include "GorillaTagScripts/GhostReactor/SoakTasks/zzzz__IGhostReactorSoakTask_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask.get_Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::get_Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(),
                    {::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(),
                    {::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(),
                    {::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::get_Complete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
