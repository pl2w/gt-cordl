#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/Comment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Comment)
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class Comment;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::Comment*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::Comment*, "UnityEngine.Localization.Metadata", "Comment");
// [Metadata]
// Dependencies System.Object
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.Comment
class CORDL_TYPE Comment : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CommentText, put=set_CommentText)) ::StringW  CommentText;

/// @brief Field m_CommentText, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommentText, put=__cordl_internal_set_m_CommentText)) ::StringW  m_CommentText;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

static inline ::UnityEngine::Localization::Metadata::Comment* New_ctor() ;

/// @brief Method ToString, addr 0xb04fce0, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_m_CommentText() const;

constexpr ::StringW& __cordl_internal_get_m_CommentText() ;

constexpr void __cordl_internal_set_m_CommentText(::StringW  value) ;

/// @brief Method .ctor, addr 0xb04fce8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CommentText, addr 0xb04fcd0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CommentText() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// @brief Method set_CommentText, addr 0xb04fcd8, size 0x8, virtual false, abstract: false, final false
inline void set_CommentText(::StringW  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25330};

/// [SerializeField]
/// [TextArea(1, 2147483647)]
/// @brief Field m_CommentText, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_CommentText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::Comment, ___m_CommentText) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::Comment) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
