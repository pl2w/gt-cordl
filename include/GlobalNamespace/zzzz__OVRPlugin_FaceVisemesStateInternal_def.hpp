#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceVisemesStateInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_FaceVisemesStateInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FaceVisemesStateInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, "", "OVRPlugin/FaceVisemesStateInternal");
// Dependencies OVRPlugin::Bool
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FaceVisemesStateInternal
struct CORDL_TYPE OVRPlugin_FaceVisemesStateInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FaceVisemesStateInternal() ;

// Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_4", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_5", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_6", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_7", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_8", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_9", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_10", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_11", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_12", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_13", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visemes_14", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FaceVisemesStateInternal(::GlobalNamespace::OVRPlugin_Bool  IsValid, float_t  Visemes_0, float_t  Visemes_1, float_t  Visemes_2, float_t  Visemes_3, float_t  Visemes_4, float_t  Visemes_5, float_t  Visemes_6, float_t  Visemes_7, float_t  Visemes_8, float_t  Visemes_9, float_t  Visemes_10, float_t  Visemes_11, float_t  Visemes_12, float_t  Visemes_13, float_t  Visemes_14, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12168};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field IsValid, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  IsValid;

/// @brief Field Visemes_0, offset: 0x4, size: 0x4, def value: None
 float_t  Visemes_0;

/// @brief Field Visemes_1, offset: 0x8, size: 0x4, def value: None
 float_t  Visemes_1;

/// @brief Field Visemes_2, offset: 0xc, size: 0x4, def value: None
 float_t  Visemes_2;

/// @brief Field Visemes_3, offset: 0x10, size: 0x4, def value: None
 float_t  Visemes_3;

/// @brief Field Visemes_4, offset: 0x14, size: 0x4, def value: None
 float_t  Visemes_4;

/// @brief Field Visemes_5, offset: 0x18, size: 0x4, def value: None
 float_t  Visemes_5;

/// @brief Field Visemes_6, offset: 0x1c, size: 0x4, def value: None
 float_t  Visemes_6;

/// @brief Field Visemes_7, offset: 0x20, size: 0x4, def value: None
 float_t  Visemes_7;

/// @brief Field Visemes_8, offset: 0x24, size: 0x4, def value: None
 float_t  Visemes_8;

/// @brief Field Visemes_9, offset: 0x28, size: 0x4, def value: None
 float_t  Visemes_9;

/// @brief Field Visemes_10, offset: 0x2c, size: 0x4, def value: None
 float_t  Visemes_10;

/// @brief Field Visemes_11, offset: 0x30, size: 0x4, def value: None
 float_t  Visemes_11;

/// @brief Field Visemes_12, offset: 0x34, size: 0x4, def value: None
 float_t  Visemes_12;

/// @brief Field Visemes_13, offset: 0x38, size: 0x4, def value: None
 float_t  Visemes_13;

/// @brief Field Visemes_14, offset: 0x3c, size: 0x4, def value: None
 float_t  Visemes_14;

/// @brief Field Time, offset: 0x40, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, IsValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_0) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_2) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_3) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_4) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_5) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_6) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_7) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_8) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_9) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_10) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_11) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_12) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_13) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Visemes_14) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal, Time) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
