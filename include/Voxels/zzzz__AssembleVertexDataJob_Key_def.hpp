#pragma once
// IWYU pragma private; include "Voxels/AssembleVertexDataJob_Key.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssembleVertexDataJob_Key)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct AssembleVertexDataJob_Key;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AssembleVertexDataJob_Key);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssembleVertexDataJob_Key, "Voxels", "AssembleVertexDataJob/Key");
// Dependencies Unity.Mathematics.int4
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.AssembleVertexDataJob/Key
struct CORDL_TYPE AssembleVertexDataJob_Key {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>*() ;

/// @brief Method Equals, addr 0x5db67ac, size 0x5c, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::AssembleVertexDataJob_Key  other) ;

/// @brief Method GetHashCode, addr 0x5db6808, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>"
constexpr ::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>* i___System__IEquatable_1___GlobalNamespace__AssembleVertexDataJob_Key_() ;

// Ctor Parameters []
// @brief default ctor
constexpr AssembleVertexDataJob_Key() ;

// Ctor Parameters [CppParam { name: "srcIdx", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mats", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }]
constexpr AssembleVertexDataJob_Key(int32_t  srcIdx, ::Unity::Mathematics::int4  mats) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field srcIdx, offset: 0x0, size: 0x4, def value: None
 int32_t  srcIdx;

/// @brief Field mats, offset: 0x4, size: 0x10, def value: None
 ::Unity::Mathematics::int4  mats;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AssembleVertexDataJob_Key, srcIdx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssembleVertexDataJob_Key, mats) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AssembleVertexDataJob_Key) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
