#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityTagsExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityTagsExt)
namespace GlobalNamespace {
struct UnityTag;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityTagsExt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityTagsExt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTagsExt*, "", "UnityTagsExt");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityTagsExt
class CORDL_TYPE UnityTagsExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CompareTag, addr 0x56b2770, size 0x130, virtual false, abstract: false, final false
static inline bool CompareTag(::UnityEngine::Component*  c, ::GlobalNamespace::UnityTag  tag) ;

/// [Extension]
/// @brief Method CompareTag, addr 0x56b2640, size 0x130, virtual false, abstract: false, final false
static inline bool CompareTag(::UnityEngine::GameObject*  g, ::GlobalNamespace::UnityTag  tag) ;

/// [Extension]
/// @brief Method SetTag, addr 0x56b21f8, size 0x12c, virtual false, abstract: false, final false
static inline void SetTag(::UnityEngine::Component*  c, ::GlobalNamespace::UnityTag  tag) ;

/// [Extension]
/// @brief Method SetTag, addr 0x56b2324, size 0x12c, virtual false, abstract: false, final false
static inline void SetTag(::UnityEngine::GameObject*  g, ::GlobalNamespace::UnityTag  tag) ;

/// [Extension]
/// @brief Method ToTag, addr 0x56b2148, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityTag ToTag(::StringW  s) ;

/// [Extension]
/// @brief Method TryGetTag, addr 0x56b2548, size 0xf8, virtual false, abstract: false, final false
static inline bool TryGetTag(::UnityEngine::Component*  c, ::by_ref<::GlobalNamespace::UnityTag>  tag) ;

/// [Extension]
/// @brief Method TryGetTag, addr 0x56b2450, size 0xf8, virtual false, abstract: false, final false
static inline bool TryGetTag(::UnityEngine::GameObject*  g, ::by_ref<::GlobalNamespace::UnityTag>  tag) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTagsExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTagsExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTagsExt(UnityTagsExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTagsExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTagsExt(UnityTagsExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{945};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityTagsExt) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
