#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtSettingsSectionGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtSettingsSectionGroup)
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class SettingsSectionController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtSettingsSectionGroup;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtSettingsSectionGroup*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtSettingsSectionGroup*, "Liv.Lck.GorillaTag", "GtSettingsSectionGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtSettingsSectionGroup
class CORDL_TYPE GtSettingsSectionGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _sections, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sections, put=__cordl_internal_set__sections)) ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::SettingsSectionController>>*  _sections;

/// @brief Method EvaluateMode, addr 0x9d2c79c, size 0x13c, virtual false, abstract: false, final false
inline void EvaluateMode(::Liv::Lck::GorillaTag::CameraMode  mode) ;

static inline ::Liv::Lck::GorillaTag::GtSettingsSectionGroup* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::SettingsSectionController>>* const& __cordl_internal_get__sections() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::SettingsSectionController>>*& __cordl_internal_get__sections() ;

constexpr void __cordl_internal_set__sections(::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::SettingsSectionController>>*  value) ;

/// @brief Method .ctor, addr 0x9d2c900, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtSettingsSectionGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtSettingsSectionGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtSettingsSectionGroup(GtSettingsSectionGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtSettingsSectionGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtSettingsSectionGroup(GtSettingsSectionGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29654};

/// [SerializeField]
/// @brief Field _sections, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::SettingsSectionController>>*  ____sections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtSettingsSectionGroup, ____sections) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtSettingsSectionGroup) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
