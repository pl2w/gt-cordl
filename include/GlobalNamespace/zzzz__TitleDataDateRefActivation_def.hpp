#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleDataDateRefActivation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TitleDataDateRefActivation_ReadyState_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TitleDataDateRefActivation)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct TitleDataDateRefActivation_ReadyState;
}
namespace GlobalNamespace {
class TitleDataDateRefActivation_TitleDataDateRefActivationTarget;
}
namespace GlobalNamespace {
struct TitleDataDateRefActivation__Initialize_d__8;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TitleDataDateRefActivation;
}
namespace GlobalNamespace {
class TitleDataDateRefActivation_TitleDataDateRefActivationTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TitleDataDateRefActivation*);
MARK_REF_T(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataDateRefActivation*, "", "TitleDataDateRefActivation");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*, "", "TitleDataDateRefActivation/TitleDataDateRefActivationTarget");
// Dependencies TitleDataDateRefActivation::ReadyState, TitleDataDateRefActivation::TitleDataDateRefActivationTarget, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleDataDateRefActivation
class CORDL_TYPE TitleDataDateRefActivation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ReadyState = ::GlobalNamespace::TitleDataDateRefActivation_ReadyState;

using TitleDataDateRefActivationTarget = ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget;

using _Initialize_d__8 = ::GlobalNamespace::TitleDataDateRefActivation__Initialize_d__8;

/// @brief Field activations, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_activations, put=__cordl_internal_set_activations)) int32_t  activations;

/// @brief Field nodeList, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeList, put=__cordl_internal_set_nodeList)) ::System::Collections::Generic::List_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*  nodeList;

/// @brief Field nodes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>  nodes;

/// @brief Field readyState, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_readyState, put=__cordl_internal_set_readyState)) ::GlobalNamespace::TitleDataDateRefActivation_ReadyState  readyState;

/// @brief Field titleDataKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

/// @brief Field tmpStatus, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpStatus, put=__cordl_internal_set_tmpStatus)) ::UnityW<::TMPro::TMP_Text>  tmpStatus;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x5b380f8, size 0x324, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

/// [AsyncStateMachine(typeof(TitleDataDateRefActivation::<Initialize>d__8))]
/// @brief Method Initialize, addr 0x5b37b14, size 0xa8, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::TitleDataDateRefActivation* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b380ec, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b380cc, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StartNow, addr 0x5b37ebc, size 0xcc, virtual false, abstract: false, final false
inline void StartNow(float_t  delay) ;

constexpr int32_t const& __cordl_internal_get_activations() const;

constexpr int32_t& __cordl_internal_get_activations() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>* const& __cordl_internal_get_nodeList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*& __cordl_internal_get_nodeList() ;

constexpr ::ArrayW<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>& __cordl_internal_get_nodes() ;

constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState const& __cordl_internal_get_readyState() const;

constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState& __cordl_internal_get_readyState() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tmpStatus() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tmpStatus() ;

constexpr void __cordl_internal_set_activations(int32_t  value) ;

constexpr void __cordl_internal_set_nodeList(::System::Collections::Generic::List_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>  value) ;

constexpr void __cordl_internal_set_readyState(::GlobalNamespace::TitleDataDateRefActivation_ReadyState  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_tmpStatus(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5b384d4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method onTD, addr 0x5b37bbc, size 0x188, virtual false, abstract: false, final false
inline void onTD(::StringW  s) ;

/// @brief Method onTDError, addr 0x5b38030, size 0x9c, virtual false, abstract: false, final false
inline void onTDError(::PlayFab::PlayFabError*  error) ;

/// @brief Method setStartDate, addr 0x5b37d44, size 0x178, virtual false, abstract: false, final false
inline void setStartDate(::System::DateTime  d) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataDateRefActivation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataDateRefActivation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataDateRefActivation(TitleDataDateRefActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataDateRefActivation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataDateRefActivation(TitleDataDateRefActivation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3689};

/// [SerializeField]
/// @brief Field titleDataKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// [SerializeField]
/// @brief Field nodes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>  ___nodes;

/// [SerializeField]
/// @brief Field tmpStatus, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tmpStatus;

/// @brief Field readyState, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::TitleDataDateRefActivation_ReadyState  ___readyState;

/// @brief Field nodeList, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*  ___nodeList;

/// @brief Field activations, offset: 0x48, size: 0x4, def value: None
 int32_t  ___activations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation, ___titleDataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation, ___nodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation, ___tmpStatus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation, ___readyState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation, ___nodeList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation, ___activations) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataDateRefActivation) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleDataDateRefActivation/TitleDataDateRefActivationTarget
class CORDL_TYPE TitleDataDateRefActivation_TitleDataDateRefActivationTarget : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActivationTime)) ::System::DateTime  ActivationTime;

 __declspec(property(get=get_GameObject)) ::UnityW<::UnityEngine::GameObject>  GameObject;

