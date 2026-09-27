#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncWillRenderObjectTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncWillRenderObjectTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnWillRenderObjectHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncWillRenderObjectTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncWillRenderObjectTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncWillRenderObjectTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncWillRenderObjectTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncWillRenderObjectTrigger
class CORDL_TYPE AsyncWillRenderObjectTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnWillRenderObjectAsyncHandler, addr 0xae41258, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler* GetOnWillRenderObjectAsyncHandler() ;

/// @brief Method GetOnWillRenderObjectAsyncHandler, addr 0xae412d4, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler* GetOnWillRenderObjectAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncWillRenderObjectTrigger* New_ctor() ;

/// @brief Method OnWillRenderObject, addr 0xae411e0, size 0x78, virtual false, abstract: false, final false
inline void OnWillRenderObject() ;

/// @brief Method OnWillRenderObjectAsync, addr 0xae41358, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnWillRenderObjectAsync() ;

/// @brief Method OnWillRenderObjectAsync, addr 0xae41440, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnWillRenderObjectAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae41530, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncWillRenderObjectTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncWillRenderObjectTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncWillRenderObjectTrigger(AsyncWillRenderObjectTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncWillRenderObjectTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncWillRenderObjectTrigger(AsyncWillRenderObjectTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncWillRenderObjectTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
