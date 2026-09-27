#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/SequenceActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SequenceActiveState)
namespace Oculus::Interaction::PoseDetection {
class SequenceActiveState_DebugModel;
}
namespace Oculus::Interaction::PoseDetection {
class Sequence;
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
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class SequenceActiveState;
}
namespace Oculus::Interaction::PoseDetection {
class SequenceActiveState_DebugModel;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::SequenceActiveState*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::SequenceActiveState*, "Oculus.Interaction.PoseDetection", "SequenceActiveState");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel*, "Oculus.Interaction.PoseDetection", "SequenceActiveState/DebugModel");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.SequenceActiveState
class CORDL_TYPE SequenceActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DebugModel = ::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel;

 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field _activateIfStepsComplete, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__activateIfStepsComplete, put=__cordl_internal_set__activateIfStepsComplete)) bool  _activateIfStepsComplete;

/// @brief Field _activateIfStepsStarted, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__activateIfStepsStarted, put=__cordl_internal_set__activateIfStepsStarted)) bool  _activateIfStepsStarted;

/// @brief Field _sequence, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sequence, put=__cordl_internal_set__sequence)) ::UnityW<::Oculus::Interaction::PoseDetection::Sequence>  _sequence;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method InjectActivateIfStepsComplete, addr 0xa4a4ac8, size 0x8, virtual false, abstract: false, final false
inline void InjectActivateIfStepsComplete(bool  activateIfStepsComplete) ;

/// @brief Method InjectActivateIfStepsStarted, addr 0xa4a4ac0, size 0x8, virtual false, abstract: false, final false
inline void InjectActivateIfStepsStarted(bool  activateIfStepsStarted) ;

/// @brief Method InjectAllSequenceActiveState, addr 0xa4a4a84, size 0x34, virtual false, abstract: false, final false
inline void InjectAllSequenceActiveState(::Oculus::Interaction::PoseDetection::Sequence*  sequence, bool  activateIfStepsStarted, bool  activateIfStepsComplete) ;

/// @brief Method InjectSequence, addr 0xa4a4ab8, size 0x8, virtual false, abstract: false, final false
inline void InjectSequence(::Oculus::Interaction::PoseDetection::Sequence*  sequence) ;

static inline ::Oculus::Interaction::PoseDetection::SequenceActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa4a4a1c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__activateIfStepsComplete() const;

constexpr bool& __cordl_internal_get__activateIfStepsComplete() ;

constexpr bool const& __cordl_internal_get__activateIfStepsStarted() const;

constexpr bool& __cordl_internal_get__activateIfStepsStarted() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Sequence> const& __cordl_internal_get__sequence() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Sequence>& __cordl_internal_get__sequence() ;

constexpr void __cordl_internal_set__activateIfStepsComplete(bool  value) ;

constexpr void __cordl_internal_set__activateIfStepsStarted(bool  value) ;

constexpr void __cordl_internal_set__sequence(::UnityW<::Oculus::Interaction::PoseDetection::Sequence>  value) ;

/// @brief Method .ctor, addr 0xa4a4ad0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4a4a20, size 0x60, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequenceActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequenceActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceActiveState(SequenceActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceActiveState(SequenceActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16149};

/// [Tooltip("The Sequence that will drive this component.")]
/// [SerializeField]
/// @brief Field _sequence, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::Sequence>  ____sequence;

/// [Tooltip("If true, this ActiveState will become Active as soon as the first sequence step becomes Active.")]
/// [SerializeField]
/// @brief Field _activateIfStepsStarted, offset: 0x28, size: 0x1, def value: None
 bool  ____activateIfStepsStarted;

/// [Tooltip("If true, this ActiveState will be active when the supplied Sequence is Active.")]
/// [SerializeField]
/// @brief Field _activateIfStepsComplete, offset: 0x29, size: 0x1, def value: None
 bool  ____activateIfStepsComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::SequenceActiveState, ____sequence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::SequenceActiveState, ____activateIfStepsStarted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::SequenceActiveState, ____activateIfStepsComplete) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::SequenceActiveState) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1<TActiveState>
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.SequenceActiveState/DebugModel
class CORDL_TYPE SequenceActiveState_DebugModel : public ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<::UnityW<::Oculus::Interaction::PoseDetection::SequenceActiveState>> {
public:
// Declarations
/// @brief Method GetChildrenAsync, addr 0xa4a4ae0, size 0xe8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* GetChildrenAsync(::Oculus::Interaction::PoseDetection::SequenceActiveState*  activeState) ;

static inline ::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel* New_ctor() ;

/// @brief Method .ctor, addr 0xa4a4bc8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequenceActiveState_DebugModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequenceActiveState_DebugModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceActiveState_DebugModel(SequenceActiveState_DebugModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceActiveState_DebugModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceActiveState_DebugModel(SequenceActiveState_DebugModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
