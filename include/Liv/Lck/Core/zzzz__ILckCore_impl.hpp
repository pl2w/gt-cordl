#pragma once
// IWYU pragma private; include "Liv/Lck/Core/ILckCore.hpp"
#include "Liv/Lck/Core/zzzz__ILckCore_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::ILckCore.HasUserConfiguredStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::ILckCore::*)()>(&::Liv::Lck::Core::ILckCore::HasUserConfiguredStreaming)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::ILckCore*>(),
                    {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::ILckCore.IsUserSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::ILckCore::*)()>(&::Liv::Lck::Core::ILckCore::IsUserSubscribed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::ILckCore*>(),
                    {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::ILckCore.StartLoginAttemptAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* (::Liv::Lck::Core::ILckCore::*)()>(&::Liv::Lck::Core::ILckCore::StartLoginAttemptAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::ILckCore*>(),
                    {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::ILckCore.CheckLoginCompletedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::ILckCore::*)()>(&::Liv::Lck::Core::ILckCore::CheckLoginCompletedAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::ILckCore*>(),
                    {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::ILckCore.GetRemainingBackoffTimeSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* (::Liv::Lck::Core::ILckCore::*)()>(&::Liv::Lck::Core::ILckCore::GetRemainingBackoffTimeSeconds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::ILckCore*>(),
                    {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::ILckCore::HasUserConfiguredStreaming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::ILckCore::IsUserSubscribed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* Liv::Lck::Core::ILckCore::StartLoginAttemptAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::ILckCore::CheckLoginCompletedAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* Liv::Lck::Core::ILckCore::GetRemainingBackoffTimeSeconds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::ILckCore*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>*>(this, ___internal_method);
}
