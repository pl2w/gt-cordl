#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/EncryptionAlgorithm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionAlgorithm)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct EncryptionAlgorithm;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::EncryptionAlgorithm);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::EncryptionAlgorithm, "Pathfinding.Ionic.Zip", "EncryptionAlgorithm");
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.EncryptionAlgorithm
struct CORDL_TYPE EncryptionAlgorithm {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EncryptionAlgorithm_Unwrapped
enum struct __EncryptionAlgorithm_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PkzipWeak = static_cast<int32_t>(0x1),
__E_Unsupported = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EncryptionAlgorithm_Unwrapped () const noexcept {
return static_cast<__EncryptionAlgorithm_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EncryptionAlgorithm() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EncryptionAlgorithm(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const None;

/// @brief Field PkzipWeak value: I32(1)
static ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const PkzipWeak;

/// @brief Field Unsupported value: I32(4)
static ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const Unsupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28136};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::EncryptionAlgorithm, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::EncryptionAlgorithm) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
