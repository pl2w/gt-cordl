#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LocMinSorter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocMinSorter)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace Unity::Cinemachine {
struct LocalMinima;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct LocMinSorter;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::LocMinSorter);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::LocMinSorter, "Unity.Cinemachine", "LocMinSorter");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.LocMinSorter
#pragma pack(push, 0)
struct CORDL_TYPE LocMinSorter {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>*() ;

/// @brief Method Compare, addr 0xaeef358, size 0x24, virtual true, abstract: false, final true
inline int32_t Compare(::Unity::Cinemachine::LocalMinima  locMin1, ::Unity::Cinemachine::LocalMinima  locMin2) ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>"
constexpr ::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>* i___System__Collections__Generic__IComparer_1___Unity__Cinemachine__LocalMinima_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocMinSorter() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::LocMinSorter) == 0x1, "Size mismatch!");

} // namespace end def Unity::Cinemachine
