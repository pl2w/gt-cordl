#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateToggle_StatePrecedence_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateToggle)
namespace GlobalNamespace {
struct ActiveStateToggle_StatePrecedence;
}
namespace Oculus::Interaction {
class ActiveStateToggle_DebugModel;
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
class ActiveStateToggle;
}
namespace Oculus::Interaction {
class ActiveStateToggle_DebugModel;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ActiveStateToggle*);
MARK_REF_T(::Oculus::Interaction::ActiveStateToggle_DebugModel*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateToggle*, "Oculus.Interaction", "ActiveStateToggle");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateToggle_DebugModel*, "Oculus.Interaction", "ActiveStateToggle/DebugModel");
// Dependencies Oculus.Interaction.ActiveStateToggle::StatePrecedence, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateToggle
class CORDL_TYPE ActiveStateToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using StatePrecedence = ::GlobalNamespace::ActiveStateToggle_StatePrecedence;

using DebugModel = ::Oculus::Interaction::ActiveStateToggle_DebugModel;

 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field Off, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Off, put=__cordl_internal_set_Off)) ::Oculus::Interaction::IActiveState*  Off;

/// @brief Field On, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_On, put=__cordl_internal_set_On)) ::Oculus::Interaction::IActiveState*  On;

 __declspec(property(get=get_Precedence, put=set_Precedence)) ::GlobalNamespace::ActiveStateToggle_StatePrecedence  Precedence;

/// @brief Field _internalActive, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalActive, put=__cordl_internal_set__internalActive)) bool  _internalActive;

/// @brief Field _off, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__off, put=__cordl_internal_set__off)) ::UnityW<::UnityEngine::Object>  _off;

/// @brief Field _on, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__on, put=__cordl_internal_set__on)) ::UnityW<::UnityEngine::Object>  _on;

/// @brief Field _precedence, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__precedence, put=__cordl_internal_set__precedence)) ::GlobalNamespace::ActiveStateToggle_StatePrecedence  _precedence;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa40a4f4, size 0xa0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllActiveStateToggle, addr 0xa40a7b8, size 0x28, virtual false, abstract: false, final false
inline void InjectAllActiveStateToggle(::Oculus::Interaction::IActiveState*  on, ::Oculus::Interaction::IActiveState*  off) ;

/// @brief Method InjectOff, addr 0xa40a8b0, size 0xd0, virtual false, abstract: false, final false
inline void InjectOff(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectOn, addr 0xa40a7e0, size 0xd0, virtual false, abstract: false, final false
inline void InjectOn(::Oculus::Interaction::IActiveState*  activeState) ;

static inline ::Oculus::Interaction::ActiveStateToggle* New_ctor() ;

/// @brief Method Start, addr 0xa40a594, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_Off() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_Off() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_On() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_On() ;

constexpr bool const& __cordl_internal_get__internalActive() const;

constexpr bool& __cordl_internal_get__internalActive() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__off() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__off() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__on() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__on() ;

constexpr ::GlobalNamespace::ActiveStateToggle_StatePrecedence const& __cordl_internal_get__precedence() const;

constexpr ::GlobalNamespace::ActiveStateToggle_StatePrecedence& __cordl_internal_get__precedence() ;

constexpr void __cordl_internal_set_Off(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set_On(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__internalActive(bool  value) ;

constexpr void __cordl_internal_set__off(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__on(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__precedence(::GlobalNamespace::ActiveStateToggle_StatePrecedence  value) ;

/// @brief Method .ctor, addr 0xa40a980, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa40a598, size 0x21c, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_Precedence, addr 0xa40a4e4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ActiveStateToggle_StatePrecedence get_Precedence() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Method set_Precedence, addr 0xa40a4ec, size 0x8, virtual false, abstract: false, final false
inline void set_Precedence(::GlobalNamespace::ActiveStateToggle_StatePrecedence  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateToggle(ActiveStateToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateToggle(ActiveStateToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15735};

/// [Tooltip("When this ActiveState is Active, the ActiveStateToggle will be Active.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _on, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____on;

/// @brief Field On, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___On;

/// [Tooltip("When this ActiveState is Inactive, the ActiveStateToggle will be Inactive.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _off, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____off;

/// @brief Field Off, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___Off;

/// [Tooltip("If both On and Off conditions are Active simultaneously, this condition will take precedence and dictate the output state.")]
/// [SerializeField]
/// @brief Field _precedence, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::ActiveStateToggle_StatePrecedence  ____precedence;

/// @brief Field _internalActive, offset: 0x44, size: 0x1, def value: None
 bool  ____internalActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateToggle, ____on) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateToggle, ___On) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateToggle, ____off) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateToggle, ___Off) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateToggle, ____precedence) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateToggle, ____internalActive) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateToggle) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1<TActiveState>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateToggle/DebugModel
class CORDL_TYPE ActiveStateToggle_DebugModel : public ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<::UnityW<::Oculus::Interaction::ActiveStateToggle>> {
public:
// Declarations
/// @brief Method GetChildrenAsync, addr 0xa40a988, size 0x120, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* GetChildrenAsync(::Oculus::Interaction::ActiveStateToggle*  activeState) ;

static inline ::Oculus::Interaction::ActiveStateToggle_DebugModel* New_ctor() ;

/// @brief Method .ctor, addr 0xa40aaa8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateToggle_DebugModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateToggle_DebugModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateToggle_DebugModel(ActiveStateToggle_DebugModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateToggle_DebugModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateToggle_DebugModel(ActiveStateToggle_DebugModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ActiveStateToggle_DebugModel) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
