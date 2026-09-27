#pragma once
// IWYU pragma private; include "Oculus/Interaction/TagSetFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TagSetFilter)
namespace Oculus::Interaction {
class IGameObjectFilter;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Oculus::Interaction {
class TagSetFilter;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TagSetFilter*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TagSetFilter*, "Oculus.Interaction", "TagSetFilter");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TagSetFilter
class CORDL_TYPE TagSetFilter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _excludeTagSet, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__excludeTagSet, put=__cordl_internal_set__excludeTagSet)) ::System::Collections::Generic::HashSet_1<::StringW>*  _excludeTagSet;

/// @brief Field _excludeTags, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__excludeTags, put=__cordl_internal_set__excludeTags)) ::ArrayW<::StringW>  _excludeTags;

/// @brief Field _requireTagSet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__requireTagSet, put=__cordl_internal_set__requireTagSet)) ::System::Collections::Generic::HashSet_1<::StringW>*  _requireTagSet;

/// @brief Field _requireTags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__requireTags, put=__cordl_internal_set__requireTags)) ::ArrayW<::StringW>  _requireTags;

/// @brief Convert operator to "::Oculus::Interaction::IGameObjectFilter"
constexpr operator  ::Oculus::Interaction::IGameObjectFilter*() noexcept;

/// @brief Method AddExcludeTag, addr 0xa443938, size 0x58, virtual false, abstract: false, final false
inline void AddExcludeTag(::StringW  tag) ;

/// @brief Method AddRequireTag, addr 0xa443830, size 0x58, virtual false, abstract: false, final false
inline void AddRequireTag(::StringW  tag) ;

/// @brief Method ContainsExcludeTag, addr 0xa4438e0, size 0x58, virtual false, abstract: false, final false
inline bool ContainsExcludeTag(::StringW  tag) ;

/// @brief Method ContainsRequireTag, addr 0xa4437d8, size 0x58, virtual false, abstract: false, final false
inline bool ContainsRequireTag(::StringW  tag) ;

/// @brief Method Filter, addr 0xa44354c, size 0x28c, virtual true, abstract: false, final true
inline bool Filter(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method InjectOptionalExcludeTags, addr 0xa4439f0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalExcludeTags(::ArrayW<::StringW>  excludeTags) ;

/// @brief Method InjectOptionalRequireTags, addr 0xa4439e8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRequireTags(::ArrayW<::StringW>  requireTags) ;

static inline ::Oculus::Interaction::TagSetFilter* New_ctor() ;

/// @brief Method RemoveExcludeTag, addr 0xa443990, size 0x58, virtual false, abstract: false, final false
inline void RemoveExcludeTag(::StringW  tag) ;

/// @brief Method RemoveRequireTag, addr 0xa443888, size 0x58, virtual false, abstract: false, final false
inline void RemoveRequireTag(::StringW  tag) ;

/// @brief Method Start, addr 0xa443464, size 0xe8, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__excludeTagSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__excludeTagSet() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__excludeTags() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__excludeTags() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__requireTagSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__requireTagSet() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__requireTags() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__requireTags() ;

constexpr void __cordl_internal_set__excludeTagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__excludeTags(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__requireTagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__requireTags(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xa4439f8, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IGameObjectFilter"
constexpr ::Oculus::Interaction::IGameObjectFilter* i___Oculus__Interaction__IGameObjectFilter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagSetFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagSetFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagSetFilter(TagSetFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagSetFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagSetFilter(TagSetFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15801};

/// [Tooltip("A GameObject must meet all required tags.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _requireTags, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____requireTags;

/// [Tooltip("A GameObject must not meet any exclude tags.")]
/// [SerializeField]
/// [Optional]
/// [FormerlySerializedAs("_avoidTags")]
/// @brief Field _excludeTags, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____excludeTags;

/// @brief Field _requireTagSet, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____requireTagSet;

/// @brief Field _excludeTagSet, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____excludeTagSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TagSetFilter, ____requireTags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TagSetFilter, ____excludeTags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TagSetFilter, ____requireTagSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TagSetFilter, ____excludeTagSet) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TagSetFilter) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
