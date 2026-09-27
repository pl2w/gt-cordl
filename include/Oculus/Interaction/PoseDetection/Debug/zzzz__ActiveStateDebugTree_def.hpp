#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateDebugTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateDebugTree)
namespace GlobalNamespace {
struct ActiveStateDebugTree__TryGetChildrenAsync_d__3;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class IActiveStateModel;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class ActiveStateDebugTree;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateDebugTree");
// Dependencies Oculus.Interaction.DebugTree.DebugTree`1<TLeaf>, Oculus.Interaction.IActiveState
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.ActiveStateDebugTree
class CORDL_TYPE ActiveStateDebugTree : public ::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IActiveState*> {
public:
// Declarations
using _TryGetChildrenAsync_d__3 = ::GlobalNamespace::ActiveStateDebugTree__TryGetChildrenAsync_d__3;

/// @brief Field _models, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__models, put=setStaticF__models)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>*  _models;

static inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree* New_ctor(::Oculus::Interaction::IActiveState*  root) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method RegisterModel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TType>
requires(::cordl_internals::type_constraint<TType, ::Oculus::Interaction::IActiveState*> && ::cordl_internals::reference_type_constraint<TType>)
static inline void RegisterModel(::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*  stateModel) ;

/// [AsyncStateMachine(typeof(Oculus.Interaction.PoseDetection.Debug.ActiveStateDebugTree::<TryGetChildrenAsync>d__3))]
/// @brief Method TryGetChildrenAsync, addr 0xa4aa4a8, size 0x108, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* TryGetChildrenAsync(::Oculus::Interaction::IActiveState*  node) ;

/// @brief Method .ctor, addr 0xa4aa450, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::IActiveState*  root) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>* getStaticF__models() ;

static inline void setStaticF__models(::System::Collections::Generic::Dictionary_2<::System::Type*,::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateDebugTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateDebugTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateDebugTree(ActiveStateDebugTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateDebugTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateDebugTree(ActiveStateDebugTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
