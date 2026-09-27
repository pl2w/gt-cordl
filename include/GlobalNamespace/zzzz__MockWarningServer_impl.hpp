#pragma once
// IWYU pragma private; include "GlobalNamespace/MockWarningServer.hpp"
#include "GlobalNamespace/zzzz__WarningsServer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockWarningServer_def.hpp"
#include "GlobalNamespace/zzzz__EImageVisibility_def.hpp"
#include "GlobalNamespace/zzzz__MockWarningServer_ButtonSetup_def.hpp"
#include "GlobalNamespace/zzzz__MockWarningServer__FetchPlayerData_d__12_def.hpp"
#include "GlobalNamespace/zzzz__MockWarningServer__GetOptInFollowUpMessage_d__13_def.hpp"
#include "GlobalNamespace/zzzz__MockWarningServer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAgeGateWarningStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer.get_ShownScreenPlayerPref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::MockWarningServer::get_ShownScreenPlayerPref)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a3ecc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {"get_ShownScreenPlayerPref", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer::*)()>(&::GlobalNamespace::MockWarningServer::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a3ed3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer.CreateWarningStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAgeGateWarningStatus (::GlobalNamespace::MockWarningServer::*)(::StringW, ::StringW, ::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>, ::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>, ::GlobalNamespace::EImageVisibility, ::System::Action*, ::System::Action*)>(&::GlobalNamespace::MockWarningServer::CreateWarningStatus)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5a3ee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {"CreateWarningStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>>(), ::i2c::type_of<::GlobalNamespace::EImageVisibility>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer.FetchPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* (::GlobalNamespace::MockWarningServer::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockWarningServer::FetchPlayerData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a3efac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                    {::i2c::class_of<::GlobalNamespace::MockWarningServer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer.GetOptInFollowUpMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* (::GlobalNamespace::MockWarningServer::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockWarningServer::GetOptInFollowUpMessage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a3f0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                    {::i2c::class_of<::GlobalNamespace::MockWarningServer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer.ShouldShowWarningScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockWarningServer::*)(int32_t, bool)>(&::GlobalNamespace::MockWarningServer::ShouldShowWarningScreen)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a3f1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {"ShouldShowWarningScreen", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer::*)()>(&::GlobalNamespace::MockWarningServer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::MockWarningServer::get_ShownScreenPlayerPref()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {"get_ShownScreenPlayerPref", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MockWarningServer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAgeGateWarningStatus GlobalNamespace::MockWarningServer::CreateWarningStatus(::StringW  header, ::StringW  body, ::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>  leftButtonSetup, ::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>  rightButtonSetup, ::GlobalNamespace::EImageVisibility  showImage, ::System::Action*  leftButtonCallback, ::System::Action*  rightButtonCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {"CreateWarningStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>>(), ::i2c::type_of<::GlobalNamespace::EImageVisibility>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAgeGateWarningStatus>(this, ___internal_method, header, body, leftButtonSetup, rightButtonSetup, showImage, leftButtonCallback, rightButtonCallback);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* GlobalNamespace::MockWarningServer::FetchPlayerData(::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MockWarningServer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>*>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* GlobalNamespace::MockWarningServer::GetOptInFollowUpMessage(::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MockWarningServer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>*>(this, ___internal_method, token);
}
inline bool GlobalNamespace::MockWarningServer::ShouldShowWarningScreen(int32_t  phase, bool  inOptInCohort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {"ShouldShowWarningScreen", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, phase, inOptInCohort);
}
inline void GlobalNamespace::MockWarningServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockWarningServer* GlobalNamespace::MockWarningServer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockWarningServer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockWarningServer::MockWarningServer()   {
}
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer___c::*)()>(&::GlobalNamespace::MockWarningServer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer___c._FetchPlayerData_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer___c::*)()>(&::GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_0)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5a3f35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer___c._FetchPlayerData_b__12_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer___c::*)()>(&::GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_1)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5a3f5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer___c._FetchPlayerData_b__12_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer___c::*)()>(&::GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_2)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5a3f7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer___c._FetchPlayerData_b__12_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer___c::*)()>(&::GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_3)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5a3fa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer___c._FetchPlayerData_b__12_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer___c::*)()>(&::GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_4)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5a3fc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockWarningServer___c._FetchPlayerData_b__12_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockWarningServer___c::*)()>(&::GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_5)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5a3fed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockWarningServer___c::setStaticF___9(::GlobalNamespace::MockWarningServer___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MockWarningServer___c*, "<>9", ::GlobalNamespace::MockWarningServer___c*>(std::forward<::GlobalNamespace::MockWarningServer___c*>(value));
}
inline ::GlobalNamespace::MockWarningServer___c* GlobalNamespace::MockWarningServer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MockWarningServer___c*, "<>9", ::GlobalNamespace::MockWarningServer___c*>();
}
inline void GlobalNamespace::MockWarningServer___c::setStaticF___9__12_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__12_0", ::GlobalNamespace::MockWarningServer___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::MockWarningServer___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__12_0", ::GlobalNamespace::MockWarningServer___c*>();
}
inline void GlobalNamespace::MockWarningServer___c::setStaticF___9__12_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__12_1", ::GlobalNamespace::MockWarningServer___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::MockWarningServer___c::getStaticF___9__12_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__12_1", ::GlobalNamespace::MockWarningServer___c*>();
}
inline void GlobalNamespace::MockWarningServer___c::setStaticF___9__12_2(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__12_2", ::GlobalNamespace::MockWarningServer___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::MockWarningServer___c::getStaticF___9__12_2()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__12_2", ::GlobalNamespace::MockWarningServer___c*>();
}
inline void GlobalNamespace::MockWarningServer___c::setStaticF___9__12_3(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__12_3", ::GlobalNamespace::MockWarningServer___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::MockWarningServer___c::getStaticF___9__12_3()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__12_3", ::GlobalNamespace::MockWarningServer___c*>();
}
inline void GlobalNamespace::MockWarningServer___c::setStaticF___9__12_4(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__12_4", ::GlobalNamespace::MockWarningServer___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::MockWarningServer___c::getStaticF___9__12_4()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__12_4", ::GlobalNamespace::MockWarningServer___c*>();
}
inline void GlobalNamespace::MockWarningServer___c::setStaticF___9__12_5(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__12_5", ::GlobalNamespace::MockWarningServer___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::MockWarningServer___c::getStaticF___9__12_5()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__12_5", ::GlobalNamespace::MockWarningServer___c*>();
}
inline void GlobalNamespace::MockWarningServer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockWarningServer___c::_FetchPlayerData_b__12_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MockWarningServer___c*>(),
                        {"<FetchPlayerData>b__12_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockWarningServer___c* GlobalNamespace::MockWarningServer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockWarningServer___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockWarningServer___c::MockWarningServer___c()   {
}
