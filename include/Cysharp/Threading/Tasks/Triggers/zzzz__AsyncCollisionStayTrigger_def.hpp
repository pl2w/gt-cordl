#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCollisionStayTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncCollisionStayTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionStayHandler;
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
class AsyncCollisionStayTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionStayTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionStayTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncCollisionStayTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncCollisionStayTrigger
class CORDL_TYPE AsyncCollisionStayTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision*> {
public:
// Declarations
/// @brief Method GetOnCollisionStayAsyncHandler, addr 0xae3a054, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* GetOnCollisionStayAsyncHandler() ;

/// @brief Method GetOnCollisionStayAsyncHandler, addr 0xae3a0d0, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* GetOnCollisionStayAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionStayTrigger* New_ctor() ;

/// @brief Method OnCollisionStay, addr 0xae39ffc, size 0x58, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  coll) ;

/// @brief Method OnCollisionStayAsync, addr 0xae3a154, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionStayAsync() ;

/// @brief Method OnCollisionStayAsync, addr 0xae3a260, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionStayAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3a378, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCollisionStayTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionStayTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCollisionStayTrigger(AsyncCollisionStayTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionStayTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCollisionStayTrigger(AsyncCollisionStayTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionStayTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
