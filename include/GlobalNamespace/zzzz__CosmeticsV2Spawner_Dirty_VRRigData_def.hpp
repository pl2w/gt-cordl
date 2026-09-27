#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsV2Spawner_Dirty_VRRigData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsV2Spawner_Dirty_VRRigData)
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsV2Spawner_Dirty_VRRigData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, "", "CosmeticsV2Spawner_Dirty/VRRigData");
// Dependencies UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: true
// CS Name: CosmeticsV2Spawner_Dirty/VRRigData
struct CORDL_TYPE CosmeticsV2Spawner_Dirty_VRRigData {
public:
// Declarations
/// @brief Method .ctor, addr 0x566858c, size 0x288, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::VRRig*  vrRig, ::ArrayW<::UnityEngine::Transform*>  boneXforms) ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsV2Spawner_Dirty_VRRigData() ;

// Ctor Parameters [CppParam { name: "vrRig", ty: "::UnityW<::GlobalNamespace::VRRig>", modifiers: "", def_value: None, comment: None }, CppParam { name: "boneXforms", ty: "::ArrayW<::UnityW<::UnityEngine::Transform>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bdPositionsComp", ty: "::UnityW<::GlobalNamespace::BodyDockPositions>", modifiers: "", def_value: None, comment: None }, CppParam { name: "vrRig_cosmetics", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "vrRig_override", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentOfDeactivatedHoldables", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bdPositions_allObjects_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bdPositions_leftHandThrowables", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bdPositions_rightHandThrowables", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsV2Spawner_Dirty_VRRigData(::UnityW<::GlobalNamespace::VRRig>  vrRig, ::ArrayW<::UnityW<::UnityEngine::Transform>>  boneXforms, ::UnityW<::GlobalNamespace::BodyDockPositions>  bdPositionsComp, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  vrRig_cosmetics, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  vrRig_override, ::UnityW<::UnityEngine::Transform>  parentOfDeactivatedHoldables, int32_t  bdPositions_allObjects_length, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  bdPositions_leftHandThrowables, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  bdPositions_rightHandThrowables) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{779};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field vrRig, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  vrRig;

/// @brief Field boneXforms, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  boneXforms;

/// @brief Field bdPositionsComp, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BodyDockPositions>  bdPositionsComp;

/// @brief Field vrRig_cosmetics, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  vrRig_cosmetics;

/// @brief Field vrRig_override, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  vrRig_override;

/// @brief Field parentOfDeactivatedHoldables, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  parentOfDeactivatedHoldables;

/// @brief Field bdPositions_allObjects_length, offset: 0x30, size: 0x4, def value: None
 int32_t  bdPositions_allObjects_length;

/// @brief Field bdPositions_leftHandThrowables, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  bdPositions_leftHandThrowables;

/// @brief Field bdPositions_rightHandThrowables, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  bdPositions_rightHandThrowables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, vrRig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, boneXforms) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, bdPositionsComp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, vrRig_cosmetics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, vrRig_override) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, parentOfDeactivatedHoldables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, bdPositions_allObjects_length) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, bdPositions_leftHandThrowables) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData, bdPositions_rightHandThrowables) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
