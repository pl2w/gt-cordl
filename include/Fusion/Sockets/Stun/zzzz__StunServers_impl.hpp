#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunServers.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunServers_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunServers_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers.GetStunServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* (*)(bool)>(&::Fusion::Sockets::Stun::StunServers::GetStunServer)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6037444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers*>(),
                        {"GetStunServer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers.SetupStunServers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::StringW)>(&::Fusion::Sockets::Stun::StunServers::SetupStunServers)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6038b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers*>(),
                        {"SetupStunServers", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers.ResolveStunServerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* (*)(::StringW)>(&::Fusion::Sockets::Stun::StunServers::ResolveStunServerInfo)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x603a8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers*>(),
                        {"ResolveStunServerInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::Stun::StunServers::setStaticF_DefaultStunServerList(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "DefaultStunServerList", ::Fusion::Sockets::Stun::StunServers*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Fusion::Sockets::Stun::StunServers::getStaticF_DefaultStunServerList()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "DefaultStunServerList", ::Fusion::Sockets::Stun::StunServers*>();
}
inline void Fusion::Sockets::Stun::StunServers::setStaticF__stunServers(::ArrayW<::Fusion::Sockets::Stun::StunServers_StunServer*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Fusion::Sockets::Stun::StunServers_StunServer*>, "_stunServers", ::Fusion::Sockets::Stun::StunServers*>(std::forward<::ArrayW<::Fusion::Sockets::Stun::StunServers_StunServer*>>(value));
}
inline ::ArrayW<::Fusion::Sockets::Stun::StunServers_StunServer*> Fusion::Sockets::Stun::StunServers::getStaticF__stunServers()  {
return ::cordl_internals::getStaticField<::ArrayW<::Fusion::Sockets::Stun::StunServers_StunServer*>, "_stunServers", ::Fusion::Sockets::Stun::StunServers*>();
}
inline void Fusion::Sockets::Stun::StunServers::setStaticF__runningResolution(bool  value)  {
::cordl_internals::setStaticField<bool, "_runningResolution", ::Fusion::Sockets::Stun::StunServers*>(std::forward<bool>(value));
}
inline bool Fusion::Sockets::Stun::StunServers::getStaticF__runningResolution()  {
return ::cordl_internals::getStaticField<bool, "_runningResolution", ::Fusion::Sockets::Stun::StunServers*>();
}
inline ::System::Collections::Generic::List_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* Fusion::Sockets::Stun::StunServers::GetStunServer(bool  IPv6Support)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers*>(),
                        {"GetStunServer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*>(nullptr, ___internal_method, IPv6Support);
}
inline ::System::Threading::Tasks::Task* Fusion::Sockets::Stun::StunServers::SetupStunServers(::StringW  customStunServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers*>(),
                        {"SetupStunServers", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, customStunServer);
}
inline ::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* Fusion::Sockets::Stun::StunServers::ResolveStunServerInfo(::StringW  stunServerAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers*>(),
                        {"ResolveStunServerInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*>(nullptr, ___internal_method, stunServerAddress);
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunServers::StunServers()   {
}
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::*)()>(&::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603a8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::*)()>(&::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::MoveNext)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0x603bcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x603c700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::StringW& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get_customStunServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customStunServer;
}
constexpr ::StringW const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get_customStunServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customStunServer;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set_customStunServer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customStunServer = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__stunServers_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunServers_5__1;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__stunServers_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunServers_5__1;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set__stunServers_5__1(::System::Collections::Generic::HashSet_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stunServers_5__1 = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__customStunServers_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customStunServers_5__2;
}
constexpr ::ArrayW<::StringW> const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__customStunServers_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customStunServers_5__2;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set__customStunServers_5__2(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customStunServers_5__2 = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__3;
}
constexpr ::ArrayW<::StringW> const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__3;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___s__3(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__3 = value;
}
constexpr int32_t& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___s__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr ::StringW& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__stunServerAddress_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunServerAddress_5__5;
}
constexpr ::StringW const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__stunServerAddress_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunServerAddress_5__5;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set__stunServerAddress_5__5(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stunServerAddress_5__5 = value;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__customStunServerResolved_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customStunServerResolved_5__6;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__customStunServerResolved_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customStunServerResolved_5__6;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set__customStunServerResolved_5__6(::Fusion::Sockets::Stun::StunServers_StunServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customStunServerResolved_5__6 = value;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__7;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__7;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___s__7(::Fusion::Sockets::Stun::StunServers_StunServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__7 = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__8;
}
constexpr ::ArrayW<::StringW> const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__8;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___s__8(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__8 = value;
}
constexpr int32_t& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__9;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__9;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___s__9(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__9 = value;
}
constexpr ::StringW& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__stunServerAddress_5__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunServerAddress_5__10;
}
constexpr ::StringW const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__stunServerAddress_5__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunServerAddress_5__10;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set__stunServerAddress_5__10(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stunServerAddress_5__10 = value;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__server_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server_5__11;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get__server_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server_5__11;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set__server_5__11(::Fusion::Sockets::Stun::StunServers_StunServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server_5__11 = value;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__12()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__12;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___s__12() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__12;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___s__12(::Fusion::Sockets::Stun::StunServers_StunServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__12 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunServers_StunServer*>& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunServers_StunServer*> const& Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::__cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunServers_StunServer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
inline void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6* Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6::StunServers__SetupStunServers_d__6()   {
}
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::*)()>(&::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603aa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::*)()>(&::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::MoveNext)> {
  constexpr static std::size_t size = 0xd48;
  constexpr static std::size_t addrs = 0x603afac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x603bcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers_StunServer*>& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers_StunServer*> const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers_StunServer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::StringW& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get_stunServerAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunServerAddress;
}
constexpr ::StringW const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get_stunServerAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunServerAddress;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set_stunServerAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stunServerAddress = value;
}
constexpr ::StringW& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__ipOrName_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ipOrName_5__1;
}
constexpr ::StringW const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__ipOrName_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ipOrName_5__1;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set__ipOrName_5__1(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ipOrName_5__1 = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__addressParts_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressParts_5__2;
}
constexpr ::ArrayW<::StringW> const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__addressParts_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressParts_5__2;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set__addressParts_5__2(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addressParts_5__2 = value;
}
constexpr uint16_t& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__port_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port_5__3;
}
constexpr uint16_t const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__port_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port_5__3;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set__port_5__3(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____port_5__3 = value;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__stunServer_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunServer_5__4;
}
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__stunServer_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunServer_5__4;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set__stunServer_5__4(::Fusion::Sockets::Stun::StunServers_StunServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stunServer_5__4 = value;
}
constexpr ::System::Net::IPAddress*& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__address_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____address_5__5;
}
constexpr ::System::Net::IPAddress* const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__address_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____address_5__5;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set__address_5__5(::System::Net::IPAddress*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____address_5__5 = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__netAddress_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netAddress_5__6;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__netAddress_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netAddress_5__6;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set__netAddress_5__6(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____netAddress_5__6 = value;
}
constexpr ::ArrayW<::System::Net::IPAddress*>& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__addressList_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressList_5__7;
}
constexpr ::ArrayW<::System::Net::IPAddress*> const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__addressList_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressList_5__7;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set__addressList_5__7(::ArrayW<::System::Net::IPAddress*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addressList_5__7 = value;
}
constexpr ::ArrayW<::System::Net::IPAddress*>& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___s__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__8;
}
constexpr ::ArrayW<::System::Net::IPAddress*> const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___s__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__8;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set___s__8(::ArrayW<::System::Net::IPAddress*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__8 = value;
}
constexpr ::ArrayW<::System::Net::IPAddress*>& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___s__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__9;
}
constexpr ::ArrayW<::System::Net::IPAddress*> const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___s__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__9;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set___s__9(::ArrayW<::System::Net::IPAddress*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__9 = value;
}
constexpr int32_t& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___s__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__10;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___s__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__10;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set___s__10(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__10 = value;
}
constexpr ::System::Net::IPAddress*& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__serverAddress_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverAddress_5__11;
}
constexpr ::System::Net::IPAddress* const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get__serverAddress_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverAddress_5__11;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set__serverAddress_5__11(::System::Net::IPAddress*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverAddress_5__11 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> const& Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7* Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7::StunServers__ResolveStunServerInfo_d__7()   {
}
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServers___c::*)()>(&::Fusion::Sockets::Stun::StunServers___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603af8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers___c._SetupStunServers_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Sockets::Stun::StunServers___c::*)(::StringW)>(&::Fusion::Sockets::Stun::StunServers___c::_SetupStunServers_b__6_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x603af94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers___c*>(),
                        {"<SetupStunServers>b__6_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::Stun::StunServers___c::setStaticF___9(::Fusion::Sockets::Stun::StunServers___c*  value)  {
::cordl_internals::setStaticField<::Fusion::Sockets::Stun::StunServers___c*, "<>9", ::Fusion::Sockets::Stun::StunServers___c*>(std::forward<::Fusion::Sockets::Stun::StunServers___c*>(value));
}
inline ::Fusion::Sockets::Stun::StunServers___c* Fusion::Sockets::Stun::StunServers___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::Sockets::Stun::StunServers___c*, "<>9", ::Fusion::Sockets::Stun::StunServers___c*>();
}
inline void Fusion::Sockets::Stun::StunServers___c::setStaticF___9__6_0(::System::Func_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__6_0", ::Fusion::Sockets::Stun::StunServers___c*>(std::forward<::System::Func_2<::StringW,::StringW>*>(value));
}
inline ::System::Func_2<::StringW,::StringW>* Fusion::Sockets::Stun::StunServers___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__6_0", ::Fusion::Sockets::Stun::StunServers___c*>();
}
inline void Fusion::Sockets::Stun::StunServers___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Fusion::Sockets::Stun::StunServers___c::_SetupStunServers_b__6_0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers___c*>(),
                        {"<SetupStunServers>b__6_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline ::Fusion::Sockets::Stun::StunServers___c* Fusion::Sockets::Stun::StunServers___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::Stun::StunServers___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunServers___c::StunServers___c()   {
}
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers_StunServer.get_HasIPv4Support
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::Stun::StunServers_StunServer::*)()>(&::Fusion::Sockets::Stun::StunServers_StunServer::get_HasIPv4Support)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x603a81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                        {"get_HasIPv4Support", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers_StunServer.get_HasIPv6Support
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::Stun::StunServers_StunServer::*)()>(&::Fusion::Sockets::Stun::StunServers_StunServer::get_HasIPv6Support)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x603a874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                        {"get_HasIPv6Support", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers_StunServer.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Sockets::Stun::StunServers_StunServer::*)()>(&::Fusion::Sockets::Stun::StunServers_StunServer::ToString)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x603aa18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                    {::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers_StunServer.get_StunServerEqualityComparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* (*)()>(&::Fusion::Sockets::Stun::StunServers_StunServer::get_StunServerEqualityComparer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x603acb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                        {"get_StunServerEqualityComparer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServers_StunServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServers_StunServer::*)()>(&::Fusion::Sockets::Stun::StunServers_StunServer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603ad0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunServers_StunServer::__cordl_internal_get_IPv4Addr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPv4Addr;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunServers_StunServer::__cordl_internal_get_IPv4Addr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPv4Addr;
}
constexpr void Fusion::Sockets::Stun::StunServers_StunServer::__cordl_internal_set_IPv4Addr(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IPv4Addr = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunServers_StunServer::__cordl_internal_get_IPv6Addr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPv6Addr;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunServers_StunServer::__cordl_internal_get_IPv6Addr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPv6Addr;
}
constexpr void Fusion::Sockets::Stun::StunServers_StunServer::__cordl_internal_set_IPv6Addr(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IPv6Addr = value;
}
inline void Fusion::Sockets::Stun::StunServers_StunServer::setStaticF__StunServerEqualityComparer_k__BackingField(::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*, "<StunServerEqualityComparer>k__BackingField", ::Fusion::Sockets::Stun::StunServers_StunServer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* Fusion::Sockets::Stun::StunServers_StunServer::getStaticF__StunServerEqualityComparer_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*, "<StunServerEqualityComparer>k__BackingField", ::Fusion::Sockets::Stun::StunServers_StunServer*>();
}
inline bool Fusion::Sockets::Stun::StunServers_StunServer::get_HasIPv4Support()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                        {"get_HasIPv4Support", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Sockets::Stun::StunServers_StunServer::get_HasIPv6Support()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                        {"get_HasIPv6Support", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::Sockets::Stun::StunServers_StunServer::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* Fusion::Sockets::Stun::StunServers_StunServer::get_StunServerEqualityComparer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                        {"get_StunServerEqualityComparer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*>(nullptr, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunServers_StunServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Sockets::Stun::StunServers_StunServer* Fusion::Sockets::Stun::StunServers_StunServer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::Stun::StunServers_StunServer*>());
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunServers_StunServer::StunServers_StunServer()   {
}
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::*)(::Fusion::Sockets::Stun::StunServers_StunServer*, ::Fusion::Sockets::Stun::StunServers_StunServer*)>(&::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x603ad98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(), ::i2c::type_of<::Fusion::Sockets::Stun::StunServers_StunServer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::*)(::Fusion::Sockets::Stun::StunServers_StunServer*)>(&::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x603aec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::Sockets::Stun::StunServers_StunServer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::*)()>(&::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603ad90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::Equals(::Fusion::Sockets::Stun::StunServers_StunServer*  x, ::Fusion::Sockets::Stun::StunServers_StunServer*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Sockets::Stun::StunServers_StunServer*>(), ::i2c::type_of<::Fusion::Sockets::Stun::StunServers_StunServer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::GetHashCode(::Fusion::Sockets::Stun::StunServers_StunServer*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::Sockets::Stun::StunServers_StunServer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer* Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>"
constexpr  Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__Sockets__Stun__StunServers_StunServer__() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer::StunServer_StunServers_Pv4AddrEqualityComparer()   {
}
