#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncPointerUpTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncPointerUpTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPointerUpHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncPointerUpTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncPointerUpTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncPointerUpTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncPointerUpTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncPointerUpTrigger
class CORDL_TYPE AsyncPointerUpTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Method GetOnPointerUpAsyncHandler, addr 0xae44a30, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* GetOnPointerUpAsyncHandler() ;

/// @brief Method GetOnPointerUpAsyncHandler, addr 0xae44aac, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* GetOnPointerUpAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncPointerUpTrigger* New_ctor() ;

/// @brief Method OnPointerUpAsync, addr 0xae44b30, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerUpAsync() ;

/// @brief Method OnPointerUpAsync, addr 0xae44c3c, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerUpAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp, addr 0xae449d8, size 0x58, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method .ctor, addr 0xae44d54, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncPointerUpTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncPointerUpTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncPointerUpTrigger(AsyncPointerUpTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncPointerUpTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncPointerUpTrigger(AsyncPointerUpTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22057};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncPointerUpTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
