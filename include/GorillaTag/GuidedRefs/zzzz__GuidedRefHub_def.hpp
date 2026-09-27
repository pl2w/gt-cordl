#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefHub.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefReceiverMono_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefTargetMono_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidedRefHub)
namespace GorillaTag::GuidedRefs::Internal {
class RelayInfo;
}
namespace GorillaTag::GuidedRefs {
class GuidedRefHubIdSO;
}
namespace GorillaTag::GuidedRefs {
template<typename TIGuidedRefReceiverMono>
class GuidedRefHub___c__DisplayClass25_0_1;
}
namespace GorillaTag::GuidedRefs {
struct GuidedRefReceiverArrayInfo;
}
namespace GorillaTag::GuidedRefs {
struct GuidedRefReceiverFieldInfo;
}
namespace GorillaTag::GuidedRefs {
class GuidedRefTargetIdSO;
}
namespace GorillaTag::GuidedRefs {
struct GuidedRefTryResolveInfo;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefMonoBehaviour;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefReceiverMono;
}
namespace GorillaTag::GuidedRefs {
struct RegisteredReceiverFieldInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class GuidedRefHub;
}
namespace GorillaTag::GuidedRefs {
template<typename TIGuidedRefReceiverMono>
class GuidedRefHub___c__DisplayClass25_0_1;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::GuidedRefHub*);
MARK_GEN_REF_T_PTR(::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefHub*, "GorillaTag.GuidedRefs", "GuidedRefHub");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1, "GorillaTag.GuidedRefs", "GuidedRefHub/<>c__DisplayClass25_0`1");
// [DefaultExecutionOrder(-2147483648)]
// Dependencies GorillaTag.GuidedRefs.IGuidedRefReceiverMono, GorillaTag.GuidedRefs.IGuidedRefTargetMono, UnityEngine.MonoBehaviour, UnityEngine.Object
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.GuidedRefHub
class CORDL_TYPE GuidedRefHub : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
template<typename TIGuidedRefReceiverMono>
using __c__DisplayClass25_0_1 = ::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>;

/// @brief Field globalHubsTransientList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_globalHubsTransientList, put=setStaticF_globalHubsTransientList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*  globalHubsTransientList;

/// @brief Field globalLookupHubsThatHaveRegisteredInstId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_globalLookupHubsThatHaveRegisteredInstId, put=setStaticF_globalLookupHubsThatHaveRegisteredInstId)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>*  globalLookupHubsThatHaveRegisteredInstId;

/// @brief Field globalLookupRefInstIDsByHub, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_globalLookupRefInstIDsByHub, put=setStaticF_globalLookupRefInstIDsByHub)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>,::System::Collections::Generic::List_1<int32_t>*>*  globalLookupRefInstIDsByHub;

/// @brief Field hasRootInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasRootInstance, put=setStaticF_hasRootInstance)) bool  hasRootInstance;

/// @brief Field hubId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hubId, put=__cordl_internal_set_hubId)) ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  hubId;

/// @brief Field isRootInstance, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRootInstance, put=__cordl_internal_set_isRootInstance)) bool  isRootInstance;

/// @brief Field kReceiversFullyRegistered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kReceiversFullyRegistered, put=setStaticF_kReceiversFullyRegistered)) ::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*  kReceiversFullyRegistered;

/// @brief Field kReceiversWaitingToFullyResolve, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kReceiversWaitingToFullyResolve, put=setStaticF_kReceiversWaitingToFullyResolve)) ::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*  kReceiversWaitingToFullyResolve;

/// @brief Field lookupRelayInfoByTargetId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookupRelayInfoByTargetId, put=__cordl_internal_set_lookupRelayInfoByTargetId)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>,::GorillaTag::GuidedRefs::Internal::RelayInfo*>*  lookupRelayInfoByTargetId;

/// @brief Field rootInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rootInstance, put=setStaticF_rootInstance)) ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>  rootInstance;

/// @brief Field static_relayInfo_to_targetId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_static_relayInfo_to_targetId, put=setStaticF_static_relayInfo_to_targetId)) ::System::Collections::Generic::Dictionary_2<::GorillaTag::GuidedRefs::Internal::RelayInfo*,::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>*  static_relayInfo_to_targetId;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Method Awake, addr 0x5d44040, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckAndNotifyIfReceiverFullyResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
static inline void CheckAndNotifyIfReceiverFullyResolved(TIGuidedRefReceiverMono  receiverMono) ;

/// @brief Method GetFieldNameByID, addr 0x5d450f4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetFieldNameByID(int32_t  fieldId) ;

