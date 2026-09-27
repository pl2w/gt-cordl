#pragma once
// IWYU pragma private; include "GlobalNamespace/MousePositionDrag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(MousePositionDrag)
// Forward declare root types
namespace GlobalNamespace {
class MousePositionDrag;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MousePositionDrag*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MousePositionDrag*, "", "MousePositionDrag");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MousePositionDrag
class CORDL_TYPE MousePositionDrag : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_currFrameHasFocus, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_currFrameHasFocus, put=__cordl_internal_set_m_currFrameHasFocus)) bool  m_currFrameHasFocus;

/// @brief Field m_prevFrameHasFocus, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_prevFrameHasFocus, put=__cordl_internal_set_m_prevFrameHasFocus)) bool  m_prevFrameHasFocus;

/// @brief Field m_prevMousePosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_prevMousePosition, put=__cordl_internal_set_m_prevMousePosition)) ::UnityEngine::Vector3  m_prevMousePosition;

static inline ::GlobalNamespace::MousePositionDrag* New_ctor() ;

/// @brief Method Start, addr 0x55eb018, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x55eb020, size 0x12c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_m_currFrameHasFocus() const;

constexpr bool& __cordl_internal_get_m_currFrameHasFocus() ;

constexpr bool const& __cordl_internal_get_m_prevFrameHasFocus() const;

constexpr bool& __cordl_internal_get_m_prevFrameHasFocus() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_prevMousePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_prevMousePosition() ;

constexpr void __cordl_internal_set_m_currFrameHasFocus(bool  value) ;

constexpr void __cordl_internal_set_m_prevFrameHasFocus(bool  value) ;

constexpr void __cordl_internal_set_m_prevMousePosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x55eb14c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MousePositionDrag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MousePositionDrag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MousePositionDrag(MousePositionDrag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MousePositionDrag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MousePositionDrag(MousePositionDrag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{37};

/// @brief Field m_currFrameHasFocus, offset: 0x20, size: 0x1, def value: None
 bool  ___m_currFrameHasFocus;

/// @brief Field m_prevFrameHasFocus, offset: 0x21, size: 0x1, def value: None
 bool  ___m_prevFrameHasFocus;

/// @brief Field m_prevMousePosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_prevMousePosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MousePositionDrag, ___m_currFrameHasFocus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MousePositionDrag, ___m_prevFrameHasFocus) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MousePositionDrag, ___m_prevMousePosition) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MousePositionDrag) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
