#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigUtils_RigSyncSceneToStreamData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/Rigging/zzzz__SyncableProperties_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigUtils_RigSyncSceneToStreamData)
namespace UnityEngine::Animations::Rigging {
class IAnimationJobData;
}
namespace UnityEngine::Animations::Rigging {
class IRigSyncSceneToStreamData;
}
namespace UnityEngine::Animations::Rigging {
struct SyncableProperties;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct RigUtils_RigSyncSceneToStreamData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RigUtils_RigSyncSceneToStreamData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigUtils_RigSyncSceneToStreamData, "UnityEngine.Animations.Rigging", "RigUtils/RigSyncSceneToStreamData");
// Dependencies UnityEngine.Animations.Rigging.SyncableProperties, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.RigUtils/RigSyncSceneToStreamData
struct CORDL_TYPE RigUtils_RigSyncSceneToStreamData {
public:
// Declarations
 __declspec(property(get=get_rigStates, put=set_rigStates)) ::ArrayW<bool>  rigStates;

 __declspec(property(get=get_syncableProperties, put=set_syncableProperties)) ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties>  syncableProperties;

 __declspec(property(get=get_syncableTransforms, put=set_syncableTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  syncableTransforms;

/// @brief Convert operator to "::UnityEngine::Animations::Rigging::IAnimationJobData"
constexpr operator  ::UnityEngine::Animations::Rigging::IAnimationJobData*() ;

/// @brief Convert operator to "::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData"
constexpr operator  ::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*() ;

/// @brief Method UniqueTransformIndices, addr 0xae7dfa0, size 0x1d8, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> UniqueTransformIndices(::ArrayW<::UnityEngine::Transform*>  transforms) ;

/// @brief Method UnityEngine.Animations.Rigging.IAnimationJobData.IsValid, addr 0xae7e1a8, size 0x8, virtual true, abstract: false, final true
inline bool UnityEngine_Animations_Rigging_IAnimationJobData_IsValid() ;

/// @brief Method .ctor, addr 0xae7da58, size 0x204, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Transform*>  transforms, ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties>  properties, int32_t  rigCount) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_rigStates, addr 0xae7e198, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<bool> get_rigStates() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_syncableProperties, addr 0xae7e188, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties> get_syncableProperties() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_syncableTransforms, addr 0xae7e178, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_syncableTransforms() ;

/// @brief Convert to "::UnityEngine::Animations::Rigging::IAnimationJobData"
constexpr ::UnityEngine::Animations::Rigging::IAnimationJobData* i___UnityEngine__Animations__Rigging__IAnimationJobData() ;

/// @brief Convert to "::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData"
constexpr ::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData* i___UnityEngine__Animations__Rigging__IRigSyncSceneToStreamData() ;

/// [CompilerGenerated]
/// @brief Method set_rigStates, addr 0xae7e1a0, size 0x8, virtual false, abstract: false, final false
inline void set_rigStates(::ArrayW<bool>  value) ;

/// [CompilerGenerated]
/// @brief Method set_syncableProperties, addr 0xae7e190, size 0x8, virtual false, abstract: false, final false
inline void set_syncableProperties(::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties>  value) ;

/// [CompilerGenerated]
/// @brief Method set_syncableTransforms, addr 0xae7e180, size 0x8, virtual false, abstract: false, final false
inline void set_syncableTransforms(::ArrayW<::UnityEngine::Transform*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RigUtils_RigSyncSceneToStreamData() ;

// Ctor Parameters [CppParam { name: "_syncableTransforms_k__BackingField", ty: "::ArrayW<::UnityW<::UnityEngine::Transform>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_syncableProperties_k__BackingField", ty: "::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rigStates_k__BackingField", ty: "::ArrayW<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IsValid", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RigUtils_RigSyncSceneToStreamData(::ArrayW<::UnityW<::UnityEngine::Transform>>  _syncableTransforms_k__BackingField, ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties>  _syncableProperties_k__BackingField, ::ArrayW<bool>  _rigStates_k__BackingField, bool  m_IsValid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [CompilerGenerated]
/// @brief Field <syncableTransforms>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  _syncableTransforms_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <syncableProperties>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties>  _syncableProperties_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rigStates>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<bool>  _rigStates_k__BackingField;

/// @brief Field m_IsValid, offset: 0x18, size: 0x1, def value: None
 bool  m_IsValid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigUtils_RigSyncSceneToStreamData, _syncableTransforms_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigUtils_RigSyncSceneToStreamData, _syncableProperties_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigUtils_RigSyncSceneToStreamData, _rigStates_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigUtils_RigSyncSceneToStreamData, m_IsValid) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigUtils_RigSyncSceneToStreamData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