/// @brief Method GetHubsThatHaveRegisteredInstId, addr 0x5d44998, size 0x124, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>* GetHubsThatHaveRegisteredInstId(int32_t  instanceId) ;

/// @brief Method GetOrAddRelayInfoByTargetId, addr 0x5d44abc, size 0x23c, virtual false, abstract: false, final false
inline ::GorillaTag::GuidedRefs::Internal::RelayInfo* GetOrAddRelayInfoByTargetId(::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*  targetId) ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform, addr 0x5d453e8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID, addr 0x5d453f0, size 0x8, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID() ;

/// @brief Method GuidedRefInitialize, addr 0x5d44044, size 0x318, virtual true, abstract: false, final true
inline void GuidedRefInitialize() ;

/// @brief Method IsInstanceIDRegisteredWithAnyHub, addr 0x5d44634, size 0x80, virtual false, abstract: false, final false
static inline bool IsInstanceIDRegisteredWithAnyHub(int32_t  instanceID) ;

static inline ::GorillaTag::GuidedRefs::GuidedRefHub* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d4435c, size 0x2d8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ReceiverFullyRegistered, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
static inline void ReceiverFullyRegistered(TIGuidedRefReceiverMono  receiverMono) ;

/// @brief Method RegisterReceiverArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono,typename T>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline void RegisterReceiverArray(TIGuidedRefReceiverMono  receiverMono, ::StringW  fieldIdName, ::by_ref<::ArrayW<T>>  receiverArray, ::by_ref<::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo>  arrayInfo) ;

/// @brief Method RegisterReceiverField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
static inline void RegisterReceiverField(TIGuidedRefReceiverMono  receiverMono, ::StringW  fieldIdName, ::by_ref<::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo>  fieldInfo) ;

/// @brief Method RegisterReceiverField, addr 0x5d446b4, size 0x2e4, virtual false, abstract: false, final false
inline void RegisterReceiverField(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo  registeredReceiverFieldInfo, ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*  targetId) ;

/// @brief Method RegisterReceiverField_Internal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
static inline void RegisterReceiverField_Internal(::GorillaTag::GuidedRefs::GuidedRefHubIdSO*  hubId, TIGuidedRefReceiverMono  receiverMono, int32_t  fieldId, ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*  targetId, int32_t  index) ;

/// @brief Method RegisterTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefTargetMono>
requires(::cordl_internals::type_constraint<TIGuidedRefTargetMono, ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>)
static inline void RegisterTarget(TIGuidedRefTargetMono  targetMono, ::ArrayW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO*>  hubIds, ::UnityEngine::Component*  debugCaller) ;

/// @brief Method RegisterTarget_Internal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefTargetMono>
requires(::cordl_internals::type_constraint<TIGuidedRefTargetMono, ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>)
inline void RegisterTarget_Internal(TIGuidedRefTargetMono  targetMono) ;

/// @brief Method ResolveReferences, addr 0x5d44cf8, size 0x3f4, virtual false, abstract: false, final false
static inline void ResolveReferences(::GorillaTag::GuidedRefs::Internal::RelayInfo*  relayInfo) ;

/// @brief Method TryResolveArrayItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono,typename T>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline bool TryResolveArrayItem(TIGuidedRefReceiverMono  receiverMono, ::System::Collections::Generic::IList_1<T>*  receivingArray, ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  receiverArrayInfo, ::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  tryResolveInfo) ;

/// @brief Method TryResolveArrayItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono,typename T>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline bool TryResolveArrayItem(TIGuidedRefReceiverMono  receiverMono, ::System::Collections::Generic::IList_1<T>*  receivingArray, ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  receiverArrayInfo, ::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  tryResolveInfo, ::by_ref<bool>  arrayResolved) ;

/// @brief Method TryResolveField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono,typename T>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline bool TryResolveField(TIGuidedRefReceiverMono  receiverMono, ::by_ref<T>  refReceiverObj, ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  receiverFieldInfo, ::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  tryResolveInfo) ;

/// @brief Method UnregisterReceiver, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
static inline void UnregisterReceiver(TIGuidedRefReceiverMono  receiverMono) ;

/// @brief Method UnregisterTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIGuidedRefTargetMono>
requires(::cordl_internals::type_constraint<TIGuidedRefTargetMono, ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>)
static inline void UnregisterTarget(TIGuidedRefTargetMono  targetMono, bool  destroyed) ;

constexpr ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO> const& __cordl_internal_get_hubId() const;

constexpr ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>& __cordl_internal_get_hubId() ;

constexpr bool const& __cordl_internal_get_isRootInstance() const;

