#pragma once
// IWYU pragma private; include "GlobalNamespace/XfToXfLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XfToXfLine)
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class XfToXfLine;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XfToXfLine*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XfToXfLine*, "", "XfToXfLine");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: XfToXfLine
class CORDL_TYPE XfToXfLine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lineRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field pt0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pt0, put=__cordl_internal_set_pt0)) ::UnityW<::UnityEngine::Transform>  pt0;

/// @brief Field pt1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pt1, put=__cordl_internal_set_pt1)) ::UnityW<::UnityEngine::Transform>  pt1;

/// @brief Method Awake, addr 0x5962310, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::XfToXfLine* New_ctor() ;

/// @brief Method Update, addr 0x5962368, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pt0() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pt0() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pt1() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pt1() ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_pt0(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pt1(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x59623e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XfToXfLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XfToXfLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XfToXfLine(XfToXfLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XfToXfLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XfToXfLine(XfToXfLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2361};

/// @brief Field pt0, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pt0;

/// @brief Field pt1, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pt1;

/// @brief Field lineRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XfToXfLine, ___pt0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XfToXfLine, ___pt1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XfToXfLine, ___lineRenderer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XfToXfLine) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
