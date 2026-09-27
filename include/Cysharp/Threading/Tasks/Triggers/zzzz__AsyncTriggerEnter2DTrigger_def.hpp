#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTriggerEnter2DTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncTriggerEnter2DTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerEnter2DHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Collider2D;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncTriggerEnter2DTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerEnter2DTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerEnter2DTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerEnter2DTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerEnter2DTrigger
class CORDL_TYPE AsyncTriggerEnter2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::Collider2D>> {
public:
// Declarations
/// @brief Method GetOnTriggerEnter2DAsyncHandler, addr 0xae3fbcc, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* GetOnTriggerEnter2DAsyncHandler() ;

/// @brief Method GetOnTriggerEnter2DAsyncHandler, addr 0xae3fc48, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* GetOnTriggerEnter2DAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerEnter2DTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter2D, addr 0xae3fb74, size 0x58, virtual false, abstract: false, final false
inline void OnTriggerEnter2D(::UnityEngine::Collider2D*  other) ;

/// @brief Method OnTriggerEnter2DAsync, addr 0xae3fccc, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> OnTriggerEnter2DAsync() ;

/// @brief Method OnTriggerEnter2DAsync, addr 0xae3fdd8, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> OnTriggerEnter2DAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3fef0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTriggerEnter2DTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerEnter2DTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerEnter2DTrigger(AsyncTriggerEnter2DTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerEnter2DTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerEnter2DTrigger(AsyncTriggerEnter2DTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22015};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerEnter2DTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
