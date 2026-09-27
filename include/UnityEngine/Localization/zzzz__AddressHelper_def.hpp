#pragma once
// IWYU pragma private; include "UnityEngine/Localization/AddressHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddressHelper)
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
// Forward declare root types
namespace UnityEngine::Localization {
class AddressHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::AddressHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::AddressHelper*, "UnityEngine.Localization", "AddressHelper");
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.AddressHelper
class CORDL_TYPE AddressHelper : public ::System::Object {
public:
// Declarations
/// @brief Method FormatAssetLabel, addr 0xb01554c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW FormatAssetLabel(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

/// @brief Method GetSharedTableAddress, addr 0xb015500, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW GetSharedTableAddress(::StringW  tableName) ;

/// @brief Method GetTableAddress, addr 0xb00cf44, size 0x84, virtual false, abstract: false, final false
static inline ::StringW GetTableAddress(::StringW  tableName, ::UnityEngine::Localization::LocaleIdentifier  localeId) ;

/// @brief Method IsLocaleLabel, addr 0xb015598, size 0x58, virtual false, abstract: false, final false
static inline bool IsLocaleLabel(::StringW  label) ;

/// @brief Method LocaleLabelToId, addr 0xb0155f0, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::LocaleIdentifier LocaleLabelToId(::StringW  label) ;

static inline ::UnityEngine::Localization::AddressHelper* New_ctor() ;

/// @brief Method TryGetLocaleLabelToId, addr 0xb0155fc, size 0x9c, virtual false, abstract: false, final false
static inline bool TryGetLocaleLabelToId(::StringW  label, ::by_ref<::UnityEngine::Localization::LocaleIdentifier>  localeId) ;

/// @brief Method .ctor, addr 0xb015698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddressHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddressHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddressHelper(AddressHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddressHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddressHelper(AddressHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25063};

/// @brief Field k_AssetLabelPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AssetLabelPrefix{u"Locale-"};

/// @brief Field k_Separator offset 0xffffffff size 0x2
static constexpr char16_t  k_Separator{u'_'};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::AddressHelper) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
