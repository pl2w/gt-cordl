#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher_TypeTrackingFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDispatcher_TypeTrackingFlags)
// Forward declare root types
namespace GlobalNamespace {
struct ObjectDispatcher_TypeTrackingFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags, "UnityEngine", "ObjectDispatcher/TypeTrackingFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ObjectDispatcher/TypeTrackingFlags
struct CORDL_TYPE ObjectDispatcher_TypeTrackingFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ObjectDispatcher_TypeTrackingFlags_Unwrapped
enum struct __ObjectDispatcher_TypeTrackingFlags_Unwrapped : int32_t {
__E_SceneObjects = static_cast<int32_t>(0x1),
__E_Assets = static_cast<int32_t>(0x2),
__E_EditorOnlyObjects = static_cast<int32_t>(0x4),
__E_Default = static_cast<int32_t>(0x3),
__E_All = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ObjectDispatcher_TypeTrackingFlags_Unwrapped () const noexcept {
return static_cast<__ObjectDispatcher_TypeTrackingFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ObjectDispatcher_TypeTrackingFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ObjectDispatcher_TypeTrackingFlags(int32_t  value__) noexcept;

/// @brief Field All value: I32(7)
static ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags const All;

/// @brief Field Assets value: I32(2)
static ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags const Assets;

/// @brief Field Default value: I32(3)
static ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags const Default;

/// @brief Field EditorOnlyObjects value: I32(4)
static ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags const EditorOnlyObjects;

/// @brief Field SceneObjects value: I32(1)
static ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags const SceneObjects;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14994};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
