#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GestureAlignment_def.hpp"
#include "GlobalNamespace/zzzz__GestureDigitFlexion_def.hpp"
#include "GlobalNamespace/zzzz__GestureHandState_def.hpp"
#include "GlobalNamespace/zzzz__GestureNodeFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GestureNode)
// Forward declare root types
namespace GlobalNamespace {
class GestureNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GestureNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GestureNode*, "", "GestureNode");
// Dependencies GestureAlignment, GestureDigitFlexion, GestureHandState, GestureNodeFlags, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GestureNode
class CORDL_TYPE GestureNode : public ::System::Object {
public:
// Declarations
/// @brief Field alignment, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_alignment, put=__cordl_internal_set_alignment)) ::GlobalNamespace::GestureAlignment  alignment;

/// @brief Field flags, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::GlobalNamespace::GestureNodeFlags  flags;

/// @brief Field flexion, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_flexion, put=__cordl_internal_set_flexion)) ::GlobalNamespace::GestureDigitFlexion  flexion;

/// @brief Field state, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GestureHandState  state;

/// @brief Field track, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_track, put=__cordl_internal_set_track)) bool  track;

static inline ::GlobalNamespace::GestureNode* New_ctor() ;

constexpr ::GlobalNamespace::GestureAlignment const& __cordl_internal_get_alignment() const;

constexpr ::GlobalNamespace::GestureAlignment& __cordl_internal_get_alignment() ;

constexpr ::GlobalNamespace::GestureNodeFlags const& __cordl_internal_get_flags() const;

constexpr ::GlobalNamespace::GestureNodeFlags& __cordl_internal_get_flags() ;

constexpr ::GlobalNamespace::GestureDigitFlexion const& __cordl_internal_get_flexion() const;

constexpr ::GlobalNamespace::GestureDigitFlexion& __cordl_internal_get_flexion() ;

constexpr ::GlobalNamespace::GestureHandState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GestureHandState& __cordl_internal_get_state() ;

constexpr bool const& __cordl_internal_get_track() const;

constexpr bool& __cordl_internal_get_track() ;

constexpr void __cordl_internal_set_alignment(::GlobalNamespace::GestureAlignment  value) ;

constexpr void __cordl_internal_set_flags(::GlobalNamespace::GestureNodeFlags  value) ;

constexpr void __cordl_internal_set_flexion(::GlobalNamespace::GestureDigitFlexion  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GestureHandState  value) ;

constexpr void __cordl_internal_set_track(bool  value) ;

/// @brief Method .ctor, addr 0x564ec98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GestureNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GestureNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GestureNode(GestureNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GestureNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GestureNode(GestureNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{719};

/// @brief Field track, offset: 0x10, size: 0x1, def value: None
 bool  ___track;

/// @brief Field state, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::GestureHandState  ___state;

/// @brief Field flexion, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::GestureDigitFlexion  ___flexion;

/// @brief Field alignment, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::GestureAlignment  ___alignment;

/// [Space]
/// @brief Field flags, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GestureNodeFlags  ___flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GestureNode, ___track) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GestureNode, ___state) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GestureNode, ___flexion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GestureNode, ___alignment) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GestureNode, ___flags) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GestureNode) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
