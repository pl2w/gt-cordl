#pragma once
// IWYU pragma private; include "TagEffects/TagEffectsComboResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TagEffects/zzzz__TagEffectPack_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TagEffectsComboResult)
namespace TagEffects {
class TagEffectsCombo;
}
// Forward declare root types
namespace TagEffects {
class TagEffectsComboResult;
}
// Write type traits
MARK_REF_T(::TagEffects::TagEffectsComboResult*);
DEFINE_IL2CPP_CLASS(::TagEffects::TagEffectsComboResult*, "TagEffects", "TagEffectsComboResult");
// Dependencies System.Object, TagEffects.TagEffectPack
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.TagEffectsComboResult
class CORDL_TYPE TagEffectsComboResult : public ::System::Object {
public:
// Declarations
/// @brief Field input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_input, put=__cordl_internal_set_input)) ::TagEffects::TagEffectsCombo*  input;

/// @brief Field output, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::ArrayW<::UnityW<::TagEffects::TagEffectPack>>  output;

static inline ::TagEffects::TagEffectsComboResult* New_ctor() ;

constexpr ::TagEffects::TagEffectsCombo* const& __cordl_internal_get_input() const;

constexpr ::TagEffects::TagEffectsCombo*& __cordl_internal_get_input() ;

constexpr ::ArrayW<::UnityW<::TagEffects::TagEffectPack>> const& __cordl_internal_get_output() const;

constexpr ::ArrayW<::UnityW<::TagEffects::TagEffectPack>>& __cordl_internal_get_output() ;

constexpr void __cordl_internal_set_input(::TagEffects::TagEffectsCombo*  value) ;

constexpr void __cordl_internal_set_output(::ArrayW<::UnityW<::TagEffects::TagEffectPack>>  value) ;

/// @brief Method .ctor, addr 0x5cd9384, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagEffectsComboResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsComboResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagEffectsComboResult(TagEffectsComboResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsComboResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagEffectsComboResult(TagEffectsComboResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4491};

/// @brief Field input, offset: 0x10, size: 0x8, def value: None
 ::TagEffects::TagEffectsCombo*  ___input;

/// @brief Field output, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TagEffects::TagEffectPack>>  ___output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::TagEffectsComboResult, ___input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsComboResult, ___output) == 0x18, "Offset mismatch!");

static_assert(sizeof(::TagEffects::TagEffectsComboResult) == 0x20, "Size mismatch!");

} // namespace end def TagEffects
