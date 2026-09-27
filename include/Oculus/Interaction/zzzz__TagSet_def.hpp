#pragma once
// IWYU pragma private; include "Oculus/Interaction/TagSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TagSet)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Oculus::Interaction {
class TagSet;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TagSet*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TagSet*, "Oculus.Interaction", "TagSet");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TagSet
class CORDL_TYPE TagSet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _tagSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tagSet, put=__cordl_internal_set__tagSet)) ::System::Collections::Generic::HashSet_1<::StringW>*  _tagSet;

/// @brief Field _tags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tags, put=__cordl_internal_set__tags)) ::System::Collections::Generic::List_1<::StringW>*  _tags;

/// @brief Method AddTag, addr 0xa443324, size 0x58, virtual false, abstract: false, final false
inline void AddTag(::StringW  tag) ;

/// @brief Method ContainsTag, addr 0xa4432cc, size 0x58, virtual false, abstract: false, final false
inline bool ContainsTag(::StringW  tag) ;

/// @brief Method InjectOptionalTags, addr 0xa4433d4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTags(::System::Collections::Generic::List_1<::StringW>*  tags) ;

static inline ::Oculus::Interaction::TagSet* New_ctor() ;

/// @brief Method RemoveTag, addr 0xa44337c, size 0x58, virtual false, abstract: false, final false
inline void RemoveTag(::StringW  tag) ;

/// @brief Method Start, addr 0xa44317c, size 0x150, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__tagSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__tagSet() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__tags() ;

constexpr void __cordl_internal_set__tagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa4433dc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagSet(TagSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagSet(TagSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15800};

/// [Tooltip("The tags that should apply to this GameObject.")]
/// [SerializeField]
/// @brief Field _tags, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____tags;

/// @brief Field _tagSet, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____tagSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TagSet, ____tags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TagSet, ____tagSet) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TagSet) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
