#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateNot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateNot)
namespace Oculus::Interaction {
class ActiveStateNot_DebugModel;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ActiveStateNot;
}
namespace Oculus::Interaction {
class ActiveStateNot_DebugModel;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ActiveStateNot*);
MARK_REF_T(::Oculus::Interaction::ActiveStateNot_DebugModel*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateNot*, "Oculus.Interaction", "ActiveStateNot");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateNot_DebugModel*, "Oculus.Interaction", "ActiveStateNot/DebugModel");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateNot
class CORDL_TYPE ActiveStateNot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DebugModel = ::Oculus::Interaction::ActiveStateNot_DebugModel;

 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field ActiveState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveState, put=__cordl_internal_set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

/// @brief Field _activeState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa409ab4, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectActiveState, addr 0xa409bd4, size 0xd0, virtual false, abstract: false, final false
inline void InjectActiveState(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectAllActiveStateNot, addr 0xa409bd0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllActiveStateNot(::Oculus::Interaction::IActiveState*  activeState) ;

static inline ::Oculus::Interaction::ActiveStateNot* New_ctor() ;

/// @brief Method Start, addr 0xa409b1c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_ActiveState() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_ActiveState() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr void __cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa409ca4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa409b20, size 0xac, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateNot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateNot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateNot(ActiveStateNot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateNot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateNot(ActiveStateNot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15730};

/// [Tooltip("The IActiveState that the NOT operation will be applied to.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// @brief Field ActiveState, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___ActiveState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateNot, ____activeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateNot, ___ActiveState) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateNot) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1<TActiveState>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateNot/DebugModel
class CORDL_TYPE ActiveStateNot_DebugModel : public ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<::UnityW<::Oculus::Interaction::ActiveStateNot>> {
public:
// Declarations
/// @brief Method GetChildrenAsync, addr 0xa409cac, size 0xe8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* GetChildrenAsync(::Oculus::Interaction::ActiveStateNot*  activeState) ;

static inline ::Oculus::Interaction::ActiveStateNot_DebugModel* New_ctor() ;

/// @brief Method .ctor, addr 0xa409d94, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateNot_DebugModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateNot_DebugModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateNot_DebugModel(ActiveStateNot_DebugModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateNot_DebugModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateNot_DebugModel(ActiveStateNot_DebugModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ActiveStateNot_DebugModel) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
