#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__GtTagType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtTag)
namespace Liv::Lck::GorillaTag {
struct GtTagType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtTag;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtTag*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtTag*, "Liv.Lck.GorillaTag", "GtTag");
// Dependencies Liv.Lck.GorillaTag.GtTagType, UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtTag
class CORDL_TYPE GtTag : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cache, put=setStaticF__cache)) ::System::Collections::Generic::Dictionary_2<::Liv::Lck::GorillaTag::GtTagType,::UnityW<::UnityEngine::Transform>>*  _cache;

/// @brief Field gtTagType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gtTagType, put=__cordl_internal_set_gtTagType)) ::Liv::Lck::GorillaTag::GtTagType  gtTagType;

/// @brief Method Awake, addr 0x9d2f57c, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Liv::Lck::GorillaTag::GtTag* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d2f620, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d2f588, size 0x98, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TryGetTransform, addr 0x9d2f220, size 0x90, virtual false, abstract: false, final false
static inline bool TryGetTransform(::Liv::Lck::GorillaTag::GtTagType  gtTagType, ::by_ref<::UnityEngine::Transform*>  transform) ;

constexpr ::Liv::Lck::GorillaTag::GtTagType const& __cordl_internal_get_gtTagType() const;

constexpr ::Liv::Lck::GorillaTag::GtTagType& __cordl_internal_get_gtTagType() ;

constexpr void __cordl_internal_set_gtTagType(::Liv::Lck::GorillaTag::GtTagType  value) ;

/// @brief Method .ctor, addr 0x9d2f6a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::Liv::Lck::GorillaTag::GtTagType,::UnityW<::UnityEngine::Transform>>* getStaticF__cache() ;

static inline void setStaticF__cache(::System::Collections::Generic::Dictionary_2<::Liv::Lck::GorillaTag::GtTagType,::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtTag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtTag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtTag(GtTag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtTag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtTag(GtTag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29664};

/// @brief Field gtTagType, offset: 0x20, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::GtTagType  ___gtTagType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtTag, ___gtTagType) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtTag) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
