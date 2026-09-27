#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncOnCanvasGroupChangedTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncOnCanvasGroupChangedTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCanvasGroupChangedHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncOnCanvasGroupChangedTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncOnCanvasGroupChangedTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncOnCanvasGroupChangedTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncOnCanvasGroupChangedTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncOnCanvasGroupChangedTrigger
class CORDL_TYPE AsyncOnCanvasGroupChangedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnCanvasGroupChangedAsyncHandler, addr 0xae38dcc, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* GetOnCanvasGroupChangedAsyncHandler() ;

/// @brief Method GetOnCanvasGroupChangedAsyncHandler, addr 0xae38e48, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* GetOnCanvasGroupChangedAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncOnCanvasGroupChangedTrigger* New_ctor() ;

/// @brief Method OnCanvasGroupChanged, addr 0xae38d54, size 0x78, virtual false, abstract: false, final false
inline void OnCanvasGroupChanged() ;

/// @brief Method OnCanvasGroupChangedAsync, addr 0xae38ecc, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnCanvasGroupChangedAsync() ;

/// @brief Method OnCanvasGroupChangedAsync, addr 0xae38fb4, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnCanvasGroupChangedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae390a4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOnCanvasGroupChangedTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOnCanvasGroupChangedTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOnCanvasGroupChangedTrigger(AsyncOnCanvasGroupChangedTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOnCanvasGroupChangedTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOnCanvasGroupChangedTrigger(AsyncOnCanvasGroupChangedTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21955};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncOnCanvasGroupChangedTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
