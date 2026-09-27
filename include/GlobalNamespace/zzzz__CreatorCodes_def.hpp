#pragma once
// IWYU pragma private; include "GlobalNamespace/CreatorCodes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Member_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreatorCodes)
namespace GlobalNamespace {
struct CreatorCodes_CreatorCodeStatus;
}
namespace GlobalNamespace {
class CreatorCodes_CreatorCodesData;
}
namespace GlobalNamespace {
struct CreatorCodes__CheckValidationCoroutineJIT_d__27;
}
namespace GlobalNamespace {
class NexusGroupId;
}
namespace GlobalNamespace {
class NexusManager_MemberCode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class CreatorCodes;
}
namespace GlobalNamespace {
class CreatorCodes_CreatorCodesData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreatorCodes*);
MARK_REF_T(::GlobalNamespace::CreatorCodes_CreatorCodesData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreatorCodes*, "", "CreatorCodes");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreatorCodes_CreatorCodesData*, "", "CreatorCodes/CreatorCodesData");
// Dependencies Member, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreatorCodes
class CORDL_TYPE CreatorCodes : public ::System::Object {
public:
// Declarations
using CreatorCodeStatus = ::GlobalNamespace::CreatorCodes_CreatorCodeStatus;

using CreatorCodesData = ::GlobalNamespace::CreatorCodes_CreatorCodesData;

using _CheckValidationCoroutineJIT_d__27 = ::GlobalNamespace::CreatorCodes__CheckValidationCoroutineJIT_d__27;

/// @brief Field InitializedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InitializedEvent, put=setStaticF_InitializedEvent)) ::System::Action*  InitializedEvent;

/// @brief Field Intialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_Intialized, put=setStaticF_Intialized)) bool  Intialized;

/// @brief Field OnCreatorCodeChangedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCreatorCodeChangedEvent, put=setStaticF_OnCreatorCodeChangedEvent)) ::System::Action_1<::StringW>*  OnCreatorCodeChangedEvent;

/// @brief Field OnCreatorCodeFailureEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCreatorCodeFailureEvent, put=setStaticF_OnCreatorCodeFailureEvent)) ::System::Action_1<::StringW>*  OnCreatorCodeFailureEvent;

/// @brief Field OnCreatorCodeValidEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCreatorCodeValidEvent, put=setStaticF_OnCreatorCodeValidEvent)) ::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*  OnCreatorCodeValidEvent;

/// @brief Field ValidatedCreatorCode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ValidatedCreatorCode, put=setStaticF_ValidatedCreatorCode)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::NexusManager_MemberCode*>*  ValidatedCreatorCode;

/// @brief Field creatorCodeStatus, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_creatorCodeStatus, put=setStaticF_creatorCodeStatus)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CreatorCodes_CreatorCodeStatus>*  creatorCodeStatus;

/// @brief Field data, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_data, put=setStaticF_data)) ::GlobalNamespace::CreatorCodes_CreatorCodesData*  data;

/// @brief Field supportedMember, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_supportedMember, put=setStaticF_supportedMember)) ::GlobalNamespace::Member  supportedMember;

/// @brief Method AppendKey, addr 0x574d8f8, size 0x248, virtual false, abstract: false, final false
static inline void AppendKey(::StringW  id, ::StringW  input) ;

/// [AsyncStateMachine(typeof(CreatorCodes::<CheckValidationCoroutineJIT>d__27))]
/// @brief Method CheckValidationCoroutineJIT, addr 0x574dd7c, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NexusManager_MemberCode*>* CheckValidationCoroutineJIT(::StringW  terminalId, ::StringW  code, ::ArrayW<::GlobalNamespace::NexusGroupId*>  group) ;

/// @brief Method DeleteCharacter, addr 0x574d68c, size 0x26c, virtual false, abstract: false, final false
static inline void DeleteCharacter(::StringW  id) ;

/// @brief Method Initialize, addr 0x574d150, size 0x12c, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method LoadData, addr 0x574d27c, size 0x410, virtual false, abstract: false, final false
static inline void LoadData() ;

/// @brief Method ResetCreatorCode, addr 0x574db40, size 0x18c, virtual false, abstract: false, final false
static inline void ResetCreatorCode(::StringW  id) ;

/// @brief Method SaveData, addr 0x574dccc, size 0xb0, virtual false, abstract: false, final false
static inline void SaveData() ;

/// [CompilerGenerated]
/// @brief Method add_InitializedEvent, addr 0x574cbc8, size 0xdc, virtual false, abstract: false, final false
static inline void add_InitializedEvent(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnCreatorCodeChangedEvent, addr 0x574c9e0, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnCreatorCodeChangedEvent(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnCreatorCodeFailureEvent, addr 0x574cf68, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnCreatorCodeFailureEvent(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnCreatorCodeValidEvent, addr 0x574cd80, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnCreatorCodeValidEvent(::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*  value) ;

/// @brief Method getCurrentCreatorCode, addr 0x574c7c0, size 0x128, virtual false, abstract: false, final false
static inline ::StringW getCurrentCreatorCode(::StringW  id) ;

/// @brief Method getCurrentCreatorCodeStatus, addr 0x574c8e8, size 0xf8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreatorCodes_CreatorCodeStatus getCurrentCreatorCodeStatus(::StringW  id) ;

static inline ::System::Action* getStaticF_InitializedEvent() ;

static inline bool getStaticF_Intialized() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnCreatorCodeChangedEvent() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnCreatorCodeFailureEvent() ;

static inline ::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>* getStaticF_OnCreatorCodeValidEvent() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::NexusManager_MemberCode*>* getStaticF_ValidatedCreatorCode() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CreatorCodes_CreatorCodeStatus>* getStaticF_creatorCodeStatus() ;

static inline ::GlobalNamespace::CreatorCodes_CreatorCodesData* getStaticF_data() ;

static inline ::GlobalNamespace::Member getStaticF_supportedMember() ;

/// [CompilerGenerated]
/// @brief Method remove_InitializedEvent, addr 0x574cca4, size 0xdc, virtual false, abstract: false, final false
static inline void remove_InitializedEvent(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnCreatorCodeChangedEvent, addr 0x574cad4, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnCreatorCodeChangedEvent(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnCreatorCodeFailureEvent, addr 0x574d05c, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnCreatorCodeFailureEvent(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnCreatorCodeValidEvent, addr 0x574ce74, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnCreatorCodeValidEvent(::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*  value) ;

static inline void setStaticF_InitializedEvent(::System::Action*  value) ;

static inline void setStaticF_Intialized(bool  value) ;

static inline void setStaticF_OnCreatorCodeChangedEvent(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnCreatorCodeFailureEvent(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnCreatorCodeValidEvent(::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*  value) ;

static inline void setStaticF_ValidatedCreatorCode(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::NexusManager_MemberCode*>*  value) ;

static inline void setStaticF_creatorCodeStatus(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CreatorCodes_CreatorCodeStatus>*  value) ;

static inline void setStaticF_data(::GlobalNamespace::CreatorCodes_CreatorCodesData*  value) ;

static inline void setStaticF_supportedMember(::GlobalNamespace::Member  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreatorCodes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreatorCodes(CreatorCodes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreatorCodes(CreatorCodes const& ) = delete;

/// @brief Field DAYS_TO_STORE_CODE offset 0xffffffff size 0x4
static constexpr int32_t  DAYS_TO_STORE_CODE{static_cast<int32_t>(0xe)};

/// @brief Field MAX_CODE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CODE_LENGTH{static_cast<int32_t>(0xa)};

/// @brief Field PLAYER_PREF_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PLAYER_PREF_KEY{u"CreatorCodes_Store"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1300};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CreatorCodes) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreatorCodes/CreatorCodesData
class CORDL_TYPE CreatorCodes_CreatorCodesData : public ::System::Object {
public:
// Declarations
/// @brief Field codeFirstUsedTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_codeFirstUsedTime, put=__cordl_internal_set_codeFirstUsedTime)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::DateTime>*  codeFirstUsedTime;

/// @brief Field currentCreatorCode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentCreatorCode, put=__cordl_internal_set_currentCreatorCode)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  currentCreatorCode;

static inline ::GlobalNamespace::CreatorCodes_CreatorCodesData* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::DateTime>* const& __cordl_internal_get_codeFirstUsedTime() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::DateTime>*& __cordl_internal_get_codeFirstUsedTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_currentCreatorCode() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_currentCreatorCode() ;

constexpr void __cordl_internal_set_codeFirstUsedTime(::System::Collections::Generic::Dictionary_2<::StringW,::System::DateTime>*  value) ;

constexpr void __cordl_internal_set_currentCreatorCode(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x574df40, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreatorCodes_CreatorCodesData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodes_CreatorCodesData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreatorCodes_CreatorCodesData(CreatorCodes_CreatorCodesData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodes_CreatorCodesData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreatorCodes_CreatorCodesData(CreatorCodes_CreatorCodesData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1298};

/// @brief Field currentCreatorCode, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___currentCreatorCode;

/// @brief Field codeFirstUsedTime, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::DateTime>*  ___codeFirstUsedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreatorCodes_CreatorCodesData, ___currentCreatorCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreatorCodes_CreatorCodesData, ___codeFirstUsedTime) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreatorCodes_CreatorCodesData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
