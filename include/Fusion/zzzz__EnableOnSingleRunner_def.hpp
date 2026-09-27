#pragma once
// IWYU pragma private; include "Fusion/EnableOnSingleRunner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_PreferredRunners_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnableOnSingleRunner)
namespace Fusion {
class RunnerVisibilityLink;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Fusion {
class EnableOnSingleRunner;
}
// Write type traits
MARK_REF_T(::Fusion::EnableOnSingleRunner*);
DEFINE_IL2CPP_CLASS(::Fusion::EnableOnSingleRunner*, "Fusion", "EnableOnSingleRunner");
// [AddComponentMenu("Fusion/Enable On Single Runner")]
// Dependencies Fusion.Behaviour, Fusion.RunnerVisibilityLink::PreferredRunners, UnityEngine.Component
namespace Fusion {
// Is value type: false
// CS Name: Fusion.EnableOnSingleRunner
class CORDL_TYPE EnableOnSingleRunner : public ::Fusion::Behaviour {
public:
// Declarations
/// @brief Field Components, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Components, put=__cordl_internal_set_Components)) ::ArrayW<::UnityW<::UnityEngine::Component>>  Components;

/// @brief Field PreferredRunner, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreferredRunner, put=__cordl_internal_set_PreferredRunner)) ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  PreferredRunner;

/// @brief Field _guid, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__guid, put=__cordl_internal_set__guid)) ::StringW  _guid;

/// @brief Field reusableComponentsList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reusableComponentsList, put=setStaticF_reusableComponentsList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  reusableComponentsList;

/// @brief Field reusableComponentsList2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reusableComponentsList2, put=setStaticF_reusableComponentsList2)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  reusableComponentsList2;

/// @brief Method AddNodes, addr 0x60e8450, size 0x350, virtual false, abstract: false, final false
inline void AddNodes(::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*  existingNodes) ;

/// [EditorButton("Find in Nested Children", (Fusion.EditorButtonVisibility)1, 0, true)]
/// @brief Method FindNestedRecognizedTypes, addr 0x60f464c, size 0x78, virtual false, abstract: false, final false
inline void FindNestedRecognizedTypes() ;

/// @brief Method FindRecognizedComponentsOnGameObject, addr 0x60f42c8, size 0x384, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Component>> FindRecognizedComponentsOnGameObject(::UnityEngine::GameObject*  go) ;

/// @brief Method FindRecognizedNestedComponents, addr 0x60f46c4, size 0x3d0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Component>> FindRecognizedNestedComponents(::UnityEngine::GameObject*  go) ;

/// [EditorButton("Find on GameObject", (Fusion.EditorButtonVisibility)1, 0, true)]
/// @brief Method FindRecognizedTypes, addr 0x60f4250, size 0x78, virtual false, abstract: false, final false
inline void FindRecognizedTypes() ;

static inline ::Fusion::EnableOnSingleRunner* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& __cordl_internal_get_Components() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& __cordl_internal_get_Components() ;

constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners const& __cordl_internal_get_PreferredRunner() const;

constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners& __cordl_internal_get_PreferredRunner() ;

constexpr ::StringW const& __cordl_internal_get__guid() const;

constexpr ::StringW& __cordl_internal_get__guid() ;

constexpr void __cordl_internal_set_Components(::ArrayW<::UnityW<::UnityEngine::Component>>  value) ;

constexpr void __cordl_internal_set_PreferredRunner(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  value) ;

constexpr void __cordl_internal_set__guid(::StringW  value) ;

/// @brief Method .ctor, addr 0x60f4a94, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* getStaticF_reusableComponentsList() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* getStaticF_reusableComponentsList2() ;

static inline void setStaticF_reusableComponentsList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value) ;

static inline void setStaticF_reusableComponentsList2(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnableOnSingleRunner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnableOnSingleRunner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableOnSingleRunner(EnableOnSingleRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableOnSingleRunner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableOnSingleRunner(EnableOnSingleRunner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23480};

/// [InlineHelp]
/// [SerializeField]
/// @brief Field PreferredRunner, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  ___PreferredRunner;

/// [InlineHelp]
/// @brief Field Components, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Component>>  ___Components;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _guid, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____guid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::EnableOnSingleRunner, ___PreferredRunner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::EnableOnSingleRunner, ___Components) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::EnableOnSingleRunner, ____guid) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::EnableOnSingleRunner) == 0x38, "Size mismatch!");

} // namespace end def Fusion
