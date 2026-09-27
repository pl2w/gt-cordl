#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnValidateHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnValidateHandler)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnValidateHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnValidateHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnValidateHandler
class CORDL_TYPE IAsyncOnValidateHandler {
public:
// Declarations
/// @brief Method OnValidateAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTask OnValidateAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnValidateHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnValidateHandler(IAsyncOnValidateHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
