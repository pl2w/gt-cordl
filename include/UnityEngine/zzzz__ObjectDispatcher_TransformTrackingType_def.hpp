#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher_TransformTrackingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDispatcher_TransformTrackingType)
// Forward declare root types
namespace GlobalNamespace {
struct ObjectDispatcher_TransformTrackingType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObjectDispatcher_TransformTrackingType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectDispatcher_TransformTrackingType, "UnityEngine", "ObjectDispatcher/TransformTrackingType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ObjectDispatcher/TransformTrackingType
struct CORDL_TYPE ObjectDispatcher_TransformTrackingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ObjectDispatcher_TransformTrackingType_Unwrapped
enum struct __ObjectDispatcher_TransformTrackingType_Unwrapped : int32_t {
__E_GlobalTRS = static_cast<int32_t>(0x0),
__E_LocalTRS = static_cast<int32_t>(0x1),
__E_Hierarchy = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ObjectDispatcher_TransformTrackingType_Unwrapped () const noexcept {
return static_cast<__ObjectDispatcher_TransformTrackingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ObjectDispatcher_TransformTrackingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ObjectDispatcher_TransformTrackingType(int32_t  value__) noexcept;

/// @brief Field GlobalTRS value: I32(0)
static ::GlobalNamespace::ObjectDispatcher_TransformTrackingType const GlobalTRS;

/// @brief Field Hierarchy value: I32(2)
static ::GlobalNamespace::ObjectDispatcher_TransformTrackingType const Hierarchy;

/// @brief Field LocalTRS value: I32(1)
static ::GlobalNamespace::ObjectDispatcher_TransformTrackingType const LocalTRS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14993};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectDispatcher_TransformTrackingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectDispatcher_TransformTrackingType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
