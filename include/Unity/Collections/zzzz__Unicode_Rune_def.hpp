#pragma once
// IWYU pragma private; include "Unity/Collections/Unicode_Rune.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Unicode_Rune)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Unicode_Rune;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Unicode_Rune);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Unicode_Rune, "Unity.Collections", "Unicode/Rune");
// [GenerateTestsForBurstCompatibility]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.Unicode/Rune
struct CORDL_TYPE Unicode_Rune {
public:
// Declarations
/// [ExcludeFromBurstCompatTesting("Takes managed object")]
/// @brief Method Equals, addr 0xaf075c0, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xaf07638, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

// Ctor Parameters []
// @brief default ctor
constexpr Unicode_Rune() ;

// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Unicode_Rune(int32_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value, offset: 0x0, size: 0x4, def value: None
 int32_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Unicode_Rune, value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Unicode_Rune) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
