#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Skeleton3Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BoneCapsule_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bone_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SkeletonType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Skeleton3Internal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Skeleton3Internal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Skeleton3Internal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Skeleton3Internal, "", "OVRPlugin/Skeleton3Internal");
// Dependencies OVRPlugin::Bone, OVRPlugin::BoneCapsule, OVRPlugin::SkeletonType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Skeleton3Internal
struct CORDL_TYPE OVRPlugin_Skeleton3Internal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Skeleton3Internal() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SkeletonType", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumBones", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumBoneCapsules", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_0", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_1", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_2", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_3", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_4", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_5", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_6", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_7", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_8", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_9", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_10", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_11", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_12", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_13", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_14", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_15", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_16", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_17", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_18", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_19", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_20", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_21", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_22", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_23", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_24", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_25", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_26", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_27", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_28", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_29", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_30", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_31", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_32", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_33", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_34", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_35", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_36", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_37", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_38", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_39", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_40", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_41", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_42", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_43", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_44", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_45", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_46", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_47", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_48", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_49", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_50", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_51", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_52", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_53", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_54", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_55", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_56", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_57", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_58", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_59", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_60", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_61", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_62", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_63", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_64", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_65", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_66", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_67", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_68", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_69", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_70", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_71", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_72", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_73", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_74", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_75", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_76", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_77", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_78", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_79", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_80", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_81", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_82", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones_83", ty: "::GlobalNamespace::OVRPlugin_Bone", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_0", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_1", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_2", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_3", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_4", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_5", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_6", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_7", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_8", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_9", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_10", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_11", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_12", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_13", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_14", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_15", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_16", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_17", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules_18", ty: "::GlobalNamespace::OVRPlugin_BoneCapsule", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Skeleton3Internal(::GlobalNamespace::OVRPlugin_SkeletonType  Type, uint32_t  NumBones, uint32_t  NumBoneCapsules, ::GlobalNamespace::OVRPlugin_Bone  Bones_0, ::GlobalNamespace::OVRPlugin_Bone  Bones_1, ::GlobalNamespace::OVRPlugin_Bone  Bones_2, ::GlobalNamespace::OVRPlugin_Bone  Bones_3, ::GlobalNamespace::OVRPlugin_Bone  Bones_4, ::GlobalNamespace::OVRPlugin_Bone  Bones_5, ::GlobalNamespace::OVRPlugin_Bone  Bones_6, ::GlobalNamespace::OVRPlugin_Bone  Bones_7, ::GlobalNamespace::OVRPlugin_Bone  Bones_8, ::GlobalNamespace::OVRPlugin_Bone  Bones_9, ::GlobalNamespace::OVRPlugin_Bone  Bones_10, ::GlobalNamespace::OVRPlugin_Bone  Bones_11, ::GlobalNamespace::OVRPlugin_Bone  Bones_12, ::GlobalNamespace::OVRPlugin_Bone  Bones_13, ::GlobalNamespace::OVRPlugin_Bone  Bones_14, ::GlobalNamespace::OVRPlugin_Bone  Bones_15, ::GlobalNamespace::OVRPlugin_Bone  Bones_16, ::GlobalNamespace::OVRPlugin_Bone  Bones_17, ::GlobalNamespace::OVRPlugin_Bone  Bones_18, ::GlobalNamespace::OVRPlugin_Bone  Bones_19, ::GlobalNamespace::OVRPlugin_Bone  Bones_20, ::GlobalNamespace::OVRPlugin_Bone  Bones_21, ::GlobalNamespace::OVRPlugin_Bone  Bones_22, ::GlobalNamespace::OVRPlugin_Bone  Bones_23, ::GlobalNamespace::OVRPlugin_Bone  Bones_24, ::GlobalNamespace::OVRPlugin_Bone  Bones_25, ::GlobalNamespace::OVRPlugin_Bone  Bones_26, ::GlobalNamespace::OVRPlugin_Bone  Bones_27, ::GlobalNamespace::OVRPlugin_Bone  Bones_28, ::GlobalNamespace::OVRPlugin_Bone  Bones_29, ::GlobalNamespace::OVRPlugin_Bone  Bones_30, ::GlobalNamespace::OVRPlugin_Bone  Bones_31, ::GlobalNamespace::OVRPlugin_Bone  Bones_32, ::GlobalNamespace::OVRPlugin_Bone  Bones_33, ::GlobalNamespace::OVRPlugin_Bone  Bones_34, ::GlobalNamespace::OVRPlugin_Bone  Bones_35, ::GlobalNamespace::OVRPlugin_Bone  Bones_36, ::GlobalNamespace::OVRPlugin_Bone  Bones_37, ::GlobalNamespace::OVRPlugin_Bone  Bones_38, ::GlobalNamespace::OVRPlugin_Bone  Bones_39, ::GlobalNamespace::OVRPlugin_Bone  Bones_40, ::GlobalNamespace::OVRPlugin_Bone  Bones_41, ::GlobalNamespace::OVRPlugin_Bone  Bones_42, ::GlobalNamespace::OVRPlugin_Bone  Bones_43, ::GlobalNamespace::OVRPlugin_Bone  Bones_44, ::GlobalNamespace::OVRPlugin_Bone  Bones_45, ::GlobalNamespace::OVRPlugin_Bone  Bones_46, ::GlobalNamespace::OVRPlugin_Bone  Bones_47, ::GlobalNamespace::OVRPlugin_Bone  Bones_48, ::GlobalNamespace::OVRPlugin_Bone  Bones_49, ::GlobalNamespace::OVRPlugin_Bone  Bones_50, ::GlobalNamespace::OVRPlugin_Bone  Bones_51, ::GlobalNamespace::OVRPlugin_Bone  Bones_52, ::GlobalNamespace::OVRPlugin_Bone  Bones_53, ::GlobalNamespace::OVRPlugin_Bone  Bones_54, ::GlobalNamespace::OVRPlugin_Bone  Bones_55, ::GlobalNamespace::OVRPlugin_Bone  Bones_56, ::GlobalNamespace::OVRPlugin_Bone  Bones_57, ::GlobalNamespace::OVRPlugin_Bone  Bones_58, ::GlobalNamespace::OVRPlugin_Bone  Bones_59, ::GlobalNamespace::OVRPlugin_Bone  Bones_60, ::GlobalNamespace::OVRPlugin_Bone  Bones_61, ::GlobalNamespace::OVRPlugin_Bone  Bones_62, ::GlobalNamespace::OVRPlugin_Bone  Bones_63, ::GlobalNamespace::OVRPlugin_Bone  Bones_64, ::GlobalNamespace::OVRPlugin_Bone  Bones_65, ::GlobalNamespace::OVRPlugin_Bone  Bones_66, ::GlobalNamespace::OVRPlugin_Bone  Bones_67, ::GlobalNamespace::OVRPlugin_Bone  Bones_68, ::GlobalNamespace::OVRPlugin_Bone  Bones_69, ::GlobalNamespace::OVRPlugin_Bone  Bones_70, ::GlobalNamespace::OVRPlugin_Bone  Bones_71, ::GlobalNamespace::OVRPlugin_Bone  Bones_72, ::GlobalNamespace::OVRPlugin_Bone  Bones_73, ::GlobalNamespace::OVRPlugin_Bone  Bones_74, ::GlobalNamespace::OVRPlugin_Bone  Bones_75, ::GlobalNamespace::OVRPlugin_Bone  Bones_76, ::GlobalNamespace::OVRPlugin_Bone  Bones_77, ::GlobalNamespace::OVRPlugin_Bone  Bones_78, ::GlobalNamespace::OVRPlugin_Bone  Bones_79, ::GlobalNamespace::OVRPlugin_Bone  Bones_80, ::GlobalNamespace::OVRPlugin_Bone  Bones_81, ::GlobalNamespace::OVRPlugin_Bone  Bones_82, ::GlobalNamespace::OVRPlugin_Bone  Bones_83, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_0, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_1, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_2, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_3, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_4, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_5, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_6, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_7, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_8, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_9, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_10, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_11, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_12, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_13, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_14, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_15, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_16, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_17, ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_18) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe3c};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SkeletonType  Type;

