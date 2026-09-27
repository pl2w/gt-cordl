#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAuthenticator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipAuthenticator_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__LoginResponse_def.hpp"
#include "GlobalNamespace/zzzz__MetaAuthenticator_def.hpp"
#include "GlobalNamespace/zzzz__MothershipAuthenticator_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipLogLevel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSteamBeginLoginResponse_def.hpp"
#include "GlobalNamespace/zzzz__SteamAuthTicket_def.hpp"
#include "GlobalNamespace/zzzz__SteamAuthenticator_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MothershipAuthenticator::Init)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5aafd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)()>(&::GlobalNamespace::MothershipAuthenticator::Awake)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5aafe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator.BeginLoginFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)()>(&::GlobalNamespace::MothershipAuthenticator::BeginLoginFlow)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ab01cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"BeginLoginFlow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator.LogInWithInsecure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)()>(&::GlobalNamespace::MothershipAuthenticator::LogInWithInsecure)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ab0334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"LogInWithInsecure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator.LogInWithSteam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)()>(&::GlobalNamespace::MothershipAuthenticator::LogInWithSteam)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ab0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"LogInWithSteam", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)()>(&::GlobalNamespace::MothershipAuthenticator::OnEnable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ab043c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)()>(&::GlobalNamespace::MothershipAuthenticator::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ab04e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)()>(&::GlobalNamespace::MothershipAuthenticator::SliceUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ab0590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)()>(&::GlobalNamespace::MothershipAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ab0608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator._Awake_b__13_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)(::StringW)>(&::GlobalNamespace::MothershipAuthenticator::_Awake_b__13_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ab0618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<Awake>b__13_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator._LogInWithInsecure_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)(::GlobalNamespace::LoginResponse*)>(&::GlobalNamespace::MothershipAuthenticator::_LogInWithInsecure_b__15_0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ab061c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithInsecure>b__15_0", {}, {::i2c::type_of<::GlobalNamespace::LoginResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator._LogInWithInsecure_b__15_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::MothershipAuthenticator::_LogInWithInsecure_b__15_1)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5ab0718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithInsecure>b__15_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator._LogInWithSteam_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)(::GlobalNamespace::PlayerSteamBeginLoginResponse*)>(&::GlobalNamespace::MothershipAuthenticator::_LogInWithSteam_b__16_0)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5ab0980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithSteam>b__16_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerSteamBeginLoginResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator._LogInWithSteam_b__16_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)(::Steamworks::EResult)>(&::GlobalNamespace::MothershipAuthenticator::_LogInWithSteam_b__16_3)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ab0bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithSteam>b__16_3", {}, {::i2c::type_of<::Steamworks::EResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator._LogInWithSteam_b__16_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::MothershipAuthenticator::_LogInWithSteam_b__16_1)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5ab0d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithSteam>b__16_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MetaAuthenticator>& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_MetaAuthenticator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetaAuthenticator;
}
constexpr ::UnityW<::GlobalNamespace::MetaAuthenticator> const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_MetaAuthenticator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetaAuthenticator;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_MetaAuthenticator(::UnityW<::GlobalNamespace::MetaAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MetaAuthenticator = value;
}
constexpr ::UnityW<::GlobalNamespace::SteamAuthenticator>& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_SteamAuthenticator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamAuthenticator;
}
constexpr ::UnityW<::GlobalNamespace::SteamAuthenticator> const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_SteamAuthenticator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamAuthenticator;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_SteamAuthenticator(::UnityW<::GlobalNamespace::SteamAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamAuthenticator = value;
}
constexpr ::StringW& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_TestNickname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TestNickname;
}
constexpr ::StringW const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_TestNickname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TestNickname;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_TestNickname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TestNickname = value;
}
constexpr ::StringW& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_TestAccountId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TestAccountId;
}
constexpr ::StringW const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_TestAccountId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TestAccountId;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_TestAccountId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TestAccountId = value;
}
constexpr bool& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_UseConstantTestAccountId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseConstantTestAccountId;
}
constexpr bool const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_UseConstantTestAccountId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseConstantTestAccountId;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_UseConstantTestAccountId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseConstantTestAccountId = value;
}
constexpr int32_t& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_loginAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loginAttempts;
}
constexpr int32_t const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_loginAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loginAttempts;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_loginAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loginAttempts = value;
}
constexpr int32_t& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_MaxLoginAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLoginAttempts;
}
constexpr int32_t const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_MaxLoginAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLoginAttempts;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_MaxLoginAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLoginAttempts = value;
}
constexpr ::System::Action*& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_OnLoginSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoginSuccess;
}
constexpr ::System::Action* const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_OnLoginSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoginSuccess;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_OnLoginSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLoginSuccess = value;
}
constexpr ::System::Action_3<::StringW,::StringW,::StringW>*& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_OnLoginFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoginFailure;
}
constexpr ::System::Action_3<::StringW,::StringW,::StringW>* const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_OnLoginFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoginFailure;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_OnLoginFailure(::System::Action_3<::StringW,::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLoginFailure = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_OnLoginAttemptFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoginAttemptFailure;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_OnLoginAttemptFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoginAttemptFailure;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_OnLoginAttemptFailure(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLoginAttemptFailure = value;
}
constexpr double_t& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_lastSliceUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceUpdateTime;
}
constexpr double_t const& GlobalNamespace::MothershipAuthenticator::__cordl_internal_get_lastSliceUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceUpdateTime;
}
constexpr void GlobalNamespace::MothershipAuthenticator::__cordl_internal_set_lastSliceUpdateTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSliceUpdateTime = value;
}
inline void GlobalNamespace::MothershipAuthenticator::setStaticF_Instance(::UnityW<::GlobalNamespace::MothershipAuthenticator>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MothershipAuthenticator>, "Instance", ::GlobalNamespace::MothershipAuthenticator*>(std::forward<::UnityW<::GlobalNamespace::MothershipAuthenticator>>(value));
}
inline ::UnityW<::GlobalNamespace::MothershipAuthenticator> GlobalNamespace::MothershipAuthenticator::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MothershipAuthenticator>, "Instance", ::GlobalNamespace::MothershipAuthenticator*>();
}
inline void GlobalNamespace::MothershipAuthenticator::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::BeginLoginFlow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"BeginLoginFlow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::LogInWithInsecure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"LogInWithInsecure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::LogInWithSteam()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"LogInWithSteam", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator::_Awake_b__13_1(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<Awake>b__13_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void GlobalNamespace::MothershipAuthenticator::_LogInWithInsecure_b__15_0(::GlobalNamespace::LoginResponse*  LoginResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithInsecure>b__15_0", {}, {::i2c::type_of<::GlobalNamespace::LoginResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, LoginResponse);
}
inline void GlobalNamespace::MothershipAuthenticator::_LogInWithInsecure_b__15_1(::GlobalNamespace::MothershipError*  MothershipError, int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithInsecure>b__15_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MothershipError, errorCode);
}
inline void GlobalNamespace::MothershipAuthenticator::_LogInWithSteam_b__16_0(::GlobalNamespace::PlayerSteamBeginLoginResponse*  resp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithSteam>b__16_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerSteamBeginLoginResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resp);
}
inline void GlobalNamespace::MothershipAuthenticator::_LogInWithSteam_b__16_3(::Steamworks::EResult  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithSteam>b__16_3", {}, {::i2c::type_of<::Steamworks::EResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::MothershipAuthenticator::_LogInWithSteam_b__16_1(::GlobalNamespace::MothershipError*  MothershipError, int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator*>(),
                        {"<LogInWithSteam>b__16_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MothershipError, errorCode);
}
inline ::GlobalNamespace::MothershipAuthenticator* GlobalNamespace::MothershipAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipAuthenticator*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::MothershipAuthenticator::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::MothershipAuthenticator::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipAuthenticator::MothershipAuthenticator()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::*)()>(&::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab0be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0._LogInWithSteam_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::*)(::StringW)>(&::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::_LogInWithSteam_b__2)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ab0ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>(),
                        {"<LogInWithSteam>b__2", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0._LogInWithSteam_b__4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::*)(::GlobalNamespace::LoginResponse*)>(&::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::_LogInWithSteam_b__4)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ab11e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>(),
                        {"<LogInWithSteam>b__4", {}, {::i2c::type_of<::GlobalNamespace::LoginResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0._LogInWithSteam_b__5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::_LogInWithSteam_b__5)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5ab12c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>(),
                        {"<LogInWithSteam>b__5", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get_nonce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonce;
}
constexpr ::StringW const& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get_nonce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonce;
}
constexpr void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_set_nonce(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonce = value;
}
constexpr ::GlobalNamespace::SteamAuthTicket*& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get_ticketHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketHandle;
}
constexpr ::GlobalNamespace::SteamAuthTicket* const& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get_ticketHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketHandle;
}
constexpr void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_set_ticketHandle(::GlobalNamespace::SteamAuthTicket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticketHandle = value;
}
constexpr ::UnityW<::GlobalNamespace::MothershipAuthenticator>& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MothershipAuthenticator> const& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MothershipAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::LoginResponse*>*& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get___9__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr ::System::Action_1<::GlobalNamespace::LoginResponse*>* const& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get___9__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_set___9__4(::System::Action_1<::GlobalNamespace::LoginResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__4 = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get___9__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__5;
}
constexpr ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>* const& GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_get___9__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__5;
}
constexpr void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::__cordl_internal_set___9__5(::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__5 = value;
}
inline void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::_LogInWithSteam_b__2(::StringW  ticket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>(),
                        {"<LogInWithSteam>b__2", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ticket);
}
inline void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::_LogInWithSteam_b__4(::GlobalNamespace::LoginResponse*  successResp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>(),
                        {"<LogInWithSteam>b__4", {}, {::i2c::type_of<::GlobalNamespace::LoginResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, successResp);
}
inline void GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::_LogInWithSteam_b__5(::GlobalNamespace::MothershipError*  MothershipError, int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>(),
                        {"<LogInWithSteam>b__5", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MothershipError, errorCode);
}
inline ::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0* GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0::MothershipAuthenticator___c__DisplayClass16_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator___c::*)()>(&::GlobalNamespace::MothershipAuthenticator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab0fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthenticator___c._Awake_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthenticator___c::*)(::GlobalNamespace::MothershipLogLevel, ::StringW)>(&::GlobalNamespace::MothershipAuthenticator___c::_Awake_b__13_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ab0fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c*>(),
                        {"<Awake>b__13_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipLogLevel>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipAuthenticator___c::setStaticF___9(::GlobalNamespace::MothershipAuthenticator___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipAuthenticator___c*, "<>9", ::GlobalNamespace::MothershipAuthenticator___c*>(std::forward<::GlobalNamespace::MothershipAuthenticator___c*>(value));
}
inline ::GlobalNamespace::MothershipAuthenticator___c* GlobalNamespace::MothershipAuthenticator___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipAuthenticator___c*, "<>9", ::GlobalNamespace::MothershipAuthenticator___c*>();
}
inline void GlobalNamespace::MothershipAuthenticator___c::setStaticF___9__13_0(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*, "<>9__13_0", ::GlobalNamespace::MothershipAuthenticator___c*>(std::forward<::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>* GlobalNamespace::MothershipAuthenticator___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*, "<>9__13_0", ::GlobalNamespace::MothershipAuthenticator___c*>();
}
inline void GlobalNamespace::MothershipAuthenticator___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipAuthenticator___c::_Awake_b__13_0(::GlobalNamespace::MothershipLogLevel  level, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthenticator___c*>(),
                        {"<Awake>b__13_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipLogLevel>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message);
}
inline ::GlobalNamespace::MothershipAuthenticator___c* GlobalNamespace::MothershipAuthenticator___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipAuthenticator___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipAuthenticator___c::MothershipAuthenticator___c()   {
}
