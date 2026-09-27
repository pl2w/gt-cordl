#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneManagerDefault_GetAddressableScenesResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkSceneManagerDefault_GetAddressableScenesResult)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSceneManagerDefault_GetAddressableScenesResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult, "Fusion", "NetworkSceneManagerDefault/GetAddressableScenesResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkSceneManagerDefault/GetAddressableScenesResult
struct CORDL_TYPE NetworkSceneManagerDefault_GetAddressableScenesResult {
public:
// Declarations
/// @brief Method op_Implicit, addr 0x60f176c, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult op_Implicit___GlobalNamespace__NetworkSceneManagerDefault_GetAddressableScenesResult(::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*  task) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault_GetAddressableScenesResult() ;

// Ctor Parameters [CppParam { name: "Task", ty: "::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "BeforeWaitForCompletion", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneManagerDefault_GetAddressableScenesResult(::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*  Task, ::System::Action*  BeforeWaitForCompletion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23470};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Task, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*  Task;

/// @brief Field BeforeWaitForCompletion, offset: 0x8, size: 0x8, def value: None
 ::System::Action*  BeforeWaitForCompletion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult, Task) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult, BeforeWaitForCompletion) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