/// @brief Field NumBones, offset: 0x4, size: 0x4, def value: None
 uint32_t  NumBones;

/// @brief Field NumBoneCapsules, offset: 0x8, size: 0x4, def value: None
 uint32_t  NumBoneCapsules;

/// @brief Field Bones_0, offset: 0xc, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_0;

/// @brief Field Bones_1, offset: 0x30, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_1;

/// @brief Field Bones_2, offset: 0x54, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_2;

/// @brief Field Bones_3, offset: 0x78, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_3;

/// @brief Field Bones_4, offset: 0x9c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_4;

/// @brief Field Bones_5, offset: 0xc0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_5;

/// @brief Field Bones_6, offset: 0xe4, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_6;

/// @brief Field Bones_7, offset: 0x108, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_7;

/// @brief Field Bones_8, offset: 0x12c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_8;

/// @brief Field Bones_9, offset: 0x150, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_9;

/// @brief Field Bones_10, offset: 0x174, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_10;

/// @brief Field Bones_11, offset: 0x198, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_11;

/// @brief Field Bones_12, offset: 0x1bc, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_12;

/// @brief Field Bones_13, offset: 0x1e0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_13;

/// @brief Field Bones_14, offset: 0x204, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_14;

/// @brief Field Bones_15, offset: 0x228, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_15;

