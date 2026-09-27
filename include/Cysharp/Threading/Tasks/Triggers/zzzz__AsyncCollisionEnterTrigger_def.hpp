#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCollisionEnterTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncCollisionEnterTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionEnterHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncCollisionEnterTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncCollisionEnterTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnterTrigger
class CORDL_TYPE AsyncCollisionEnterTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision*> {
public:
// Declarations
/// @brief Method GetOnCollisionEnterAsyncHandler, addr 0xae39144, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler() ;

/// @brief Method GetOnCollisionEnterAsyncHandler, addr 0xae391c0, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0xae390ec, size 0x58, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  coll) ;

/// @brief Method OnCollisionEnterAsync, addr 0xae39244, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionEnterAsync() ;

/// @brief Method OnCollisionEnterAsync, addr 0xae39350, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionEnterAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae39468, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCollisionEnterTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionEnterTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCollisionEnterTrigger(AsyncCollisionEnterTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionEnterTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCollisionEnterTrigger(AsyncCollisionEnterTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
