#pragma once
// IWYU pragma private; include "GlobalNamespace/Id128Ext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Id128Ext)
namespace GlobalNamespace {
struct Id128;
}
namespace System {
struct Guid;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace GlobalNamespace {
class Id128Ext;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Id128Ext*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Id128Ext*, "", "Id128Ext");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Id128Ext
class CORDL_TYPE Id128Ext : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ToId128, addr 0x5a1d008, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 ToId128(::System::Guid  g) ;

/// [Extension]
/// @brief Method ToId128, addr 0x5a1cfc4, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 ToId128(::UnityEngine::Hash128  h) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Id128Ext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Id128Ext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Id128Ext(Id128Ext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Id128Ext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Id128Ext(Id128Ext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Id128Ext) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
