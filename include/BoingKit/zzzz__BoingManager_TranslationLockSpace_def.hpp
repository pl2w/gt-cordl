#pragma once
// IWYU pragma private; include "BoingKit/BoingManager_TranslationLockSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingManager_TranslationLockSpace)
// Forward declare root types
namespace GlobalNamespace {
struct BoingManager_TranslationLockSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingManager_TranslationLockSpace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingManager_TranslationLockSpace, "BoingKit", "BoingManager/TranslationLockSpace");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingManager/TranslationLockSpace
struct CORDL_TYPE BoingManager_TranslationLockSpace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoingManager_TranslationLockSpace_Unwrapped
enum struct __BoingManager_TranslationLockSpace_Unwrapped : int32_t {
__E_Global = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoingManager_TranslationLockSpace_Unwrapped () const noexcept {
return static_cast<__BoingManager_TranslationLockSpace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_TranslationLockSpace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingManager_TranslationLockSpace(int32_t  value__) noexcept;

/// @brief Field Global value: I32(0)
static ::GlobalNamespace::BoingManager_TranslationLockSpace const Global;

/// @brief Field Local value: I32(1)
static ::GlobalNamespace::BoingManager_TranslationLockSpace const Local;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5176};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingManager_TranslationLockSpace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingManager_TranslationLockSpace) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
