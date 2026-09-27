#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityId)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityId, "", "GameEntityId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityId
struct CORDL_TYPE GameEntityId {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::GlobalNamespace::GameEntityId  Invalid;

/// @brief Method Equals, addr 0x5832214, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x5832294, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValid, addr 0x58321ec, size 0x10, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::GlobalNamespace::GameEntityId getStaticF_Invalid() ;

/// @brief Method op_Equality, addr 0x58321fc, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::GameEntityId  obj1, ::GlobalNamespace::GameEntityId  obj2) ;

/// @brief Method op_Inequality, addr 0x5832208, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::GameEntityId  obj1, ::GlobalNamespace::GameEntityId  obj2) ;

static inline void setStaticF_Invalid(::GlobalNamespace::GameEntityId  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameEntityId() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityId(int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1745};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityId, index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
