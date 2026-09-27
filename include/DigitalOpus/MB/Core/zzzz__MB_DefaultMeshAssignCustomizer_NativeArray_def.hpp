#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_DefaultMeshAssignCustomizer_NativeArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB_DefaultMeshAssignCustomizer_NativeArray)
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer_NativeArrays;
}
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer;
}
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
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_DefaultMeshAssignCustomizer_NativeArray;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*, "DigitalOpus.MB.Core", "MB_DefaultMeshAssignCustomizer_NativeArray");
// Dependencies UnityEngine.ScriptableObject
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_DefaultMeshAssignCustomizer_NativeArray
class CORDL_TYPE MB_DefaultMeshAssignCustomizer_NativeArray : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr operator  ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*() noexcept;

/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays"
constexpr operator  ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*() noexcept;

static inline ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray* New_ctor() ;

/// @brief Method UVchannelWithExtraParameter, addr 0x9dc097c, size 0x8, virtual true, abstract: false, final false
inline int32_t UVchannelWithExtraParameter() ;

/// @brief Method .ctor, addr 0x9dc098c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* i___DigitalOpus__MB__Core__IAssignToMeshCustomizer() noexcept;

/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays* i___DigitalOpus__MB__Core__IAssignToMeshCustomizer_NativeArrays() noexcept;

/// @brief Method meshAssign_UV, addr 0x9dc0984, size 0x4, virtual true, abstract: false, final false
inline void meshAssign_UV(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_colors, addr 0x9dc0988, size 0x4, virtual true, abstract: false, final false
inline void meshAssign_colors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_DefaultMeshAssignCustomizer_NativeArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_DefaultMeshAssignCustomizer_NativeArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_DefaultMeshAssignCustomizer_NativeArray(MB_DefaultMeshAssignCustomizer_NativeArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_DefaultMeshAssignCustomizer_NativeArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_DefaultMeshAssignCustomizer_NativeArray(MB_DefaultMeshAssignCustomizer_NativeArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
