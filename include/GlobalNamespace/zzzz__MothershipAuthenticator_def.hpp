#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipAuthenticator)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class LoginResponse;
}
namespace GlobalNamespace {
class MetaAuthenticator;
}
namespace GlobalNamespace {
class MothershipAuthenticator___c;
}
namespace GlobalNamespace {
class MothershipAuthenticator___c__DisplayClass16_0;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
struct MothershipLogLevel;
}
namespace GlobalNamespace {
class PlayerSteamBeginLoginResponse;
}
namespace GlobalNamespace {
class SteamAuthTicket;
}
namespace GlobalNamespace {
class SteamAuthenticator;
}
namespace Steamworks {
struct EResult;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipAuthenticator;
}
namespace GlobalNamespace {
class MothershipAuthenticator___c;
}
namespace GlobalNamespace {
class MothershipAuthenticator___c__DisplayClass16_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipAuthenticator*);
MARK_REF_T(::GlobalNamespace::MothershipAuthenticator___c*);
MARK_REF_T(::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAuthenticator*, "", "MothershipAuthenticator");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAuthenticator___c*, "", "MothershipAuthenticator/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0*, "", "MothershipAuthenticator/<>c__DisplayClass16_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAuthenticator
class CORDL_TYPE MothershipAuthenticator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::MothershipAuthenticator___c;

using __c__DisplayClass16_0 = ::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::MothershipAuthenticator>  Instance;

/// @brief Field MaxLoginAttempts, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxLoginAttempts, put=__cordl_internal_set_MaxLoginAttempts)) int32_t  MaxLoginAttempts;

/// @brief Field MetaAuthenticator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MetaAuthenticator, put=__cordl_internal_set_MetaAuthenticator)) ::UnityW<::GlobalNamespace::MetaAuthenticator>  MetaAuthenticator;

/// @brief Field OnLoginAttemptFailure, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoginAttemptFailure, put=__cordl_internal_set_OnLoginAttemptFailure)) ::System::Action_1<int32_t>*  OnLoginAttemptFailure;

/// @brief Field OnLoginFailure, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoginFailure, put=__cordl_internal_set_OnLoginFailure)) ::System::Action_3<::StringW,::StringW,::StringW>*  OnLoginFailure;

/// @brief Field OnLoginSuccess, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoginSuccess, put=__cordl_internal_set_OnLoginSuccess)) ::System::Action*  OnLoginSuccess;

/// @brief Field SteamAuthenticator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamAuthenticator, put=__cordl_internal_set_SteamAuthenticator)) ::UnityW<::GlobalNamespace::SteamAuthenticator>  SteamAuthenticator;

/// @brief Field TestAccountId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TestAccountId, put=__cordl_internal_set_TestAccountId)) ::StringW  TestAccountId;

/// @brief Field TestNickname, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TestNickname, put=__cordl_internal_set_TestNickname)) ::StringW  TestNickname;

/// @brief Field UseConstantTestAccountId, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseConstantTestAccountId, put=__cordl_internal_set_UseConstantTestAccountId)) bool  UseConstantTestAccountId;

/// @brief Field lastSliceUpdateTime, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSliceUpdateTime, put=__cordl_internal_set_lastSliceUpdateTime)) double_t  lastSliceUpdateTime;

/// @brief Field loginAttempts, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_loginAttempts, put=__cordl_internal_set_loginAttempts)) int32_t  loginAttempts;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5aafe24, size 0x3a8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BeginLoginFlow, addr 0x5ab01cc, size 0x74, virtual false, abstract: false, final false
inline void BeginLoginFlow() ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Init, addr 0x5aafd78, size 0xac, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method LogInWithInsecure, addr 0x5ab0334, size 0x108, virtual false, abstract: false, final false
inline void LogInWithInsecure() ;

/// @brief Method LogInWithSteam, addr 0x5ab0240, size 0xf4, virtual false, abstract: false, final false
inline void LogInWithSteam() ;

static inline ::GlobalNamespace::MothershipAuthenticator* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ab04e8, size 0xa8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ab043c, size 0xac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5ab0590, size 0x78, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__13_1, addr 0x5ab0618, size 0x4, virtual false, abstract: false, final false
inline void _Awake_b__13_1(::StringW  id) ;

/// [CompilerGenerated]
/// @brief Method <LogInWithInsecure>b__15_0, addr 0x5ab061c, size 0xfc, virtual false, abstract: false, final false
inline void _LogInWithInsecure_b__15_0(::GlobalNamespace::LoginResponse*  LoginResponse) ;

/// [CompilerGenerated]
/// @brief Method <LogInWithInsecure>b__15_1, addr 0x5ab0718, size 0x268, virtual false, abstract: false, final false
inline void _LogInWithInsecure_b__15_1(::GlobalNamespace::MothershipError*  MothershipError, int32_t  errorCode) ;

