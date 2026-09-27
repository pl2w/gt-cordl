#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectBaker_TransformPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectBaker_TransformPath__Indices_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectBaker_TransformPath)
namespace GlobalNamespace {
struct TransformPath_NetworkObjectBaker__Indices;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkObjectBaker_TransformPath;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkObjectBaker_TransformPath);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkObjectBaker_TransformPath, "Fusion", "NetworkObjectBaker/TransformPath");
// [IsReadOnly]
// Dependencies Fusion.NetworkObjectBaker::TransformPath::_Indices
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkObjectBaker/TransformPath
struct CORDL_TYPE NetworkObjectBaker_TransformPath {
public:
// Declarations
using _Indices = ::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices;

/// @brief Method ToString, addr 0x60e4ed4, size 0x154, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x60e53ec, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(uint16_t  depth, uint16_t  next, ::System::Collections::Generic::List_1<uint16_t>*  indices, int32_t  offset, int32_t  count) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectBaker_TransformPath() ;

// Ctor Parameters [CppParam { name: "Indices", ty: "::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices", modifiers: "", def_value: None, comment: None }, CppParam { name: "Depth", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectBaker_TransformPath(::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices  Indices, uint16_t  Depth, uint16_t  Next) noexcept;

/// @brief Field MaxDepth offset 0xffffffff size 0x4
static constexpr int32_t  MaxDepth{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Indices, offset: 0x0, size: 0x14, def value: None
 ::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices  Indices;

/// @brief Field Depth, offset: 0x14, size: 0x2, def value: None
 uint16_t  Depth;

/// @brief Field Next, offset: 0x16, size: 0x2, def value: None
 uint16_t  Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkObjectBaker_TransformPath, Indices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkObjectBaker_TransformPath, Depth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkObjectBaker_TransformPath, Next) == 0x16, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkObjectBaker_TransformPath) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
