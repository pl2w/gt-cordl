#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateModel_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateModel_1)
namespace GlobalNamespace {
template<typename TActiveState>
struct ActiveStateModel_1__GetChildrenAsync_d__0;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class IActiveStateModel;
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
namespace Oculus::Interaction::PoseDetection::Debug {
template<typename TActiveState>
class ActiveStateModel_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateModel`1");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection::Debug {
// cpp template
template<typename TActiveState>
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1<TActiveState>
class CORDL_TYPE ActiveStateModel_1 : public ::System::Object {
public:
// Declarations
using _GetChildrenAsync_d__0 = ::GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel"
constexpr operator  ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*() noexcept;

/// [Obsolete("Use async version of this method", true)]
/// @brief Method GetChildren, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* GetChildren(::Oculus::Interaction::IActiveState*  activeState) ;

/// [Obsolete("Use async version of this method", true)]
/// @brief Method GetChildren, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* GetChildren(TActiveState  activeState) ;

/// [AsyncStateMachine(typeof(Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1::<GetChildrenAsync>d__0<TActiveState>))]
/// @brief Method GetChildrenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* GetChildrenAsync(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method GetChildrenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* GetChildrenAsync(TActiveState  instance) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel"
constexpr ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel* i___Oculus__Interaction__PoseDetection__Debug__IActiveStateModel() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateModel_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateModel_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateModel_1(ActiveStateModel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateModel_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateModel_1(ActiveStateModel_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection::Debug
