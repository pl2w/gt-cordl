#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/CustomizerNativeArrayPutSliceIndexInUV0_z.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB_DefaultMeshAssignCustomizer_NativeArray_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomizerNativeArrayPutSliceIndexInUV0_z)
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class CustomizerNativeArrayPutSliceIndexInUV0_z;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*, "DigitalOpus.MB.Core", "CustomizerNativeArrayPutSliceIndexInUV0_z");
// [CreateAssetMenu(fileName = "MeshAssignCustomizerNativeArrayPutSliceIdxInUV0_z", menuName = "Mesh Baker/Assign To Mesh Customizer/NativeArray API Put Slice Index In UV0.z", order = 1)]
// Dependencies DigitalOpus.MB.Core.MB_DefaultMeshAssignCustomizer_NativeArray
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.CustomizerNativeArrayPutSliceIndexInUV0_z
class CORDL_TYPE CustomizerNativeArrayPutSliceIndexInUV0_z : public ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray {
public:
// Declarations
static inline ::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z* New_ctor() ;

/// @brief Method UVchannelWithExtraParameter, addr 0x9d7e3a0, size 0x8, virtual true, abstract: false, final false
inline int32_t UVchannelWithExtraParameter() ;

/// @brief Method .ctor, addr 0x9d7e558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method meshAssign_UV, addr 0x9d7e3a8, size 0x1b0, virtual true, abstract: false, final false
inline void meshAssign_UV(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomizerNativeArrayPutSliceIndexInUV0_z() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomizerNativeArrayPutSliceIndexInUV0_z", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomizerNativeArrayPutSliceIndexInUV0_z(CustomizerNativeArrayPutSliceIndexInUV0_z && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomizerNativeArrayPutSliceIndexInUV0_z", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomizerNativeArrayPutSliceIndexInUV0_z(CustomizerNativeArrayPutSliceIndexInUV0_z const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22590};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
