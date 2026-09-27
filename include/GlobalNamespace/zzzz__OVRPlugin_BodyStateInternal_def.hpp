#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BodyStateInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointLocation_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_BodyStateInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BodyStateInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BodyStateInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BodyStateInternal, "", "OVRPlugin/BodyStateInternal");
// Dependencies OVRPlugin::BodyJointLocation, OVRPlugin::Bool
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BodyStateInternal
struct CORDL_TYPE OVRPlugin_BodyStateInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BodyStateInternal() ;

// Ctor Parameters [CppParam { name: "IsActive", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Confidence", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SkeletonChangedCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_0", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_1", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_2", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_3", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_4", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_5", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_6", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_7", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_8", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_9", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_10", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_11", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_12", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_13", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_14", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_15", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_16", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_17", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_18", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_19", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_20", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_21", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_22", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_23", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_24", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_25", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_26", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_27", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_28", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_29", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_30", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_31", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_32", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_33", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_34", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_35", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_36", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_37", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_38", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_39", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_40", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_41", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_42", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_43", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_44", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_45", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_46", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_47", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_48", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_49", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_50", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_51", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_52", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_53", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_54", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_55", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_56", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_57", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_58", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_59", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_60", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_61", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_62", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_63", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_64", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_65", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_66", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_67", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_68", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointLocation_69", ty: "::GlobalNamespace::OVRPlugin_BodyJointLocation", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BodyStateInternal(::GlobalNamespace::OVRPlugin_Bool  IsActive, float_t  Confidence, uint32_t  SkeletonChangedCount, double_t  Time, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_0, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_1, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_2, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_3, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_4, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_5, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_6, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_7, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_8, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_9, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_10, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_11, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_12, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_13, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_14, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_15, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_16, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_17, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_18, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_19, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_20, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_21, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_22, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_23, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_24, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_25, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_26, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_27, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_28, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_29, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_30, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_31, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_32, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_33, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_34, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_35, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_36, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_37, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_38, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_39, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_40, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_41, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_42, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_43, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_44, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_45, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_46, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_47, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_48, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_49, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_50, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_51, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_52, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_53, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_54, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_55, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_56, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_57, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_58, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_59, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_60, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_61, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_62, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_63, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_64, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_65, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_66, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_67, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_68, ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_69) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12160};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb08};

/// @brief Field IsActive, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  IsActive;

/// @brief Field Confidence, offset: 0x4, size: 0x4, def value: None
 float_t  Confidence;

/// @brief Field SkeletonChangedCount, offset: 0x8, size: 0x4, def value: None
 uint32_t  SkeletonChangedCount;

/// @brief Field Time, offset: 0x10, size: 0x8, def value: None
 double_t  Time;

/// @brief Field JointLocation_0, offset: 0x18, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_0;

/// @brief Field JointLocation_1, offset: 0x40, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_1;

/// @brief Field JointLocation_2, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_2;

/// @brief Field JointLocation_3, offset: 0x90, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_3;

/// @brief Field JointLocation_4, offset: 0xb8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_4;

/// @brief Field JointLocation_5, offset: 0xe0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_5;

/// @brief Field JointLocation_6, offset: 0x108, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_6;

/// @brief Field JointLocation_7, offset: 0x130, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_7;

/// @brief Field JointLocation_8, offset: 0x158, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_8;

/// @brief Field JointLocation_9, offset: 0x180, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_9;

/// @brief Field JointLocation_10, offset: 0x1a8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_10;

/// @brief Field JointLocation_11, offset: 0x1d0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_11;

/// @brief Field JointLocation_12, offset: 0x1f8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_12;

/// @brief Field JointLocation_13, offset: 0x220, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_13;

/// @brief Field JointLocation_14, offset: 0x248, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_14;

/// @brief Field JointLocation_15, offset: 0x270, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_15;

/// @brief Field JointLocation_16, offset: 0x298, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_16;

/// @brief Field JointLocation_17, offset: 0x2c0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_17;

/// @brief Field JointLocation_18, offset: 0x2e8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_18;

/// @brief Field JointLocation_19, offset: 0x310, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_19;

/// @brief Field JointLocation_20, offset: 0x338, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_20;

/// @brief Field JointLocation_21, offset: 0x360, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_21;

/// @brief Field JointLocation_22, offset: 0x388, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_22;

/// @brief Field JointLocation_23, offset: 0x3b0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_23;

/// @brief Field JointLocation_24, offset: 0x3d8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_24;

/// @brief Field JointLocation_25, offset: 0x400, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_25;

/// @brief Field JointLocation_26, offset: 0x428, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_26;

