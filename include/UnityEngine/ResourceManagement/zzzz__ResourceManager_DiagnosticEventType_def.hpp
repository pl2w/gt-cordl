#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceManager_DiagnosticEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManager_DiagnosticEventType)
// Forward declare root types
namespace GlobalNamespace {
struct ResourceManager_DiagnosticEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ResourceManager_DiagnosticEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ResourceManager_DiagnosticEventType, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType
struct CORDL_TYPE ResourceManager_DiagnosticEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ResourceManager_DiagnosticEventType_Unwrapped
enum struct __ResourceManager_DiagnosticEventType_Unwrapped : int32_t {
__E_AsyncOperationFail = static_cast<int32_t>(0x0),
__E_AsyncOperationCreate = static_cast<int32_t>(0x1),
__E_AsyncOperationPercentComplete = static_cast<int32_t>(0x2),
__E_AsyncOperationComplete = static_cast<int32_t>(0x3),
__E_AsyncOperationReferenceCount = static_cast<int32_t>(0x4),
__E_AsyncOperationDestroy = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ResourceManager_DiagnosticEventType_Unwrapped () const noexcept {
return static_cast<__ResourceManager_DiagnosticEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ResourceManager_DiagnosticEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ResourceManager_DiagnosticEventType(int32_t  value__) noexcept;

/// @brief Field AsyncOperationComplete value: I32(3)
static ::GlobalNamespace::ResourceManager_DiagnosticEventType const AsyncOperationComplete;

/// @brief Field AsyncOperationCreate value: I32(1)
static ::GlobalNamespace::ResourceManager_DiagnosticEventType const AsyncOperationCreate;

/// @brief Field AsyncOperationDestroy value: I32(5)
static ::GlobalNamespace::ResourceManager_DiagnosticEventType const AsyncOperationDestroy;

/// @brief Field AsyncOperationFail value: I32(0)
static ::GlobalNamespace::ResourceManager_DiagnosticEventType const AsyncOperationFail;

/// @brief Field AsyncOperationPercentComplete value: I32(2)
static ::GlobalNamespace::ResourceManager_DiagnosticEventType const AsyncOperationPercentComplete;

/// @brief Field AsyncOperationReferenceCount value: I32(4)
static ::GlobalNamespace::ResourceManager_DiagnosticEventType const AsyncOperationReferenceCount;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28539};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResourceManager_DiagnosticEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ResourceManager_DiagnosticEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
