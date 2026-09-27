#pragma once
// IWYU pragma private; include "Fusion/RunnerVisibilityLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__RunnerVisibilityLink_ComponentType_def.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_PreferredRunners_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RunnerVisibilityLink)
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
struct RunnerVisibilityLink_ComponentType;
}
namespace GlobalNamespace {
struct RunnerVisibilityLink_PreferredRunners;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Fusion {
class RunnerVisibilityLink;
}
// Write type traits
MARK_REF_T(::Fusion::RunnerVisibilityLink*);
DEFINE_IL2CPP_CLASS(::Fusion::RunnerVisibilityLink*, "Fusion", "RunnerVisibilityLink");
// [AddComponentMenu("")]
// Dependencies Fusion.RunnerVisibilityLink::ComponentType, Fusion.RunnerVisibilityLink::PreferredRunners, UnityEngine.MonoBehaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RunnerVisibilityLink
class CORDL_TYPE RunnerVisibilityLink : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ComponentType = ::GlobalNamespace::RunnerVisibilityLink_ComponentType;

using PreferredRunners = ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners;

/// @brief Field Component, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Component, put=__cordl_internal_set_Component)) ::UnityW<::UnityEngine::Component>  Component;

 __declspec(property(get=get_DefaultState, put=set_DefaultState)) bool  DefaultState;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

/// @brief Field Guid, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Guid, put=__cordl_internal_set_Guid)) ::StringW  Guid;

