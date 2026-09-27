#pragma once
// IWYU pragma private; include "GlobalNamespace/CasualGameModeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CasualData_def.hpp"
#include "GlobalNamespace/zzzz__FusionGameModeData_def.hpp"
CORDL_MODULE_EXPORT(CasualGameModeData)
namespace GlobalNamespace {
struct CasualData;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CasualGameModeData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CasualGameModeData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CasualGameModeData*, "", "CasualGameModeData");
// [NetworkBehaviourWeaved(1)]
// Dependencies CasualData, FusionGameModeData
namespace GlobalNamespace {
// Is value type: false
// CS Name: CasualGameModeData
class CORDL_TYPE CasualGameModeData : public ::GlobalNamespace::FusionGameModeData {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

/// @brief Field _casualData, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__casualData, put=__cordl_internal_set__casualData)) ::GlobalNamespace::CasualData  _casualData;

/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_casualData, put=set_casualData)) ::GlobalNamespace::CasualData  casualData;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x579bf28, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x579bf30, size 0x18, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::CasualGameModeData* New_ctor() ;

constexpr ::GlobalNamespace::CasualData const& __cordl_internal_get__casualData() const;

constexpr ::GlobalNamespace::CasualData& __cordl_internal_get__casualData() ;

constexpr void __cordl_internal_set__casualData(::GlobalNamespace::CasualData  value) ;

/// @brief Method .ctor, addr 0x579bf20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x579be00, size 0x64, virtual true, abstract: false, final false
inline ::System::Object* get_Data() ;

/// @brief Method get_casualData, addr 0x579be64, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::CasualData get_casualData() ;

/// @brief Method set_Data, addr 0x579bec0, size 0x4, virtual true, abstract: false, final false
inline void set_Data(::System::Object*  value) ;

/// @brief Method set_casualData, addr 0x579bec4, size 0x5c, virtual false, abstract: false, final false
inline void set_casualData(::GlobalNamespace::CasualData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CasualGameModeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CasualGameModeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CasualGameModeData(CasualGameModeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CasualGameModeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CasualGameModeData(CasualGameModeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1486};

/// [WeaverGenerated]
/// [DefaultForProperty("casualData", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _casualData, offset: 0x88, size: 0x1, def value: None
 ::GlobalNamespace::CasualData  ____casualData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CasualGameModeData, ____casualData) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CasualGameModeData) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
