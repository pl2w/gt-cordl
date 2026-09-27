#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/IActiveStateModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IActiveStateModel)
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
class IActiveStateModel;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*, "Oculus.Interaction.PoseDetection.Debug", "IActiveStateModel");
// Dependencies 
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.IActiveStateModel
class CORDL_TYPE IActiveStateModel {
public:
// Declarations
/// [Obsolete("Use async version of this method", true)]
/// @brief Method GetChildren, addr 0xa4aaf38, size 0x38, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* GetChildren(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method GetChildrenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* GetChildrenAsync(::Oculus::Interaction::IActiveState*  activeState) ;

// Ctor Parameters [CppParam { name: "", ty: "IActiveStateModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IActiveStateModel(IActiveStateModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection::Debug
