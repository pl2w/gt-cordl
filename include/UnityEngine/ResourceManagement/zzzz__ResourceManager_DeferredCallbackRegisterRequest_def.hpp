#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceManager_DeferredCallbackRegisterRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ResourceManager_DeferredCallbackRegisterRequest)
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
// Forward declare root types
namespace GlobalNamespace {
struct ResourceManager_DeferredCallbackRegisterRequest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ResourceManager_DeferredCallbackRegisterRequest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ResourceManager_DeferredCallbackRegisterRequest, "UnityEngine.ResourceManagement", "ResourceManager/DeferredCallbackRegisterRequest");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
struct CORDL_TYPE ResourceManager_DeferredCallbackRegisterRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ResourceManager_DeferredCallbackRegisterRequest() ;

// Ctor Parameters [CppParam { name: "operation", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "incrementRefCount", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ResourceManager_DeferredCallbackRegisterRequest(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation, bool  incrementRefCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field operation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation;

/// @brief Field incrementRefCount, offset: 0x8, size: 0x1, def value: None
 bool  incrementRefCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResourceManager_DeferredCallbackRegisterRequest, operation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceManager_DeferredCallbackRegisterRequest, incrementRefCount) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ResourceManager_DeferredCallbackRegisterRequest) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
