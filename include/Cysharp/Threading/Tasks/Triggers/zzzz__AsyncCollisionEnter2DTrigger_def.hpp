#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCollisionEnter2DTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncCollisionEnter2DTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionEnter2DHandler;
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
class AsyncCollisionEnter2DTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnter2DTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnter2DTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncCollisionEnter2DTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnter2DTrigger
class CORDL_TYPE AsyncCollisionEnter2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision2D*> {
public:
// Declarations
/// @brief Method GetOnCollisionEnter2DAsyncHandler, addr 0xae39508, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler() ;

/// @brief Method GetOnCollisionEnter2DAsyncHandler, addr 0xae39584, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnter2DTrigger* New_ctor() ;

/// @brief Method OnCollisionEnter2D, addr 0xae394b0, size 0x58, virtual false, abstract: false, final false
inline void OnCollisionEnter2D(::UnityEngine::Collision2D*  coll) ;

/// @brief Method OnCollisionEnter2DAsync, addr 0xae39608, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionEnter2DAsync() ;

/// @brief Method OnCollisionEnter2DAsync, addr 0xae39714, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionEnter2DAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3982c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCollisionEnter2DTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionEnter2DTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCollisionEnter2DTrigger(AsyncCollisionEnter2DTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionEnter2DTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCollisionEnter2DTrigger(AsyncCollisionEnter2DTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnter2DTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
