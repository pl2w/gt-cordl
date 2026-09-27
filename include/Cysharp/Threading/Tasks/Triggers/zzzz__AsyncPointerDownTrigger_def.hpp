#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncPointerDownTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncPointerDownTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPointerDownHandler;
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
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncPointerDownTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncPointerDownTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncPointerDownTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncPointerDownTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncPointerDownTrigger
class CORDL_TYPE AsyncPointerDownTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Method GetOnPointerDownAsyncHandler, addr 0xae43ee4, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler* GetOnPointerDownAsyncHandler() ;

/// @brief Method GetOnPointerDownAsyncHandler, addr 0xae43f60, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler* GetOnPointerDownAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncPointerDownTrigger* New_ctor() ;

/// @brief Method OnPointerDownAsync, addr 0xae43fe4, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerDownAsync() ;

/// @brief Method OnPointerDownAsync, addr 0xae440f0, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerDownAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown, addr 0xae43e8c, size 0x58, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method .ctor, addr 0xae44208, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncPointerDownTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncPointerDownTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncPointerDownTrigger(AsyncPointerDownTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncPointerDownTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncPointerDownTrigger(AsyncPointerDownTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncPointerDownTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
