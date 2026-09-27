#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_SnapOverlapKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTable_SnapOverlapKey)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTable_SnapOverlapKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTable_SnapOverlapKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTable_SnapOverlapKey, "GorillaTagScripts", "BuilderTable/SnapOverlapKey");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTable/SnapOverlapKey
struct CORDL_TYPE BuilderTable_SnapOverlapKey {
public:
// Declarations
/// @brief Method Equals, addr 0x5ba96a8, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x5ba9684, size 0x24, virtual false, abstract: false, final false
inline bool Equals(::GlobalNamespace::BuilderTable_SnapOverlapKey  other) ;

/// @brief Method GetHashCode, addr 0x5ba95e8, size 0x9c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_SnapOverlapKey() ;

// Ctor Parameters [CppParam { name: "piece", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "otherPiece", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTable_SnapOverlapKey(int64_t  piece, int64_t  otherPiece) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field piece, offset: 0x0, size: 0x8, def value: None
 int64_t  piece;

/// @brief Field otherPiece, offset: 0x8, size: 0x8, def value: None
 int64_t  otherPiece;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapOverlapKey, piece) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_SnapOverlapKey, otherPiece) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTable_SnapOverlapKey) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
