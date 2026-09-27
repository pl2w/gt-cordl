#pragma once
// IWYU pragma private; include "GorillaTag/MonkeFX/MonkeFXMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/MonkeFX/zzzz__MonkeFXSettingsSO_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MonkeFXMono)
// Forward declare root types
namespace GorillaTag::MonkeFX {
class MonkeFXMono;
}
// Write type traits
MARK_REF_T(::GorillaTag::MonkeFX::MonkeFXMono*);
DEFINE_IL2CPP_CLASS(::GorillaTag::MonkeFX::MonkeFXMono*, "GorillaTag.MonkeFX", "MonkeFXMono");
// Dependencies GorillaTag.MonkeFX.MonkeFXSettingsSO, UnityEngine.MonoBehaviour
namespace GorillaTag::MonkeFX {
// Is value type: false
// CS Name: GorillaTag.MonkeFX.MonkeFXMono
class CORDL_TYPE MonkeFXMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::ArrayW<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>  settings;

static inline ::GorillaTag::MonkeFX::MonkeFXMono* New_ctor() ;

constexpr ::ArrayW<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>> const& __cordl_internal_get_settings() const;

constexpr ::ArrayW<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_settings(::ArrayW<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>  value) ;

/// @brief Method .ctor, addr 0x5d43d9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeFXMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeFXMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeFXMono(MonkeFXMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeFXMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeFXMono(MonkeFXMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4713};

/// @brief Field settings, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFXMono, ___settings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::MonkeFX::MonkeFXMono) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::MonkeFX
