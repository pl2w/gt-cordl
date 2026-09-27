#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/CustomizerPutSliceIndexInUV0_z.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB_DefaultMeshAssignCustomizer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomizerPutSliceIndexInUV0_z)
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class CustomizerPutSliceIndexInUV0_z;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z*, "DigitalOpus.MB.Core", "CustomizerPutSliceIndexInUV0_z");
// [CreateAssetMenu(fileName = "MeshAssignCustomizerSimpleAPIPutSliceIdxInUV0_z", menuName = "Mesh Baker/Assign To Mesh Customizer/Simple API Put Slice Index In UV0.z", order = 1)]
// Dependencies DigitalOpus.MB.Core.MB_DefaultMeshAssignCustomizer
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.CustomizerPutSliceIndexInUV0_z
class CORDL_TYPE CustomizerPutSliceIndexInUV0_z : public ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer {
public:
// Declarations
static inline ::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z* New_ctor() ;

/// @brief Method .ctor, addr 0x9d7e768, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method meshAssign_UV0, addr 0x9d7e560, size 0x208, virtual true, abstract: false, final false
inline void meshAssign_UV0(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomizerPutSliceIndexInUV0_z() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomizerPutSliceIndexInUV0_z", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomizerPutSliceIndexInUV0_z(CustomizerPutSliceIndexInUV0_z && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomizerPutSliceIndexInUV0_z", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomizerPutSliceIndexInUV0_z(CustomizerPutSliceIndexInUV0_z const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
