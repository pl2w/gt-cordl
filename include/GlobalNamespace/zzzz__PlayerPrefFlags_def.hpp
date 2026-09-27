#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefFlags)
namespace GlobalNamespace {
struct PlayerPrefFlags_Flag;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerPrefFlags;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerPrefFlags*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPrefFlags*, "", "PlayerPrefFlags");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerPrefFlags
class CORDL_TYPE PlayerPrefFlags : public ::System::Object {
public:
// Declarations
using Flag = ::GlobalNamespace::PlayerPrefFlags_Flag;

/// @brief Field OnFlagChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnFlagChange, put=setStaticF_OnFlagChange)) ::System::Action_2<::GlobalNamespace::PlayerPrefFlags_Flag,bool>*  OnFlagChange;

/// @brief Method Check, addr 0x57127b0, size 0x58, virtual false, abstract: false, final false
static inline bool Check(::GlobalNamespace::PlayerPrefFlags_Flag  flag) ;

/// @brief Method Flip, addr 0x5712920, size 0xc4, virtual false, abstract: false, final false
static inline bool Flip(::GlobalNamespace::PlayerPrefFlags_Flag  flag) ;

static inline ::GlobalNamespace::PlayerPrefFlags* New_ctor() ;

/// @brief Method Set, addr 0x5712860, size 0xc0, virtual false, abstract: false, final false
static inline void Set(::GlobalNamespace::PlayerPrefFlags_Flag  flag, bool  value) ;

/// @brief Method Touch, addr 0x57129ec, size 0xa8, virtual false, abstract: false, final false
static inline void Touch(::GlobalNamespace::PlayerPrefFlags_Flag  flag) ;

/// @brief Method TouchIf, addr 0x5712a94, size 0xb8, virtual false, abstract: false, final false
static inline void TouchIf(::GlobalNamespace::PlayerPrefFlags_Flag  flag, bool  value) ;

/// @brief Method .ctor, addr 0x5712b4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::GlobalNamespace::PlayerPrefFlags_Flag,bool>* getStaticF_OnFlagChange() ;

static inline void setStaticF_OnFlagChange(::System::Action_2<::GlobalNamespace::PlayerPrefFlags_Flag,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefFlags", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefFlags(PlayerPrefFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefFlags", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefFlags(PlayerPrefFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1184};

/// @brief Field defaultValue offset 0xffffffff size 0x4
static constexpr int32_t  defaultValue{static_cast<int32_t>(0x5)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayerPrefFlags) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
