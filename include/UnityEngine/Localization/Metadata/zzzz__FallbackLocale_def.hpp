#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/FallbackLocale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FallbackLocale)
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization {
class Locale;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class FallbackLocale;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::FallbackLocale*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::FallbackLocale*, "UnityEngine.Localization.Metadata", "FallbackLocale");
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)1)]
// Dependencies System.Object
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.FallbackLocale
class CORDL_TYPE FallbackLocale : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Locale, put=set_Locale)) ::UnityW<::UnityEngine::Localization::Locale>  Locale;

/// @brief Field m_Locale, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Locale, put=__cordl_internal_set_m_Locale)) ::UnityW<::UnityEngine::Localization::Locale>  m_Locale;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

/// @brief Method IsCyclic, addr 0xb04fdd0, size 0x17c, virtual false, abstract: false, final false
inline bool IsCyclic(::UnityEngine::Localization::Locale*  locale) ;

static inline ::UnityEngine::Localization::Metadata::FallbackLocale* New_ctor() ;

static inline ::UnityEngine::Localization::Metadata::FallbackLocale* New_ctor(::UnityEngine::Localization::Locale*  fallback) ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_Locale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_Locale() ;

constexpr void __cordl_internal_set_m_Locale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

/// @brief Method .ctor, addr 0xb04fd48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb04fd50, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::Locale*  fallback) ;

/// @brief Method get_Locale, addr 0xb04fdc8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> get_Locale() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// @brief Method set_Locale, addr 0xb04fd7c, size 0x4c, virtual false, abstract: false, final false
inline void set_Locale(::UnityEngine::Localization::Locale*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FallbackLocale() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FallbackLocale", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FallbackLocale(FallbackLocale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FallbackLocale", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FallbackLocale(FallbackLocale const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25332};

/// [SerializeField]
/// @brief Field m_Locale, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_Locale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::FallbackLocale, ___m_Locale) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::FallbackLocale) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
