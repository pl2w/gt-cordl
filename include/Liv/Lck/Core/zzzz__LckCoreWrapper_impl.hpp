#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCoreWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/zzzz__LckCoreWrapper_def.hpp"
#include "Liv/Lck/Core/zzzz__ILckCore_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreWrapper::*)()>(&::Liv::Lck::Core::LckCoreWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d017bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreWrapper.Liv_Lck_Core_ILckCore_CheckLoginCompletedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::LckCoreWrapper::*)()>(&::Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_CheckLoginCompletedAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d017c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.CheckLoginCompletedAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreWrapper.Liv_Lck_Core_ILckCore_HasUserConfiguredStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::LckCoreWrapper::*)()>(&::Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_HasUserConfiguredStreaming)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d01810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.HasUserConfiguredStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreWrapper.Liv_Lck_Core_ILckCore_StartLoginAttemptAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* (::Liv::Lck::Core::LckCoreWrapper::*)()>(&::Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_StartLoginAttemptAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d0185c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.StartLoginAttemptAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreWrapper.Liv_Lck_Core_ILckCore_IsUserSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::LckCoreWrapper::*)()>(&::Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_IsUserSubscribed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d018a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.IsUserSubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreWrapper.Liv_Lck_Core_ILckCore_GetRemainingBackoffTimeSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* (::Liv::Lck::Core::LckCoreWrapper::*)()>(&::Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_GetRemainingBackoffTimeSeconds)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d018f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.GetRemainingBackoffTimeSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::LckCoreWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_CheckLoginCompletedAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.CheckLoginCompletedAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_HasUserConfiguredStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.HasUserConfiguredStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_StartLoginAttemptAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.StartLoginAttemptAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_IsUserSubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.IsUserSubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* Liv::Lck::Core::LckCoreWrapper::Liv_Lck_Core_ILckCore_GetRemainingBackoffTimeSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreWrapper*>(),
                        {"Liv.Lck.Core.ILckCore.GetRemainingBackoffTimeSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>*>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::Core::LckCoreWrapper* Liv::Lck::Core::LckCoreWrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCoreWrapper*>());
}
/// @brief Convert operator to "::Liv::Lck::Core::ILckCore"
constexpr  Liv::Lck::Core::LckCoreWrapper::operator ::Liv::Lck::Core::ILckCore*() noexcept {
return static_cast<::Liv::Lck::Core::ILckCore*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Core::ILckCore"
constexpr ::Liv::Lck::Core::ILckCore* Liv::Lck::Core::LckCoreWrapper::i___Liv__Lck__Core__ILckCore() noexcept {
return static_cast<::Liv::Lck::Core::ILckCore*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCoreWrapper::LckCoreWrapper()   {
}
