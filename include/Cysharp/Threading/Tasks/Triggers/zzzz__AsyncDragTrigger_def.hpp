#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncDragTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncDragTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDragHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncDragTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncDragTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncDragTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncDragTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncDragTrigger
class CORDL_TYPE AsyncDragTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Method GetOnDragAsyncHandler, addr 0xae4284c, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler* GetOnDragAsyncHandler() ;

/// @brief Method GetOnDragAsyncHandler, addr 0xae428c8, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler* GetOnDragAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncDragTrigger* New_ctor() ;

/// @brief Method OnDragAsync, addr 0xae4294c, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnDragAsync() ;

/// @brief Method OnDragAsync, addr 0xae42a58, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnDragAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.IDragHandler.OnDrag, addr 0xae427f4, size 0x58, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IDragHandler_OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method .ctor, addr 0xae42b70, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncDragTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncDragTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncDragTrigger(AsyncDragTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncDragTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncDragTrigger(AsyncDragTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncDragTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
