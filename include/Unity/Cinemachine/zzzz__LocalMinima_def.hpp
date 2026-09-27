#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LocalMinima.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__PathType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMinima)
namespace System {
class Object;
}
namespace Unity::Cinemachine {
struct PathType;
}
namespace Unity::Cinemachine {
class Vertex;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct LocalMinima;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::LocalMinima);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::LocalMinima, "Unity.Cinemachine", "LocalMinima");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Unity.Cinemachine.PathType
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.LocalMinima
struct CORDL_TYPE LocalMinima {
public:
// Declarations
/// @brief Method Equals, addr 0xaeef28c, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xaeef304, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0xaeef244, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Vertex*  vertex, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method op_Equality, addr 0xaeef274, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::Cinemachine::LocalMinima  lm1, ::Unity::Cinemachine::LocalMinima  lm2) ;

/// @brief Method op_Inequality, addr 0xaeef280, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Unity::Cinemachine::LocalMinima  lm1, ::Unity::Cinemachine::LocalMinima  lm2) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalMinima() ;

// Ctor Parameters [CppParam { name: "vertex", ty: "::Unity::Cinemachine::Vertex*", modifiers: "", def_value: None, comment: None }, CppParam { name: "polytype", ty: "::Unity::Cinemachine::PathType", modifiers: "", def_value: None, comment: None }, CppParam { name: "isOpen", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr LocalMinima(::Unity::Cinemachine::Vertex*  vertex, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22507};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field vertex, offset: 0x0, size: 0x8, def value: None
 ::Unity::Cinemachine::Vertex*  vertex;

/// @brief Field polytype, offset: 0x8, size: 0x4, def value: None
 ::Unity::Cinemachine::PathType  polytype;

/// @brief Field isOpen, offset: 0xc, size: 0x1, def value: None
 bool  isOpen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::LocalMinima, vertex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LocalMinima, polytype) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LocalMinima, isOpen) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::LocalMinima) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
