#pragma once
// IWYU pragma private; include "UnityEngine/AsyncOperationAwaitableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncOperationAwaitableExtensions)
namespace GlobalNamespace {
struct Awaitable_Awaiter;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine {
class AsyncOperationAwaitableExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::AsyncOperationAwaitableExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AsyncOperationAwaitableExtensions*, "UnityEngine", "AsyncOperationAwaitableExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AsyncOperationAwaitableExtensions
class CORDL_TYPE AsyncOperationAwaitableExtensions : public ::System::Object {
public:
// Declarations
/// [ExcludeFromDocs]
/// [Extension]
/// @brief Method GetAwaiter, addr 0xb5db678, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Awaitable_Awaiter GetAwaiter(::UnityEngine::AsyncOperation*  op) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationAwaitableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationAwaitableExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationAwaitableExtensions(AsyncOperationAwaitableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationAwaitableExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationAwaitableExtensions(AsyncOperationAwaitableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15056};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AsyncOperationAwaitableExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
