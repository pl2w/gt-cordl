#pragma once
// IWYU pragma private; include "GlobalNamespace/WarningsServer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WarningsServer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAgeGateWarningStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WarningsServer.FetchPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* (::GlobalNamespace::WarningsServer::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::WarningsServer::FetchPlayerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WarningsServer*>(),
                    {::i2c::class_of<::GlobalNamespace::WarningsServer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningsServer.GetOptInFollowUpMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* (::GlobalNamespace::WarningsServer::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::WarningsServer::GetOptInFollowUpMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WarningsServer*>(),
                    {::i2c::class_of<::GlobalNamespace::WarningsServer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningsServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WarningsServer::*)()>(&::GlobalNamespace::WarningsServer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5e1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningsServer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WarningsServer::setStaticF_Instance(::UnityW<::GlobalNamespace::WarningsServer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::WarningsServer>, "Instance", ::GlobalNamespace::WarningsServer*>(std::forward<::UnityW<::GlobalNamespace::WarningsServer>>(value));
}
inline ::UnityW<::GlobalNamespace::WarningsServer> GlobalNamespace::WarningsServer::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::WarningsServer>, "Instance", ::GlobalNamespace::WarningsServer*>();
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* GlobalNamespace::WarningsServer::FetchPlayerData(::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WarningsServer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>*>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* GlobalNamespace::WarningsServer::GetOptInFollowUpMessage(::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WarningsServer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>*>(this, ___internal_method, token);
}
inline void GlobalNamespace::WarningsServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningsServer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WarningsServer* GlobalNamespace::WarningsServer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WarningsServer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WarningsServer::WarningsServer()   {
}
