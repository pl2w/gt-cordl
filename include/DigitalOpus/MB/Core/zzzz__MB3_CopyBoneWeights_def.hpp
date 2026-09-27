#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_CopyBoneWeights.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_CopyBoneWeights)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_CopyBoneWeights;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_CopyBoneWeights*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_CopyBoneWeights*, "DigitalOpus.MB.Core", "MB3_CopyBoneWeights");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_CopyBoneWeights
class CORDL_TYPE MB3_CopyBoneWeights : public ::System::Object {
public:
// Declarations
/// @brief Method CopyBoneWeightsFromSeamMeshToOtherMeshes, addr 0x9d82f54, size 0x128c, virtual false, abstract: false, final false
static inline void CopyBoneWeightsFromSeamMeshToOtherMeshes(float_t  radius, ::UnityEngine::Mesh*  seamMesh, ::ArrayW<::UnityEngine::Mesh*>  targetMeshes, ::ArrayW<::ArrayW<::UnityEngine::Transform*>>  newBonesForSMRs, ::ArrayW<::UnityEngine::Transform*>  seamMeshBones, ::ArrayW<::ArrayW<::UnityEngine::Transform*>>  targMeshBones) ;

static inline ::DigitalOpus::MB::Core::MB3_CopyBoneWeights* New_ctor() ;

/// @brief Method RemapBoneWeightIndexes, addr 0x9d841e0, size 0x300, virtual false, abstract: false, final false
static inline void RemapBoneWeightIndexes(::StringW  nm, ::by_ref<::UnityEngine::BoneWeight>  seamMeshBw, ::ArrayW<int32_t>  map_seamMeshIdx2targMeshIdx, ::ArrayW<::UnityEngine::Transform*>  targBones, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  extraBones, ::ArrayW<::UnityEngine::Transform*>  seamBones) ;

/// @brief Method .ctor, addr 0x9d844e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_CopyBoneWeights() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_CopyBoneWeights", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_CopyBoneWeights(MB3_CopyBoneWeights && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_CopyBoneWeights", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_CopyBoneWeights(MB3_CopyBoneWeights const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_CopyBoneWeights) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