/// @brief Field Bones_16, offset: 0x24c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_16;

/// @brief Field Bones_17, offset: 0x270, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_17;

/// @brief Field Bones_18, offset: 0x294, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_18;

/// @brief Field Bones_19, offset: 0x2b8, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_19;

/// @brief Field Bones_20, offset: 0x2dc, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_20;

/// @brief Field Bones_21, offset: 0x300, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_21;

/// @brief Field Bones_22, offset: 0x324, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_22;

/// @brief Field Bones_23, offset: 0x348, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_23;

/// @brief Field Bones_24, offset: 0x36c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_24;

/// @brief Field Bones_25, offset: 0x390, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_25;

/// @brief Field Bones_26, offset: 0x3b4, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_26;

/// @brief Field Bones_27, offset: 0x3d8, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_27;

/// @brief Field Bones_28, offset: 0x3fc, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_28;

/// @brief Field Bones_29, offset: 0x420, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_29;

/// @brief Field Bones_30, offset: 0x444, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_30;

/// @brief Field Bones_31, offset: 0x468, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_31;

/// @brief Field Bones_32, offset: 0x48c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_32;

/// @brief Field Bones_33, offset: 0x4b0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_33;

/// @brief Field Bones_34, offset: 0x4d4, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_34;

/// @brief Field Bones_35, offset: 0x4f8, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_35;

/// @brief Field Bones_36, offset: 0x51c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_36;

/// @brief Field Bones_37, offset: 0x540, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_37;

/// @brief Field Bones_38, offset: 0x564, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_38;

/// @brief Field Bones_39, offset: 0x588, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_39;

/// @brief Field Bones_40, offset: 0x5ac, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_40;

/// @brief Field Bones_41, offset: 0x5d0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_41;

/// @brief Field Bones_42, offset: 0x5f4, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_42;

/// @brief Field Bones_43, offset: 0x618, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_43;

/// @brief Field Bones_44, offset: 0x63c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_44;

/// @brief Field Bones_45, offset: 0x660, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_45;

/// @brief Field Bones_46, offset: 0x684, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_46;

/// @brief Field Bones_47, offset: 0x6a8, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_47;

/// @brief Field Bones_48, offset: 0x6cc, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_48;

/// @brief Field Bones_49, offset: 0x6f0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_49;

/// @brief Field Bones_50, offset: 0x714, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_50;

/// @brief Field Bones_51, offset: 0x738, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_51;

/// @brief Field Bones_52, offset: 0x75c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_52;

/// @brief Field Bones_53, offset: 0x780, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_53;

/// @brief Field Bones_54, offset: 0x7a4, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_54;

/// @brief Field Bones_55, offset: 0x7c8, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_55;

/// @brief Field Bones_56, offset: 0x7ec, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_56;

/// @brief Field Bones_57, offset: 0x810, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_57;

/// @brief Field Bones_58, offset: 0x834, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_58;

/// @brief Field Bones_59, offset: 0x858, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_59;

/// @brief Field Bones_60, offset: 0x87c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_60;

/// @brief Field Bones_61, offset: 0x8a0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_61;

/// @brief Field Bones_62, offset: 0x8c4, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_62;

/// @brief Field Bones_63, offset: 0x8e8, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_63;

/// @brief Field Bones_64, offset: 0x90c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_64;

/// @brief Field Bones_65, offset: 0x930, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_65;

/// @brief Field Bones_66, offset: 0x954, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_66;

/// @brief Field Bones_67, offset: 0x978, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_67;

/// @brief Field Bones_68, offset: 0x99c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_68;

/// @brief Field Bones_69, offset: 0x9c0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_69;

/// @brief Field Bones_70, offset: 0x9e4, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_70;

/// @brief Field Bones_71, offset: 0xa08, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_71;

/// @brief Field Bones_72, offset: 0xa2c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_72;

/// @brief Field Bones_73, offset: 0xa50, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_73;

/// @brief Field Bones_74, offset: 0xa74, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_74;