 __declspec(property(get=get_IsOnSingleRunner, put=set_IsOnSingleRunner)) bool  IsOnSingleRunner;

/// @brief Field PreferredRunner, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreferredRunner, put=__cordl_internal_set_PreferredRunner)) ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  PreferredRunner;

/// @brief Field <IsOnSingleRunner>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOnSingleRunner_k__BackingField, put=__cordl_internal_set__IsOnSingleRunner_k__BackingField)) bool  _IsOnSingleRunner_k__BackingField;

/// @brief Field _componentType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__componentType, put=__cordl_internal_set__componentType)) ::GlobalNamespace::RunnerVisibilityLink_ComponentType  _componentType;

/// @brief Field _networkObject, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkObject, put=__cordl_internal_set__networkObject)) ::UnityW<::Fusion::NetworkObject>  _networkObject;

/// @brief Field _originalState, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__originalState, put=__cordl_internal_set__originalState)) bool  _originalState;

/// @brief Field _runner, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__runner, put=__cordl_internal_set__runner)) ::UnityW<::Fusion::NetworkRunner>  _runner;

/// @brief Field _showAtRuntime, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__showAtRuntime, put=__cordl_internal_set__showAtRuntime)) bool  _showAtRuntime;

/// @brief Method AssociateComponent, addr 0x60f5f34, size 0x15c, virtual false, abstract: false, final false
inline bool AssociateComponent(::UnityEngine::Component*  component) ;

/// @brief Method Awake, addr 0x60f61f0, size 0x18, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0x60e8eb0, size 0x33c, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::Component*  comp, ::Fusion::NetworkRunner*  runner) ;

/// @brief Method InvokeRefreshCommonObjectVisibilities, addr 0x60e968c, size 0x68, virtual false, abstract: false, final false
inline void InvokeRefreshCommonObjectVisibilities(float_t  time) ;

/// @brief Method IsInputAuth, addr 0x60e94b4, size 0x98, virtual false, abstract: false, final false
inline bool IsInputAuth() ;

static inline ::Fusion::RunnerVisibilityLink* New_ctor() ;

/// @brief Method OnDestroy, addr 0x60f6208, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValidate, addr 0x60f6090, size 0x160, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0x60f5ee8, size 0x4c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method RetryRefreshCommonLinks, addr 0x60f625c, size 0x4c, virtual false, abstract: false, final false
inline void RetryRefreshCommonLinks() ;

/// @brief Method SetEnabled, addr 0x60e9468, size 0x4c, virtual false, abstract: false, final false
inline void SetEnabled(bool  enabled) ;

/// @brief Method SetupOnSingleRunnerLink, addr 0x60f4240, size 0x10, virtual false, abstract: false, final false
inline void SetupOnSingleRunnerLink(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  preferredRunner) ;

constexpr ::UnityW<::UnityEngine::Component> const& __cordl_internal_get_Component() const;

constexpr ::UnityW<::UnityEngine::Component>& __cordl_internal_get_Component() ;

constexpr ::StringW const& __cordl_internal_get_Guid() const;

constexpr ::StringW& __cordl_internal_get_Guid() ;

constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners const& __cordl_internal_get_PreferredRunner() const;

constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners& __cordl_internal_get_PreferredRunner() ;

constexpr bool const& __cordl_internal_get__IsOnSingleRunner_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOnSingleRunner_k__BackingField() ;

constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType const& __cordl_internal_get__componentType() const;

constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType& __cordl_internal_get__componentType() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get__networkObject() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get__networkObject() ;

constexpr bool const& __cordl_internal_get__originalState() const;

constexpr bool& __cordl_internal_get__originalState() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__runner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__runner() ;

constexpr bool const& __cordl_internal_get__showAtRuntime() const;

constexpr bool& __cordl_internal_get__showAtRuntime() ;

constexpr void __cordl_internal_set_Component(::UnityW<::UnityEngine::Component>  value) ;

constexpr void __cordl_internal_set_Guid(::StringW  value) ;

constexpr void __cordl_internal_set_PreferredRunner(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  value) ;

constexpr void __cordl_internal_set__IsOnSingleRunner_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__componentType(::GlobalNamespace::RunnerVisibilityLink_ComponentType  value) ;

constexpr void __cordl_internal_set__networkObject(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set__originalState(bool  value) ;

constexpr void __cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set__showAtRuntime(bool  value) ;

/// @brief Method .ctor, addr 0x60f62a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultState, addr 0x60f5dfc, size 0x8, virtual false, abstract: false, final false
inline bool get_DefaultState() ;

/// @brief Method get_Enabled, addr 0x60f5e0c, size 0xdc, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// [CompilerGenerated]
/// @brief Method get_IsOnSingleRunner, addr 0x60f5dec, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOnSingleRunner() ;

/// @brief Method set_DefaultState, addr 0x60f5e04, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultState(bool  value) ;

/// @brief Method set_Enabled, addr 0x60e954c, size 0x140, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsOnSingleRunner, addr 0x60f5df4, size 0x8, virtual false, abstract: false, final false
inline void set_IsOnSingleRunner(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RunnerVisibilityLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RunnerVisibilityLink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RunnerVisibilityLink(RunnerVisibilityLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RunnerVisibilityLink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RunnerVisibilityLink(RunnerVisibilityLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23487};

/// [SerializeField]
/// @brief Field PreferredRunner, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  ___PreferredRunner;

/// @brief Field Component, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Component>  ___Component;

/// [CompilerGenerated]
/// @brief Field <IsOnSingleRunner>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____IsOnSingleRunner_k__BackingField;

/// [SerializeField]
/// [ReadOnly]
/// @brief Field Guid, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Guid;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _showAtRuntime, offset: 0x40, size: 0x1, def value: None
 bool  ____showAtRuntime;

/// @brief Field _runner, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____runner;

/// @brief Field _componentType, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::RunnerVisibilityLink_ComponentType  ____componentType;

/// @brief Field _networkObject, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ____networkObject;

/// @brief Field _originalState, offset: 0x60, size: 0x1, def value: None
 bool  ____originalState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RunnerVisibilityLink, ___PreferredRunner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerVisibilityLink, ___Component) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerVisibilityLink, ____IsOnSingleRunner_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerVisibilityLink, ___Guid) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerVisibilityLink, ____showAtRuntime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerVisibilityLink, ____runner) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerVisibilityLink, ____componentType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerVisibilityLink, ____networkObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerVisibilityLink, ____originalState) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Fusion::RunnerVisibilityLink) == 0x68, "Size mismatch!");

} // namespace end def Fusion
