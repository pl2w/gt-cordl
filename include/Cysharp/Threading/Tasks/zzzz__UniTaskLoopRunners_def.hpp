#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskLoopRunners.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UniTaskLoopRunners)
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerEarlyUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerFixedUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerInitialization;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastEarlyUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastFixedUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastInitialization;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastPostLateUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastPreLateUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastPreUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastTimeUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastYieldEarlyUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastYieldFixedUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastYieldInitialization;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastYieldPostLateUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastYieldPreLateUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastYieldPreUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastYieldTimeUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerLastYieldUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerPreLateUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerPreUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerTimeUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerYieldEarlyUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerYieldFixedUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerYieldInitialization;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerYieldPostLateUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerYieldPreLateUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerYieldPreUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerYieldTimeUpdate;
}
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerYieldUpdate;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskLoopRunners;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskLoopRunners*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskLoopRunners*, "Cysharp.Threading.Tasks", "UniTaskLoopRunners");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskLoopRunners
class CORDL_TYPE UniTaskLoopRunners : public ::System::Object {
public:
// Declarations
using UniTaskLoopRunnerEarlyUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerEarlyUpdate;

using UniTaskLoopRunnerFixedUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerFixedUpdate;

using UniTaskLoopRunnerInitialization = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerInitialization;

using UniTaskLoopRunnerLastEarlyUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastEarlyUpdate;

using UniTaskLoopRunnerLastFixedUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastFixedUpdate;

using UniTaskLoopRunnerLastInitialization = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastInitialization;

using UniTaskLoopRunnerLastPostLateUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastPostLateUpdate;

using UniTaskLoopRunnerLastPreLateUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastPreLateUpdate;

using UniTaskLoopRunnerLastPreUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastPreUpdate;

using UniTaskLoopRunnerLastTimeUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastTimeUpdate;

using UniTaskLoopRunnerLastUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastUpdate;

using UniTaskLoopRunnerLastYieldEarlyUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastYieldEarlyUpdate;

using UniTaskLoopRunnerLastYieldFixedUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastYieldFixedUpdate;

using UniTaskLoopRunnerLastYieldInitialization = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastYieldInitialization;

using UniTaskLoopRunnerLastYieldPostLateUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastYieldPostLateUpdate;

using UniTaskLoopRunnerLastYieldPreLateUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastYieldPreLateUpdate;

using UniTaskLoopRunnerLastYieldPreUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastYieldPreUpdate;

using UniTaskLoopRunnerLastYieldTimeUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastYieldTimeUpdate;

using UniTaskLoopRunnerLastYieldUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerLastYieldUpdate;

using UniTaskLoopRunnerPostLateUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate;

using UniTaskLoopRunnerPreLateUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerPreLateUpdate;

using UniTaskLoopRunnerPreUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerPreUpdate;

using UniTaskLoopRunnerTimeUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerTimeUpdate;

using UniTaskLoopRunnerUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerUpdate;

using UniTaskLoopRunnerYieldEarlyUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerYieldEarlyUpdate;

using UniTaskLoopRunnerYieldFixedUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerYieldFixedUpdate;

using UniTaskLoopRunnerYieldInitialization = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerYieldInitialization;

using UniTaskLoopRunnerYieldPostLateUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerYieldPostLateUpdate;

using UniTaskLoopRunnerYieldPreLateUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerYieldPreLateUpdate;

using UniTaskLoopRunnerYieldPreUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerYieldPreUpdate;

using UniTaskLoopRunnerYieldTimeUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerYieldTimeUpdate;

using UniTaskLoopRunnerYieldUpdate = ::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerYieldUpdate;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskLoopRunners() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskLoopRunners", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskLoopRunners(UniTaskLoopRunners && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskLoopRunners", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskLoopRunners(UniTaskLoopRunners const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskLoopRunners) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
