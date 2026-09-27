#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceStateInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_FaceExpressionStatusInternal_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_FaceStateInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FaceStateInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FaceStateInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FaceStateInternal, "", "OVRPlugin/FaceStateInternal");
// Dependencies OVRPlugin::FaceExpressionStatusInternal
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FaceStateInternal
struct CORDL_TYPE OVRPlugin_FaceStateInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FaceStateInternal() ;

// Ctor Parameters [CppParam { name: "ExpressionWeights_0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_4", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_5", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_6", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_7", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_8", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_9", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_10", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_11", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_12", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_13", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_14", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_15", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_16", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_17", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_18", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_19", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_20", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_21", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_22", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_23", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_24", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_25", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_26", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_27", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_28", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_29", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_30", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_31", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_32", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_33", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_34", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_35", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_36", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_37", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_38", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_39", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_40", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_41", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_42", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_43", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_44", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_45", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_46", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_47", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_48", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_49", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_50", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_51", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_52", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_53", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_54", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_55", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_56", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_57", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_58", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_59", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_60", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_61", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeights_62", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeightConfidences_0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeightConfidences_1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FaceStateInternal(float_t  ExpressionWeights_0, float_t  ExpressionWeights_1, float_t  ExpressionWeights_2, float_t  ExpressionWeights_3, float_t  ExpressionWeights_4, float_t  ExpressionWeights_5, float_t  ExpressionWeights_6, float_t  ExpressionWeights_7, float_t  ExpressionWeights_8, float_t  ExpressionWeights_9, float_t  ExpressionWeights_10, float_t  ExpressionWeights_11, float_t  ExpressionWeights_12, float_t  ExpressionWeights_13, float_t  ExpressionWeights_14, float_t  ExpressionWeights_15, float_t  ExpressionWeights_16, float_t  ExpressionWeights_17, float_t  ExpressionWeights_18, float_t  ExpressionWeights_19, float_t  ExpressionWeights_20, float_t  ExpressionWeights_21, float_t  ExpressionWeights_22, float_t  ExpressionWeights_23, float_t  ExpressionWeights_24, float_t  ExpressionWeights_25, float_t  ExpressionWeights_26, float_t  ExpressionWeights_27, float_t  ExpressionWeights_28, float_t  ExpressionWeights_29, float_t  ExpressionWeights_30, float_t  ExpressionWeights_31, float_t  ExpressionWeights_32, float_t  ExpressionWeights_33, float_t  ExpressionWeights_34, float_t  ExpressionWeights_35, float_t  ExpressionWeights_36, float_t  ExpressionWeights_37, float_t  ExpressionWeights_38, float_t  ExpressionWeights_39, float_t  ExpressionWeights_40, float_t  ExpressionWeights_41, float_t  ExpressionWeights_42, float_t  ExpressionWeights_43, float_t  ExpressionWeights_44, float_t  ExpressionWeights_45, float_t  ExpressionWeights_46, float_t  ExpressionWeights_47, float_t  ExpressionWeights_48, float_t  ExpressionWeights_49, float_t  ExpressionWeights_50, float_t  ExpressionWeights_51, float_t  ExpressionWeights_52, float_t  ExpressionWeights_53, float_t  ExpressionWeights_54, float_t  ExpressionWeights_55, float_t  ExpressionWeights_56, float_t  ExpressionWeights_57, float_t  ExpressionWeights_58, float_t  ExpressionWeights_59, float_t  ExpressionWeights_60, float_t  ExpressionWeights_61, float_t  ExpressionWeights_62, float_t  ExpressionWeightConfidences_0, float_t  ExpressionWeightConfidences_1, ::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal  Status, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12166};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x118};

/// @brief Field ExpressionWeights_0, offset: 0x0, size: 0x4, def value: None
 float_t  ExpressionWeights_0;

/// @brief Field ExpressionWeights_1, offset: 0x4, size: 0x4, def value: None
 float_t  ExpressionWeights_1;

/// @brief Field ExpressionWeights_2, offset: 0x8, size: 0x4, def value: None
 float_t  ExpressionWeights_2;

/// @brief Field ExpressionWeights_3, offset: 0xc, size: 0x4, def value: None
 float_t  ExpressionWeights_3;

/// @brief Field ExpressionWeights_4, offset: 0x10, size: 0x4, def value: None
 float_t  ExpressionWeights_4;

/// @brief Field ExpressionWeights_5, offset: 0x14, size: 0x4, def value: None
 float_t  ExpressionWeights_5;

