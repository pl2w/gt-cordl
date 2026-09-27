#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameBallId)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameBallId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameBallId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallId, "", "GameBallId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameBallId
struct CORDL_TYPE GameBallId {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::GlobalNamespace::GameBallId  Invalid;

/// @brief Method Equals, addr 0x57a1500, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x57a1580, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValid, addr 0x57a14d8, size 0x10, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method .ctor, addr 0x57a14d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

static inline ::GlobalNamespace::GameBallId getStaticF_Invalid() ;

/// @brief Method op_Equality, addr 0x57a14e8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::GameBallId  obj1, ::GlobalNamespace::GameBallId  obj2) ;

/// @brief Method op_Inequality, addr 0x57a14f4, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::GameBallId  obj1, ::GlobalNamespace::GameBallId  obj2) ;

static inline void setStaticF_Invalid(::GlobalNamespace::GameBallId  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameBallId() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameBallId(int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallId, index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
