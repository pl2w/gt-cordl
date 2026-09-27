#pragma once
// IWYU pragma private; include "Modio/Extensions/TaskExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskExtensions)
namespace GlobalNamespace {
struct TaskExtensions__ForgetTaskSafely_d__0;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Modio::Extensions {
class TaskExtensions;
}
// Write type traits
MARK_REF_T(::Modio::Extensions::TaskExtensions*);
DEFINE_IL2CPP_CLASS(::Modio::Extensions::TaskExtensions*, "Modio.Extensions", "TaskExtensions");
// [Extension]
// Dependencies System.Object
namespace Modio::Extensions {
// Is value type: false
// CS Name: Modio.Extensions.TaskExtensions
class CORDL_TYPE TaskExtensions : public ::System::Object {
public:
// Declarations
using _ForgetTaskSafely_d__0 = ::GlobalNamespace::TaskExtensions__ForgetTaskSafely_d__0;

/// [AsyncStateMachine(typeof(Modio.Extensions.TaskExtensions::<ForgetTaskSafely>d__0))]
/// [Extension]
/// @brief Method ForgetTaskSafely, addr 0xa054cc8, size 0xa8, virtual false, abstract: false, final false
static inline void ForgetTaskSafely(::System::Threading::Tasks::Task*  task) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtensions(TaskExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtensions(TaskExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17684};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Extensions::TaskExtensions) == 0x10, "Size mismatch!");

} // namespace end def Modio::Extensions