/// @brief Field ExpressionWeights_6, offset: 0x18, size: 0x4, def value: None
 float_t  ExpressionWeights_6;

/// @brief Field ExpressionWeights_7, offset: 0x1c, size: 0x4, def value: None
 float_t  ExpressionWeights_7;

/// @brief Field ExpressionWeights_8, offset: 0x20, size: 0x4, def value: None
 float_t  ExpressionWeights_8;

/// @brief Field ExpressionWeights_9, offset: 0x24, size: 0x4, def value: None
 float_t  ExpressionWeights_9;

/// @brief Field ExpressionWeights_10, offset: 0x28, size: 0x4, def value: None
 float_t  ExpressionWeights_10;

/// @brief Field ExpressionWeights_11, offset: 0x2c, size: 0x4, def value: None
 float_t  ExpressionWeights_11;

/// @brief Field ExpressionWeights_12, offset: 0x30, size: 0x4, def value: None
 float_t  ExpressionWeights_12;

/// @brief Field ExpressionWeights_13, offset: 0x34, size: 0x4, def value: None
 float_t  ExpressionWeights_13;

/// @brief Field ExpressionWeights_14, offset: 0x38, size: 0x4, def value: None
 float_t  ExpressionWeights_14;

/// @brief Field ExpressionWeights_15, offset: 0x3c, size: 0x4, def value: None
 float_t  ExpressionWeights_15;

/// @brief Field ExpressionWeights_16, offset: 0x40, size: 0x4, def value: None
 float_t  ExpressionWeights_16;

/// @brief Field ExpressionWeights_17, offset: 0x44, size: 0x4, def value: None
 float_t  ExpressionWeights_17;

/// @brief Field ExpressionWeights_18, offset: 0x48, size: 0x4, def value: None
 float_t  ExpressionWeights_18;

/// @brief Field ExpressionWeights_19, offset: 0x4c, size: 0x4, def value: None
 float_t  ExpressionWeights_19;

/// @brief Field ExpressionWeights_20, offset: 0x50, size: 0x4, def value: None
 float_t  ExpressionWeights_20;

/// @brief Field ExpressionWeights_21, offset: 0x54, size: 0x4, def value: None
 float_t  ExpressionWeights_21;

/// @brief Field ExpressionWeights_22, offset: 0x58, size: 0x4, def value: None
 float_t  ExpressionWeights_22;

/// @brief Field ExpressionWeights_23, offset: 0x5c, size: 0x4, def value: None
 float_t  ExpressionWeights_23;

/// @brief Field ExpressionWeights_24, offset: 0x60, size: 0x4, def value: None
 float_t  ExpressionWeights_24;

/// @brief Field ExpressionWeights_25, offset: 0x64, size: 0x4, def value: None
 float_t  ExpressionWeights_25;

/// @brief Field ExpressionWeights_26, offset: 0x68, size: 0x4, def value: None
 float_t  ExpressionWeights_26;

/// @brief Field ExpressionWeights_27, offset: 0x6c, size: 0x4, def value: None
 float_t  ExpressionWeights_27;

/// @brief Field ExpressionWeights_28, offset: 0x70, size: 0x4, def value: None
 float_t  ExpressionWeights_28;

/// @brief Field ExpressionWeights_29, offset: 0x74, size: 0x4, def value: None
 float_t  ExpressionWeights_29;

/// @brief Field ExpressionWeights_30, offset: 0x78, size: 0x4, def value: None
 float_t  ExpressionWeights_30;

/// @brief Field ExpressionWeights_31, offset: 0x7c, size: 0x4, def value: None
 float_t  ExpressionWeights_31;

/// @brief Field ExpressionWeights_32, offset: 0x80, size: 0x4, def value: None
 float_t  ExpressionWeights_32;

/// @brief Field ExpressionWeights_33, offset: 0x84, size: 0x4, def value: None
 float_t  ExpressionWeights_33;

/// @brief Field ExpressionWeights_34, offset: 0x88, size: 0x4, def value: None
 float_t  ExpressionWeights_34;

/// @brief Field ExpressionWeights_35, offset: 0x8c, size: 0x4, def value: None
 float_t  ExpressionWeights_35;

/// @brief Field ExpressionWeights_36, offset: 0x90, size: 0x4, def value: None
 float_t  ExpressionWeights_36;

/// @brief Field ExpressionWeights_37, offset: 0x94, size: 0x4, def value: None
 float_t  ExpressionWeights_37;

/// @brief Field ExpressionWeights_38, offset: 0x98, size: 0x4, def value: None
 float_t  ExpressionWeights_38;

