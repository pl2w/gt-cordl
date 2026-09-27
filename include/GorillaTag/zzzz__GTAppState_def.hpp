#pragma once
// IWYU pragma private; include "GorillaTag/GTAppState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GTAppState)
namespace GorillaTag {
class GTAppState___c;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GorillaTag {
class GTAppState;
}
namespace GorillaTag {
class GTAppState___c;
}
// Write type traits
MARK_REF_T(::GorillaTag::GTAppState*);
MARK_REF_T(::GorillaTag::GTAppState___c*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GTAppState*, "GorillaTag", "GTAppState");
DEFINE_IL2CPP_CLASS(::GorillaTag::GTAppState___c*, "GorillaTag", "GTAppState/<>c");
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.GTAppState
class CORDL_TYPE GTAppState : public ::System::Object {
public:
// Declarations
using __c = ::GorillaTag::GTAppState___c;

/// @brief Field <isQuitting>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isQuitting_k__BackingField, put=setStaticF__isQuitting_k__BackingField)) bool  _isQuitting_k__BackingField;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)0)]
/// @brief Method HandleOnAfterSceneLoad, addr 0x5d22e88, size 0x4, virtual false, abstract: false, final false
static inline void HandleOnAfterSceneLoad() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method HandleOnSubsystemRegistration, addr 0x5d22be4, size 0x2a4, virtual false, abstract: false, final false
static inline void HandleOnSubsystemRegistration() ;

static inline bool getStaticF__isQuitting_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_isQuitting, addr 0x5d22b4c, size 0x48, virtual false, abstract: false, final false
static inline bool get_isQuitting() ;

static inline void setStaticF__isQuitting_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isQuitting, addr 0x5d22b94, size 0x50, virtual false, abstract: false, final false
static inline void set_isQuitting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTAppState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTAppState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTAppState(GTAppState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTAppState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTAppState(GTAppState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GTAppState) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.GTAppState/<>c
class CORDL_TYPE GTAppState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTag::GTAppState___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Action*  __9__4_0;

static inline ::GorillaTag::GTAppState___c* New_ctor() ;

/// @brief Method <HandleOnSubsystemRegistration>b__4_0, addr 0x5d22efc, size 0x44, virtual false, abstract: false, final false
inline void _HandleOnSubsystemRegistration_b__4_0() ;

/// @brief Method .ctor, addr 0x5d22ef4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTag::GTAppState___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__4_0() ;

static inline void setStaticF___9(::GorillaTag::GTAppState___c*  value) ;

static inline void setStaticF___9__4_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTAppState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTAppState___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTAppState___c(GTAppState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTAppState___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTAppState___c(GTAppState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4603};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GTAppState___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
