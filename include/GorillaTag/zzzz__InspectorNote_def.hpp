#pragma once
// IWYU pragma private; include "GorillaTag/InspectorNote.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InspectorNote)
// Forward declare root types
namespace GorillaTag {
class InspectorNote;
}
// Write type traits
MARK_REF_T(::GorillaTag::InspectorNote*);
DEFINE_IL2CPP_CLASS(::GorillaTag::InspectorNote*, "GorillaTag", "InspectorNote");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.InspectorNote
class CORDL_TYPE InspectorNote : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5d22fb0, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::InspectorNote* New_ctor() ;

/// @brief Method .ctor, addr 0x5d23008, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InspectorNote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InspectorNote", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InspectorNote(InspectorNote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InspectorNote", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InspectorNote(InspectorNote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4607};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::InspectorNote) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag
