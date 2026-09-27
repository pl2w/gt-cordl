#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReloadAttribute_Package.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReloadAttribute_Package)
// Forward declare root types
namespace GlobalNamespace {
struct ReloadAttribute_Package;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ReloadAttribute_Package);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReloadAttribute_Package, "UnityEngine.Rendering", "ReloadAttribute/Package");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReloadAttribute/Package
struct CORDL_TYPE ReloadAttribute_Package {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReloadAttribute_Package_Unwrapped
enum struct __ReloadAttribute_Package_Unwrapped : int32_t {
__E_Builtin = static_cast<int32_t>(0x0),
__E_Root = static_cast<int32_t>(0x1),
__E_BuiltinExtra = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReloadAttribute_Package_Unwrapped () const noexcept {
return static_cast<__ReloadAttribute_Package_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReloadAttribute_Package() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReloadAttribute_Package(int32_t  value__) noexcept;

/// @brief Field Builtin value: I32(0)
static ::GlobalNamespace::ReloadAttribute_Package const Builtin;

/// @brief Field BuiltinExtra value: I32(2)
static ::GlobalNamespace::ReloadAttribute_Package const BuiltinExtra;

/// @brief Field Root value: I32(1)
static ::GlobalNamespace::ReloadAttribute_Package const Root;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16651};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReloadAttribute_Package, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReloadAttribute_Package) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
