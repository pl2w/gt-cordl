#pragma once
// IWYU pragma private; include "Fusion/LobbyInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LobbyInfo)
// Forward declare root types
namespace Fusion {
class LobbyInfo;
}
// Write type traits
MARK_REF_T(::Fusion::LobbyInfo*);
DEFINE_IL2CPP_CLASS(::Fusion::LobbyInfo*, "Fusion", "LobbyInfo");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.LobbyInfo
class CORDL_TYPE LobbyInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsValid, put=set_IsValid)) bool  IsValid;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Region, put=set_Region)) ::StringW  Region;

/// @brief Field <IsValid>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsValid_k__BackingField, put=__cordl_internal_set__IsValid_k__BackingField)) bool  _IsValid_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Region>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Region_k__BackingField, put=__cordl_internal_set__Region_k__BackingField)) ::StringW  _Region_k__BackingField;

static inline ::Fusion::LobbyInfo* New_ctor() ;

/// @brief Method Reset, addr 0x5f71350, size 0x2c, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get__IsValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsValid_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Region_k__BackingField() ;

constexpr void __cordl_internal_set__IsValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Region_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f7a884, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsValid, addr 0x5f7a854, size 0x8, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x5f7a864, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Region, addr 0x5f7a874, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Region() ;

/// [CompilerGenerated]
/// @brief Method set_IsValid, addr 0x5f7a85c, size 0x8, virtual false, abstract: false, final false
inline void set_IsValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x5f7a86c, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Region, addr 0x5f7a87c, size 0x8, virtual false, abstract: false, final false
inline void set_Region(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyInfo(LobbyInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyInfo(LobbyInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18858};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsValid>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsValid_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Region>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Region_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LobbyInfo, ____IsValid_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LobbyInfo, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LobbyInfo, ____Region_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::LobbyInfo) == 0x28, "Size mismatch!");

} // namespace end def Fusion
