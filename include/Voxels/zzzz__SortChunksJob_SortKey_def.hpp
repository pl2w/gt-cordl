#pragma once
// IWYU pragma private; include "Voxels/SortChunksJob_SortKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortChunksJob_SortKey)
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SortChunksJob_SortKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SortChunksJob_SortKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SortChunksJob_SortKey, "Voxels", "SortChunksJob/SortKey");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.SortChunksJob/SortKey
struct CORDL_TYPE SortChunksJob_SortKey {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>*() ;

/// @brief Method CompareTo, addr 0x5db19e8, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::SortChunksJob_SortKey  other) ;

/// @brief Method .ctor, addr 0x5db19e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  val) ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>"
constexpr ::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>* i___System__IComparable_1___GlobalNamespace__SortChunksJob_SortKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SortChunksJob_SortKey() ;

// Ctor Parameters [CppParam { name: "value", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr SortChunksJob_SortKey(uint64_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value, offset: 0x0, size: 0x8, def value: None
 uint64_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SortChunksJob_SortKey, value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SortChunksJob_SortKey) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
