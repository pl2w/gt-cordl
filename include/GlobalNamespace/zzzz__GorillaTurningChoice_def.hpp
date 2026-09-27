#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTurningChoice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaTurningChoice)
namespace GlobalNamespace {
class GorillaTurning;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTurningChoice;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTurningChoice*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTurningChoice*, "", "GorillaTurningChoice");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTurningChoice
class CORDL_TYPE GorillaTurningChoice : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field choiceName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_choiceName, put=__cordl_internal_set_choiceName)) ::StringW  choiceName;

/// @brief Field parent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::GlobalNamespace::GorillaTurning>  parent;

static inline ::GlobalNamespace::GorillaTurningChoice* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x59470d4, size 0x8, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::StringW const& __cordl_internal_get_choiceName() const;

constexpr ::StringW& __cordl_internal_get_choiceName() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTurning> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTurning>& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_choiceName(::StringW  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::GlobalNamespace::GorillaTurning>  value) ;

/// @brief Method .ctor, addr 0x59470dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTurningChoice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTurningChoice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTurningChoice(GorillaTurningChoice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTurningChoice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTurningChoice(GorillaTurningChoice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2275};

/// @brief Field choiceName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___choiceName;

/// @brief Field parent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTurning>  ___parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTurningChoice, ___choiceName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurningChoice, ___parent) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTurningChoice) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
