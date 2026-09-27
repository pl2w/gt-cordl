#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateGroup_ActiveStateGroupLogicOperator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateGroup)
namespace GlobalNamespace {
struct ActiveStateGroup_ActiveStateGroupLogicOperator;
}
namespace Oculus::Interaction {
class ActiveStateGroup_DebugModel;
}
namespace Oculus::Interaction {
class ActiveStateGroup___c;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ActiveStateGroup;
}
namespace Oculus::Interaction {
class ActiveStateGroup_DebugModel;
}
namespace Oculus::Interaction {
class ActiveStateGroup___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ActiveStateGroup*);
MARK_REF_T(::Oculus::Interaction::ActiveStateGroup_DebugModel*);
MARK_REF_T(::Oculus::Interaction::ActiveStateGroup___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateGroup*, "Oculus.Interaction", "ActiveStateGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateGroup_DebugModel*, "Oculus.Interaction", "ActiveStateGroup/DebugModel");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateGroup___c*, "Oculus.Interaction", "ActiveStateGroup/<>c");
// Dependencies Oculus.Interaction.ActiveStateGroup::ActiveStateGroupLogicOperator, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateGroup
class CORDL_TYPE ActiveStateGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActiveStateGroupLogicOperator = ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator;

using DebugModel = ::Oculus::Interaction::ActiveStateGroup_DebugModel;

using __c = ::Oculus::Interaction::ActiveStateGroup___c;

 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field ActiveStates, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveStates, put=__cordl_internal_set_ActiveStates)) ::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*  ActiveStates;

/// @brief Field _activeStates, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeStates, put=__cordl_internal_set__activeStates)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _activeStates;

/// @brief Field _logicOperator, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__logicOperator, put=__cordl_internal_set__logicOperator)) ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  _logicOperator;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa409238, size 0x114, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectActiveStates, addr 0xa409790, size 0x124, virtual false, abstract: false, final false
inline void InjectActiveStates(::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*  activeStates) ;

/// @brief Method InjectAllActiveStateGroup, addr 0xa40978c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllActiveStateGroup(::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*  activeStates) ;

/// @brief Method InjectOptionalLogicOperator, addr 0xa4098b4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalLogicOperator(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  logicOperator) ;

static inline ::Oculus::Interaction::ActiveStateGroup* New_ctor() ;

/// @brief Method Start, addr 0xa40934c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>* const& __cordl_internal_get_ActiveStates() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*& __cordl_internal_get_ActiveStates() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__activeStates() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__activeStates() ;

constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator const& __cordl_internal_get__logicOperator() const;

constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator& __cordl_internal_get__logicOperator() ;

constexpr void __cordl_internal_set_ActiveStates(::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*  value) ;

constexpr void __cordl_internal_set__activeStates(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__logicOperator(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  value) ;

/// @brief Method .ctor, addr 0xa4098bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa409350, size 0x438, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateGroup(ActiveStateGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateGroup(ActiveStateGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15728};

/// [Tooltip("The logic operator will be applied to these IActiveStates.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeStates, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____activeStates;

/// @brief Field ActiveStates, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*  ___ActiveStates;

/// [Tooltip("IActiveStates will have this boolean logic operator applied.")]
/// [SerializeField]
/// @brief Field _logicOperator, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  ____logicOperator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateGroup, ____activeStates) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateGroup, ___ActiveStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateGroup, ____logicOperator) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateGroup) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateGroup/<>c
class CORDL_TYPE ActiveStateGroup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::ActiveStateGroup___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Converter_2<::Oculus::Interaction::IActiveState*,::UnityW<::UnityEngine::Object>>*  __9__11_0;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IActiveState*>*  __9__4_0;

static inline ::Oculus::Interaction::ActiveStateGroup___c* New_ctor() ;

/// @brief Method <Awake>b__4_0, addr 0xa4099f4, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* _Awake_b__4_0(::UnityEngine::Object*  mono) ;

/// @brief Method <InjectActiveStates>b__11_0, addr 0xa409a3c, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectActiveStates_b__11_0(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method .ctor, addr 0xa4099ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::ActiveStateGroup___c* getStaticF___9() ;

static inline ::System::Converter_2<::Oculus::Interaction::IActiveState*,::UnityW<::UnityEngine::Object>>* getStaticF___9__11_0() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IActiveState*>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::Oculus::Interaction::ActiveStateGroup___c*  value) ;

static inline void setStaticF___9__11_0(::System::Converter_2<::Oculus::Interaction::IActiveState*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__4_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IActiveState*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateGroup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateGroup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateGroup___c(ActiveStateGroup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateGroup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateGroup___c(ActiveStateGroup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15727};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ActiveStateGroup___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1<TActiveState>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateGroup/DebugModel
class CORDL_TYPE ActiveStateGroup_DebugModel : public ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<::UnityW<::Oculus::Interaction::ActiveStateGroup>> {
public:
// Declarations
/// @brief Method GetChildrenAsync, addr 0xa4098c4, size 0x78, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* GetChildrenAsync(::Oculus::Interaction::ActiveStateGroup*  instance) ;

static inline ::Oculus::Interaction::ActiveStateGroup_DebugModel* New_ctor() ;

/// @brief Method .ctor, addr 0xa40993c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateGroup_DebugModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateGroup_DebugModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateGroup_DebugModel(ActiveStateGroup_DebugModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateGroup_DebugModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateGroup_DebugModel(ActiveStateGroup_DebugModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15726};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ActiveStateGroup_DebugModel) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
