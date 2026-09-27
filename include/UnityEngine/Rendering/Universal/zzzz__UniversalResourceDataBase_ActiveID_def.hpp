#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalResourceDataBase_ActiveID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalResourceDataBase_ActiveID)
// Forward declare root types
namespace GlobalNamespace {
struct UniversalResourceDataBase_ActiveID;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalResourceDataBase_ActiveID);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalResourceDataBase_ActiveID, "UnityEngine.Rendering.Universal", "UniversalResourceDataBase/ActiveID");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalResourceDataBase/ActiveID
struct CORDL_TYPE UniversalResourceDataBase_ActiveID {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UniversalResourceDataBase_ActiveID_Unwrapped
enum struct __UniversalResourceDataBase_ActiveID_Unwrapped : int32_t {
__E_Camera = static_cast<int32_t>(0x0),
__E_BackBuffer = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UniversalResourceDataBase_ActiveID_Unwrapped () const noexcept {
return static_cast<__UniversalResourceDataBase_ActiveID_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UniversalResourceDataBase_ActiveID() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UniversalResourceDataBase_ActiveID(int32_t  value__) noexcept;

/// @brief Field BackBuffer value: I32(1)
static ::GlobalNamespace::UniversalResourceDataBase_ActiveID const BackBuffer;

/// @brief Field Camera value: I32(0)
static ::GlobalNamespace::UniversalResourceDataBase_ActiveID const Camera;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18400};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalResourceDataBase_ActiveID, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalResourceDataBase_ActiveID) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
