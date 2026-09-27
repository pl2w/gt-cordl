#pragma once
// IWYU pragma private; include "GlobalNamespace/TechTreeNodeBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "XNode/zzzz__Node_def.hpp"
CORDL_MODULE_EXPORT(TechTreeNodeBase)
namespace GlobalNamespace {
class TechTreeNodeBase_Empty;
}
// Forward declare root types
namespace GlobalNamespace {
class TechTreeNodeBase;
}
namespace GlobalNamespace {
class TechTreeNodeBase_Empty;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TechTreeNodeBase*);
MARK_REF_T(::GlobalNamespace::TechTreeNodeBase_Empty*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TechTreeNodeBase*, "", "TechTreeNodeBase");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TechTreeNodeBase_Empty*, "", "TechTreeNodeBase/Empty");
// Dependencies XNode.Node
namespace GlobalNamespace {
// Is value type: false
// CS Name: TechTreeNodeBase
class CORDL_TYPE TechTreeNodeBase : public ::XNode::Node {
public:
// Declarations
using Empty = ::GlobalNamespace::TechTreeNodeBase_Empty;

static inline ::GlobalNamespace::TechTreeNodeBase* New_ctor() ;

/// @brief Method .ctor, addr 0x59d92dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TechTreeNodeBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TechTreeNodeBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TechTreeNodeBase(TechTreeNodeBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TechTreeNodeBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TechTreeNodeBase(TechTreeNodeBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{301};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TechTreeNodeBase) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TechTreeNodeBase/Empty
class CORDL_TYPE TechTreeNodeBase_Empty : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::TechTreeNodeBase_Empty* New_ctor() ;

/// @brief Method .ctor, addr 0x59d9674, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TechTreeNodeBase_Empty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TechTreeNodeBase_Empty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TechTreeNodeBase_Empty(TechTreeNodeBase_Empty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TechTreeNodeBase_Empty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TechTreeNodeBase_Empty(TechTreeNodeBase_Empty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{300};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TechTreeNodeBase_Empty) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
