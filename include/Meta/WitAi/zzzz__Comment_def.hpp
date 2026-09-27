#pragma once
// IWYU pragma private; include "Meta/WitAi/Comment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Comment)
// Forward declare root types
namespace Meta::WitAi {
class Comment;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Comment*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Comment*, "Meta.WitAi", "Comment");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.Comment
class CORDL_TYPE Comment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field comment, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_comment, put=__cordl_internal_set_comment)) ::StringW  comment;

/// @brief Field lockComment, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_lockComment, put=__cordl_internal_set_lockComment)) bool  lockComment;

/// @brief Field title, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_title, put=__cordl_internal_set_title)) ::StringW  title;

static inline ::Meta::WitAi::Comment* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_comment() const;

constexpr ::StringW& __cordl_internal_get_comment() ;

constexpr bool const& __cordl_internal_get_lockComment() const;

constexpr bool& __cordl_internal_get_lockComment() ;

constexpr ::StringW const& __cordl_internal_get_title() const;

constexpr ::StringW& __cordl_internal_get_title() ;

constexpr void __cordl_internal_set_comment(::StringW  value) ;

constexpr void __cordl_internal_set_lockComment(bool  value) ;

constexpr void __cordl_internal_set_title(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e75434, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Comment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Comment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Comment(Comment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Comment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Comment(Comment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25541};

/// [SerializeField]
/// @brief Field title, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___title;

/// [TextArea]
/// [SerializeField]
/// @brief Field comment, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___comment;

/// [SerializeField]
/// @brief Field lockComment, offset: 0x30, size: 0x1, def value: None
 bool  ___lockComment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Comment, ___title) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Comment, ___comment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Comment, ___lockComment) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Comment) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi
