#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncBeginDragTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncBeginDragTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnBeginDragHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncBeginDragTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncBeginDragTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncBeginDragTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncBeginDragTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncBeginDragTrigger
class CORDL_TYPE AsyncBeginDragTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Method GetOnBeginDragAsyncHandler, addr 0xae41d00, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* GetOnBeginDragAsyncHandler() ;

/// @brief Method GetOnBeginDragAsyncHandler, addr 0xae41d7c, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* GetOnBeginDragAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncBeginDragTrigger* New_ctor() ;

/// @brief Method OnBeginDragAsync, addr 0xae41e00, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnBeginDragAsync() ;

/// @brief Method OnBeginDragAsync, addr 0xae41f0c, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnBeginDragAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag, addr 0xae41ca8, size 0x58, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method .ctor, addr 0xae42024, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncBeginDragTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncBeginDragTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncBeginDragTrigger(AsyncBeginDragTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncBeginDragTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncBeginDragTrigger(AsyncBeginDragTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22033};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncBeginDragTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
