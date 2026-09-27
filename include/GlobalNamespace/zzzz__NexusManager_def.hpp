#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Member_def.hpp"
#include "GlobalNamespace/zzzz__NexusManager_Environment_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NexusManager)
namespace GlobalNamespace {
struct Member;
}
namespace GlobalNamespace {
class NexusGroupId;
}
namespace GlobalNamespace {
struct NexusManager_Environment;
}
namespace GlobalNamespace {
struct NexusManager_GetMembersRequest;
}
namespace GlobalNamespace {
class NexusManager_MemberCode;
}
namespace GlobalNamespace {
struct NexusManager__VerifyCreatorCodeJIT_d__15;
}
namespace GlobalNamespace {
struct NexusManager__VerifyCreatorCode_d__14;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NexusManager;
}
namespace GlobalNamespace {
class NexusManager_MemberCode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NexusManager*);
MARK_REF_T(::GlobalNamespace::NexusManager_MemberCode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NexusManager*, "", "NexusManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NexusManager_MemberCode*, "", "NexusManager/MemberCode");
// Dependencies Member, NexusManager::Environment, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NexusManager
class CORDL_TYPE NexusManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Environment = ::GlobalNamespace::NexusManager_Environment;

using GetMembersRequest = ::GlobalNamespace::NexusManager_GetMembersRequest;

using MemberCode = ::GlobalNamespace::NexusManager_MemberCode;

using _VerifyCreatorCodeJIT_d__15 = ::GlobalNamespace::NexusManager__VerifyCreatorCodeJIT_d__15;

using _VerifyCreatorCode_d__14 = ::GlobalNamespace::NexusManager__VerifyCreatorCode_d__14;

 __declspec(property(get=get_CurrentEnvironment)) ::GlobalNamespace::NexusManager_Environment  CurrentEnvironment;

/// @brief Field environment, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_environment, put=__cordl_internal_set_environment)) ::GlobalNamespace::NexusManager_Environment  environment;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::NexusManager>  instance;

/// @brief Field validatedMembers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_validatedMembers, put=__cordl_internal_set_validatedMembers)) ::ArrayW<::GlobalNamespace::Member>  validatedMembers;

/// @brief Method Awake, addr 0x5776ff0, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::NexusManager* New_ctor() ;

/// @brief Method Start, addr 0x57770c0, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(NexusManager::<VerifyCreatorCode>d__14))]
/// @brief Method VerifyCreatorCode, addr 0x5777168, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::Member>* VerifyCreatorCode(::StringW  terminalId, ::StringW  code, ::GlobalNamespace::NexusGroupId*  id) ;

/// [AsyncStateMachine(typeof(NexusManager::<VerifyCreatorCodeJIT>d__15))]
/// @brief Method VerifyCreatorCodeJIT, addr 0x57772a4, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* VerifyCreatorCodeJIT(::StringW  memberCode, ::StringW  groupCode) ;

constexpr ::GlobalNamespace::NexusManager_Environment const& __cordl_internal_get_environment() const;

constexpr ::GlobalNamespace::NexusManager_Environment& __cordl_internal_get_environment() ;

constexpr ::ArrayW<::GlobalNamespace::Member> const& __cordl_internal_get_validatedMembers() const;

constexpr ::ArrayW<::GlobalNamespace::Member>& __cordl_internal_get_validatedMembers() ;

constexpr void __cordl_internal_set_environment(::GlobalNamespace::NexusManager_Environment  value) ;

constexpr void __cordl_internal_set_validatedMembers(::ArrayW<::GlobalNamespace::Member>  value) ;

/// @brief Method .ctor, addr 0x57773c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::NexusManager> getStaticF_instance() ;

/// @brief Method get_CurrentEnvironment, addr 0x5776fe8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NexusManager_Environment get_CurrentEnvironment() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::NexusManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NexusManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NexusManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NexusManager(NexusManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NexusManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NexusManager(NexusManager const& ) = delete;

/// @brief Field ENV_PRODUCTION offset 0xffffffff size 0x8
static constexpr ::ConstString  ENV_PRODUCTION{u"production"};

/// @brief Field ENV_PRODUCTION_PUBLIC_API_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ENV_PRODUCTION_PUBLIC_API_KEY{u"nexus_pk_4c18dcb1531846c7abad4cb00c5242bb"};

/// @brief Field ENV_SANDBOX offset 0xffffffff size 0x8
static constexpr ::ConstString  ENV_SANDBOX{u"sandbox"};

/// @brief Field ENV_SANDBOX_PUBLIC_API_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ENV_SANDBOX_PUBLIC_API_KEY{u"nexus_pk_ba155a8c229740489d214f024e25f25c"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1380};

/// @brief Field environment, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::NexusManager_Environment  ___environment;

/// @brief Field validatedMembers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Member>  ___validatedMembers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NexusManager, ___environment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NexusManager, ___validatedMembers) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NexusManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NexusManager/MemberCode
class CORDL_TYPE NexusManager_MemberCode : public ::System::Object {
public:
// Declarations
/// @brief Field <groupId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupId_k__BackingField, put=__cordl_internal_set__groupId_k__BackingField)) ::UnityW<::GlobalNamespace::NexusGroupId>  _groupId_k__BackingField;

/// @brief Field <memberCode>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__memberCode_k__BackingField, put=__cordl_internal_set__memberCode_k__BackingField)) ::StringW  _memberCode_k__BackingField;

 __declspec(property(get=get_groupId, put=set_groupId)) ::UnityW<::GlobalNamespace::NexusGroupId>  groupId;

 __declspec(property(get=get_memberCode, put=set_memberCode)) ::StringW  memberCode;

static inline ::GlobalNamespace::NexusManager_MemberCode* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::NexusGroupId> const& __cordl_internal_get__groupId_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::NexusGroupId>& __cordl_internal_get__groupId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__memberCode_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__memberCode_k__BackingField() ;

constexpr void __cordl_internal_set__groupId_k__BackingField(::UnityW<::GlobalNamespace::NexusGroupId>  value) ;

constexpr void __cordl_internal_set__memberCode_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x57773f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_groupId, addr 0x57773e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::NexusGroupId> get_groupId() ;

/// [CompilerGenerated]
/// @brief Method get_memberCode, addr 0x57773d0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_memberCode() ;

/// [CompilerGenerated]
/// @brief Method set_groupId, addr 0x57773e8, size 0x8, virtual false, abstract: false, final false
inline void set_groupId(::GlobalNamespace::NexusGroupId*  value) ;

/// [CompilerGenerated]
/// @brief Method set_memberCode, addr 0x57773d8, size 0x8, virtual false, abstract: false, final false
inline void set_memberCode(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NexusManager_MemberCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NexusManager_MemberCode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NexusManager_MemberCode(NexusManager_MemberCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NexusManager_MemberCode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NexusManager_MemberCode(NexusManager_MemberCode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1376};

/// [CompilerGenerated]
/// @brief Field <memberCode>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____memberCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <groupId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NexusGroupId>  ____groupId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NexusManager_MemberCode, ____memberCode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NexusManager_MemberCode, ____groupId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NexusManager_MemberCode) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
