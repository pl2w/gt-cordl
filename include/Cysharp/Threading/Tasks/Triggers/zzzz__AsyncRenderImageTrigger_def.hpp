#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncRenderImageTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
CORDL_MODULE_EXPORT(AsyncRenderImageTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnRenderImageHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncRenderImageTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncRenderImageTrigger");
// [TupleElementNames(new[] { "source", "destination" })]
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>, System.ValueTuple`2<T1, T2>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncRenderImageTrigger
class CORDL_TYPE AsyncRenderImageTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> {
public:
// Declarations
/// @brief Method GetOnRenderImageAsyncHandler, addr 0xae3e5f0, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler() ;

/// @brief Method GetOnRenderImageAsyncHandler, addr 0xae3e66c, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger* New_ctor() ;

/// @brief Method OnRenderImage, addr 0xae3e554, size 0x9c, virtual false, abstract: false, final false
inline void OnRenderImage(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination) ;

/// @brief Method OnRenderImageAsync, addr 0xae3e6f0, size 0x104, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> OnRenderImageAsync() ;

/// @brief Method OnRenderImageAsync, addr 0xae3e7f4, size 0x114, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> OnRenderImageAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3e908, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncRenderImageTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncRenderImageTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncRenderImageTrigger(AsyncRenderImageTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncRenderImageTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncRenderImageTrigger(AsyncRenderImageTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