/// [CompilerGenerated]
/// @brief Method <LogInWithSteam>b__16_0, addr 0x5ab0980, size 0x264, virtual false, abstract: false, final false
inline void _LogInWithSteam_b__16_0(::GlobalNamespace::PlayerSteamBeginLoginResponse*  resp) ;

/// [CompilerGenerated]
/// @brief Method <LogInWithSteam>b__16_1, addr 0x5ab0d04, size 0x268, virtual false, abstract: false, final false
inline void _LogInWithSteam_b__16_1(::GlobalNamespace::MothershipError*  MothershipError, int32_t  errorCode) ;

/// [CompilerGenerated]
/// @brief Method <LogInWithSteam>b__16_3, addr 0x5ab0bec, size 0x118, virtual false, abstract: false, final false
inline void _LogInWithSteam_b__16_3(::Steamworks::EResult  error) ;

constexpr int32_t const& __cordl_internal_get_MaxLoginAttempts() const;

constexpr int32_t& __cordl_internal_get_MaxLoginAttempts() ;

constexpr ::UnityW<::GlobalNamespace::MetaAuthenticator> const& __cordl_internal_get_MetaAuthenticator() const;

constexpr ::UnityW<::GlobalNamespace::MetaAuthenticator>& __cordl_internal_get_MetaAuthenticator() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnLoginAttemptFailure() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnLoginAttemptFailure() ;

constexpr ::System::Action_3<::StringW,::StringW,::StringW>* const& __cordl_internal_get_OnLoginFailure() const;

constexpr ::System::Action_3<::StringW,::StringW,::StringW>*& __cordl_internal_get_OnLoginFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_OnLoginSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_OnLoginSuccess() ;

constexpr ::UnityW<::GlobalNamespace::SteamAuthenticator> const& __cordl_internal_get_SteamAuthenticator() const;

constexpr ::UnityW<::GlobalNamespace::SteamAuthenticator>& __cordl_internal_get_SteamAuthenticator() ;

constexpr ::StringW const& __cordl_internal_get_TestAccountId() const;

constexpr ::StringW& __cordl_internal_get_TestAccountId() ;

constexpr ::StringW const& __cordl_internal_get_TestNickname() const;

constexpr ::StringW& __cordl_internal_get_TestNickname() ;

constexpr bool const& __cordl_internal_get_UseConstantTestAccountId() const;

constexpr bool& __cordl_internal_get_UseConstantTestAccountId() ;

constexpr double_t const& __cordl_internal_get_lastSliceUpdateTime() const;

constexpr double_t& __cordl_internal_get_lastSliceUpdateTime() ;

constexpr int32_t const& __cordl_internal_get_loginAttempts() const;

constexpr int32_t& __cordl_internal_get_loginAttempts() ;

constexpr void __cordl_internal_set_MaxLoginAttempts(int32_t  value) ;

constexpr void __cordl_internal_set_MetaAuthenticator(::UnityW<::GlobalNamespace::MetaAuthenticator>  value) ;

constexpr void __cordl_internal_set_OnLoginAttemptFailure(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnLoginFailure(::System::Action_3<::StringW,::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnLoginSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_SteamAuthenticator(::UnityW<::GlobalNamespace::SteamAuthenticator>  value) ;

constexpr void __cordl_internal_set_TestAccountId(::StringW  value) ;

constexpr void __cordl_internal_set_TestNickname(::StringW  value) ;

constexpr void __cordl_internal_set_UseConstantTestAccountId(bool  value) ;

constexpr void __cordl_internal_set_lastSliceUpdateTime(double_t  value) ;

constexpr void __cordl_internal_set_loginAttempts(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ab0608, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MothershipAuthenticator> getStaticF_Instance() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::MothershipAuthenticator>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthenticator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAuthenticator(MothershipAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthenticator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAuthenticator(MothershipAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3287};

/// @brief Field MetaAuthenticator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaAuthenticator>  ___MetaAuthenticator;

/// @brief Field SteamAuthenticator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SteamAuthenticator>  ___SteamAuthenticator;

/// @brief Field TestNickname, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TestNickname;

/// @brief Field TestAccountId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___TestAccountId;

/// @brief Field UseConstantTestAccountId, offset: 0x40, size: 0x1, def value: None
 bool  ___UseConstantTestAccountId;

/// @brief Field loginAttempts, offset: 0x44, size: 0x4, def value: None
 int32_t  ___loginAttempts;

/// @brief Field MaxLoginAttempts, offset: 0x48, size: 0x4, def value: None
 int32_t  ___MaxLoginAttempts;

/// @brief Field OnLoginSuccess, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___OnLoginSuccess;

/// @brief Field OnLoginFailure, offset: 0x58, size: 0x8, def value: None
 ::System::Action_3<::StringW,::StringW,::StringW>*  ___OnLoginFailure;

/// @brief Field OnLoginAttemptFailure, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnLoginAttemptFailure;

/// @brief Field lastSliceUpdateTime, offset: 0x68, size: 0x8, def value: None
 double_t  ___lastSliceUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___MetaAuthenticator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___SteamAuthenticator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___TestNickname) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___TestAccountId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___UseConstantTestAccountId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___loginAttempts) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___MaxLoginAttempts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___OnLoginSuccess) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___OnLoginFailure) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___OnLoginAttemptFailure) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator, ___lastSliceUpdateTime) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipAuthenticator) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAuthenticator/<>c__DisplayClass16_0
