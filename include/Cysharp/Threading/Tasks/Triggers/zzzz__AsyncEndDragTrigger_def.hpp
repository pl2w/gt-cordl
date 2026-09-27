#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncEndDragTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncEndDragTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnEndDragHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncEndDragTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncEndDragTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncEndDragTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncEndDragTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncEndDragTrigger
class CORDL_TYPE AsyncEndDragTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Method GetOnEndDragAsyncHandler, addr 0xae42fd4, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler* GetOnEndDragAsyncHandler() ;

/// @brief Method GetOnEndDragAsyncHandler, addr 0xae43050, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler* GetOnEndDragAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncEndDragTrigger* New_ctor() ;

/// @brief Method OnEndDragAsync, addr 0xae430d4, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnEndDragAsync() ;

/// @brief Method OnEndDragAsync, addr 0xae431e0, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnEndDragAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.IEndDragHandler.OnEndDrag, addr 0xae42f7c, size 0x58, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IEndDragHandler_OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method .ctor, addr 0xae432f8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* i___UnityEngine__EventSystems__IEndDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncEndDragTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncEndDragTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncEndDragTrigger(AsyncEndDragTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncEndDragTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncEndDragTrigger(AsyncEndDragTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncEndDragTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
