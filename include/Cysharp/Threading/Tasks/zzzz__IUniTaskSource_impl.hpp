#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskSource.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::IUniTaskSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::IUniTaskSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::IUniTaskSource::GetStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::IUniTaskSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::IUniTaskSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::IUniTaskSource::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::IUniTaskSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::IUniTaskSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::IUniTaskSource::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::IUniTaskSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::IUniTaskSource::*)()>(&::Cysharp::Threading::Tasks::IUniTaskSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::IUniTaskSource::GetStatus(int16_t  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::IUniTaskSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline void Cysharp::Threading::Tasks::IUniTaskSource::GetResult(int16_t  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::IUniTaskSource::UnsafeGetStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
