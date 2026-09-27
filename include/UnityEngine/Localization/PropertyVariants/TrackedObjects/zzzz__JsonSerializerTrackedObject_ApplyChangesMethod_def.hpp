#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/JsonSerializerTrackedObject_ApplyChangesMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerTrackedObject_ApplyChangesMethod)
// Forward declare root types
namespace GlobalNamespace {
struct JsonSerializerTrackedObject_ApplyChangesMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "JsonSerializerTrackedObject/ApplyChangesMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.JsonSerializerTrackedObject/ApplyChangesMethod
struct CORDL_TYPE JsonSerializerTrackedObject_ApplyChangesMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JsonSerializerTrackedObject_ApplyChangesMethod_Unwrapped
enum struct __JsonSerializerTrackedObject_ApplyChangesMethod_Unwrapped : int32_t {
__E_Partial = static_cast<int32_t>(0x0),
__E_Full = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonSerializerTrackedObject_ApplyChangesMethod_Unwrapped () const noexcept {
return static_cast<__JsonSerializerTrackedObject_ApplyChangesMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerTrackedObject_ApplyChangesMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JsonSerializerTrackedObject_ApplyChangesMethod(int32_t  value__) noexcept;

/// @brief Field Full value: I32(1)
static ::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod const Full;

/// @brief Field Partial value: I32(0)
static ::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod const Partial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
