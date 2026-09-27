#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLaunchFriendRequestFlowResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa53be14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult.GetLaunchFriendRequestFlowResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchFriendRequestFlowResult* (::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::*)()>(&::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::GetLaunchFriendRequestFlowResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa53e10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(),
                    {::i2c::class_of<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult.GetDataFromMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchFriendRequestFlowResult* (::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa53e148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(),
                    {::i2c::class_of<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(), 71}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::_ctor(::System::IntPtr  c_message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::GetLaunchFriendRequestFlowResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::GetDataFromMessage(::System::IntPtr  c_message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult* Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::New_ctor(::System::IntPtr  c_message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::MessageWithLaunchFriendRequestFlowResult()   {
}
