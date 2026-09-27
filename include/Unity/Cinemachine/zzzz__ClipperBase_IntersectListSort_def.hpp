#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperBase_IntersectListSort.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipperBase_IntersectListSort)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace Unity::Cinemachine {
struct IntersectNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct ClipperBase_IntersectListSort;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ClipperBase_IntersectListSort);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClipperBase_IntersectListSort, "Unity.Cinemachine", "ClipperBase/IntersectListSort");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.ClipperBase/IntersectListSort
#pragma pack(push, 0)
struct CORDL_TYPE ClipperBase_IntersectListSort {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>*() ;

/// @brief Method Compare, addr 0xaefa030, size 0x38, virtual true, abstract: false, final true
inline int32_t Compare(::Unity::Cinemachine::IntersectNode  a, ::Unity::Cinemachine::IntersectNode  b) ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>"
constexpr ::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>* i___System__Collections__Generic__IComparer_1___Unity__Cinemachine__IntersectNode_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ClipperBase_IntersectListSort() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22514};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ClipperBase_IntersectListSort) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
