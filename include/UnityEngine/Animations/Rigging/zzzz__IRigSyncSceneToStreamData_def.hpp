#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/IRigSyncSceneToStreamData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IRigSyncSceneToStreamData)
namespace UnityEngine::Animations::Rigging {
struct SyncableProperties;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class IRigSyncSceneToStreamData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*, "UnityEngine.Animations.Rigging", "IRigSyncSceneToStreamData");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.IRigSyncSceneToStreamData
class CORDL_TYPE IRigSyncSceneToStreamData {
public:
// Declarations
 __declspec(property(get=get_rigStates)) ::ArrayW<bool>  rigStates;

 __declspec(property(get=get_syncableProperties)) ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties>  syncableProperties;

 __declspec(property(get=get_syncableTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  syncableTransforms;

/// @brief Method get_rigStates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<bool> get_rigStates() ;

/// @brief Method get_syncableProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties> get_syncableProperties() ;

/// @brief Method get_syncableTransforms, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_syncableTransforms() ;

// Ctor Parameters [CppParam { name: "", ty: "IRigSyncSceneToStreamData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRigSyncSceneToStreamData(IRigSyncSceneToStreamData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32297};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations::Rigging
