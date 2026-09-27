#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/IAssignToMeshCustomizer_NativeArrays.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAssignToMeshCustomizer_NativeArrays)
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
class IAssignToMeshCustomizer_NativeArrays;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*, "DigitalOpus.MB.Core", "IAssignToMeshCustomizer_NativeArrays");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.IAssignToMeshCustomizer_NativeArrays
class CORDL_TYPE IAssignToMeshCustomizer_NativeArrays {
public:
// Declarations
/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr operator  ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*() noexcept;

/// @brief Method UVchannelWithExtraParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t UVchannelWithExtraParameter() ;

/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* i___DigitalOpus__MB__Core__IAssignToMeshCustomizer() noexcept;

/// @brief Method meshAssign_UV, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV(int32_t  channel_0_to_7, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_colors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_colors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes) ;

// Ctor Parameters [CppParam { name: "", ty: "IAssignToMeshCustomizer_NativeArrays", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAssignToMeshCustomizer_NativeArrays(IAssignToMeshCustomizer_NativeArrays const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22739};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
