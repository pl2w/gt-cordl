#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnInitializePotentialDragHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnInitializePotentialDragHandler)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnInitializePotentialDragHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnInitializePotentialDragHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnInitializePotentialDragHandler
class CORDL_TYPE IAsyncOnInitializePotentialDragHandler {
public:
// Declarations
/// @brief Method OnInitializePotentialDragAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnInitializePotentialDragAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnInitializePotentialDragHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnInitializePotentialDragHandler(IAsyncOnInitializePotentialDragHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22044};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