/// @brief Field ExpressionWeights_39, offset: 0x9c, size: 0x4, def value: None
 float_t  ExpressionWeights_39;

/// @brief Field ExpressionWeights_40, offset: 0xa0, size: 0x4, def value: None
 float_t  ExpressionWeights_40;

/// @brief Field ExpressionWeights_41, offset: 0xa4, size: 0x4, def value: None
 float_t  ExpressionWeights_41;

/// @brief Field ExpressionWeights_42, offset: 0xa8, size: 0x4, def value: None
 float_t  ExpressionWeights_42;

/// @brief Field ExpressionWeights_43, offset: 0xac, size: 0x4, def value: None
 float_t  ExpressionWeights_43;

/// @brief Field ExpressionWeights_44, offset: 0xb0, size: 0x4, def value: None
 float_t  ExpressionWeights_44;

/// @brief Field ExpressionWeights_45, offset: 0xb4, size: 0x4, def value: None
 float_t  ExpressionWeights_45;

/// @brief Field ExpressionWeights_46, offset: 0xb8, size: 0x4, def value: None
 float_t  ExpressionWeights_46;

/// @brief Field ExpressionWeights_47, offset: 0xbc, size: 0x4, def value: None
 float_t  ExpressionWeights_47;

/// @brief Field ExpressionWeights_48, offset: 0xc0, size: 0x4, def value: None
 float_t  ExpressionWeights_48;

/// @brief Field ExpressionWeights_49, offset: 0xc4, size: 0x4, def value: None
 float_t  ExpressionWeights_49;

/// @brief Field ExpressionWeights_50, offset: 0xc8, size: 0x4, def value: None
 float_t  ExpressionWeights_50;

/// @brief Field ExpressionWeights_51, offset: 0xcc, size: 0x4, def value: None
 float_t  ExpressionWeights_51;

/// @brief Field ExpressionWeights_52, offset: 0xd0, size: 0x4, def value: None
 float_t  ExpressionWeights_52;

/// @brief Field ExpressionWeights_53, offset: 0xd4, size: 0x4, def value: None
 float_t  ExpressionWeights_53;

/// @brief Field ExpressionWeights_54, offset: 0xd8, size: 0x4, def value: None
 float_t  ExpressionWeights_54;

/// @brief Field ExpressionWeights_55, offset: 0xdc, size: 0x4, def value: None
 float_t  ExpressionWeights_55;

/// @brief Field ExpressionWeights_56, offset: 0xe0, size: 0x4, def value: None
 float_t  ExpressionWeights_56;

/// @brief Field ExpressionWeights_57, offset: 0xe4, size: 0x4, def value: None
 float_t  ExpressionWeights_57;

/// @brief Field ExpressionWeights_58, offset: 0xe8, size: 0x4, def value: None
 float_t  ExpressionWeights_58;

/// @brief Field ExpressionWeights_59, offset: 0xec, size: 0x4, def value: None
 float_t  ExpressionWeights_59;

/// @brief Field ExpressionWeights_60, offset: 0xf0, size: 0x4, def value: None
 float_t  ExpressionWeights_60;

/// @brief Field ExpressionWeights_61, offset: 0xf4, size: 0x4, def value: None
 float_t  ExpressionWeights_61;

/// @brief Field ExpressionWeights_62, offset: 0xf8, size: 0x4, def value: None
 float_t  ExpressionWeights_62;

/// @brief Field ExpressionWeightConfidences_0, offset: 0xfc, size: 0x4, def value: None
 float_t  ExpressionWeightConfidences_0;

/// @brief Field ExpressionWeightConfidences_1, offset: 0x100, size: 0x4, def value: None
 float_t  ExpressionWeightConfidences_1;

/// @brief Field Status, offset: 0x104, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal  Status;

/// @brief Field Time, offset: 0x110, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_4) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_5) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_6) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_7) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_8) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_9) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_10) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_11) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_12) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_13) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_14) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_15) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_16) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_17) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_18) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_19) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_20) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_21) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_22) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_23) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_24) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_25) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_26) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_27) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_28) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_29) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_30) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_31) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_32) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_33) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_34) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_35) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_36) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_37) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_38) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_39) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_40) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_41) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_42) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_43) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_44) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_45) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_46) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_47) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_48) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_49) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_50) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_51) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_52) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_53) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_54) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_55) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_56) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_57) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_58) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_59) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_60) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_61) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeights_62) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeightConfidences_0) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, ExpressionWeightConfidences_1) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, Status) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceStateInternal, Time) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FaceStateInternal) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
