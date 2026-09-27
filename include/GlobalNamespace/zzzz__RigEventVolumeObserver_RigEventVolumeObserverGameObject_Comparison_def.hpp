#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolumeObserver_RigEventVolumeObserverGameObject_Comparison.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigEventVolumeObserver_RigEventVolumeObserverGameObject_Comparison)
// Forward declare root types
namespace GlobalNamespace {
struct RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison, "", "RigEventVolumeObserver/RigEventVolumeObserverGameObject/Comparison");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RigEventVolumeObserver/RigEventVolumeObserverGameObject/Comparison
struct CORDL_TYPE RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison_Unwrapped
enum struct __RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison_Unwrapped : int32_t {
__E_EQ = static_cast<int32_t>(0x0),
__E_LT = static_cast<int32_t>(0x1),
__E_GT = static_cast<int32_t>(0x2),
__E_LT_EQ = static_cast<int32_t>(0x3),
__E_GT_EQ = static_cast<int32_t>(0x4),
__E_NEQ = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison_Unwrapped () const noexcept {
return static_cast<__RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison(int32_t  value__) noexcept;

/// @brief Field EQ value: I32(0)
static ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison const EQ;

/// @brief Field GT value: I32(2)
static ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison const GT;

/// @brief Field GT_EQ value: I32(4)
static ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison const GT_EQ;

/// @brief Field LT value: I32(1)
static ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison const LT;

/// @brief Field LT_EQ value: I32(3)
static ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison const LT_EQ;

/// @brief Field NEQ value: I32(5)
static ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison const NEQ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
