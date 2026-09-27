#pragma once
// IWYU pragma private; include "Fusion/IAsyncOperation.hpp"
#include "Fusion/zzzz__IAsyncOperation_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Fusion::IAsyncOperation.get_IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::IAsyncOperation::*)()>(&::Fusion::IAsyncOperation::get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IAsyncOperation*>(),
                    {::i2c::class_of<::Fusion::IAsyncOperation*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::IAsyncOperation.add_Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::IAsyncOperation::*)(::System::Action_1<::Fusion::IAsyncOperation*>*)>(&::Fusion::IAsyncOperation::add_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IAsyncOperation*>(),
                    {::i2c::class_of<::Fusion::IAsyncOperation*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::IAsyncOperation.remove_Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::IAsyncOperation::*)(::System::Action_1<::Fusion::IAsyncOperation*>*)>(&::Fusion::IAsyncOperation::remove_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IAsyncOperation*>(),
                    {::i2c::class_of<::Fusion::IAsyncOperation*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::IAsyncOperation.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::Fusion::IAsyncOperation::*)()>(&::Fusion::IAsyncOperation::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IAsyncOperation*>(),
                    {::i2c::class_of<::Fusion::IAsyncOperation*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Fusion::IAsyncOperation::get_IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IAsyncOperation*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::IAsyncOperation::add_Completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IAsyncOperation*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::IAsyncOperation::remove_Completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IAsyncOperation*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Fusion::IAsyncOperation::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IAsyncOperation*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method);
}
