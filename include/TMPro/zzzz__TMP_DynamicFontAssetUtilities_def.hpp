#pragma once
// IWYU pragma private; include "TMPro/TMP_DynamicFontAssetUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_DynamicFontAssetUtilities)
namespace GlobalNamespace {
struct TMP_DynamicFontAssetUtilities_FontReference;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace TMPro {
class TMP_DynamicFontAssetUtilities;
}
// Write type traits
MARK_REF_T(::TMPro::TMP_DynamicFontAssetUtilities*);
DEFINE_IL2CPP_CLASS(::TMPro::TMP_DynamicFontAssetUtilities*, "TMPro", "TMP_DynamicFontAssetUtilities");
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_DynamicFontAssetUtilities
class CORDL_TYPE TMP_DynamicFontAssetUtilities : public ::System::Object {
public:
// Declarations
using FontReference = ::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::TMPro::TMP_DynamicFontAssetUtilities*  s_Instance;

/// @brief Field s_RegularStyleNameHashCode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_s_RegularStyleNameHashCode, put=__cordl_internal_set_s_RegularStyleNameHashCode)) uint32_t  s_RegularStyleNameHashCode;

/// @brief Field s_SystemFontLookup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_s_SystemFontLookup, put=__cordl_internal_set_s_SystemFontLookup)) ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>*  s_SystemFontLookup;

/// @brief Field s_SystemFontPaths, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_s_SystemFontPaths, put=__cordl_internal_set_s_SystemFontPaths)) ::ArrayW<::StringW>  s_SystemFontPaths;

/// @brief Method InitializeSystemFontReferenceCache, addr 0xb35950c, size 0x698, virtual false, abstract: false, final false
inline void InitializeSystemFontReferenceCache() ;

static inline ::TMPro::TMP_DynamicFontAssetUtilities* New_ctor() ;

/// @brief Method TryGetSystemFontReference, addr 0xb359e38, size 0x7c, virtual false, abstract: false, final false
static inline bool TryGetSystemFontReference(::StringW  familyName, ::by_ref<::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>  fontRef) ;

/// @brief Method TryGetSystemFontReference, addr 0xb35a170, size 0x80, virtual false, abstract: false, final false
static inline bool TryGetSystemFontReference(::StringW  familyName, ::StringW  styleName, ::by_ref<::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>  fontRef) ;

/// @brief Method TryGetSystemFontReferenceInternal, addr 0xb359eb4, size 0x2bc, virtual false, abstract: false, final false
inline bool TryGetSystemFontReferenceInternal(::StringW  familyName, ::StringW  styleName, ::by_ref<::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>  fontRef) ;

constexpr uint32_t const& __cordl_internal_get_s_RegularStyleNameHashCode() const;

constexpr uint32_t& __cordl_internal_get_s_RegularStyleNameHashCode() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>* const& __cordl_internal_get_s_SystemFontLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>*& __cordl_internal_get_s_SystemFontLookup() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_s_SystemFontPaths() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_s_SystemFontPaths() ;

constexpr void __cordl_internal_set_s_RegularStyleNameHashCode(uint32_t  value) ;

constexpr void __cordl_internal_set_s_SystemFontLookup(::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>*  value) ;

constexpr void __cordl_internal_set_s_SystemFontPaths(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xb35a1f0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::TMPro::TMP_DynamicFontAssetUtilities* getStaticF_s_Instance() ;

static inline void setStaticF_s_Instance(::TMPro::TMP_DynamicFontAssetUtilities*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMP_DynamicFontAssetUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMP_DynamicFontAssetUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_DynamicFontAssetUtilities(TMP_DynamicFontAssetUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_DynamicFontAssetUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_DynamicFontAssetUtilities(TMP_DynamicFontAssetUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22940};

/// @brief Field s_SystemFontLookup, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>*  ___s_SystemFontLookup;

/// @brief Field s_SystemFontPaths, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___s_SystemFontPaths;

/// @brief Field s_RegularStyleNameHashCode, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___s_RegularStyleNameHashCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities, ___s_SystemFontLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities, ___s_SystemFontPaths) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DynamicFontAssetUtilities, ___s_RegularStyleNameHashCode) == 0x20, "Offset mismatch!");

static_assert(sizeof(::TMPro::TMP_DynamicFontAssetUtilities) == 0x28, "Size mismatch!");

} // namespace end def TMPro
