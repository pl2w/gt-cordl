#pragma once
// IWYU pragma private; include "Fusion/SessionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionInfo)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class SessionProperty;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::ObjectModel {
template<typename TKey,typename TValue>
class ReadOnlyDictionary_2;
}
// Forward declare root types
namespace Fusion {
class SessionInfo;
}
// Write type traits
MARK_REF_T(::Fusion::SessionInfo*);
DEFINE_IL2CPP_CLASS(::Fusion::SessionInfo*, "Fusion", "SessionInfo");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SessionInfo
class CORDL_TYPE SessionInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_IsVisible, put=set_IsVisible)) bool  IsVisible;

 __declspec(property(get=get_MaxPlayers, put=set_MaxPlayers)) int32_t  MaxPlayers;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_PlayerCount, put=set_PlayerCount)) int32_t  PlayerCount;

 __declspec(property(get=get_Properties, put=set_Properties)) ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*  Properties;

 __declspec(property(get=get_Region, put=set_Region)) ::StringW  Region;

/// @brief Field <MaxPlayers>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxPlayers_k__BackingField, put=__cordl_internal_set__MaxPlayers_k__BackingField)) int32_t  _MaxPlayers_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <PlayerCount>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlayerCount_k__BackingField, put=__cordl_internal_set__PlayerCount_k__BackingField)) int32_t  _PlayerCount_k__BackingField;

/// @brief Field <Properties>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Properties_k__BackingField, put=__cordl_internal_set__Properties_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*  _Properties_k__BackingField;

/// @brief Field <Region>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Region_k__BackingField, put=__cordl_internal_set__Region_k__BackingField)) ::StringW  _Region_k__BackingField;

/// @brief Field _isOpen, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOpen, put=__cordl_internal_set__isOpen)) bool  _isOpen;

/// @brief Field _isValid, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isValid, put=__cordl_internal_set__isValid)) bool  _isValid;

/// @brief Field _isVisible, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVisible, put=__cordl_internal_set__isVisible)) bool  _isVisible;

/// @brief Field _runner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__runner, put=__cordl_internal_set__runner)) ::UnityW<::Fusion::NetworkRunner>  _runner;

static inline ::Fusion::SessionInfo* New_ctor(::Fusion::NetworkRunner*  runner) ;

/// @brief Method ToString, addr 0x5f7ae1c, size 0x5a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateCustomProperties, addr 0x5f7aaf8, size 0x324, virtual false, abstract: false, final false
inline bool UpdateCustomProperties(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties) ;

constexpr int32_t const& __cordl_internal_get__MaxPlayers_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MaxPlayers_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PlayerCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PlayerCount_k__BackingField() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>* const& __cordl_internal_get__Properties_k__BackingField() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*& __cordl_internal_get__Properties_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Region_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isOpen() const;

constexpr bool& __cordl_internal_get__isOpen() ;

constexpr bool const& __cordl_internal_get__isValid() const;

constexpr bool& __cordl_internal_get__isValid() ;

constexpr bool const& __cordl_internal_get__isVisible() const;

constexpr bool& __cordl_internal_get__isVisible() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__runner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__runner() ;

constexpr void __cordl_internal_set__MaxPlayers_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayerCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Properties_k__BackingField(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*  value) ;

constexpr void __cordl_internal_set__Region_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__isOpen(bool  value) ;

constexpr void __cordl_internal_set__isValid(bool  value) ;

constexpr void __cordl_internal_set__isVisible(bool  value) ;

constexpr void __cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value) ;

/// @brief Method .ctor, addr 0x5f73d84, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkRunner*  runner) ;

/// @brief Method get_IsOpen, addr 0x5f7a9b4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_IsValid, addr 0x5f7a88c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_IsVisible, addr 0x5f7a8b4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsVisible() ;

/// [CompilerGenerated]
/// @brief Method get_MaxPlayers, addr 0x5f7aad4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxPlayers() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x5f7a894, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_PlayerCount, addr 0x5f7aac4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayerCount() ;

/// [CompilerGenerated]
/// @brief Method get_Properties, addr 0x5f7aab4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>* get_Properties() ;

/// [CompilerGenerated]
/// @brief Method get_Region, addr 0x5f7a8a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Region() ;

/// @brief Method op_Implicit, addr 0x5f7aae4, size 0x14, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Fusion::SessionInfo*  sessionInfo) ;

/// @brief Method set_IsOpen, addr 0x5f7a9bc, size 0xf8, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

/// @brief Method set_IsVisible, addr 0x5f7a8bc, size 0xf8, virtual false, abstract: false, final false
inline void set_IsVisible(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxPlayers, addr 0x5f7aadc, size 0x8, virtual false, abstract: false, final false
inline void set_MaxPlayers(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x5f7a89c, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayerCount, addr 0x5f7aacc, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Properties, addr 0x5f7aabc, size 0x8, virtual false, abstract: false, final false
inline void set_Properties(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Region, addr 0x5f7a8ac, size 0x8, virtual false, abstract: false, final false
inline void set_Region(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionInfo(SessionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionInfo(SessionInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18860};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Region>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Region_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Properties>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*  ____Properties_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <PlayerCount>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____PlayerCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <MaxPlayers>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____MaxPlayers_k__BackingField;

/// @brief Field _isValid, offset: 0x30, size: 0x1, def value: None
 bool  ____isValid;

/// @brief Field _isOpen, offset: 0x31, size: 0x1, def value: None
 bool  ____isOpen;

/// @brief Field _isVisible, offset: 0x32, size: 0x1, def value: None
 bool  ____isVisible;

/// @brief Field _runner, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____runner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SessionInfo, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SessionInfo, ____Region_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SessionInfo, ____Properties_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SessionInfo, ____PlayerCount_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SessionInfo, ____MaxPlayers_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::SessionInfo, ____isValid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::SessionInfo, ____isOpen) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Fusion::SessionInfo, ____isVisible) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Fusion::SessionInfo, ____runner) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::SessionInfo) == 0x40, "Size mismatch!");

} // namespace end def Fusion
