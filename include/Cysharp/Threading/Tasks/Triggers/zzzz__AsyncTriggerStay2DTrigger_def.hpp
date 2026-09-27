#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTriggerStay2DTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncTriggerStay2DTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerStay2DHandler;
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
class AsyncTriggerStay2DTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStay2DTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStay2DTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerStay2DTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerStay2DTrigger
class CORDL_TYPE AsyncTriggerStay2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::Collider2D>> {
public:
// Declarations
/// @brief Method GetOnTriggerStay2DAsyncHandler, addr 0xae40adc, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler() ;

/// @brief Method GetOnTriggerStay2DAsyncHandler, addr 0xae40b58, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStay2DTrigger* New_ctor() ;

/// @brief Method OnTriggerStay2D, addr 0xae40a84, size 0x58, virtual false, abstract: false, final false
inline void OnTriggerStay2D(::UnityEngine::Collider2D*  other) ;

/// @brief Method OnTriggerStay2DAsync, addr 0xae40bdc, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> OnTriggerStay2DAsync() ;

/// @brief Method OnTriggerStay2DAsync, addr 0xae40ce8, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> OnTriggerStay2DAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae40e00, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTriggerStay2DTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerStay2DTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerStay2DTrigger(AsyncTriggerStay2DTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerStay2DTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerStay2DTrigger(AsyncTriggerStay2DTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22023};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStay2DTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