/// @brief Field JointLocation_27, offset: 0x450, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_27;

/// @brief Field JointLocation_28, offset: 0x478, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_28;

/// @brief Field JointLocation_29, offset: 0x4a0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_29;

/// @brief Field JointLocation_30, offset: 0x4c8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_30;

/// @brief Field JointLocation_31, offset: 0x4f0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_31;

/// @brief Field JointLocation_32, offset: 0x518, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_32;

/// @brief Field JointLocation_33, offset: 0x540, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_33;

/// @brief Field JointLocation_34, offset: 0x568, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_34;

/// @brief Field JointLocation_35, offset: 0x590, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_35;

/// @brief Field JointLocation_36, offset: 0x5b8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_36;

/// @brief Field JointLocation_37, offset: 0x5e0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_37;

/// @brief Field JointLocation_38, offset: 0x608, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_38;

/// @brief Field JointLocation_39, offset: 0x630, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_39;

/// @brief Field JointLocation_40, offset: 0x658, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_40;

/// @brief Field JointLocation_41, offset: 0x680, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_41;

/// @brief Field JointLocation_42, offset: 0x6a8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_42;

/// @brief Field JointLocation_43, offset: 0x6d0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_43;

/// @brief Field JointLocation_44, offset: 0x6f8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_44;

/// @brief Field JointLocation_45, offset: 0x720, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_45;

/// @brief Field JointLocation_46, offset: 0x748, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_46;

/// @brief Field JointLocation_47, offset: 0x770, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_47;

/// @brief Field JointLocation_48, offset: 0x798, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_48;

/// @brief Field JointLocation_49, offset: 0x7c0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_49;

/// @brief Field JointLocation_50, offset: 0x7e8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_50;

/// @brief Field JointLocation_51, offset: 0x810, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_51;

/// @brief Field JointLocation_52, offset: 0x838, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_52;

/// @brief Field JointLocation_53, offset: 0x860, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_53;

/// @brief Field JointLocation_54, offset: 0x888, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_54;

/// @brief Field JointLocation_55, offset: 0x8b0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_55;

/// @brief Field JointLocation_56, offset: 0x8d8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_56;

/// @brief Field JointLocation_57, offset: 0x900, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_57;

/// @brief Field JointLocation_58, offset: 0x928, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_58;

/// @brief Field JointLocation_59, offset: 0x950, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_59;

/// @brief Field JointLocation_60, offset: 0x978, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_60;

/// @brief Field JointLocation_61, offset: 0x9a0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_61;

/// @brief Field JointLocation_62, offset: 0x9c8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_62;

/// @brief Field JointLocation_63, offset: 0x9f0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_63;

/// @brief Field JointLocation_64, offset: 0xa18, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_64;

/// @brief Field JointLocation_65, offset: 0xa40, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_65;

/// @brief Field JointLocation_66, offset: 0xa68, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_66;

/// @brief Field JointLocation_67, offset: 0xa90, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_67;

/// @brief Field JointLocation_68, offset: 0xab8, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_68;

/// @brief Field JointLocation_69, offset: 0xae0, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointLocation  JointLocation_69;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, IsActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, Confidence) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, SkeletonChangedCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, Time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_4) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_5) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_6) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_7) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_8) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_9) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_10) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_11) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_12) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_13) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_14) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_15) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_16) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_17) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_18) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_19) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_20) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_21) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_22) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_23) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_24) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_25) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_26) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_27) == 0x450, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_28) == 0x478, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_29) == 0x4a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_30) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_31) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_32) == 0x518, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_33) == 0x540, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_34) == 0x568, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_35) == 0x590, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_36) == 0x5b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_37) == 0x5e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_38) == 0x608, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_39) == 0x630, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_40) == 0x658, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_41) == 0x680, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_42) == 0x6a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_43) == 0x6d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_44) == 0x6f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_45) == 0x720, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_46) == 0x748, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_47) == 0x770, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_48) == 0x798, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_49) == 0x7c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_50) == 0x7e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_51) == 0x810, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_52) == 0x838, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_53) == 0x860, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_54) == 0x888, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_55) == 0x8b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_56) == 0x8d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_57) == 0x900, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_58) == 0x928, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_59) == 0x950, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_60) == 0x978, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_61) == 0x9a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_62) == 0x9c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_63) == 0x9f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_64) == 0xa18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_65) == 0xa40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_66) == 0xa68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_67) == 0xa90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_68) == 0xab8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyStateInternal, JointLocation_69) == 0xae0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BodyStateInternal) == 0xb08, "Size mismatch!");

} // namespace end def GlobalNamespace
