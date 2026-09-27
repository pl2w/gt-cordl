#pragma once
// IWYU pragma private; include "GlobalNamespace/HuntGameModeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FusionGameModeData_def.hpp"
#include "GlobalNamespace/zzzz__HuntData_def.hpp"
CORDL_MODULE_EXPORT(HuntGameModeData)
namespace GlobalNamespace {
struct HuntData;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class HuntGameModeData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HuntGameModeData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HuntGameModeData*, "", "HuntGameModeData");
// [NetworkBehaviourWeaved(43)]
// Dependencies FusionGameModeData, HuntData
namespace GlobalNamespace {
// Is value type: false
// CS Name: HuntGameModeData
class CORDL_TYPE HuntGameModeData : public ::GlobalNamespace::FusionGameModeData {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

/// @brief Field _huntdata, offset 0x88, size 0xac 
 __declspec(property(get=__cordl_internal_get__huntdata, put=__cordl_internal_set__huntdata)) ::GlobalNamespace::HuntData  _huntdata;

/// [Networked]
/// @brief [NetworkedWeaved(0, 43)]
 __declspec(property(get=get_huntdata, put=set_huntdata)) ::GlobalNamespace::HuntData  huntdata;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x579c334, size 0x5c, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x579c390, size 0x58, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::HuntGameModeData* New_ctor() ;

constexpr ::GlobalNamespace::HuntData const& __cordl_internal_get__huntdata() const;

constexpr ::GlobalNamespace::HuntData& __cordl_internal_get__huntdata() ;

constexpr void __cordl_internal_set__huntdata(::GlobalNamespace::HuntData  value) ;

/// @brief Method .ctor, addr 0x579c32c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x579c108, size 0x88, virtual true, abstract: false, final false
inline ::System::Object* get_Data() ;

/// @brief Method get_huntdata, addr 0x579c190, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::HuntData get_huntdata() ;

/// @brief Method set_Data, addr 0x579c1f0, size 0xe0, virtual true, abstract: false, final false
inline void set_Data(::System::Object*  value) ;

/// @brief Method set_huntdata, addr 0x579c2d0, size 0x5c, virtual false, abstract: false, final false
inline void set_huntdata(::GlobalNamespace::HuntData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HuntGameModeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HuntGameModeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HuntGameModeData(HuntGameModeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HuntGameModeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HuntGameModeData(HuntGameModeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1489};

/// [WeaverGenerated]
/// [DefaultForProperty("huntdata", 0, 43)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _huntdata, offset: 0x88, size: 0xac, def value: None
 ::GlobalNamespace::HuntData  ____huntdata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HuntGameModeData, ____huntdata) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HuntGameModeData) == 0x138, "Size mismatch!");

} // namespace end def GlobalNamespace
