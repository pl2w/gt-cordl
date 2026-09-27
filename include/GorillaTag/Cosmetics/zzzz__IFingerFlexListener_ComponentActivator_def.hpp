#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/IFingerFlexListener_ComponentActivator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IFingerFlexListener_ComponentActivator)
// Forward declare root types
namespace GlobalNamespace {
struct IFingerFlexListener_ComponentActivator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IFingerFlexListener_ComponentActivator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IFingerFlexListener_ComponentActivator, "GorillaTag.Cosmetics", "IFingerFlexListener/ComponentActivator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.IFingerFlexListener/ComponentActivator
struct CORDL_TYPE IFingerFlexListener_ComponentActivator {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IFingerFlexListener_ComponentActivator_Unwrapped
enum struct __IFingerFlexListener_ComponentActivator_Unwrapped : int32_t {
__E_FingerReleased = static_cast<int32_t>(0x0),
__E_FingerFlexed = static_cast<int32_t>(0x1),
__E_FingerStayed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IFingerFlexListener_ComponentActivator_Unwrapped () const noexcept {
return static_cast<__IFingerFlexListener_ComponentActivator_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IFingerFlexListener_ComponentActivator() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IFingerFlexListener_ComponentActivator(int32_t  value__) noexcept;

/// @brief Field FingerFlexed value: I32(1)
static ::GlobalNamespace::IFingerFlexListener_ComponentActivator const FingerFlexed;

/// @brief Field FingerReleased value: I32(0)
static ::GlobalNamespace::IFingerFlexListener_ComponentActivator const FingerReleased;

/// @brief Field FingerStayed value: I32(2)
static ::GlobalNamespace::IFingerFlexListener_ComponentActivator const FingerStayed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IFingerFlexListener_ComponentActivator, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IFingerFlexListener_ComponentActivator) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
