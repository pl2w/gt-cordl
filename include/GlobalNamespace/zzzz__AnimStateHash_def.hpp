#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimStateHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimStateHash)
// Forward declare root types
namespace GlobalNamespace {
struct AnimStateHash;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimStateHash);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimStateHash, "", "AnimStateHash");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimStateHash
struct CORDL_TYPE AnimStateHash {
public:
// Declarations
/// @brief Method op_Implicit, addr 0x5a19b38, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AnimStateHash op_Implicit___GlobalNamespace__AnimStateHash(::StringW  s) ;

/// @brief Method op_Implicit, addr 0x5a19b40, size 0x4, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::AnimStateHash  ash) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimStateHash() ;

// Ctor Parameters [CppParam { name: "_hash", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimStateHash(int32_t  _hash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// @brief Field _hash, offset: 0x0, size: 0x4, def value: None
 int32_t  _hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimStateHash, _hash) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimStateHash) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
