#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncMoveTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncMoveTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMoveHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncMoveTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncMoveTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncMoveTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncMoveTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncMoveTrigger
class CORDL_TYPE AsyncMoveTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::AxisEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
constexpr operator  ::UnityEngine::EventSystems::IMoveHandler*() noexcept;

/// @brief Method GetOnMoveAsyncHandler, addr 0xae4375c, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* GetOnMoveAsyncHandler() ;

/// @brief Method GetOnMoveAsyncHandler, addr 0xae437d8, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* GetOnMoveAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncMoveTrigger* New_ctor() ;

/// @brief Method OnMoveAsync, addr 0xae4385c, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::AxisEventData*> OnMoveAsync() ;

/// @brief Method OnMoveAsync, addr 0xae43968, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::AxisEventData*> OnMoveAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.IMoveHandler.OnMove, addr 0xae43704, size 0x58, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IMoveHandler_OnMove(::UnityEngine::EventSystems::AxisEventData*  eventData) ;

/// @brief Method .ctor, addr 0xae43a80, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
constexpr ::UnityEngine::EventSystems::IMoveHandler* i___UnityEngine__EventSystems__IMoveHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncMoveTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncMoveTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncMoveTrigger(AsyncMoveTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncMoveTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncMoveTrigger(AsyncMoveTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22047};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncMoveTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
