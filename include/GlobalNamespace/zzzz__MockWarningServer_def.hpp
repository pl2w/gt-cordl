#pragma once
// IWYU pragma private; include "GlobalNamespace/MockWarningServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WarningsServer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockWarningServer)
namespace GlobalNamespace {
struct EImageVisibility;
}
namespace GlobalNamespace {
struct MockWarningServer_ButtonSetup;
}
namespace GlobalNamespace {
struct MockWarningServer__FetchPlayerData_d__12;
}
namespace GlobalNamespace {
struct MockWarningServer__GetOptInFollowUpMessage_d__13;
}
namespace GlobalNamespace {
class MockWarningServer___c;
}
namespace GlobalNamespace {
struct PlayerAgeGateWarningStatus;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockWarningServer;
}
namespace GlobalNamespace {
class MockWarningServer___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MockWarningServer*);
MARK_REF_T(::GlobalNamespace::MockWarningServer___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockWarningServer*, "", "MockWarningServer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockWarningServer___c*, "", "MockWarningServer/<>c");
// Dependencies WarningsServer
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockWarningServer
class CORDL_TYPE MockWarningServer : public ::GlobalNamespace::WarningsServer {
public:
// Declarations
using ButtonSetup = ::GlobalNamespace::MockWarningServer_ButtonSetup;

using _FetchPlayerData_d__12 = ::GlobalNamespace::MockWarningServer__FetchPlayerData_d__12;

using _GetOptInFollowUpMessage_d__13 = ::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13;

using __c = ::GlobalNamespace::MockWarningServer___c;

/// @brief Method Awake, addr 0x5a3ed3c, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateWarningStatus, addr 0x5a3ee10, size 0x19c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerAgeGateWarningStatus CreateWarningStatus(::StringW  header, ::StringW  body, ::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>  leftButtonSetup, ::System::Nullable_1<::GlobalNamespace::MockWarningServer_ButtonSetup>  rightButtonSetup, ::GlobalNamespace::EImageVisibility  showImage, ::System::Action*  leftButtonCallback, ::System::Action*  rightButtonCallback) ;

/// [AsyncStateMachine(typeof(MockWarningServer::<FetchPlayerData>d__12))]
/// @brief Method FetchPlayerData, addr 0x5a3efac, size 0x120, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* FetchPlayerData(::System::Threading::CancellationToken  token) ;

/// [AsyncStateMachine(typeof(MockWarningServer::<GetOptInFollowUpMessage>d__13))]
/// @brief Method GetOptInFollowUpMessage, addr 0x5a3f0cc, size 0x120, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* GetOptInFollowUpMessage(::System::Threading::CancellationToken  token) ;

static inline ::GlobalNamespace::MockWarningServer* New_ctor() ;

/// @brief Method ShouldShowWarningScreen, addr 0x5a3f1ec, size 0xd0, virtual false, abstract: false, final false
inline bool ShouldShowWarningScreen(int32_t  phase, bool  inOptInCohort) ;

/// @brief Method .ctor, addr 0x5a3f2bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ShownScreenPlayerPref, addr 0x5a3ecc8, size 0x74, virtual false, abstract: false, final false
static inline ::StringW get_ShownScreenPlayerPref() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockWarningServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockWarningServer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MockWarningServer(MockWarningServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockWarningServer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockWarningServer(MockWarningServer const& ) = delete;

/// @brief Field KID_WARNING_CONTINUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_WARNING_CONTINUE_KEY{u"KID_WARNING_CONTINUE"};

/// @brief Field KID_WARNING_FOLLOW_UP_YAY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_WARNING_FOLLOW_UP_YAY_KEY{u"KID_WARNING_FOLLOW_UP_YAY"};

/// @brief Field KID_WARNING_OPT_IN_FOLLOW_MESSAGE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_WARNING_OPT_IN_FOLLOW_MESSAGE_KEY{u"KID_WARNING_OPT_IN_FOLLOW_MESSAGE"};

/// @brief Field KID_WARNING_PHASE_FOUR_RETURNING_PLAYER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_WARNING_PHASE_FOUR_RETURNING_PLAYER_KEY{u"KID_WARNING_PHASE_FOUR_RETURNING_PLAYER"};

/// @brief Field KID_WARNING_PHASE_THREE_IN_COHORT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_WARNING_PHASE_THREE_IN_COHORT_KEY{u"KID_WARNING_PHASE_THREE_IN_COHORT"};

/// @brief Field KID_WARNING_TITLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_WARNING_TITLE_KEY{u"KID_WARNING_TITLE"};

/// @brief Field SHOWN_SCREEN_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  SHOWN_SCREEN_PREFIX{u"screen-shown-"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MockWarningServer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockWarningServer/<>c
class CORDL_TYPE MockWarningServer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MockWarningServer___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Action*  __9__12_0;

/// @brief Field <>9__12_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_1, put=setStaticF___9__12_1)) ::System::Action*  __9__12_1;

/// @brief Field <>9__12_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_2, put=setStaticF___9__12_2)) ::System::Action*  __9__12_2;

/// @brief Field <>9__12_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_3, put=setStaticF___9__12_3)) ::System::Action*  __9__12_3;

/// @brief Field <>9__12_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_4, put=setStaticF___9__12_4)) ::System::Action*  __9__12_4;

/// @brief Field <>9__12_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_5, put=setStaticF___9__12_5)) ::System::Action*  __9__12_5;

static inline ::GlobalNamespace::MockWarningServer___c* New_ctor() ;

/// @brief Method <FetchPlayerData>b__12_0, addr 0x5a3f35c, size 0x24c, virtual false, abstract: false, final false
inline void _FetchPlayerData_b__12_0() ;

/// @brief Method <FetchPlayerData>b__12_1, addr 0x5a3f5a8, size 0x24c, virtual false, abstract: false, final false
inline void _FetchPlayerData_b__12_1() ;

/// @brief Method <FetchPlayerData>b__12_2, addr 0x5a3f7f4, size 0x24c, virtual false, abstract: false, final false
inline void _FetchPlayerData_b__12_2() ;

/// @brief Method <FetchPlayerData>b__12_3, addr 0x5a3fa40, size 0x24c, virtual false, abstract: false, final false
inline void _FetchPlayerData_b__12_3() ;

/// @brief Method <FetchPlayerData>b__12_4, addr 0x5a3fc8c, size 0x24c, virtual false, abstract: false, final false
inline void _FetchPlayerData_b__12_4() ;

/// @brief Method <FetchPlayerData>b__12_5, addr 0x5a3fed8, size 0x24c, virtual false, abstract: false, final false
inline void _FetchPlayerData_b__12_5() ;

/// @brief Method .ctor, addr 0x5a3f354, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MockWarningServer___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__12_0() ;

static inline ::System::Action* getStaticF___9__12_1() ;

static inline ::System::Action* getStaticF___9__12_2() ;

static inline ::System::Action* getStaticF___9__12_3() ;

static inline ::System::Action* getStaticF___9__12_4() ;

static inline ::System::Action* getStaticF___9__12_5() ;

static inline void setStaticF___9(::GlobalNamespace::MockWarningServer___c*  value) ;

static inline void setStaticF___9__12_0(::System::Action*  value) ;

static inline void setStaticF___9__12_1(::System::Action*  value) ;

static inline void setStaticF___9__12_2(::System::Action*  value) ;

static inline void setStaticF___9__12_3(::System::Action*  value) ;

static inline void setStaticF___9__12_4(::System::Action*  value) ;

static inline void setStaticF___9__12_5(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockWarningServer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockWarningServer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MockWarningServer___c(MockWarningServer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockWarningServer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockWarningServer___c(MockWarningServer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MockWarningServer___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
