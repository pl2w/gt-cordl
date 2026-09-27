#pragma once
// IWYU pragma private; include "GlobalNamespace/TagGameModeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FusionGameModeData_def.hpp"
#include "GlobalNamespace/zzzz__TagData_def.hpp"
CORDL_MODULE_EXPORT(TagGameModeData)
namespace GlobalNamespace {
struct TagData;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class TagGameModeData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TagGameModeData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TagGameModeData*, "", "TagGameModeData");
// [NetworkBehaviourWeaved(22)]
// Dependencies FusionGameModeData, TagData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TagGameModeData
class CORDL_TYPE TagGameModeData : public ::GlobalNamespace::FusionGameModeData {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

/// @brief Field _tagData, offset 0x88, size 0x58 
 __declspec(property(get=__cordl_internal_get__tagData, put=__cordl_internal_set__tagData)) ::GlobalNamespace::TagData  _tagData;

/// [Networked]
/// @brief [NetworkedWeaved(0, 22)]
 __declspec(property(get=get_tagData, put=set_tagData)) ::GlobalNamespace::TagData  tagData;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x579c704, size 0x5c, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x579c760, size 0x58, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::TagGameModeData* New_ctor() ;

constexpr ::GlobalNamespace::TagData const& __cordl_internal_get__tagData() const;

constexpr ::GlobalNamespace::TagData& __cordl_internal_get__tagData() ;

constexpr void __cordl_internal_set__tagData(::GlobalNamespace::TagData  value) ;

/// @brief Method .ctor, addr 0x579c6fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x579c4d8, size 0x88, virtual true, abstract: false, final false
inline ::System::Object* get_Data() ;

/// @brief Method get_tagData, addr 0x579c560, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::TagData get_tagData() ;

/// @brief Method set_Data, addr 0x579c5c0, size 0xe0, virtual true, abstract: false, final false
inline void set_Data(::System::Object*  value) ;

/// @brief Method set_tagData, addr 0x579c6a0, size 0x5c, virtual false, abstract: false, final false
inline void set_tagData(::GlobalNamespace::TagData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagGameModeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagGameModeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagGameModeData(TagGameModeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagGameModeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagGameModeData(TagGameModeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1491};

/// [WeaverGenerated]
/// [DefaultForProperty("tagData", 0, 22)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _tagData, offset: 0x88, size: 0x58, def value: None
 ::GlobalNamespace::TagData  ____tagData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TagGameModeData, ____tagData) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TagGameModeData) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
