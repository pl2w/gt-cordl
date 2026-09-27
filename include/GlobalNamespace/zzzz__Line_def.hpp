#pragma once
// IWYU pragma private; include "GlobalNamespace/Line.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Line)
// Forward declare root types
namespace GlobalNamespace {
class Line;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Line*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Line*, "", "Line");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Line
class CORDL_TYPE Line : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field p0, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_p0, put=__cordl_internal_set_p0)) ::UnityEngine::Vector3  p0;

/// @brief Field p1, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_p1, put=__cordl_internal_set_p1)) ::UnityEngine::Vector3  p1;

static inline ::GlobalNamespace::Line* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p0() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_p0() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_p1() ;

constexpr void __cordl_internal_set_p0(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_p1(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5b14d28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Line() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Line", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Line(Line && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Line", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Line(Line const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3554};

/// @brief Field p0, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___p0;

/// @brief Field p1, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___p1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Line, ___p0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Line, ___p1) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Line) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
