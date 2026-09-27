#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetWristJet_WristJetType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetWristJet_WristJetType)
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetWristJet_WristJetType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetWristJet_WristJetType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetWristJet_WristJetType, "", "SIGadgetWristJet/WristJetType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetWristJet/WristJetType
struct CORDL_TYPE SIGadgetWristJet_WristJetType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIGadgetWristJet_WristJetType_Unwrapped
enum struct __SIGadgetWristJet_WristJetType_Unwrapped : int32_t {
__E_Basic = static_cast<int32_t>(0x0),
__E_Jet = static_cast<int32_t>(0x1),
__E_Propellor = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIGadgetWristJet_WristJetType_Unwrapped () const noexcept {
return static_cast<__SIGadgetWristJet_WristJetType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetWristJet_WristJetType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetWristJet_WristJetType(int32_t  value__) noexcept;

/// @brief Field Basic value: I32(0)
static ::GlobalNamespace::SIGadgetWristJet_WristJetType const Basic;

/// @brief Field Jet value: I32(1)
static ::GlobalNamespace::SIGadgetWristJet_WristJetType const Jet;

/// @brief Field Propellor value: I32(2)
static ::GlobalNamespace::SIGadgetWristJet_WristJetType const Propellor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{282};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet_WristJetType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetWristJet_WristJetType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
