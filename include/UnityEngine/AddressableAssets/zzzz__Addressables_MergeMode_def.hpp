#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Addressables_MergeMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Addressables_MergeMode)
// Forward declare root types
namespace GlobalNamespace {
struct Addressables_MergeMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Addressables_MergeMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Addressables_MergeMode, "UnityEngine.AddressableAssets", "Addressables/MergeMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.Addressables/MergeMode
struct CORDL_TYPE Addressables_MergeMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Addressables_MergeMode_Unwrapped
enum struct __Addressables_MergeMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_UseFirst = static_cast<int32_t>(0x0),
__E_Union = static_cast<int32_t>(0x1),
__E_Intersection = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Addressables_MergeMode_Unwrapped () const noexcept {
return static_cast<__Addressables_MergeMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Addressables_MergeMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Addressables_MergeMode(int32_t  value__) noexcept;

/// @brief Field Intersection value: I32(2)
static ::GlobalNamespace::Addressables_MergeMode const Intersection;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Addressables_MergeMode const None;

/// @brief Field Union value: I32(1)
static ::GlobalNamespace::Addressables_MergeMode const Union;

/// @brief Field UseFirst value: I32(0)
static ::GlobalNamespace::Addressables_MergeMode const UseFirst;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29211};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Addressables_MergeMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Addressables_MergeMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
