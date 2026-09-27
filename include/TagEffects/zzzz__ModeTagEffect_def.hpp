#pragma once
// IWYU pragma private; include "TagEffects/ModeTagEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModeTagEffect)
namespace GorillaGameModes {
struct GameModeType;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace TagEffects {
class TagEffectPack;
}
// Forward declare root types
namespace TagEffects {
class ModeTagEffect;
}
// Write type traits
MARK_REF_T(::TagEffects::ModeTagEffect*);
DEFINE_IL2CPP_CLASS(::TagEffects::ModeTagEffect*, "TagEffects", "ModeTagEffect");
// Dependencies GorillaGameModes.GameModeType, System.Object
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.ModeTagEffect
class CORDL_TYPE ModeTagEffect : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Modes)) ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  Modes;

/// @brief Field blockFistBumpOverride, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockFistBumpOverride, put=__cordl_internal_set_blockFistBumpOverride)) bool  blockFistBumpOverride;

/// @brief Field blockHiveFiveOverride, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockHiveFiveOverride, put=__cordl_internal_set_blockHiveFiveOverride)) bool  blockHiveFiveOverride;

/// @brief Field blockTagOverride, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockTagOverride, put=__cordl_internal_set_blockTagOverride)) bool  blockTagOverride;

/// @brief Field modes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_modes, put=__cordl_internal_set_modes)) ::ArrayW<::GorillaGameModes::GameModeType>  modes;

/// @brief Field modesHash, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_modesHash, put=__cordl_internal_set_modesHash)) ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  modesHash;

/// @brief Field tagEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagEffect, put=__cordl_internal_set_tagEffect)) ::UnityW<::TagEffects::TagEffectPack>  tagEffect;

static inline ::TagEffects::ModeTagEffect* New_ctor() ;

constexpr bool const& __cordl_internal_get_blockFistBumpOverride() const;

constexpr bool& __cordl_internal_get_blockFistBumpOverride() ;

constexpr bool const& __cordl_internal_get_blockHiveFiveOverride() const;

constexpr bool& __cordl_internal_get_blockHiveFiveOverride() ;

constexpr bool const& __cordl_internal_get_blockTagOverride() const;

constexpr bool& __cordl_internal_get_blockTagOverride() ;

constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& __cordl_internal_get_modes() const;

constexpr ::ArrayW<::GorillaGameModes::GameModeType>& __cordl_internal_get_modes() ;

constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* const& __cordl_internal_get_modesHash() const;

constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*& __cordl_internal_get_modesHash() ;

constexpr ::UnityW<::TagEffects::TagEffectPack> const& __cordl_internal_get_tagEffect() const;

constexpr ::UnityW<::TagEffects::TagEffectPack>& __cordl_internal_get_tagEffect() ;

constexpr void __cordl_internal_set_blockFistBumpOverride(bool  value) ;

constexpr void __cordl_internal_set_blockHiveFiveOverride(bool  value) ;

constexpr void __cordl_internal_set_blockTagOverride(bool  value) ;

constexpr void __cordl_internal_set_modes(::ArrayW<::GorillaGameModes::GameModeType>  value) ;

constexpr void __cordl_internal_set_modesHash(::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  value) ;

constexpr void __cordl_internal_set_tagEffect(::UnityW<::TagEffects::TagEffectPack>  value) ;

/// @brief Method .ctor, addr 0x5cd938c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Modes, addr 0x5cd861c, size 0x98, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* get_Modes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModeTagEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModeTagEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModeTagEffect(ModeTagEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModeTagEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModeTagEffect(ModeTagEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4492};

/// [SerializeField]
/// @brief Field modes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeType>  ___modes;

/// @brief Field modesHash, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  ___modesHash;

/// @brief Field tagEffect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TagEffects::TagEffectPack>  ___tagEffect;

/// @brief Field blockTagOverride, offset: 0x28, size: 0x1, def value: None
 bool  ___blockTagOverride;

/// @brief Field blockFistBumpOverride, offset: 0x29, size: 0x1, def value: None
 bool  ___blockFistBumpOverride;

/// @brief Field blockHiveFiveOverride, offset: 0x2a, size: 0x1, def value: None
 bool  ___blockHiveFiveOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::ModeTagEffect, ___modes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TagEffects::ModeTagEffect, ___modesHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TagEffects::ModeTagEffect, ___tagEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TagEffects::ModeTagEffect, ___blockTagOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TagEffects::ModeTagEffect, ___blockFistBumpOverride) == 0x29, "Offset mismatch!");

static_assert(offsetof(::TagEffects::ModeTagEffect, ___blockHiveFiveOverride) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::TagEffects::ModeTagEffect) == 0x30, "Size mismatch!");

} // namespace end def TagEffects
