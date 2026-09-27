#pragma once
// IWYU pragma private; include "GlobalNamespace/LineRendererDraw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(LineRendererDraw)
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LineRendererDraw;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LineRendererDraw*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LineRendererDraw*, "", "LineRendererDraw");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: LineRendererDraw
class CORDL_TYPE LineRendererDraw : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lr, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lr, put=__cordl_internal_set_lr)) ::UnityW<::UnityEngine::LineRenderer>  lr;

/// @brief Field points, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_points, put=__cordl_internal_set_points)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  points;

/// @brief Method Enable, addr 0x56d1c34, size 0x1c, virtual false, abstract: false, final false
inline void Enable(bool  enable) ;

/// @brief Method LateUpdate, addr 0x56d1bbc, size 0x78, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::LineRendererDraw* New_ctor() ;

/// @brief Method SetUpLine, addr 0x56d1b78, size 0x44, virtual false, abstract: false, final false
inline void SetUpLine(::ArrayW<::UnityEngine::Transform*>  points) ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lr() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lr() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_points() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_points() ;

constexpr void __cordl_internal_set_lr(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_points(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x56d1c50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LineRendererDraw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LineRendererDraw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LineRendererDraw(LineRendererDraw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LineRendererDraw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LineRendererDraw(LineRendererDraw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1056};

/// @brief Field lr, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lr;

/// @brief Field points, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___points;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LineRendererDraw, ___lr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineRendererDraw, ___points) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LineRendererDraw) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
