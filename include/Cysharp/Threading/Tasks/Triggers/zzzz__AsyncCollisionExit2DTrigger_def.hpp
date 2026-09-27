#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCollisionExit2DTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncCollisionExit2DTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionExit2DHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Collision2D;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncCollisionExit2DTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExit2DTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExit2DTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncCollisionExit2DTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncCollisionExit2DTrigger
class CORDL_TYPE AsyncCollisionExit2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision2D*> {
public:
// Declarations
/// @brief Method GetOnCollisionExit2DAsyncHandler, addr 0xae39c90, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler() ;

/// @brief Method GetOnCollisionExit2DAsyncHandler, addr 0xae39d0c, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExit2DTrigger* New_ctor() ;

/// @brief Method OnCollisionExit2D, addr 0xae39c38, size 0x58, virtual false, abstract: false, final false
inline void OnCollisionExit2D(::UnityEngine::Collision2D*  coll) ;

/// @brief Method OnCollisionExit2DAsync, addr 0xae39d90, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionExit2DAsync() ;

/// @brief Method OnCollisionExit2DAsync, addr 0xae39e9c, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionExit2DAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae39fb4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCollisionExit2DTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionExit2DTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCollisionExit2DTrigger(AsyncCollisionExit2DTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionExit2DTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCollisionExit2DTrigger(AsyncCollisionExit2DTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExit2DTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
