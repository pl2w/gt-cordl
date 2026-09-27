#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/SoakTasks/IGhostReactorSoakTask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGhostReactorSoakTask)
// Forward declare root types
namespace GorillaTagScripts::GhostReactor::SoakTasks {
class IGhostReactorSoakTask;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*, "GorillaTagScripts.GhostReactor.SoakTasks", "IGhostReactorSoakTask");
// Dependencies 
namespace GorillaTagScripts::GhostReactor::SoakTasks {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.SoakTasks.IGhostReactorSoakTask
class CORDL_TYPE IGhostReactorSoakTask {
public:
// Declarations
 __declspec(property(get=get_Complete)) bool  Complete;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Update() ;

/// @brief Method get_Complete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Complete() ;

// Ctor Parameters [CppParam { name: "", ty: "IGhostReactorSoakTask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGhostReactorSoakTask(IGhostReactorSoakTask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4138};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTagScripts::GhostReactor::SoakTasks
