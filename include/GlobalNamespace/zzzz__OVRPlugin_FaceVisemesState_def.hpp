#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceVisemesState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_FaceVisemesState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FaceVisemesState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FaceVisemesState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FaceVisemesState, "", "OVRPlugin/FaceVisemesState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FaceVisemesState
struct CORDL_TYPE OVRPlugin_FaceVisemesState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FaceVisemesState() ;

// Ctor Parameters [CppParam { name: "IsValid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FaceVisemesState(bool  IsValid, ::ArrayW<float_t>  Visemes, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field IsValid, offset: 0x0, size: 0x1, def value: None
 bool  IsValid;

/// @brief Field Visemes, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<float_t>  Visemes;

/// @brief Field Time, offset: 0x10, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesState, IsValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesState, Visemes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesState, Time) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FaceVisemesState) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
