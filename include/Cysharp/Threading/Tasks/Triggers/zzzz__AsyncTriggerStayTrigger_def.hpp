#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTriggerStayTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncTriggerStayTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerStayHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncTriggerStayTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStayTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStayTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerStayTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerStayTrigger
class CORDL_TYPE AsyncTriggerStayTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::Collider>> {
public:
// Declarations
/// @brief Method GetOnTriggerStayAsyncHandler, addr 0xae40718, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* GetOnTriggerStayAsyncHandler() ;

/// @brief Method GetOnTriggerStayAsyncHandler, addr 0xae40794, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* GetOnTriggerStayAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStayTrigger* New_ctor() ;

/// @brief Method OnTriggerStay, addr 0xae406c0, size 0x58, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStayAsync, addr 0xae40818, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> OnTriggerStayAsync() ;

/// @brief Method OnTriggerStayAsync, addr 0xae40924, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> OnTriggerStayAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae40a3c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTriggerStayTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerStayTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerStayTrigger(AsyncTriggerStayTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerStayTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerStayTrigger(AsyncTriggerStayTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStayTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
