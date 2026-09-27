#pragma once
// IWYU pragma private; include "GlobalNamespace/Id32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Id32)
// Forward declare root types
namespace GlobalNamespace {
struct Id32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Id32);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Id32, "", "Id32");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Id32
struct CORDL_TYPE Id32 {
public:
// Declarations
/// @brief Method ComputeHash, addr 0x5a1d22c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ComputeHash(::StringW  s) ;

/// @brief Method ComputeID, addr 0x5a1d190, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id32 ComputeID(::StringW  s) ;

/// @brief Method GetHashCode, addr 0x5a1d2c8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5a1d2d0, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5a1d00c, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::StringW  idString) ;

/// @brief Method op_Implicit, addr 0x5a1d0f4, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id32 op_Implicit___GlobalNamespace__Id32(::StringW  s) ;

/// @brief Method op_Implicit, addr 0x5a1d0f0, size 0x4, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::Id32  i32) ;

// Ctor Parameters []
// @brief default ctor
constexpr Id32() ;

// Ctor Parameters [CppParam { name: "_id", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Id32(int32_t  _id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// @brief Field _id, offset: 0x0, size: 0x4, def value: None
 int32_t  _id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Id32, _id) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Id32) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