/// @brief Field activationState, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_activationState, put=__cordl_internal_set_activationState)) bool  activationState;

/// @brief Field dateTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dateTime, put=__cordl_internal_set_dateTime)) ::System::DateTime  dateTime;

/// @brief Field gameObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field hrs, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_hrs, put=__cordl_internal_set_hrs)) int32_t  hrs;

/// @brief Field min, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) int32_t  min;

/// @brief Field payload, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_payload, put=__cordl_internal_set_payload)) ::UnityEngine::Events::UnityEvent*  payload;

/// @brief Field persistantPayload, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_persistantPayload, put=__cordl_internal_set_persistantPayload)) ::UnityEngine::Events::UnityEvent_1<float_t>*  persistantPayload;

/// @brief Field sec, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sec, put=__cordl_internal_set_sec)) int32_t  sec;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*() noexcept;

/// @brief Method Activate, addr 0x5b38648, size 0x8, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Activate, addr 0x5b3856c, size 0xdc, virtual false, abstract: false, final false
inline void Activate(float_t  late) ;

/// @brief Method Activate, addr 0x5b3841c, size 0xb8, virtual false, abstract: false, final false
inline void Activate(::System::DateTime  now) ;

/// @brief Method Initialize, addr 0x5b37f88, size 0xa8, virtual false, abstract: false, final false
inline void Initialize(::System::DateTime  refTime) ;

static inline ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget* New_ctor() ;

/// @brief Method System.IComparable<TitleDataDateRefActivation.TitleDataDateRefActivationTarget>.CompareTo, addr 0x5b38650, size 0x54, virtual true, abstract: false, final true
inline int32_t System_IComparable_TitleDataDateRefActivation_TitleDataDateRefActivationTarget__CompareTo(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*  other) ;

constexpr bool const& __cordl_internal_get_activationState() const;

constexpr bool& __cordl_internal_get_activationState() ;

constexpr ::System::DateTime const& __cordl_internal_get_dateTime() const;

constexpr ::System::DateTime& __cordl_internal_get_dateTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr int32_t const& __cordl_internal_get_hrs() const;

constexpr int32_t& __cordl_internal_get_hrs() ;

constexpr int32_t const& __cordl_internal_get_min() const;

constexpr int32_t& __cordl_internal_get_min() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_payload() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_payload() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_persistantPayload() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_persistantPayload() ;

constexpr int32_t const& __cordl_internal_get_sec() const;

constexpr int32_t& __cordl_internal_get_sec() ;

constexpr void __cordl_internal_set_activationState(bool  value) ;

constexpr void __cordl_internal_set_dateTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hrs(int32_t  value) ;

constexpr void __cordl_internal_set_min(int32_t  value) ;

constexpr void __cordl_internal_set_payload(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_persistantPayload(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_sec(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b386a4, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivationTime, addr 0x5b38564, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_ActivationTime() ;

/// @brief Method get_GameObject, addr 0x5b3855c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_GameObject() ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>"
constexpr ::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>* i___System__IComparable_1___GlobalNamespace__TitleDataDateRefActivation_TitleDataDateRefActivationTarget__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataDateRefActivation_TitleDataDateRefActivationTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataDateRefActivation_TitleDataDateRefActivationTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataDateRefActivation_TitleDataDateRefActivationTarget(TitleDataDateRefActivation_TitleDataDateRefActivationTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataDateRefActivation_TitleDataDateRefActivationTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataDateRefActivation_TitleDataDateRefActivationTarget(TitleDataDateRefActivation_TitleDataDateRefActivationTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3687};

/// [SerializeField]
/// @brief Field activationState, offset: 0x10, size: 0x1, def value: None
 bool  ___activationState;

/// [SerializeField]
/// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// [SerializeField]
/// @brief Field hrs, offset: 0x20, size: 0x4, def value: None
 int32_t  ___hrs;

/// [SerializeField]
/// @brief Field min, offset: 0x24, size: 0x4, def value: None
 int32_t  ___min;

/// [SerializeField]
/// @brief Field sec, offset: 0x28, size: 0x4, def value: None
 int32_t  ___sec;

/// [SerializeField]
/// @brief Field payload, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___payload;

/// [SerializeField]
/// @brief Field persistantPayload, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___persistantPayload;

/// @brief Field dateTime, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___dateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget, ___activationState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget, ___hrs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget, ___min) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget, ___sec) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget, ___payload) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget, ___persistantPayload) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget, ___dateTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