constexpr bool& __cordl_internal_get_isRootInstance() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>,::GorillaTag::GuidedRefs::Internal::RelayInfo*>* const& __cordl_internal_get_lookupRelayInfoByTargetId() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>,::GorillaTag::GuidedRefs::Internal::RelayInfo*>*& __cordl_internal_get_lookupRelayInfoByTargetId() ;

constexpr void __cordl_internal_set_hubId(::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  value) ;

constexpr void __cordl_internal_set_isRootInstance(bool  value) ;

constexpr void __cordl_internal_set_lookupRelayInfoByTargetId(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>,::GorillaTag::GuidedRefs::Internal::RelayInfo*>*  value) ;

/// @brief Method .ctor, addr 0x5d45134, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>* getStaticF_globalHubsTransientList() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>* getStaticF_globalLookupHubsThatHaveRegisteredInstId() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>,::System::Collections::Generic::List_1<int32_t>*>* getStaticF_globalLookupRefInstIDsByHub() ;

static inline bool getStaticF_hasRootInstance() ;

static inline ::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>* getStaticF_kReceiversFullyRegistered() ;

static inline ::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>* getStaticF_kReceiversWaitingToFullyResolve() ;

static inline ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub> getStaticF_rootInstance() ;

static inline ::System::Collections::Generic::Dictionary_2<::GorillaTag::GuidedRefs::Internal::RelayInfo*,::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>* getStaticF_static_relayInfo_to_targetId() ;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

static inline void setStaticF_globalHubsTransientList(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*  value) ;

static inline void setStaticF_globalLookupHubsThatHaveRegisteredInstId(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>*  value) ;

static inline void setStaticF_globalLookupRefInstIDsByHub(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>,::System::Collections::Generic::List_1<int32_t>*>*  value) ;

static inline void setStaticF_hasRootInstance(bool  value) ;

static inline void setStaticF_kReceiversFullyRegistered(::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*  value) ;

static inline void setStaticF_kReceiversWaitingToFullyResolve(::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*  value) ;

static inline void setStaticF_rootInstance(::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>  value) ;

static inline void setStaticF_static_relayInfo_to_targetId(::System::Collections::Generic::Dictionary_2<::GorillaTag::GuidedRefs::Internal::RelayInfo*,::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefHub() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefHub", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidedRefHub(GuidedRefHub && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefHub", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidedRefHub(GuidedRefHub const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4720};

/// @brief Field kUnsuppliedCallerName offset 0xffffffff size 0x8
static constexpr ::ConstString  kUnsuppliedCallerName{u"UNSUPPLIED_CALLER_NAME"};

/// [SerializeField]
/// @brief Field isRootInstance, offset: 0x20, size: 0x1, def value: None
 bool  ___isRootInstance;

/// @brief Field hubId, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  ___hubId;

/// [DebugReadout]
/// @brief Field lookupRelayInfoByTargetId, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>,::GorillaTag::GuidedRefs::Internal::RelayInfo*>*  ___lookupRelayInfoByTargetId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefHub, ___isRootInstance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefHub, ___hubId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefHub, ___lookupRelayInfoByTargetId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefHub) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::GuidedRefs {
// cpp template
template<typename TIGuidedRefReceiverMono>
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.GuidedRefHub/<>c__DisplayClass25_0`1<TIGuidedRefReceiverMono>
class CORDL_TYPE GuidedRefHub___c__DisplayClass25_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Predicate_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  __9__0;

/// @brief Field iReceiverMono, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_iReceiverMono, put=__cordl_internal_set_iReceiverMono)) ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*  iReceiverMono;

static inline ::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>* New_ctor() ;

/// @brief Method <UnregisterReceiver>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _UnregisterReceiver_b__0(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo  fieldInfo) ;

constexpr ::System::Predicate_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Predicate_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*& __cordl_internal_get___9__0() ;

constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono* const& __cordl_internal_get_iReceiverMono() const;

constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*& __cordl_internal_get_iReceiverMono() ;

constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  value) ;

constexpr void __cordl_internal_set_iReceiverMono(::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefHub___c__DisplayClass25_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefHub___c__DisplayClass25_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidedRefHub___c__DisplayClass25_0_1(GuidedRefHub___c__DisplayClass25_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefHub___c__DisplayClass25_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidedRefHub___c__DisplayClass25_0_1(GuidedRefHub___c__DisplayClass25_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4719};

/// @brief Field iReceiverMono, offset: 0x10, size: 0x8, def value: None
 ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*  ___iReceiverMono;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Predicate_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::GuidedRefs
