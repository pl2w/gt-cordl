#pragma once
// IWYU pragma private; include "Modio/Mods/ModId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModId)
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::Mods {
struct ModId;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::ModId);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModId, "Modio.Mods", "ModId");
// [IsReadOnly]
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.ModId
struct CORDL_TYPE ModId {
public:
// Declarations
/// @brief Method Equals, addr 0xa030cc0, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xa030d38, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetResourceId, addr 0xa030cac, size 0x8, virtual false, abstract: false, final false
inline int64_t GetResourceId() ;

/// @brief Method IsValid, addr 0xa02ae70, size 0x10, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToString, addr 0xa030d44, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa030c9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  id) ;

/// @brief Method get_Null, addr 0xa030ca4, size 0x8, virtual false, abstract: false, final false
static inline ::Modio::Mods::ModId get_Null() ;

/// @brief Method op_Equality, addr 0xa02d308, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Modio::Mods::ModId  left, ::Modio::Mods::ModId  right) ;

/// @brief Method op_Implicit, addr 0xa023f44, size 0x4, virtual false, abstract: false, final false
static inline ::Modio::Mods::ModId op_Implicit___Modio__Mods__ModId(int64_t  id) ;

/// @brief Method op_Implicit, addr 0xa030d40, size 0x4, virtual false, abstract: false, final false
static inline int64_t op_Implicit_int64_t(::Modio::Mods::ModId  modId) ;

/// @brief Method op_Inequality, addr 0xa030cb4, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Modio::Mods::ModId  left, ::Modio::Mods::ModId  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModId() ;

// Ctor Parameters [CppParam { name: "_id", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModId(int64_t  _id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _id, offset: 0x0, size: 0x8, def value: None
 int64_t  _id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModId, _id) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModId) == 0x8, "Size mismatch!");

} // namespace end def Modio::Mods
