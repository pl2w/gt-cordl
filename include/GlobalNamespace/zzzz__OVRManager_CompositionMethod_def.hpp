#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_CompositionMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_CompositionMethod)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_CompositionMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_CompositionMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_CompositionMethod, "", "OVRManager/CompositionMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/CompositionMethod
struct CORDL_TYPE OVRManager_CompositionMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_CompositionMethod_Unwrapped
enum struct __OVRManager_CompositionMethod_Unwrapped : int32_t {
__E_External = static_cast<int32_t>(0x0),
__E_Direct = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_CompositionMethod_Unwrapped () const noexcept {
return static_cast<__OVRManager_CompositionMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_CompositionMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_CompositionMethod(int32_t  value__) noexcept;

/// @brief Field Direct value: I32(1)
static ::GlobalNamespace::OVRManager_CompositionMethod const Direct;

/// @brief Field External value: I32(0)
static ::GlobalNamespace::OVRManager_CompositionMethod const External;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11984};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_CompositionMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_CompositionMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
