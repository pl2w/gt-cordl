#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/FriendInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FriendInfo)
// Forward declare root types
namespace Fusion::Photon::Realtime {
class FriendInfo;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::FriendInfo*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::FriendInfo*, "Fusion.Photon.Realtime", "FriendInfo");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.FriendInfo
class CORDL_TYPE FriendInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsInRoom)) bool  IsInRoom;

 __declspec(property(get=get_IsOnline, put=set_IsOnline)) bool  IsOnline;

/// @brief [Obsolete("Use UserId.")]
 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Room, put=set_Room)) ::StringW  Room;

 __declspec(property(get=get_UserId, put=set_UserId)) ::StringW  UserId;

/// @brief Field <IsOnline>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOnline_k__BackingField, put=__cordl_internal_set__IsOnline_k__BackingField)) bool  _IsOnline_k__BackingField;

/// @brief Field <Room>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Room_k__BackingField, put=__cordl_internal_set__Room_k__BackingField)) ::StringW  _Room_k__BackingField;

/// @brief Field <UserId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserId_k__BackingField, put=__cordl_internal_set__UserId_k__BackingField)) ::StringW  _UserId_k__BackingField;

static inline ::Fusion::Photon::Realtime::FriendInfo* New_ctor() ;

/// @brief Method ToString, addr 0x5f4ee68, size 0xbc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get__IsOnline_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOnline_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Room_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Room_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UserId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UserId_k__BackingField() ;

constexpr void __cordl_internal_set__IsOnline_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Room_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UserId_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f4ef24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsInRoom, addr 0x5f4ee40, size 0x28, virtual false, abstract: false, final false
inline bool get_IsInRoom() ;

/// [CompilerGenerated]
/// @brief Method get_IsOnline, addr 0x5f4ee20, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOnline() ;

/// @brief Method get_Name, addr 0x5f4ee08, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Room, addr 0x5f4ee30, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Room() ;

/// [CompilerGenerated]
/// @brief Method get_UserId, addr 0x5f4ee10, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// [CompilerGenerated]
/// @brief Method set_IsOnline, addr 0x5f4ee28, size 0x8, virtual false, abstract: false, final false
inline void set_IsOnline(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Room, addr 0x5f4ee38, size 0x8, virtual false, abstract: false, final false
inline void set_Room(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_UserId, addr 0x5f4ee18, size 0x8, virtual false, abstract: false, final false
inline void set_UserId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendInfo(FriendInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendInfo(FriendInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28043};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____UserId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsOnline>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsOnline_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Room>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Room_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::FriendInfo, ____UserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FriendInfo, ____IsOnline_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FriendInfo, ____Room_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::FriendInfo) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
