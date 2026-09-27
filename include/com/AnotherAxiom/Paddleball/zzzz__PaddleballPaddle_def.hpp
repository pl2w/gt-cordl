#pragma once
// IWYU pragma private; include "com/AnotherAxiom/Paddleball/PaddleballPaddle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PaddleballPaddle)
// Forward declare root types
namespace com::AnotherAxiom::Paddleball {
class PaddleballPaddle;
}
// Write type traits
MARK_REF_T(::com::AnotherAxiom::Paddleball::PaddleballPaddle*);
DEFINE_IL2CPP_CLASS(::com::AnotherAxiom::Paddleball::PaddleballPaddle*, "com.AnotherAxiom.Paddleball", "PaddleballPaddle");
// Dependencies UnityEngine.MonoBehaviour
namespace com::AnotherAxiom::Paddleball {
// Is value type: false
// CS Name: com.AnotherAxiom.Paddleball.PaddleballPaddle
class CORDL_TYPE PaddleballPaddle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Right)) bool  Right;

/// @brief Field right, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_right, put=__cordl_internal_set_right)) bool  right;

static inline ::com::AnotherAxiom::Paddleball::PaddleballPaddle* New_ctor() ;

constexpr bool const& __cordl_internal_get_right() const;

constexpr bool& __cordl_internal_get_right() ;

constexpr void __cordl_internal_set_right(bool  value) ;

/// @brief Method .ctor, addr 0x5cd5468, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Right, addr 0x5cd5460, size 0x8, virtual false, abstract: false, final false
inline bool get_Right() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaddleballPaddle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaddleballPaddle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PaddleballPaddle(PaddleballPaddle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaddleballPaddle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaddleballPaddle(PaddleballPaddle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4479};

/// [SerializeField]
/// @brief Field right, offset: 0x20, size: 0x1, def value: None
 bool  ___right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::com::AnotherAxiom::Paddleball::PaddleballPaddle, ___right) == 0x20, "Offset mismatch!");

static_assert(sizeof(::com::AnotherAxiom::Paddleball::PaddleballPaddle) == 0x28, "Size mismatch!");

} // namespace end def com::AnotherAxiom::Paddleball
