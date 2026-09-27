#pragma once
// IWYU pragma private; include "Fusion/FusionAddressablesUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionAddressablesUtils)
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Forward declare root types
namespace Fusion {
class FusionAddressablesUtils;
}
// Write type traits
MARK_REF_T(::Fusion::FusionAddressablesUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionAddressablesUtils*, "Fusion", "FusionAddressablesUtils");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionAddressablesUtils
class CORDL_TYPE FusionAddressablesUtils : public ::System::Object {
public:
// Declarations
/// @brief Method CreateAssetReference, addr 0x60e3704, size 0x12c, virtual false, abstract: false, final false
static inline ::UnityEngine::AddressableAssets::AssetReference* CreateAssetReference(::StringW  address) ;

/// @brief Method TryParseAddress, addr 0x60e35e8, size 0x11c, virtual false, abstract: false, final false
static inline bool TryParseAddress(::StringW  address, ::by_ref<::StringW>  mainPart, ::by_ref<::StringW>  subObjectName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionAddressablesUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionAddressablesUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionAddressablesUtils(FusionAddressablesUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionAddressablesUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionAddressablesUtils(FusionAddressablesUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23434};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionAddressablesUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
