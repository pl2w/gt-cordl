#pragma once
// IWYU pragma private; include "System/Xml/Schema/SequenceNode_SequenceConstructPosContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SequenceNode_SequenceConstructPosContext)
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class SequenceNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct SequenceNode_SequenceConstructPosContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SequenceNode_SequenceConstructPosContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SequenceNode_SequenceConstructPosContext, "System.Xml.Schema", "SequenceNode/SequenceConstructPosContext");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct CORDL_TYPE SequenceNode_SequenceConstructPosContext {
public:
// Declarations
/// @brief Method .ctor, addr 0xac339a4, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::SequenceNode*  node, ::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos) ;

// Ctor Parameters []
// @brief default ctor
constexpr SequenceNode_SequenceConstructPosContext() ;

// Ctor Parameters [CppParam { name: "this_", ty: "::System::Xml::Schema::SequenceNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastposLeft", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstposRight", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None, comment: None }]
constexpr SequenceNode_SequenceConstructPosContext(::System::Xml::Schema::SequenceNode*  this_, ::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos, ::System::Xml::Schema::BitSet*  lastposLeft, ::System::Xml::Schema::BitSet*  firstposRight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field this_, offset: 0x0, size: 0x8, def value: None
 ::System::Xml::Schema::SequenceNode*  this_;

/// @brief Field firstpos, offset: 0x8, size: 0x8, def value: None
 ::System::Xml::Schema::BitSet*  firstpos;

/// @brief Field lastpos, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::Schema::BitSet*  lastpos;

/// @brief Field lastposLeft, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::Schema::BitSet*  lastposLeft;

/// @brief Field firstposRight, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::Schema::BitSet*  firstposRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SequenceNode_SequenceConstructPosContext, this_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SequenceNode_SequenceConstructPosContext, firstpos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SequenceNode_SequenceConstructPosContext, lastpos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SequenceNode_SequenceConstructPosContext, lastposLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SequenceNode_SequenceConstructPosContext, firstposRight) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SequenceNode_SequenceConstructPosContext) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
