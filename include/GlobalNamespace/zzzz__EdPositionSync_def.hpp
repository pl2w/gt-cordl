#pragma once
// IWYU pragma private; include "GlobalNamespace/EdPositionSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EdPositionSync)
// Forward declare root types
namespace GlobalNamespace {
class EdPositionSync;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EdPositionSync*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdPositionSync*, "", "EdPositionSync");
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: EdPositionSync
class CORDL_TYPE EdPositionSync : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Target, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::GlobalNamespace::XSceneRef  Target;

/// @brief Field position, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) bool  position;

/// @brief Field rotation, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) bool  rotation;

/// @brief Field rotationOffset, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationOffset, put=__cordl_internal_set_rotationOffset)) ::UnityEngine::Vector3  rotationOffset;

/// @brief Field scale, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) bool  scale;

static inline ::GlobalNamespace::EdPositionSync* New_ctor() ;

/// @brief Method SafeDivide, addr 0x56b96e4, size 0x88, virtual false, abstract: false, final false
static inline float_t SafeDivide(float_t  a, float_t  b) ;

/// @brief Method SelectTarget, addr 0x56b96e0, size 0x4, virtual false, abstract: false, final false
inline void SelectTarget() ;

/// @brief Method UpdatePosition, addr 0x56b96dc, size 0x4, virtual false, abstract: false, final false
inline void UpdatePosition() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_Target() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_Target() ;

constexpr bool const& __cordl_internal_get_position() const;

constexpr bool& __cordl_internal_get_position() ;

constexpr bool const& __cordl_internal_get_rotation() const;

constexpr bool& __cordl_internal_get_rotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationOffset() ;

constexpr bool const& __cordl_internal_get_scale() const;

constexpr bool& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_Target(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_position(bool  value) ;

constexpr void __cordl_internal_set_rotation(bool  value) ;

constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scale(bool  value) ;

/// @brief Method .ctor, addr 0x56b976c, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdPositionSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdPositionSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdPositionSync(EdPositionSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdPositionSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdPositionSync(EdPositionSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{963};

/// [Tooltip("The object whose transform this object should match. Its scene must be open for the button to work.")]
/// @brief Field Target, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___Target;

/// @brief Field position, offset: 0x38, size: 0x1, def value: None
 bool  ___position;

/// @brief Field rotation, offset: 0x39, size: 0x1, def value: None
 bool  ___rotation;

/// @brief Field scale, offset: 0x3a, size: 0x1, def value: None
 bool  ___scale;

/// [Tooltip("Extra rotation applied on top of the target\'s rotation, in the target\'s own space.")]
/// @brief Field rotationOffset, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EdPositionSync, ___Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdPositionSync, ___position) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdPositionSync, ___rotation) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdPositionSync, ___scale) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdPositionSync, ___rotationOffset) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EdPositionSync) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