/// @brief Field Bones_75, offset: 0xa98, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_75;

/// @brief Field Bones_76, offset: 0xabc, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_76;

/// @brief Field Bones_77, offset: 0xae0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_77;

/// @brief Field Bones_78, offset: 0xb04, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_78;

/// @brief Field Bones_79, offset: 0xb28, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_79;

/// @brief Field Bones_80, offset: 0xb4c, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_80;

/// @brief Field Bones_81, offset: 0xb70, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_81;

/// @brief Field Bones_82, offset: 0xb94, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_82;

/// @brief Field Bones_83, offset: 0xbb8, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_Bone  Bones_83;

/// @brief Field BoneCapsules_0, offset: 0xbdc, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_0;

/// @brief Field BoneCapsules_1, offset: 0xbfc, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_1;

/// @brief Field BoneCapsules_2, offset: 0xc1c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_2;

/// @brief Field BoneCapsules_3, offset: 0xc3c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_3;

/// @brief Field BoneCapsules_4, offset: 0xc5c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_4;

/// @brief Field BoneCapsules_5, offset: 0xc7c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_5;

/// @brief Field BoneCapsules_6, offset: 0xc9c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_6;

/// @brief Field BoneCapsules_7, offset: 0xcbc, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_7;

/// @brief Field BoneCapsules_8, offset: 0xcdc, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_8;

/// @brief Field BoneCapsules_9, offset: 0xcfc, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_9;

/// @brief Field BoneCapsules_10, offset: 0xd1c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_10;

/// @brief Field BoneCapsules_11, offset: 0xd3c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_11;

/// @brief Field BoneCapsules_12, offset: 0xd5c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_12;

/// @brief Field BoneCapsules_13, offset: 0xd7c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_13;

/// @brief Field BoneCapsules_14, offset: 0xd9c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_14;

/// @brief Field BoneCapsules_15, offset: 0xdbc, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_15;

/// @brief Field BoneCapsules_16, offset: 0xddc, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_16;

/// @brief Field BoneCapsules_17, offset: 0xdfc, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_17;

/// @brief Field BoneCapsules_18, offset: 0xe1c, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_BoneCapsule  BoneCapsules_18;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, NumBones) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, NumBoneCapsules) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_2) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_4) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_5) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_6) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_7) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_8) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_9) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_10) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_11) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_12) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_13) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_14) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_15) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_16) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_17) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_18) == 0x294, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_19) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_20) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_21) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_22) == 0x324, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_23) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_24) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_25) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_26) == 0x3b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_27) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_28) == 0x3fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_29) == 0x420, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_30) == 0x444, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_31) == 0x468, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_32) == 0x48c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_33) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_34) == 0x4d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_35) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_36) == 0x51c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_37) == 0x540, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_38) == 0x564, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_39) == 0x588, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_40) == 0x5ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_41) == 0x5d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_42) == 0x5f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_43) == 0x618, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_44) == 0x63c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_45) == 0x660, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_46) == 0x684, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_47) == 0x6a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_48) == 0x6cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_49) == 0x6f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_50) == 0x714, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_51) == 0x738, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_52) == 0x75c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_53) == 0x780, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_54) == 0x7a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_55) == 0x7c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_56) == 0x7ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_57) == 0x810, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_58) == 0x834, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_59) == 0x858, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_60) == 0x87c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_61) == 0x8a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_62) == 0x8c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_63) == 0x8e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_64) == 0x90c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_65) == 0x930, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_66) == 0x954, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_67) == 0x978, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_68) == 0x99c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_69) == 0x9c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_70) == 0x9e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_71) == 0xa08, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_72) == 0xa2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_73) == 0xa50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_74) == 0xa74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_75) == 0xa98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_76) == 0xabc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_77) == 0xae0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_78) == 0xb04, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_79) == 0xb28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_80) == 0xb4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_81) == 0xb70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_82) == 0xb94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, Bones_83) == 0xbb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_0) == 0xbdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_1) == 0xbfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_2) == 0xc1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_3) == 0xc3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_4) == 0xc5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_5) == 0xc7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_6) == 0xc9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_7) == 0xcbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_8) == 0xcdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_9) == 0xcfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_10) == 0xd1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_11) == 0xd3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_12) == 0xd5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_13) == 0xd7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_14) == 0xd9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_15) == 0xdbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_16) == 0xddc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_17) == 0xdfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton3Internal, BoneCapsules_18) == 0xe1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Skeleton3Internal) == 0xe3c, "Size mismatch!");

} // namespace end def GlobalNamespace
