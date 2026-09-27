#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCancelTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncCancelTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCancelHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncCancelTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncCancelTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncCancelTrigger
class CORDL_TYPE AsyncCancelTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
constexpr operator  ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Method GetOnCancelAsyncHandler, addr 0xae420c4, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* GetOnCancelAsyncHandler() ;

/// @brief Method GetOnCancelAsyncHandler, addr 0xae42140, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* GetOnCancelAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger* New_ctor() ;

/// @brief Method OnCancelAsync, addr 0xae421c4, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnCancelAsync() ;

/// @brief Method OnCancelAsync, addr 0xae422d0, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnCancelAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.ICancelHandler.OnCancel, addr 0xae4206c, size 0x58, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_ICancelHandler_OnCancel(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method .ctor, addr 0xae423e8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCancelTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCancelTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCancelTrigger(AsyncCancelTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCancelTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCancelTrigger(AsyncCancelTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22035};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
