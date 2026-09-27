#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncPostRenderTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncPostRenderTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPostRenderHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncPostRenderTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncPostRenderTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncPostRenderTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncPostRenderTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncPostRenderTrigger
class CORDL_TYPE AsyncPostRenderTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnPostRenderAsyncHandler, addr 0xae3d3d4, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* GetOnPostRenderAsyncHandler() ;

/// @brief Method GetOnPostRenderAsyncHandler, addr 0xae3d450, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* GetOnPostRenderAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncPostRenderTrigger* New_ctor() ;

/// @brief Method OnPostRender, addr 0xae3d35c, size 0x78, virtual false, abstract: false, final false
inline void OnPostRender() ;

/// @brief Method OnPostRenderAsync, addr 0xae3d4d4, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnPostRenderAsync() ;

/// @brief Method OnPostRenderAsync, addr 0xae3d5bc, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnPostRenderAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3d6ac, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncPostRenderTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncPostRenderTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncPostRenderTrigger(AsyncPostRenderTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncPostRenderTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncPostRenderTrigger(AsyncPostRenderTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncPostRenderTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