class CORDL_TYPE MothershipAuthenticator___c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MothershipAuthenticator>  __4__this;

/// @brief Field <>9__4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action_1<::GlobalNamespace::LoginResponse*>*  __9__4;

/// @brief Field <>9__5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  __9__5;

/// @brief Field nonce, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonce, put=__cordl_internal_set_nonce)) ::StringW  nonce;

/// @brief Field ticketHandle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ticketHandle, put=__cordl_internal_set_ticketHandle)) ::GlobalNamespace::SteamAuthTicket*  ticketHandle;

static inline ::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0* New_ctor() ;

/// @brief Method <LogInWithSteam>b__2, addr 0x5ab0ffc, size 0x1e8, virtual false, abstract: false, final false
inline void _LogInWithSteam_b__2(::StringW  ticket) ;

/// @brief Method <LogInWithSteam>b__4, addr 0x5ab11e4, size 0xe4, virtual false, abstract: false, final false
inline void _LogInWithSteam_b__4(::GlobalNamespace::LoginResponse*  successResp) ;

/// @brief Method <LogInWithSteam>b__5, addr 0x5ab12c8, size 0x2c4, virtual false, abstract: false, final false
inline void _LogInWithSteam_b__5(::GlobalNamespace::MothershipError*  MothershipError, int32_t  errorCode) ;

constexpr ::UnityW<::GlobalNamespace::MothershipAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MothershipAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::GlobalNamespace::LoginResponse*>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action_1<::GlobalNamespace::LoginResponse*>*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*& __cordl_internal_get___9__5() ;

constexpr ::StringW const& __cordl_internal_get_nonce() const;

constexpr ::StringW& __cordl_internal_get_nonce() ;

constexpr ::GlobalNamespace::SteamAuthTicket* const& __cordl_internal_get_ticketHandle() const;

constexpr ::GlobalNamespace::SteamAuthTicket*& __cordl_internal_get_ticketHandle() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MothershipAuthenticator>  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<::GlobalNamespace::LoginResponse*>*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  value) ;

constexpr void __cordl_internal_set_nonce(::StringW  value) ;

constexpr void __cordl_internal_set_ticketHandle(::GlobalNamespace::SteamAuthTicket*  value) ;

/// @brief Method .ctor, addr 0x5ab0be4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAuthenticator___c__DisplayClass16_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthenticator___c__DisplayClass16_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAuthenticator___c__DisplayClass16_0(MothershipAuthenticator___c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthenticator___c__DisplayClass16_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAuthenticator___c__DisplayClass16_0(MothershipAuthenticator___c__DisplayClass16_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3286};

/// @brief Field nonce, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___nonce;

/// @brief Field ticketHandle, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::SteamAuthTicket*  ___ticketHandle;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MothershipAuthenticator>  _____4__this;

/// @brief Field <>9__4, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::LoginResponse*>*  _____9__4;

/// @brief Field <>9__5, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  _____9__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0, ___nonce) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0, ___ticketHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0, _____9__4) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0, _____9__5) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipAuthenticator___c__DisplayClass16_0) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAuthenticator/<>c
class CORDL_TYPE MothershipAuthenticator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MothershipAuthenticator___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  __9__13_0;

static inline ::GlobalNamespace::MothershipAuthenticator___c* New_ctor() ;

/// @brief Method <Awake>b__13_0, addr 0x5ab0fdc, size 0x20, virtual false, abstract: false, final false
inline void _Awake_b__13_0(::GlobalNamespace::MothershipLogLevel  level, ::StringW  message) ;

/// @brief Method .ctor, addr 0x5ab0fd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MothershipAuthenticator___c* getStaticF___9() ;

static inline ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>* getStaticF___9__13_0() ;

static inline void setStaticF___9(::GlobalNamespace::MothershipAuthenticator___c*  value) ;

static inline void setStaticF___9__13_0(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAuthenticator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthenticator___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAuthenticator___c(MothershipAuthenticator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthenticator___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAuthenticator___c(MothershipAuthenticator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3285};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipAuthenticator___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
