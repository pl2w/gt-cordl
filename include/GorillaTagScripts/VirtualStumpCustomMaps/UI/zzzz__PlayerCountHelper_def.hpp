#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/PlayerCountHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerCountHelper)
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper___c;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper___c__DisplayClass2_0;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper___c__DisplayClass3_0;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper___c__DisplayClass4_0;
}
namespace Modio::Mods {
class Mod;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper___c;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper___c__DisplayClass2_0;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper___c__DisplayClass3_0;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class PlayerCountHelper___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "PlayerCountHelper");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "PlayerCountHelper/<>c");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0*, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "PlayerCountHelper/<>c__DisplayClass2_0");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0*, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "PlayerCountHelper/<>c__DisplayClass3_0");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0*, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "PlayerCountHelper/<>c__DisplayClass4_0");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.PlayerCountHelper
class CORDL_TYPE PlayerCountHelper : public ::System::Object {
public:
// Declarations
using __c = ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c;

using __c__DisplayClass2_0 = ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0;

using __c__DisplayClass3_0 = ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0;

using __c__DisplayClass4_0 = ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0;

/// @brief Method DefaultErrorCallback, addr 0x5bf26fc, size 0x8c, virtual false, abstract: false, final false
static inline void DefaultErrorCallback(::PlayFab::PlayFabError*  error) ;

/// @brief Method FormatPlayerCount, addr 0x5bf2540, size 0x1bc, virtual false, abstract: false, final false
static inline ::StringW FormatPlayerCount(uint64_t  count) ;

/// @brief Method GetPlayerCount, addr 0x5bf163c, size 0xfc, virtual false, abstract: false, final false
static inline void GetPlayerCount(::Modio::Mods::Mod*  mod, ::System::Action_1<::StringW>*  successCallback, /* [Nullable(new[] { 2, 1 })] */ ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method GetPlayerCountBatched, addr 0x5bf199c, size 0x31c, virtual false, abstract: false, final false
static inline void GetPlayerCountBatched(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks, /* [Nullable(new[] { 2, 1 })] */ ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method GetPlayerCountInternal, addr 0x5bf1740, size 0x25c, virtual false, abstract: false, final false
static inline void GetPlayerCountInternal(::StringW  modId, ::System::Action_1<uint64_t>*  successCallback, /* [Nullable(new[] { 2, 1 })] */ ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method UnpackSuccess, addr 0x5bf1cc8, size 0x150, virtual false, abstract: false, final false
static inline void UnpackSuccess(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result, ::StringW  modId, ::System::Action_1<uint64_t>*  callback) ;

/// @brief Method UnpackSuccessBatched, addr 0x5bf1e18, size 0x728, virtual false, abstract: false, final false
static inline void UnpackSuccessBatched(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result, ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCountHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCountHelper(PlayerCountHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCountHelper(PlayerCountHelper const& ) = delete;

/// @brief Field MapsJsonKey offset 0xffffffff size 0x8
static constexpr ::ConstString  MapsJsonKey{u"Maps"};

/// @brief Field PlayerCountJsonKey offset 0xffffffff size 0x8
static constexpr ::ConstString  PlayerCountJsonKey{u"PlayerCount"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4074};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.PlayerCountHelper/<>c__DisplayClass4_0
class CORDL_TYPE PlayerCountHelper___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field modId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_modId, put=__cordl_internal_set_modId)) ::StringW  modId;

/// @brief Field successCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<uint64_t>*  successCallback;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <GetPlayerCountInternal>b__0, addr 0x5bf2860, size 0x10, virtual false, abstract: false, final false
inline void _GetPlayerCountInternal_b__0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  executeFunctionResult) ;

constexpr ::StringW const& __cordl_internal_get_modId() const;

constexpr ::StringW& __cordl_internal_get_modId() ;

constexpr ::System::Action_1<uint64_t>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<uint64_t>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set_modId(::StringW  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<uint64_t>*  value) ;

/// @brief Method .ctor, addr 0x5bf1cc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCountHelper___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCountHelper___c__DisplayClass4_0(PlayerCountHelper___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCountHelper___c__DisplayClass4_0(PlayerCountHelper___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4073};

/// [Nullable(0)]
/// @brief Field modId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___modId;

/// [Nullable(0)]
/// @brief Field successCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<uint64_t>*  ___successCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0, ___modId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0, ___successCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.PlayerCountHelper/<>c__DisplayClass3_0
class CORDL_TYPE PlayerCountHelper___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field modsAndCallbacks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_modsAndCallbacks, put=__cordl_internal_set_modsAndCallbacks)) ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <GetPlayerCountBatched>b__0, addr 0x5bf2850, size 0x10, virtual false, abstract: false, final false
inline void _GetPlayerCountBatched_b__0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  executeFunctionResult) ;

constexpr ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>* const& __cordl_internal_get_modsAndCallbacks() const;

constexpr ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*& __cordl_internal_get_modsAndCallbacks() ;

constexpr void __cordl_internal_set_modsAndCallbacks(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  value) ;

/// @brief Method .ctor, addr 0x5bf1cb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCountHelper___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCountHelper___c__DisplayClass3_0(PlayerCountHelper___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCountHelper___c__DisplayClass3_0(PlayerCountHelper___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4072};

/// [Nullable(new[] { 0, 1, 1, 1 })]
/// @brief Field modsAndCallbacks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  ___modsAndCallbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0, ___modsAndCallbacks) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.PlayerCountHelper/<>c__DisplayClass2_0
class CORDL_TYPE PlayerCountHelper___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field successCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::StringW>*  successCallback;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <GetPlayerCount>b__0, addr 0x5bf2820, size 0x30, virtual false, abstract: false, final false
inline void _GetPlayerCount_b__0(uint64_t  count) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5bf1738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCountHelper___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCountHelper___c__DisplayClass2_0(PlayerCountHelper___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCountHelper___c__DisplayClass2_0(PlayerCountHelper___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4071};

/// [Nullable(new[] { 0, 1 })]
/// @brief Field successCallback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___successCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0, ___successCallback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.PlayerCountHelper/<>c
class CORDL_TYPE PlayerCountHelper___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*  __9;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Func_2<::Modio::Mods::Mod*,::StringW>*  __9__3_1;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <GetPlayerCountBatched>b__3_1, addr 0x5bf27f8, size 0x28, virtual false, abstract: false, final false
inline ::StringW _GetPlayerCountBatched_b__3_1(::Modio::Mods::Mod*  mod) ;

/// @brief Method .ctor, addr 0x5bf27f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,::StringW>* getStaticF___9__3_1() ;

static inline void setStaticF___9(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*  value) ;

static inline void setStaticF___9__3_1(::System::Func_2<::Modio::Mods::Mod*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCountHelper___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCountHelper___c(PlayerCountHelper___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountHelper___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCountHelper___c(PlayerCountHelper___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4070};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI
