#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_Comment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB3_Comment)
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_Comment;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_Comment*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_Comment*, "DigitalOpus.MB.Core", "MB3_Comment");
// Dependencies UnityEngine.MonoBehaviour
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_Comment
class CORDL_TYPE MB3_Comment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field comment, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_comment, put=__cordl_internal_set_comment)) ::StringW  comment;

static inline ::DigitalOpus::MB::Core::MB3_Comment* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_comment() const;

constexpr ::StringW& __cordl_internal_get_comment() ;

constexpr void __cordl_internal_set_comment(::StringW  value) ;

/// @brief Method .ctor, addr 0x9dec49c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_Comment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_Comment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_Comment(MB3_Comment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_Comment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_Comment(MB3_Comment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22834};

/// [Multiline]
/// @brief Field comment, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___comment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_Comment, ___comment) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_Comment) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
