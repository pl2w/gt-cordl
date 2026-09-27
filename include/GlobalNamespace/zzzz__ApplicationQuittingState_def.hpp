#pragma once
// IWYU pragma private; include "GlobalNamespace/ApplicationQuittingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ApplicationQuittingState)
// Forward declare root types
namespace GlobalNamespace {
class ApplicationQuittingState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ApplicationQuittingState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ApplicationQuittingState*, "", "ApplicationQuittingState");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ApplicationQuittingState
class CORDL_TYPE ApplicationQuittingState : public ::System::Object {
public:
// Declarations
/// @brief Field <IsQuitting>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsQuitting_k__BackingField, put=setStaticF__IsQuitting_k__BackingField)) bool  _IsQuitting_k__BackingField;

/// @brief Method HandleApplicationQuitting, addr 0x56458c4, size 0x44, virtual false, abstract: false, final false
static inline void HandleApplicationQuitting() ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Init, addr 0x5645824, size 0xa0, virtual false, abstract: false, final false
static inline void Init() ;

static inline bool getStaticF__IsQuitting_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_IsQuitting, addr 0x564578c, size 0x48, virtual false, abstract: false, final false
static inline bool get_IsQuitting() ;

static inline void setStaticF__IsQuitting_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsQuitting, addr 0x56457d4, size 0x50, virtual false, abstract: false, final false
static inline void set_IsQuitting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplicationQuittingState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplicationQuittingState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplicationQuittingState(ApplicationQuittingState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationQuittingState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplicationQuittingState(ApplicationQuittingState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{676};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ApplicationQuittingState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
