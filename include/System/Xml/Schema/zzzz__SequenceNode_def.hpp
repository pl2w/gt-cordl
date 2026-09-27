#pragma once
// IWYU pragma private; include "System/Xml/Schema/SequenceNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SequenceNode)
namespace GlobalNamespace {
struct SequenceNode_SequenceConstructPosContext;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Forward declare root types
namespace System::Xml::Schema {
class SequenceNode;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::SequenceNode*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::SequenceNode*, "System.Xml.Schema", "SequenceNode");
// Dependencies System.Xml.Schema.InteriorNode
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SequenceNode
class CORDL_TYPE SequenceNode : public ::System::Xml::Schema::InteriorNode {
public:
// Declarations
using SequenceConstructPosContext = ::GlobalNamespace::SequenceNode_SequenceConstructPosContext;

 __declspec(property(get=get_IsNullable)) bool  IsNullable;

/// @brief Method ConstructPos, addr 0xac335b8, size 0x3ec, virtual true, abstract: false, final false
inline void ConstructPos(::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos, ::ArrayW<::System::Xml::Schema::BitSet*>  followpos) ;

/// @brief Method ExpandTree, addr 0xac33b64, size 0x4, virtual true, abstract: false, final false
inline void ExpandTree(::System::Xml::Schema::InteriorNode*  parent, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions) ;

static inline ::System::Xml::Schema::SequenceNode* New_ctor() ;

/// @brief Method .ctor, addr 0xac33b68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsNullable, addr 0xac33a08, size 0x15c, virtual true, abstract: false, final false
inline bool get_IsNullable() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequenceNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequenceNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceNode(SequenceNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceNode(SequenceNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14324};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::SequenceNode) == 0x20, "Size mismatch!");

} // namespace end def System::Xml::Schema
